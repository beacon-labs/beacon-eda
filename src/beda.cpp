
#include "antlr4-runtime.h"
#include "database/bl_design.h"
#include "database/bl_library.h"
#include "parsers/verilog/VerilogVisitor.h"
#include "parsers/verilog/generated/VerilogLexer.h"
#include <argparse/argparse.hpp>
#include <iostream>
#include <memory>

using namespace std;
using namespace antlr4;

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
    catch (const std::runtime_error &err)
    {
        std::cerr << err.what() << std::endl;
        std::cerr << program;
        std::exit(1);
    }

    if (program.is_subcommand_used("verilog"))
    {
        for (auto file : verilog_command.get<list<string>>("--files"))
        {
            cout << "Parsing: " << file << endl;
            std::ifstream stream;
            stream.open(file);

            ANTLRInputStream input(stream);
            VerilogLexer lexer(&input);
            CommonTokenStream tokens(&lexer);
            VerilogParser parser(&tokens);
            VerilogParser::Source_textContext *tree = parser.source_text();
            VerilogVisitor visitor;
            visitor.visitSource_text(tree);
            shared_ptr<BLLibrary> library = visitor.get_library();

            for (shared_ptr<BLDesign> design : library->get_designs())
            {
                cout << design->get_name() << endl;
            }
        }
    }
}