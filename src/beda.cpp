using namespace std;

#include "database/bl_library.h"
#include <argparse/argparse.hpp>
#include <iostream>
#include <memory>

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
            stream.close();
        }
    }
}