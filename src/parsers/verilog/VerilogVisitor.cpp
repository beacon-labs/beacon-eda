#include "VerilogVisitor.h"
#include "../../database/bl_design.h"
#include <string>

using namespace std;

shared_ptr<BLLibrary> VerilogVisitor::get_library()
{
    return library;
}

std::any VerilogVisitor::visitSource_text(VerilogParser::Source_textContext *ctx)
{
    library = make_shared<BLLibrary>();
    return visitChildren(ctx);
}

std::any VerilogVisitor::visitModule_declaration(VerilogParser::Module_declarationContext *ctx)
{
    shared_ptr<BLDesign> design = make_shared<BLDesign>();
    string name = ctx->module_identifier()->getText();
    design->set_name(name);
    library->add_design(design);

    return visitChildren(ctx);
};

std::any VerilogVisitor::visitPort_declaration(VerilogParser::Port_declarationContext *ctx)
{
    std::string text = ctx->getText();
    // cout << text << endl;
    return visitChildren(ctx);
}