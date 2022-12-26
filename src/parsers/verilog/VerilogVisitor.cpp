#include "VerilogVisitor.h"

#include <string>

using namespace std;
using namespace slang::syntax;

// Get name of module and create a design for it
void VerilogVisitor::handle(const ModuleHeaderSyntax &syntax)
{
    design = make_shared<BLDesign>();
    design->set_name(syntax.name.toString());
    library->add_design(design);

    visitDefault(syntax);
}

void VerilogVisitor::handle(const ImplicitAnsiPortSyntax &syntax)
{
    port = make_shared<BLPort>();
    design->add_port(port);
    port->set_name(string(syntax.declarator->name.valueText()));

    visitDefault(syntax);
}

void VerilogVisitor::handle(const VariablePortHeaderSyntax &syntax)
{
    port->set_direction(string(syntax.direction.valueText()));

    visitDefault(syntax);
}
