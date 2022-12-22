#pragma once

#include "../../database/bl_library.h"
#include "antlr4-runtime.h"
#include "generated/VerilogParserBaseVisitor.h"
#include <string>

class VerilogVisitor : VerilogParserBaseVisitor
{
    shared_ptr<BLLibrary> library;

public:
    shared_ptr<BLLibrary> get_library();
    std::any visitSource_text(VerilogParser::Source_textContext *ctx);
    std::any visitModule_declaration(VerilogParser::Module_declarationContext *ctx);
};
