
#include "database/bl_design.h"
#include "database/bl_library.h"
#include "database/bl_observer.h"
// #include "parsers/verilog/JohnsTestVisitor.h"
#include "parsers/systemverilog/VerilogVisitor.h"
#include "slang/syntax/SyntaxNode.h"
#include "slang/syntax/SyntaxTree.h"
#include "slang/text/SourceManager.h"
#include <argparse/argparse.hpp>
#include <filesystem>
#include <future>
#include <iostream>
#include <memory>
#include <thread>

class DesignObserver : public IBLObserver<shared_ptr<BLDesign>>
{
public:
    void update(shared_ptr<BLDesign> design) override
    {
        cout << "New Design: " << design->get_name() << endl;
    }
};

int main(int argc, char *argv[])
{
    argparse::ArgumentParser verilog_command("verilog");
    verilog_command.add_description("Parse verilog files");
    verilog_command.add_argument("-f", "--files")
        .help("Verilog files to parse")
        .nargs(argparse::nargs_pattern::at_least_one);

    argparse::ArgumentParser program("beda", "0.0.1");
    program.add_subparser(verilog_command);

    try
    {
        program.parse_args(argc, argv);
    }
    catch (const runtime_error &err)
    {
        std::cerr << err.what() << std::endl;
        std::cerr << program;
        exit(1);
    }

    if (program.is_subcommand_used("verilog"))
    {
        shared_ptr<BLLibrary> library = make_shared<BLLibrary>();
        library->set_name("rtl_parser_test");
        shared_ptr<DesignObserver> obs = make_shared<DesignObserver>();
        library->observe_designs(obs);
        for (std::string file : verilog_command.get<std::list<std::string>>("--files"))
        {
            auto tree = slang::syntax::SyntaxTree::fromFile(file);

            // JohnsTestVisitor visitor;
            library->add_filename(file);
            VerilogVisitor visitor;
            visitor.library = library;
            tree->root().visit(visitor);
        }
        library->pp();
    }
}
