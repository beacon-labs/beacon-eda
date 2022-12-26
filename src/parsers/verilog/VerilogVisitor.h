#include "../../database/database.h"
#include "slang/syntax/SyntaxVisitor.h"
#include <list>

class VerilogVisitor : public slang::syntax::SyntaxVisitor<VerilogVisitor>
{
public:
    std::shared_ptr<BLLibrary> library;

    void handle(const slang::syntax::ModuleHeaderSyntax &syntax);
    void handle(const slang::syntax::ImplicitAnsiPortSyntax &syntax);
    void handle(const slang::syntax::VariablePortHeaderSyntax &syntax);

private:
    std::shared_ptr<BLDesign> design;
    std::shared_ptr<BLPort> port;
};
