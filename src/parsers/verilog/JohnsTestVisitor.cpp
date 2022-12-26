
#include "JohnsTestVisitor.h"

#include <iostream>

void JohnsTestVisitor::handle(const slang::syntax::ExpressionSyntax &syntax)
{
    std::cout << "start:ExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DataTypeSyntax &syntax)
{
    std::cout << "start:DataTypeSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DataTypeSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::TimingControlSyntax &syntax)
{
    std::cout << "start:TimingControlSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:TimingControlSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::SequenceExprSyntax &syntax)
{
    std::cout << "start:SequenceExprSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:SequenceExprSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::PropertyExprSyntax &syntax)
{
    std::cout << "start:PropertyExprSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:PropertyExprSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::EqualsValueClauseSyntax &syntax)
{
    std::cout << "start:EqualsValueClauseSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:EqualsValueClauseSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::AttributeSpecSyntax &syntax)
{
    std::cout << "start:AttributeSpecSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:AttributeSpecSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::AttributeInstanceSyntax &syntax)
{
    std::cout << "start:AttributeInstanceSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:AttributeInstanceSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::NamedLabelSyntax &syntax)
{
    std::cout << "start:NamedLabelSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:NamedLabelSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::StatementSyntax &syntax)
{
    std::cout << "start:StatementSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:StatementSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::MemberSyntax &syntax)
{
    std::cout << "start:MemberSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:MemberSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ArgumentSyntax &syntax)
{
    std::cout << "start:ArgumentSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ArgumentSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::EmptyArgumentSyntax &syntax)
{
    std::cout << "start:EmptyArgumentSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:EmptyArgumentSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::OrderedArgumentSyntax &syntax)
{
    std::cout << "start:OrderedArgumentSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:OrderedArgumentSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::NamedArgumentSyntax &syntax)
{
    std::cout << "start:NamedArgumentSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:NamedArgumentSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ArgumentListSyntax &syntax)
{
    std::cout << "start:ArgumentListSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ArgumentListSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ParamAssignmentSyntax &syntax)
{
    std::cout << "start:ParamAssignmentSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ParamAssignmentSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::OrderedParamAssignmentSyntax &syntax)
{
    std::cout << "start:OrderedParamAssignmentSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:OrderedParamAssignmentSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::NamedParamAssignmentSyntax &syntax)
{
    std::cout << "start:NamedParamAssignmentSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:NamedParamAssignmentSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ParameterValueAssignmentSyntax &syntax)
{
    std::cout << "start:ParameterValueAssignmentSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ParameterValueAssignmentSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::PatternSyntax &syntax)
{
    std::cout << "start:PatternSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:PatternSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ParenthesizedPatternSyntax &syntax)
{
    std::cout << "start:ParenthesizedPatternSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ParenthesizedPatternSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::VariablePatternSyntax &syntax)
{
    std::cout << "start:VariablePatternSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:VariablePatternSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::WildcardPatternSyntax &syntax)
{
    std::cout << "start:WildcardPatternSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:WildcardPatternSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ExpressionPatternSyntax &syntax)
{
    std::cout << "start:ExpressionPatternSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ExpressionPatternSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::TaggedPatternSyntax &syntax)
{
    std::cout << "start:TaggedPatternSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:TaggedPatternSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::StructurePatternMemberSyntax &syntax)
{
    std::cout << "start:StructurePatternMemberSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:StructurePatternMemberSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::OrderedStructurePatternMemberSyntax &syntax)
{
    std::cout << "start:OrderedStructurePatternMemberSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:OrderedStructurePatternMemberSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::NamedStructurePatternMemberSyntax &syntax)
{
    std::cout << "start:NamedStructurePatternMemberSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:NamedStructurePatternMemberSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::StructurePatternSyntax &syntax)
{
    std::cout << "start:StructurePatternSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:StructurePatternSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::MatchesClauseSyntax &syntax)
{
    std::cout << "start:MatchesClauseSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:MatchesClauseSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ConditionalPatternSyntax &syntax)
{
    std::cout << "start:ConditionalPatternSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ConditionalPatternSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ConditionalPredicateSyntax &syntax)
{
    std::cout << "start:ConditionalPredicateSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ConditionalPredicateSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::AssignmentPatternSyntax &syntax)
{
    std::cout << "start:AssignmentPatternSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:AssignmentPatternSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::SimpleAssignmentPatternSyntax &syntax)
{
    std::cout << "start:SimpleAssignmentPatternSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:SimpleAssignmentPatternSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::AssignmentPatternItemSyntax &syntax)
{
    std::cout << "start:AssignmentPatternItemSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:AssignmentPatternItemSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::StructuredAssignmentPatternSyntax &syntax)
{
    std::cout << "start:StructuredAssignmentPatternSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:StructuredAssignmentPatternSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ReplicatedAssignmentPatternSyntax &syntax)
{
    std::cout << "start:ReplicatedAssignmentPatternSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ReplicatedAssignmentPatternSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::BadExpressionSyntax &syntax)
{
    std::cout << "start:BadExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:BadExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::PrimaryExpressionSyntax &syntax)
{
    std::cout << "start:PrimaryExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:PrimaryExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::PrefixUnaryExpressionSyntax &syntax)
{
    std::cout << "start:PrefixUnaryExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:PrefixUnaryExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::PostfixUnaryExpressionSyntax &syntax)
{
    std::cout << "start:PostfixUnaryExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:PostfixUnaryExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::BinaryExpressionSyntax &syntax)
{
    std::cout << "start:BinaryExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:BinaryExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::MinTypMaxExpressionSyntax &syntax)
{
    std::cout << "start:MinTypMaxExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:MinTypMaxExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::TaggedUnionExpressionSyntax &syntax)
{
    std::cout << "start:TaggedUnionExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:TaggedUnionExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::OpenRangeExpressionSyntax &syntax)
{
    std::cout << "start:OpenRangeExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:OpenRangeExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::OpenRangeListSyntax &syntax)
{
    std::cout << "start:OpenRangeListSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:OpenRangeListSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::InsideExpressionSyntax &syntax)
{
    std::cout << "start:InsideExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:InsideExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ConditionalExpressionSyntax &syntax)
{
    std::cout << "start:ConditionalExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ConditionalExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::AssignmentPatternExpressionSyntax &syntax)
{
    std::cout << "start:AssignmentPatternExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:AssignmentPatternExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::SelectorSyntax &syntax)
{
    std::cout << "start:SelectorSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:SelectorSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::BitSelectSyntax &syntax)
{
    std::cout << "start:BitSelectSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:BitSelectSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::RangeSelectSyntax &syntax)
{
    std::cout << "start:RangeSelectSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:RangeSelectSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ElementSelectSyntax &syntax)
{
    std::cout << "start:ElementSelectSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ElementSelectSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::NameSyntax &syntax)
{
    std::cout << "start:NameSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:NameSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::IdentifierNameSyntax &syntax)
{
    std::cout << "start:IdentifierNameSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:IdentifierNameSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::SystemNameSyntax &syntax)
{
    std::cout << "start:SystemNameSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:SystemNameSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::IdentifierSelectNameSyntax &syntax)
{
    std::cout << "start:IdentifierSelectNameSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:IdentifierSelectNameSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::EmptyIdentifierNameSyntax &syntax)
{
    std::cout << "start:EmptyIdentifierNameSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:EmptyIdentifierNameSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::KeywordNameSyntax &syntax)
{
    std::cout << "start:KeywordNameSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:KeywordNameSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ClassNameSyntax &syntax)
{
    std::cout << "start:ClassNameSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ClassNameSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ScopedNameSyntax &syntax)
{
    std::cout << "start:ScopedNameSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ScopedNameSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::LiteralExpressionSyntax &syntax)
{
    std::cout << "start:LiteralExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:LiteralExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::IntegerVectorExpressionSyntax &syntax)
{
    std::cout << "start:IntegerVectorExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:IntegerVectorExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::EmptyQueueExpressionSyntax &syntax)
{
    std::cout << "start:EmptyQueueExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:EmptyQueueExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ConcatenationExpressionSyntax &syntax)
{
    std::cout << "start:ConcatenationExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ConcatenationExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::MultipleConcatenationExpressionSyntax &syntax)
{
    std::cout << "start:MultipleConcatenationExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:MultipleConcatenationExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::StreamExpressionWithRangeSyntax &syntax)
{
    std::cout << "start:StreamExpressionWithRangeSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:StreamExpressionWithRangeSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::StreamExpressionSyntax &syntax)
{
    std::cout << "start:StreamExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:StreamExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::StreamingConcatenationExpressionSyntax &syntax)
{
    std::cout << "start:StreamingConcatenationExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:StreamingConcatenationExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ParenthesizedExpressionSyntax &syntax)
{
    std::cout << "start:ParenthesizedExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ParenthesizedExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::NewArrayExpressionSyntax &syntax)
{
    std::cout << "start:NewArrayExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:NewArrayExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::NewClassExpressionSyntax &syntax)
{
    std::cout << "start:NewClassExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:NewClassExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::CopyClassExpressionSyntax &syntax)
{
    std::cout << "start:CopyClassExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:CopyClassExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ElementSelectExpressionSyntax &syntax)
{
    std::cout << "start:ElementSelectExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ElementSelectExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::MemberAccessExpressionSyntax &syntax)
{
    std::cout << "start:MemberAccessExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:MemberAccessExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::InvocationExpressionSyntax &syntax)
{
    std::cout << "start:InvocationExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:InvocationExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::CastExpressionSyntax &syntax)
{
    std::cout << "start:CastExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:CastExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::SignedCastExpressionSyntax &syntax)
{
    std::cout << "start:SignedCastExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:SignedCastExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DelaySyntax &syntax)
{
    std::cout << "start:DelaySyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DelaySyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::Delay3Syntax &syntax)
{
    std::cout << "start:Delay3Syntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:Delay3Syntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::OneStepDelaySyntax &syntax)
{
    std::cout << "start:OneStepDelaySyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:OneStepDelaySyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::EventControlSyntax &syntax)
{
    std::cout << "start:EventControlSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:EventControlSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::IffEventClauseSyntax &syntax)
{
    std::cout << "start:IffEventClauseSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:IffEventClauseSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::EventExpressionSyntax &syntax)
{
    std::cout << "start:EventExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:EventExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::SignalEventExpressionSyntax &syntax)
{
    std::cout << "start:SignalEventExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:SignalEventExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::BinaryEventExpressionSyntax &syntax)
{
    std::cout << "start:BinaryEventExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:BinaryEventExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ParenthesizedEventExpressionSyntax &syntax)
{
    std::cout << "start:ParenthesizedEventExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ParenthesizedEventExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ImplicitEventControlSyntax &syntax)
{
    std::cout << "start:ImplicitEventControlSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ImplicitEventControlSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::EventControlWithExpressionSyntax &syntax)
{
    std::cout << "start:EventControlWithExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:EventControlWithExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::RepeatedEventControlSyntax &syntax)
{
    std::cout << "start:RepeatedEventControlSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:RepeatedEventControlSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::TimingControlExpressionSyntax &syntax)
{
    std::cout << "start:TimingControlExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:TimingControlExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DimensionSpecifierSyntax &syntax)
{
    std::cout << "start:DimensionSpecifierSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DimensionSpecifierSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::RangeDimensionSpecifierSyntax &syntax)
{
    std::cout << "start:RangeDimensionSpecifierSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:RangeDimensionSpecifierSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::WildcardDimensionSpecifierSyntax &syntax)
{
    std::cout << "start:WildcardDimensionSpecifierSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:WildcardDimensionSpecifierSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ColonExpressionClauseSyntax &syntax)
{
    std::cout << "start:ColonExpressionClauseSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ColonExpressionClauseSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::QueueDimensionSpecifierSyntax &syntax)
{
    std::cout << "start:QueueDimensionSpecifierSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:QueueDimensionSpecifierSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::VariableDimensionSyntax &syntax)
{
    std::cout << "start:VariableDimensionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:VariableDimensionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DeclaratorSyntax &syntax)
{
    std::cout << "start:DeclaratorSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DeclaratorSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DataDeclarationSyntax &syntax)
{
    std::cout << "start:DataDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DataDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::TypedefDeclarationSyntax &syntax)
{
    std::cout << "start:TypedefDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:TypedefDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ForwardTypedefDeclarationSyntax &syntax)
{
    std::cout << "start:ForwardTypedefDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ForwardTypedefDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ForwardInterfaceClassTypedefDeclarationSyntax &syntax)
{
    std::cout << "start:ForwardInterfaceClassTypedefDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ForwardInterfaceClassTypedefDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::NetStrengthSyntax &syntax)
{
    std::cout << "start:NetStrengthSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:NetStrengthSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ChargeStrengthSyntax &syntax)
{
    std::cout << "start:ChargeStrengthSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ChargeStrengthSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DriveStrengthSyntax &syntax)
{
    std::cout << "start:DriveStrengthSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DriveStrengthSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::PullStrengthSyntax &syntax)
{
    std::cout << "start:PullStrengthSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:PullStrengthSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::NetDeclarationSyntax &syntax)
{
    std::cout << "start:NetDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:NetDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::UserDefinedNetDeclarationSyntax &syntax)
{
    std::cout << "start:UserDefinedNetDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:UserDefinedNetDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::WithFunctionClauseSyntax &syntax)
{
    std::cout << "start:WithFunctionClauseSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:WithFunctionClauseSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::NetTypeDeclarationSyntax &syntax)
{
    std::cout << "start:NetTypeDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:NetTypeDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::PackageImportItemSyntax &syntax)
{
    std::cout << "start:PackageImportItemSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:PackageImportItemSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::PackageImportDeclarationSyntax &syntax)
{
    std::cout << "start:PackageImportDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:PackageImportDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::PackageExportDeclarationSyntax &syntax)
{
    std::cout << "start:PackageExportDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:PackageExportDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::PackageExportAllDeclarationSyntax &syntax)
{
    std::cout << "start:PackageExportAllDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:PackageExportAllDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ParameterDeclarationBaseSyntax &syntax)
{
    std::cout << "start:ParameterDeclarationBaseSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ParameterDeclarationBaseSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ParameterDeclarationSyntax &syntax)
{
    std::cout << "start:ParameterDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ParameterDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::EqualsTypeClauseSyntax &syntax)
{
    std::cout << "start:EqualsTypeClauseSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:EqualsTypeClauseSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::TypeAssignmentSyntax &syntax)
{
    std::cout << "start:TypeAssignmentSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:TypeAssignmentSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::TypeParameterDeclarationSyntax &syntax)
{
    std::cout << "start:TypeParameterDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:TypeParameterDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ParameterDeclarationStatementSyntax &syntax)
{
    std::cout << "start:ParameterDeclarationStatementSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ParameterDeclarationStatementSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::PortHeaderSyntax &syntax)
{
    std::cout << "start:PortHeaderSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:PortHeaderSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::PortDeclarationSyntax &syntax)
{
    std::cout << "start:PortDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:PortDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::GenvarDeclarationSyntax &syntax)
{
    std::cout << "start:GenvarDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:GenvarDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::FunctionPortSyntax &syntax)
{
    std::cout << "start:FunctionPortSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:FunctionPortSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::FunctionPortListSyntax &syntax)
{
    std::cout << "start:FunctionPortListSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:FunctionPortListSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::IntegerTypeSyntax &syntax)
{
    std::cout << "start:IntegerTypeSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:IntegerTypeSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::KeywordTypeSyntax &syntax)
{
    std::cout << "start:KeywordTypeSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:KeywordTypeSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::NamedTypeSyntax &syntax)
{
    std::cout << "start:NamedTypeSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:NamedTypeSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::StructUnionMemberSyntax &syntax)
{
    std::cout << "start:StructUnionMemberSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:StructUnionMemberSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::StructUnionTypeSyntax &syntax)
{
    std::cout << "start:StructUnionTypeSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:StructUnionTypeSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::EnumTypeSyntax &syntax)
{
    std::cout << "start:EnumTypeSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:EnumTypeSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::TypeReferenceSyntax &syntax)
{
    std::cout << "start:TypeReferenceSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:TypeReferenceSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DotMemberClauseSyntax &syntax)
{
    std::cout << "start:DotMemberClauseSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DotMemberClauseSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::VirtualInterfaceTypeSyntax &syntax)
{
    std::cout << "start:VirtualInterfaceTypeSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:VirtualInterfaceTypeSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ImplicitTypeSyntax &syntax)
{
    std::cout << "start:ImplicitTypeSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ImplicitTypeSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DeferredAssertionSyntax &syntax)
{
    std::cout << "start:DeferredAssertionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DeferredAssertionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ElseClauseSyntax &syntax)
{
    std::cout << "start:ElseClauseSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ElseClauseSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ActionBlockSyntax &syntax)
{
    std::cout << "start:ActionBlockSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ActionBlockSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ImmediateAssertionStatementSyntax &syntax)
{
    std::cout << "start:ImmediateAssertionStatementSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ImmediateAssertionStatementSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DisableIffSyntax &syntax)
{
    std::cout << "start:DisableIffSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DisableIffSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::PropertySpecSyntax &syntax)
{
    std::cout << "start:PropertySpecSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:PropertySpecSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ConcurrentAssertionStatementSyntax &syntax)
{
    std::cout << "start:ConcurrentAssertionStatementSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ConcurrentAssertionStatementSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ConcurrentAssertionMemberSyntax &syntax)
{
    std::cout << "start:ConcurrentAssertionMemberSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ConcurrentAssertionMemberSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ImmediateAssertionMemberSyntax &syntax)
{
    std::cout << "start:ImmediateAssertionMemberSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ImmediateAssertionMemberSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::EmptyStatementSyntax &syntax)
{
    std::cout << "start:EmptyStatementSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:EmptyStatementSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ConditionalStatementSyntax &syntax)
{
    std::cout << "start:ConditionalStatementSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ConditionalStatementSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::CaseItemSyntax &syntax)
{
    std::cout << "start:CaseItemSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:CaseItemSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DefaultCaseItemSyntax &syntax)
{
    std::cout << "start:DefaultCaseItemSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DefaultCaseItemSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::PatternCaseItemSyntax &syntax)
{
    std::cout << "start:PatternCaseItemSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:PatternCaseItemSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::StandardCaseItemSyntax &syntax)
{
    std::cout << "start:StandardCaseItemSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:StandardCaseItemSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::CaseStatementSyntax &syntax)
{
    std::cout << "start:CaseStatementSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:CaseStatementSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ForeverStatementSyntax &syntax)
{
    std::cout << "start:ForeverStatementSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ForeverStatementSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::LoopStatementSyntax &syntax)
{
    std::cout << "start:LoopStatementSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:LoopStatementSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DoWhileStatementSyntax &syntax)
{
    std::cout << "start:DoWhileStatementSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DoWhileStatementSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ForVariableDeclarationSyntax &syntax)
{
    std::cout << "start:ForVariableDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ForVariableDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ForLoopStatementSyntax &syntax)
{
    std::cout << "start:ForLoopStatementSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ForLoopStatementSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ForeachLoopListSyntax &syntax)
{
    std::cout << "start:ForeachLoopListSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ForeachLoopListSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ForeachLoopStatementSyntax &syntax)
{
    std::cout << "start:ForeachLoopStatementSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ForeachLoopStatementSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ReturnStatementSyntax &syntax)
{
    std::cout << "start:ReturnStatementSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ReturnStatementSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::JumpStatementSyntax &syntax)
{
    std::cout << "start:JumpStatementSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:JumpStatementSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::TimingControlStatementSyntax &syntax)
{
    std::cout << "start:TimingControlStatementSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:TimingControlStatementSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ExpressionStatementSyntax &syntax)
{
    std::cout << "start:ExpressionStatementSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ExpressionStatementSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::VoidCastedCallStatementSyntax &syntax)
{
    std::cout << "start:VoidCastedCallStatementSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:VoidCastedCallStatementSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ProceduralAssignStatementSyntax &syntax)
{
    std::cout << "start:ProceduralAssignStatementSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ProceduralAssignStatementSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ProceduralDeassignStatementSyntax &syntax)
{
    std::cout << "start:ProceduralDeassignStatementSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ProceduralDeassignStatementSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DisableStatementSyntax &syntax)
{
    std::cout << "start:DisableStatementSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DisableStatementSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DisableForkStatementSyntax &syntax)
{
    std::cout << "start:DisableForkStatementSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DisableForkStatementSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::NamedBlockClauseSyntax &syntax)
{
    std::cout << "start:NamedBlockClauseSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:NamedBlockClauseSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::BlockStatementSyntax &syntax)
{
    std::cout << "start:BlockStatementSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:BlockStatementSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::WaitStatementSyntax &syntax)
{
    std::cout << "start:WaitStatementSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:WaitStatementSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::WaitForkStatementSyntax &syntax)
{
    std::cout << "start:WaitForkStatementSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:WaitForkStatementSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::WaitOrderStatementSyntax &syntax)
{
    std::cout << "start:WaitOrderStatementSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:WaitOrderStatementSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::RandCaseItemSyntax &syntax)
{
    std::cout << "start:RandCaseItemSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:RandCaseItemSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::RandCaseStatementSyntax &syntax)
{
    std::cout << "start:RandCaseStatementSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:RandCaseStatementSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::RsProdSyntax &syntax)
{
    std::cout << "start:RsProdSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:RsProdSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::RsProdItemSyntax &syntax)
{
    std::cout << "start:RsProdItemSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:RsProdItemSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::RsCodeBlockSyntax &syntax)
{
    std::cout << "start:RsCodeBlockSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:RsCodeBlockSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::RsElseClauseSyntax &syntax)
{
    std::cout << "start:RsElseClauseSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:RsElseClauseSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::RsIfElseSyntax &syntax)
{
    std::cout << "start:RsIfElseSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:RsIfElseSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::RsRepeatSyntax &syntax)
{
    std::cout << "start:RsRepeatSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:RsRepeatSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::RsCaseItemSyntax &syntax)
{
    std::cout << "start:RsCaseItemSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:RsCaseItemSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DefaultRsCaseItemSyntax &syntax)
{
    std::cout << "start:DefaultRsCaseItemSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DefaultRsCaseItemSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::StandardRsCaseItemSyntax &syntax)
{
    std::cout << "start:StandardRsCaseItemSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:StandardRsCaseItemSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::RsCaseSyntax &syntax)
{
    std::cout << "start:RsCaseSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:RsCaseSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::RandJoinClauseSyntax &syntax)
{
    std::cout << "start:RandJoinClauseSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:RandJoinClauseSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::RsWeightClauseSyntax &syntax)
{
    std::cout << "start:RsWeightClauseSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:RsWeightClauseSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::RsRuleSyntax &syntax)
{
    std::cout << "start:RsRuleSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:RsRuleSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ProductionSyntax &syntax)
{
    std::cout << "start:ProductionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ProductionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::RandSequenceStatementSyntax &syntax)
{
    std::cout << "start:RandSequenceStatementSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:RandSequenceStatementSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::EventTriggerStatementSyntax &syntax)
{
    std::cout << "start:EventTriggerStatementSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:EventTriggerStatementSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::PortListSyntax &syntax)
{
    std::cout << "start:PortListSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:PortListSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::NonAnsiPortSyntax &syntax)
{
    std::cout << "start:NonAnsiPortSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:NonAnsiPortSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::PortExpressionSyntax &syntax)
{
    std::cout << "start:PortExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:PortExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::PortReferenceSyntax &syntax)
{
    std::cout << "start:PortReferenceSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:PortReferenceSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::PortConcatenationSyntax &syntax)
{
    std::cout << "start:PortConcatenationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:PortConcatenationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::EmptyNonAnsiPortSyntax &syntax)
{
    std::cout << "start:EmptyNonAnsiPortSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:EmptyNonAnsiPortSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ImplicitNonAnsiPortSyntax &syntax)
{
    std::cout << "start:ImplicitNonAnsiPortSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ImplicitNonAnsiPortSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ExplicitNonAnsiPortSyntax &syntax)
{
    std::cout << "start:ExplicitNonAnsiPortSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ExplicitNonAnsiPortSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::NonAnsiPortListSyntax &syntax)
{
    std::cout << "start:NonAnsiPortListSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:NonAnsiPortListSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::InterfacePortHeaderSyntax &syntax)
{
    std::cout << "start:InterfacePortHeaderSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:InterfacePortHeaderSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::VariablePortHeaderSyntax &syntax)
{
    std::cout << "start:VariablePortHeaderSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:VariablePortHeaderSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::NetPortHeaderSyntax &syntax)
{
    std::cout << "start:NetPortHeaderSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:NetPortHeaderSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ImplicitAnsiPortSyntax &syntax)
{
    std::cout << "start:ImplicitAnsiPortSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ImplicitAnsiPortSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ExplicitAnsiPortSyntax &syntax)
{
    std::cout << "start:ExplicitAnsiPortSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ExplicitAnsiPortSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::AnsiPortListSyntax &syntax)
{
    std::cout << "start:AnsiPortListSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:AnsiPortListSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::WildcardPortListSyntax &syntax)
{
    std::cout << "start:WildcardPortListSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:WildcardPortListSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ParameterPortListSyntax &syntax)
{
    std::cout << "start:ParameterPortListSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ParameterPortListSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ModuleHeaderSyntax &syntax)
{
    std::cout << "start:ModuleHeaderSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ModuleHeaderSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ModuleDeclarationSyntax &syntax)
{
    std::cout << "start:ModuleDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ModuleDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::EmptyMemberSyntax &syntax)
{
    std::cout << "start:EmptyMemberSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:EmptyMemberSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ProceduralBlockSyntax &syntax)
{
    std::cout << "start:ProceduralBlockSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ProceduralBlockSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::GenerateRegionSyntax &syntax)
{
    std::cout << "start:GenerateRegionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:GenerateRegionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::LoopGenerateSyntax &syntax)
{
    std::cout << "start:LoopGenerateSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:LoopGenerateSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::IfGenerateSyntax &syntax)
{
    std::cout << "start:IfGenerateSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:IfGenerateSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::CaseGenerateSyntax &syntax)
{
    std::cout << "start:CaseGenerateSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:CaseGenerateSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::GenerateBlockSyntax &syntax)
{
    std::cout << "start:GenerateBlockSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:GenerateBlockSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DividerClauseSyntax &syntax)
{
    std::cout << "start:DividerClauseSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DividerClauseSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::TimeUnitsDeclarationSyntax &syntax)
{
    std::cout << "start:TimeUnitsDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:TimeUnitsDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::PortConnectionSyntax &syntax)
{
    std::cout << "start:PortConnectionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:PortConnectionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::EmptyPortConnectionSyntax &syntax)
{
    std::cout << "start:EmptyPortConnectionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:EmptyPortConnectionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::OrderedPortConnectionSyntax &syntax)
{
    std::cout << "start:OrderedPortConnectionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:OrderedPortConnectionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::NamedPortConnectionSyntax &syntax)
{
    std::cout << "start:NamedPortConnectionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:NamedPortConnectionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::WildcardPortConnectionSyntax &syntax)
{
    std::cout << "start:WildcardPortConnectionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:WildcardPortConnectionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::InstanceNameSyntax &syntax)
{
    std::cout << "start:InstanceNameSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:InstanceNameSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::HierarchicalInstanceSyntax &syntax)
{
    std::cout << "start:HierarchicalInstanceSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:HierarchicalInstanceSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::HierarchyInstantiationSyntax &syntax)
{
    std::cout << "start:HierarchyInstantiationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:HierarchyInstantiationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::PrimitiveInstantiationSyntax &syntax)
{
    std::cout << "start:PrimitiveInstantiationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:PrimitiveInstantiationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::CheckerInstantiationSyntax &syntax)
{
    std::cout << "start:CheckerInstantiationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:CheckerInstantiationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::CheckerInstanceStatementSyntax &syntax)
{
    std::cout << "start:CheckerInstanceStatementSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:CheckerInstanceStatementSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::BindTargetListSyntax &syntax)
{
    std::cout << "start:BindTargetListSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:BindTargetListSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::BindDirectiveSyntax &syntax)
{
    std::cout << "start:BindDirectiveSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:BindDirectiveSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::FunctionPrototypeSyntax &syntax)
{
    std::cout << "start:FunctionPrototypeSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:FunctionPrototypeSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::FunctionDeclarationSyntax &syntax)
{
    std::cout << "start:FunctionDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:FunctionDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::EqualsAssertionArgClauseSyntax &syntax)
{
    std::cout << "start:EqualsAssertionArgClauseSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:EqualsAssertionArgClauseSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::AssertionItemPortSyntax &syntax)
{
    std::cout << "start:AssertionItemPortSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:AssertionItemPortSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::AssertionItemPortListSyntax &syntax)
{
    std::cout << "start:AssertionItemPortListSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:AssertionItemPortListSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::LetDeclarationSyntax &syntax)
{
    std::cout << "start:LetDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:LetDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ExtendsClauseSyntax &syntax)
{
    std::cout << "start:ExtendsClauseSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ExtendsClauseSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ImplementsClauseSyntax &syntax)
{
    std::cout << "start:ImplementsClauseSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ImplementsClauseSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ClassDeclarationSyntax &syntax)
{
    std::cout << "start:ClassDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ClassDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ClassPropertyDeclarationSyntax &syntax)
{
    std::cout << "start:ClassPropertyDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ClassPropertyDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ClassMethodDeclarationSyntax &syntax)
{
    std::cout << "start:ClassMethodDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ClassMethodDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ClassMethodPrototypeSyntax &syntax)
{
    std::cout << "start:ClassMethodPrototypeSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ClassMethodPrototypeSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ContinuousAssignSyntax &syntax)
{
    std::cout << "start:ContinuousAssignSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ContinuousAssignSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DefParamAssignmentSyntax &syntax)
{
    std::cout << "start:DefParamAssignmentSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DefParamAssignmentSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DefParamSyntax &syntax)
{
    std::cout << "start:DefParamSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DefParamSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ModportClockingPortSyntax &syntax)
{
    std::cout << "start:ModportClockingPortSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ModportClockingPortSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ModportPortSyntax &syntax)
{
    std::cout << "start:ModportPortSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ModportPortSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ModportNamedPortSyntax &syntax)
{
    std::cout << "start:ModportNamedPortSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ModportNamedPortSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ModportExplicitPortSyntax &syntax)
{
    std::cout << "start:ModportExplicitPortSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ModportExplicitPortSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ModportSimplePortListSyntax &syntax)
{
    std::cout << "start:ModportSimplePortListSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ModportSimplePortListSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ModportSubroutinePortSyntax &syntax)
{
    std::cout << "start:ModportSubroutinePortSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ModportSubroutinePortSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ModportSubroutinePortListSyntax &syntax)
{
    std::cout << "start:ModportSubroutinePortListSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ModportSubroutinePortListSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ModportItemSyntax &syntax)
{
    std::cout << "start:ModportItemSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ModportItemSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ModportDeclarationSyntax &syntax)
{
    std::cout << "start:ModportDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ModportDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ClockingSkewSyntax &syntax)
{
    std::cout << "start:ClockingSkewSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ClockingSkewSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ClockingDirectionSyntax &syntax)
{
    std::cout << "start:ClockingDirectionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ClockingDirectionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DefaultSkewItemSyntax &syntax)
{
    std::cout << "start:DefaultSkewItemSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DefaultSkewItemSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ClockingItemSyntax &syntax)
{
    std::cout << "start:ClockingItemSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ClockingItemSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ClockingDeclarationSyntax &syntax)
{
    std::cout << "start:ClockingDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ClockingDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DefaultClockingReferenceSyntax &syntax)
{
    std::cout << "start:DefaultClockingReferenceSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DefaultClockingReferenceSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DefaultDisableDeclarationSyntax &syntax)
{
    std::cout << "start:DefaultDisableDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DefaultDisableDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DPIImportSyntax &syntax)
{
    std::cout << "start:DPIImportSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DPIImportSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DPIExportSyntax &syntax)
{
    std::cout << "start:DPIExportSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DPIExportSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ElabSystemTaskSyntax &syntax)
{
    std::cout << "start:ElabSystemTaskSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ElabSystemTaskSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::UdpPortDeclSyntax &syntax)
{
    std::cout << "start:UdpPortDeclSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:UdpPortDeclSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::UdpOutputPortDeclSyntax &syntax)
{
    std::cout << "start:UdpOutputPortDeclSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:UdpOutputPortDeclSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::UdpInputPortDeclSyntax &syntax)
{
    std::cout << "start:UdpInputPortDeclSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:UdpInputPortDeclSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::UdpPortListSyntax &syntax)
{
    std::cout << "start:UdpPortListSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:UdpPortListSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::AnsiUdpPortListSyntax &syntax)
{
    std::cout << "start:AnsiUdpPortListSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:AnsiUdpPortListSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::NonAnsiUdpPortListSyntax &syntax)
{
    std::cout << "start:NonAnsiUdpPortListSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:NonAnsiUdpPortListSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::WildcardUdpPortListSyntax &syntax)
{
    std::cout << "start:WildcardUdpPortListSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:WildcardUdpPortListSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::UdpInitialStmtSyntax &syntax)
{
    std::cout << "start:UdpInitialStmtSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:UdpInitialStmtSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::UdpEdgeIndicatorSyntax &syntax)
{
    std::cout << "start:UdpEdgeIndicatorSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:UdpEdgeIndicatorSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::UdpEntrySyntax &syntax)
{
    std::cout << "start:UdpEntrySyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:UdpEntrySyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::UdpBodySyntax &syntax)
{
    std::cout << "start:UdpBodySyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:UdpBodySyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::UdpDeclarationSyntax &syntax)
{
    std::cout << "start:UdpDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:UdpDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::SpecparamDeclaratorSyntax &syntax)
{
    std::cout << "start:SpecparamDeclaratorSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:SpecparamDeclaratorSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::SpecparamDeclarationSyntax &syntax)
{
    std::cout << "start:SpecparamDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:SpecparamDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::PathSuffixSyntax &syntax)
{
    std::cout << "start:PathSuffixSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:PathSuffixSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::SimplePathSuffixSyntax &syntax)
{
    std::cout << "start:SimplePathSuffixSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:SimplePathSuffixSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::EdgeSensitivePathSuffixSyntax &syntax)
{
    std::cout << "start:EdgeSensitivePathSuffixSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:EdgeSensitivePathSuffixSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::PathDescriptionSyntax &syntax)
{
    std::cout << "start:PathDescriptionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:PathDescriptionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::PathDeclarationSyntax &syntax)
{
    std::cout << "start:PathDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:PathDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ConditionalPathDeclarationSyntax &syntax)
{
    std::cout << "start:ConditionalPathDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ConditionalPathDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::IfNonePathDeclarationSyntax &syntax)
{
    std::cout << "start:IfNonePathDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:IfNonePathDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::PulseStyleDeclarationSyntax &syntax)
{
    std::cout << "start:PulseStyleDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:PulseStyleDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::TimingCheckArgSyntax &syntax)
{
    std::cout << "start:TimingCheckArgSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:TimingCheckArgSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::EmptyTimingCheckArgSyntax &syntax)
{
    std::cout << "start:EmptyTimingCheckArgSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:EmptyTimingCheckArgSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::EdgeDescriptorSyntax &syntax)
{
    std::cout << "start:EdgeDescriptorSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:EdgeDescriptorSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::EdgeControlSpecifierSyntax &syntax)
{
    std::cout << "start:EdgeControlSpecifierSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:EdgeControlSpecifierSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::TimingCheckConditionSyntax &syntax)
{
    std::cout << "start:TimingCheckConditionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:TimingCheckConditionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::TimingCheckEventSyntax &syntax)
{
    std::cout << "start:TimingCheckEventSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:TimingCheckEventSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DelayedTerminalArgSyntax &syntax)
{
    std::cout << "start:DelayedTerminalArgSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DelayedTerminalArgSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ExpressionTimingCheckArgSyntax &syntax)
{
    std::cout << "start:ExpressionTimingCheckArgSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ExpressionTimingCheckArgSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::SystemTimingCheckSyntax &syntax)
{
    std::cout << "start:SystemTimingCheckSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:SystemTimingCheckSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::SpecifyBlockSyntax &syntax)
{
    std::cout << "start:SpecifyBlockSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:SpecifyBlockSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::NetAliasSyntax &syntax)
{
    std::cout << "start:NetAliasSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:NetAliasSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ExternModuleDeclSyntax &syntax)
{
    std::cout << "start:ExternModuleDeclSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ExternModuleDeclSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ExternUdpDeclSyntax &syntax)
{
    std::cout << "start:ExternUdpDeclSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ExternUdpDeclSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ExternInterfaceMethodSyntax &syntax)
{
    std::cout << "start:ExternInterfaceMethodSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ExternInterfaceMethodSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ConstraintItemSyntax &syntax)
{
    std::cout << "start:ConstraintItemSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ConstraintItemSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DistWeightSyntax &syntax)
{
    std::cout << "start:DistWeightSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DistWeightSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DistItemSyntax &syntax)
{
    std::cout << "start:DistItemSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DistItemSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DistConstraintListSyntax &syntax)
{
    std::cout << "start:DistConstraintListSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DistConstraintListSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ExpressionOrDistSyntax &syntax)
{
    std::cout << "start:ExpressionOrDistSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ExpressionOrDistSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ExpressionConstraintSyntax &syntax)
{
    std::cout << "start:ExpressionConstraintSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ExpressionConstraintSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::UniquenessConstraintSyntax &syntax)
{
    std::cout << "start:UniquenessConstraintSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:UniquenessConstraintSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ImplicationConstraintSyntax &syntax)
{
    std::cout << "start:ImplicationConstraintSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ImplicationConstraintSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ElseConstraintClauseSyntax &syntax)
{
    std::cout << "start:ElseConstraintClauseSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ElseConstraintClauseSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ConditionalConstraintSyntax &syntax)
{
    std::cout << "start:ConditionalConstraintSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ConditionalConstraintSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::LoopConstraintSyntax &syntax)
{
    std::cout << "start:LoopConstraintSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:LoopConstraintSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DisableConstraintSyntax &syntax)
{
    std::cout << "start:DisableConstraintSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DisableConstraintSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::SolveBeforeConstraintSyntax &syntax)
{
    std::cout << "start:SolveBeforeConstraintSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:SolveBeforeConstraintSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ConstraintBlockSyntax &syntax)
{
    std::cout << "start:ConstraintBlockSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ConstraintBlockSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ConstraintPrototypeSyntax &syntax)
{
    std::cout << "start:ConstraintPrototypeSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ConstraintPrototypeSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ConstraintDeclarationSyntax &syntax)
{
    std::cout << "start:ConstraintDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ConstraintDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ParenExpressionListSyntax &syntax)
{
    std::cout << "start:ParenExpressionListSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ParenExpressionListSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ArrayOrRandomizeMethodExpressionSyntax &syntax)
{
    std::cout << "start:ArrayOrRandomizeMethodExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ArrayOrRandomizeMethodExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::WithFunctionSampleSyntax &syntax)
{
    std::cout << "start:WithFunctionSampleSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:WithFunctionSampleSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::BlockEventExpressionSyntax &syntax)
{
    std::cout << "start:BlockEventExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:BlockEventExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::BinaryBlockEventExpressionSyntax &syntax)
{
    std::cout << "start:BinaryBlockEventExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:BinaryBlockEventExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::PrimaryBlockEventExpressionSyntax &syntax)
{
    std::cout << "start:PrimaryBlockEventExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:PrimaryBlockEventExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::BlockCoverageEventSyntax &syntax)
{
    std::cout << "start:BlockCoverageEventSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:BlockCoverageEventSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::CovergroupDeclarationSyntax &syntax)
{
    std::cout << "start:CovergroupDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:CovergroupDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::CoverageOptionSyntax &syntax)
{
    std::cout << "start:CoverageOptionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:CoverageOptionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::CoverageIffClauseSyntax &syntax)
{
    std::cout << "start:CoverageIffClauseSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:CoverageIffClauseSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::CoverpointSyntax &syntax)
{
    std::cout << "start:CoverpointSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:CoverpointSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::CoverageBinInitializerSyntax &syntax)
{
    std::cout << "start:CoverageBinInitializerSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:CoverageBinInitializerSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DefaultCoverageBinInitializerSyntax &syntax)
{
    std::cout << "start:DefaultCoverageBinInitializerSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DefaultCoverageBinInitializerSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::WithClauseSyntax &syntax)
{
    std::cout << "start:WithClauseSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:WithClauseSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ExpressionCoverageBinInitializerSyntax &syntax)
{
    std::cout << "start:ExpressionCoverageBinInitializerSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ExpressionCoverageBinInitializerSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::RangeCoverageBinInitializerSyntax &syntax)
{
    std::cout << "start:RangeCoverageBinInitializerSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:RangeCoverageBinInitializerSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::IdWithExprCoverageBinInitializerSyntax &syntax)
{
    std::cout << "start:IdWithExprCoverageBinInitializerSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:IdWithExprCoverageBinInitializerSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::TransRepeatRangeSyntax &syntax)
{
    std::cout << "start:TransRepeatRangeSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:TransRepeatRangeSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::TransRangeSyntax &syntax)
{
    std::cout << "start:TransRangeSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:TransRangeSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::TransSetSyntax &syntax)
{
    std::cout << "start:TransSetSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:TransSetSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::TransListCoverageBinInitializerSyntax &syntax)
{
    std::cout << "start:TransListCoverageBinInitializerSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:TransListCoverageBinInitializerSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::CoverageBinsArraySizeSyntax &syntax)
{
    std::cout << "start:CoverageBinsArraySizeSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:CoverageBinsArraySizeSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::CoverageBinsSyntax &syntax)
{
    std::cout << "start:CoverageBinsSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:CoverageBinsSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::CoverCrossSyntax &syntax)
{
    std::cout << "start:CoverCrossSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:CoverCrossSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::BinsSelectExpressionSyntax &syntax)
{
    std::cout << "start:BinsSelectExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:BinsSelectExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::IntersectClauseSyntax &syntax)
{
    std::cout << "start:IntersectClauseSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:IntersectClauseSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::BinsSelectConditionExprSyntax &syntax)
{
    std::cout << "start:BinsSelectConditionExprSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:BinsSelectConditionExprSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::UnaryBinsSelectExprSyntax &syntax)
{
    std::cout << "start:UnaryBinsSelectExprSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:UnaryBinsSelectExprSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::BinaryBinsSelectExprSyntax &syntax)
{
    std::cout << "start:BinaryBinsSelectExprSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:BinaryBinsSelectExprSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ParenthesizedBinsSelectExprSyntax &syntax)
{
    std::cout << "start:ParenthesizedBinsSelectExprSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ParenthesizedBinsSelectExprSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::SimpleBinsSelectExprSyntax &syntax)
{
    std::cout << "start:SimpleBinsSelectExprSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:SimpleBinsSelectExprSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::BinSelectWithFilterExprSyntax &syntax)
{
    std::cout << "start:BinSelectWithFilterExprSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:BinSelectWithFilterExprSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::BinsSelectionSyntax &syntax)
{
    std::cout << "start:BinsSelectionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:BinsSelectionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::SequenceRepetitionSyntax &syntax)
{
    std::cout << "start:SequenceRepetitionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:SequenceRepetitionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::SimpleSequenceExprSyntax &syntax)
{
    std::cout << "start:SimpleSequenceExprSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:SimpleSequenceExprSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::SequenceMatchListSyntax &syntax)
{
    std::cout << "start:SequenceMatchListSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:SequenceMatchListSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ParenthesizedSequenceExprSyntax &syntax)
{
    std::cout << "start:ParenthesizedSequenceExprSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ParenthesizedSequenceExprSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::BinarySequenceExprSyntax &syntax)
{
    std::cout << "start:BinarySequenceExprSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:BinarySequenceExprSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::FirstMatchSequenceExprSyntax &syntax)
{
    std::cout << "start:FirstMatchSequenceExprSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:FirstMatchSequenceExprSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ClockingSequenceExprSyntax &syntax)
{
    std::cout << "start:ClockingSequenceExprSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ClockingSequenceExprSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DelayedSequenceElementSyntax &syntax)
{
    std::cout << "start:DelayedSequenceElementSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DelayedSequenceElementSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DelayedSequenceExprSyntax &syntax)
{
    std::cout << "start:DelayedSequenceExprSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DelayedSequenceExprSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::SimplePropertyExprSyntax &syntax)
{
    std::cout << "start:SimplePropertyExprSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:SimplePropertyExprSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ParenthesizedPropertyExprSyntax &syntax)
{
    std::cout << "start:ParenthesizedPropertyExprSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ParenthesizedPropertyExprSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::StrongWeakPropertyExprSyntax &syntax)
{
    std::cout << "start:StrongWeakPropertyExprSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:StrongWeakPropertyExprSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::UnaryPropertyExprSyntax &syntax)
{
    std::cout << "start:UnaryPropertyExprSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:UnaryPropertyExprSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::UnarySelectPropertyExprSyntax &syntax)
{
    std::cout << "start:UnarySelectPropertyExprSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:UnarySelectPropertyExprSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::BinaryPropertyExprSyntax &syntax)
{
    std::cout << "start:BinaryPropertyExprSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:BinaryPropertyExprSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ClockingPropertyExprSyntax &syntax)
{
    std::cout << "start:ClockingPropertyExprSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ClockingPropertyExprSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::AcceptOnPropertyExprSyntax &syntax)
{
    std::cout << "start:AcceptOnPropertyExprSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:AcceptOnPropertyExprSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ElsePropertyClauseSyntax &syntax)
{
    std::cout << "start:ElsePropertyClauseSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ElsePropertyClauseSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ConditionalPropertyExprSyntax &syntax)
{
    std::cout << "start:ConditionalPropertyExprSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ConditionalPropertyExprSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::PropertyCaseItemSyntax &syntax)
{
    std::cout << "start:PropertyCaseItemSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:PropertyCaseItemSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DefaultPropertyCaseItemSyntax &syntax)
{
    std::cout << "start:DefaultPropertyCaseItemSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DefaultPropertyCaseItemSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::StandardPropertyCaseItemSyntax &syntax)
{
    std::cout << "start:StandardPropertyCaseItemSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:StandardPropertyCaseItemSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::CasePropertyExprSyntax &syntax)
{
    std::cout << "start:CasePropertyExprSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:CasePropertyExprSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::LocalVariableDeclarationSyntax &syntax)
{
    std::cout << "start:LocalVariableDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:LocalVariableDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::PropertyDeclarationSyntax &syntax)
{
    std::cout << "start:PropertyDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:PropertyDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::SequenceDeclarationSyntax &syntax)
{
    std::cout << "start:SequenceDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:SequenceDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::CheckerDeclarationSyntax &syntax)
{
    std::cout << "start:CheckerDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:CheckerDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::CheckerDataDeclarationSyntax &syntax)
{
    std::cout << "start:CheckerDataDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:CheckerDataDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::CompilationUnitSyntax &syntax)
{
    std::cout << "start:CompilationUnitSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:CompilationUnitSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DirectiveSyntax &syntax)
{
    std::cout << "start:DirectiveSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DirectiveSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::SimpleDirectiveSyntax &syntax)
{
    std::cout << "start:SimpleDirectiveSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:SimpleDirectiveSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::IncludeDirectiveSyntax &syntax)
{
    std::cout << "start:IncludeDirectiveSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:IncludeDirectiveSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ConditionalBranchDirectiveSyntax &syntax)
{
    std::cout << "start:ConditionalBranchDirectiveSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ConditionalBranchDirectiveSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::UnconditionalBranchDirectiveSyntax &syntax)
{
    std::cout << "start:UnconditionalBranchDirectiveSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:UnconditionalBranchDirectiveSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::MacroArgumentDefaultSyntax &syntax)
{
    std::cout << "start:MacroArgumentDefaultSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:MacroArgumentDefaultSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::MacroFormalArgumentSyntax &syntax)
{
    std::cout << "start:MacroFormalArgumentSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:MacroFormalArgumentSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::MacroFormalArgumentListSyntax &syntax)
{
    std::cout << "start:MacroFormalArgumentListSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:MacroFormalArgumentListSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DefineDirectiveSyntax &syntax)
{
    std::cout << "start:DefineDirectiveSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DefineDirectiveSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::MacroActualArgumentSyntax &syntax)
{
    std::cout << "start:MacroActualArgumentSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:MacroActualArgumentSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::MacroActualArgumentListSyntax &syntax)
{
    std::cout << "start:MacroActualArgumentListSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:MacroActualArgumentListSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::MacroUsageSyntax &syntax)
{
    std::cout << "start:MacroUsageSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:MacroUsageSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::TimeScaleDirectiveSyntax &syntax)
{
    std::cout << "start:TimeScaleDirectiveSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:TimeScaleDirectiveSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DefaultNetTypeDirectiveSyntax &syntax)
{
    std::cout << "start:DefaultNetTypeDirectiveSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DefaultNetTypeDirectiveSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::UnconnectedDriveDirectiveSyntax &syntax)
{
    std::cout << "start:UnconnectedDriveDirectiveSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:UnconnectedDriveDirectiveSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::LineDirectiveSyntax &syntax)
{
    std::cout << "start:LineDirectiveSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:LineDirectiveSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::UndefDirectiveSyntax &syntax)
{
    std::cout << "start:UndefDirectiveSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:UndefDirectiveSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::BeginKeywordsDirectiveSyntax &syntax)
{
    std::cout << "start:BeginKeywordsDirectiveSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:BeginKeywordsDirectiveSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::PragmaExpressionSyntax &syntax)
{
    std::cout << "start:PragmaExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:PragmaExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::SimplePragmaExpressionSyntax &syntax)
{
    std::cout << "start:SimplePragmaExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:SimplePragmaExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::NameValuePragmaExpressionSyntax &syntax)
{
    std::cout << "start:NameValuePragmaExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:NameValuePragmaExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::NumberPragmaExpressionSyntax &syntax)
{
    std::cout << "start:NumberPragmaExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:NumberPragmaExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ParenPragmaExpressionSyntax &syntax)
{
    std::cout << "start:ParenPragmaExpressionSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ParenPragmaExpressionSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::PragmaDirectiveSyntax &syntax)
{
    std::cout << "start:PragmaDirectiveSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:PragmaDirectiveSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ConfigCellIdentifierSyntax &syntax)
{
    std::cout << "start:ConfigCellIdentifierSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ConfigCellIdentifierSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ConfigRuleClauseSyntax &syntax)
{
    std::cout << "start:ConfigRuleClauseSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ConfigRuleClauseSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ConfigLiblistSyntax &syntax)
{
    std::cout << "start:ConfigLiblistSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ConfigLiblistSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ConfigUseClauseSyntax &syntax)
{
    std::cout << "start:ConfigUseClauseSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ConfigUseClauseSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ConfigRuleSyntax &syntax)
{
    std::cout << "start:ConfigRuleSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ConfigRuleSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::DefaultConfigRuleSyntax &syntax)
{
    std::cout << "start:DefaultConfigRuleSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:DefaultConfigRuleSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ConfigInstanceIdentifierSyntax &syntax)
{
    std::cout << "start:ConfigInstanceIdentifierSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ConfigInstanceIdentifierSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::InstanceConfigRuleSyntax &syntax)
{
    std::cout << "start:InstanceConfigRuleSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:InstanceConfigRuleSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::CellConfigRuleSyntax &syntax)
{
    std::cout << "start:CellConfigRuleSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:CellConfigRuleSyntax" << std::endl;
    visitDefault(syntax);
}



void JohnsTestVisitor::handle(const slang::syntax::ConfigDeclarationSyntax &syntax)
{
    std::cout << "start:ConfigDeclarationSyntax" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:ConfigDeclarationSyntax" << std::endl;
    visitDefault(syntax);
}

