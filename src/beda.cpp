
#include "antlr4-runtime.h"
#include "database/bl_design.h"
#include "database/bl_library.h"
#include "parsers/verilog/VerilogVisitor.h"
#include "parsers/verilog/generated/VerilogLexer.h"
#include <argparse/argparse.hpp>
#include <future>
#include <iostream>
#include <memory>
#include <thread>

using namespace std;
using namespace antlr4;

shared_ptr<BLLibrary> read_verilog(string file)
{
    ifstream stream;
    stream.open(file);

    ANTLRInputStream input(stream);
    VerilogLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    VerilogParser parser(&tokens);
    VerilogParser::Source_textContext *tree = parser.source_text();
    VerilogVisitor visitor;
    visitor.visitSource_text(tree);
    shared_ptr<BLLibrary> library = visitor.get_library();
    library->add_filename(file);
    return library;
}

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
        cerr << err.what() << endl;
        cerr << program;
        exit(1);
    }

    if (program.is_subcommand_used("verilog"))
    {
        // Run read_verilog for each file in the future
        list<future<shared_ptr<BLLibrary>>> futures;
        for (string file : verilog_command.get<list<string>>("--files"))
        {
            futures.push_back(async(&read_verilog, file));
        }

        // Bring back libraries from the future
        list<shared_ptr<BLLibrary>> libraries;
        for (auto &future : futures)
        {
            libraries.push_back(future.get());
        }

        // Report library and design names
        for (auto library : libraries)
        {
            cout << "Verilog File(s): '";
            for (string filename : library->get_filenames())
            {
                cout << filename << " ";
            }
            cout << "'" << endl;
            for (shared_ptr<BLDesign> design : library->get_designs())
            {
                cout << design->get_name() << endl;
            }
        }
    }
}
