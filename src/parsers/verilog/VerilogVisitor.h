#include "../../database/database.h"
#include "slang/syntax/SyntaxVisitor.h"
#include <list>

enum STATE
{
    NONE,
    NEXT_PORT_RANGE_FROM,
    NEXT_PORT_RANGE_TO
};

class VerilogVisitor : public slang::syntax::SyntaxVisitor<VerilogVisitor>
{
public:
    std::shared_ptr<BLLibrary> library;

    void handle(const slang::syntax::ModuleHeaderSyntax &syntax);
    void handle(const slang::syntax::ImplicitAnsiPortSyntax &syntax);
    void handle(const slang::syntax::VariablePortHeaderSyntax &syntax);
    void handle(const slang::syntax::RangeSelectSyntax &syntax);
    void handle(const slang::syntax::LiteralExpressionSyntax &syntax);

private:
    std::shared_ptr<BLDesign> design;
    std::shared_ptr<BLPort> port;
    STATE state = NONE;
};
