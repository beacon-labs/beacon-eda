
#include "slang/syntax/SyntaxVisitor.h"

class JohnsTestVisitor : public slang::syntax::SyntaxVisitor<JohnsTestVisitor>
{
public:

    void handle(const slang::syntax::ExpressionSyntax &syntax);

    void handle(const slang::syntax::DataTypeSyntax &syntax);

    void handle(const slang::syntax::TimingControlSyntax &syntax);

    void handle(const slang::syntax::SequenceExprSyntax &syntax);

    void handle(const slang::syntax::PropertyExprSyntax &syntax);

    void handle(const slang::syntax::EqualsValueClauseSyntax &syntax);

    void handle(const slang::syntax::AttributeSpecSyntax &syntax);

    void handle(const slang::syntax::AttributeInstanceSyntax &syntax);

    void handle(const slang::syntax::NamedLabelSyntax &syntax);

    void handle(const slang::syntax::StatementSyntax &syntax);

    void handle(const slang::syntax::MemberSyntax &syntax);

    void handle(const slang::syntax::ArgumentSyntax &syntax);

    void handle(const slang::syntax::EmptyArgumentSyntax &syntax);

    void handle(const slang::syntax::OrderedArgumentSyntax &syntax);

    void handle(const slang::syntax::NamedArgumentSyntax &syntax);

    void handle(const slang::syntax::ArgumentListSyntax &syntax);

    void handle(const slang::syntax::ParamAssignmentSyntax &syntax);

    void handle(const slang::syntax::OrderedParamAssignmentSyntax &syntax);

    void handle(const slang::syntax::NamedParamAssignmentSyntax &syntax);

    void handle(const slang::syntax::ParameterValueAssignmentSyntax &syntax);

    void handle(const slang::syntax::PatternSyntax &syntax);

    void handle(const slang::syntax::ParenthesizedPatternSyntax &syntax);

    void handle(const slang::syntax::VariablePatternSyntax &syntax);

    void handle(const slang::syntax::WildcardPatternSyntax &syntax);

    void handle(const slang::syntax::ExpressionPatternSyntax &syntax);

    void handle(const slang::syntax::TaggedPatternSyntax &syntax);

    void handle(const slang::syntax::StructurePatternMemberSyntax &syntax);

    void handle(const slang::syntax::OrderedStructurePatternMemberSyntax &syntax);

    void handle(const slang::syntax::NamedStructurePatternMemberSyntax &syntax);

    void handle(const slang::syntax::StructurePatternSyntax &syntax);

    void handle(const slang::syntax::MatchesClauseSyntax &syntax);

    void handle(const slang::syntax::ConditionalPatternSyntax &syntax);

    void handle(const slang::syntax::ConditionalPredicateSyntax &syntax);

    void handle(const slang::syntax::AssignmentPatternSyntax &syntax);

    void handle(const slang::syntax::SimpleAssignmentPatternSyntax &syntax);

    void handle(const slang::syntax::AssignmentPatternItemSyntax &syntax);

    void handle(const slang::syntax::StructuredAssignmentPatternSyntax &syntax);

    void handle(const slang::syntax::ReplicatedAssignmentPatternSyntax &syntax);

    void handle(const slang::syntax::BadExpressionSyntax &syntax);

    void handle(const slang::syntax::PrimaryExpressionSyntax &syntax);

    void handle(const slang::syntax::PrefixUnaryExpressionSyntax &syntax);

    void handle(const slang::syntax::PostfixUnaryExpressionSyntax &syntax);

    void handle(const slang::syntax::BinaryExpressionSyntax &syntax);

    void handle(const slang::syntax::MinTypMaxExpressionSyntax &syntax);

    void handle(const slang::syntax::TaggedUnionExpressionSyntax &syntax);

    void handle(const slang::syntax::OpenRangeExpressionSyntax &syntax);

    void handle(const slang::syntax::OpenRangeListSyntax &syntax);

    void handle(const slang::syntax::InsideExpressionSyntax &syntax);

    void handle(const slang::syntax::ConditionalExpressionSyntax &syntax);

    void handle(const slang::syntax::AssignmentPatternExpressionSyntax &syntax);

    void handle(const slang::syntax::SelectorSyntax &syntax);

    void handle(const slang::syntax::BitSelectSyntax &syntax);

    void handle(const slang::syntax::RangeSelectSyntax &syntax);

    void handle(const slang::syntax::ElementSelectSyntax &syntax);

    void handle(const slang::syntax::NameSyntax &syntax);

    void handle(const slang::syntax::IdentifierNameSyntax &syntax);

    void handle(const slang::syntax::SystemNameSyntax &syntax);

    void handle(const slang::syntax::IdentifierSelectNameSyntax &syntax);

    void handle(const slang::syntax::EmptyIdentifierNameSyntax &syntax);

    void handle(const slang::syntax::KeywordNameSyntax &syntax);

    void handle(const slang::syntax::ClassNameSyntax &syntax);

    void handle(const slang::syntax::ScopedNameSyntax &syntax);

    void handle(const slang::syntax::LiteralExpressionSyntax &syntax);

    void handle(const slang::syntax::IntegerVectorExpressionSyntax &syntax);

    void handle(const slang::syntax::EmptyQueueExpressionSyntax &syntax);

    void handle(const slang::syntax::ConcatenationExpressionSyntax &syntax);

    void handle(const slang::syntax::MultipleConcatenationExpressionSyntax &syntax);

    void handle(const slang::syntax::StreamExpressionWithRangeSyntax &syntax);

    void handle(const slang::syntax::StreamExpressionSyntax &syntax);

    void handle(const slang::syntax::StreamingConcatenationExpressionSyntax &syntax);

    void handle(const slang::syntax::ParenthesizedExpressionSyntax &syntax);

    void handle(const slang::syntax::NewArrayExpressionSyntax &syntax);

    void handle(const slang::syntax::NewClassExpressionSyntax &syntax);

    void handle(const slang::syntax::CopyClassExpressionSyntax &syntax);

    void handle(const slang::syntax::ElementSelectExpressionSyntax &syntax);

    void handle(const slang::syntax::MemberAccessExpressionSyntax &syntax);

    void handle(const slang::syntax::InvocationExpressionSyntax &syntax);

    void handle(const slang::syntax::CastExpressionSyntax &syntax);

    void handle(const slang::syntax::SignedCastExpressionSyntax &syntax);

    void handle(const slang::syntax::DelaySyntax &syntax);

    void handle(const slang::syntax::Delay3Syntax &syntax);

    void handle(const slang::syntax::OneStepDelaySyntax &syntax);

    void handle(const slang::syntax::EventControlSyntax &syntax);

    void handle(const slang::syntax::IffEventClauseSyntax &syntax);

    void handle(const slang::syntax::EventExpressionSyntax &syntax);

    void handle(const slang::syntax::SignalEventExpressionSyntax &syntax);

    void handle(const slang::syntax::BinaryEventExpressionSyntax &syntax);

    void handle(const slang::syntax::ParenthesizedEventExpressionSyntax &syntax);

    void handle(const slang::syntax::ImplicitEventControlSyntax &syntax);

    void handle(const slang::syntax::EventControlWithExpressionSyntax &syntax);

    void handle(const slang::syntax::RepeatedEventControlSyntax &syntax);

    void handle(const slang::syntax::TimingControlExpressionSyntax &syntax);

    void handle(const slang::syntax::DimensionSpecifierSyntax &syntax);

    void handle(const slang::syntax::RangeDimensionSpecifierSyntax &syntax);

    void handle(const slang::syntax::WildcardDimensionSpecifierSyntax &syntax);

    void handle(const slang::syntax::ColonExpressionClauseSyntax &syntax);

    void handle(const slang::syntax::QueueDimensionSpecifierSyntax &syntax);

    void handle(const slang::syntax::VariableDimensionSyntax &syntax);

    void handle(const slang::syntax::DeclaratorSyntax &syntax);

    void handle(const slang::syntax::DataDeclarationSyntax &syntax);

    void handle(const slang::syntax::TypedefDeclarationSyntax &syntax);

    void handle(const slang::syntax::ForwardTypedefDeclarationSyntax &syntax);

    void handle(const slang::syntax::ForwardInterfaceClassTypedefDeclarationSyntax &syntax);

    void handle(const slang::syntax::NetStrengthSyntax &syntax);

    void handle(const slang::syntax::ChargeStrengthSyntax &syntax);

    void handle(const slang::syntax::DriveStrengthSyntax &syntax);

    void handle(const slang::syntax::PullStrengthSyntax &syntax);

    void handle(const slang::syntax::NetDeclarationSyntax &syntax);

    void handle(const slang::syntax::UserDefinedNetDeclarationSyntax &syntax);

    void handle(const slang::syntax::WithFunctionClauseSyntax &syntax);

    void handle(const slang::syntax::NetTypeDeclarationSyntax &syntax);

    void handle(const slang::syntax::PackageImportItemSyntax &syntax);

    void handle(const slang::syntax::PackageImportDeclarationSyntax &syntax);

    void handle(const slang::syntax::PackageExportDeclarationSyntax &syntax);

    void handle(const slang::syntax::PackageExportAllDeclarationSyntax &syntax);

    void handle(const slang::syntax::ParameterDeclarationBaseSyntax &syntax);

    void handle(const slang::syntax::ParameterDeclarationSyntax &syntax);

    void handle(const slang::syntax::EqualsTypeClauseSyntax &syntax);

    void handle(const slang::syntax::TypeAssignmentSyntax &syntax);

    void handle(const slang::syntax::TypeParameterDeclarationSyntax &syntax);

    void handle(const slang::syntax::ParameterDeclarationStatementSyntax &syntax);

    void handle(const slang::syntax::PortHeaderSyntax &syntax);

    void handle(const slang::syntax::PortDeclarationSyntax &syntax);

    void handle(const slang::syntax::GenvarDeclarationSyntax &syntax);

    void handle(const slang::syntax::FunctionPortSyntax &syntax);

    void handle(const slang::syntax::FunctionPortListSyntax &syntax);

    void handle(const slang::syntax::IntegerTypeSyntax &syntax);

    void handle(const slang::syntax::KeywordTypeSyntax &syntax);

    void handle(const slang::syntax::NamedTypeSyntax &syntax);

    void handle(const slang::syntax::StructUnionMemberSyntax &syntax);

    void handle(const slang::syntax::StructUnionTypeSyntax &syntax);

    void handle(const slang::syntax::EnumTypeSyntax &syntax);

    void handle(const slang::syntax::TypeReferenceSyntax &syntax);

    void handle(const slang::syntax::DotMemberClauseSyntax &syntax);

    void handle(const slang::syntax::VirtualInterfaceTypeSyntax &syntax);

    void handle(const slang::syntax::ImplicitTypeSyntax &syntax);

    void handle(const slang::syntax::DeferredAssertionSyntax &syntax);

    void handle(const slang::syntax::ElseClauseSyntax &syntax);

    void handle(const slang::syntax::ActionBlockSyntax &syntax);

    void handle(const slang::syntax::ImmediateAssertionStatementSyntax &syntax);

    void handle(const slang::syntax::DisableIffSyntax &syntax);

    void handle(const slang::syntax::PropertySpecSyntax &syntax);

    void handle(const slang::syntax::ConcurrentAssertionStatementSyntax &syntax);

    void handle(const slang::syntax::ConcurrentAssertionMemberSyntax &syntax);

    void handle(const slang::syntax::ImmediateAssertionMemberSyntax &syntax);

    void handle(const slang::syntax::EmptyStatementSyntax &syntax);

    void handle(const slang::syntax::ConditionalStatementSyntax &syntax);

    void handle(const slang::syntax::CaseItemSyntax &syntax);

    void handle(const slang::syntax::DefaultCaseItemSyntax &syntax);

    void handle(const slang::syntax::PatternCaseItemSyntax &syntax);

    void handle(const slang::syntax::StandardCaseItemSyntax &syntax);

    void handle(const slang::syntax::CaseStatementSyntax &syntax);

    void handle(const slang::syntax::ForeverStatementSyntax &syntax);

    void handle(const slang::syntax::LoopStatementSyntax &syntax);

    void handle(const slang::syntax::DoWhileStatementSyntax &syntax);

    void handle(const slang::syntax::ForVariableDeclarationSyntax &syntax);

    void handle(const slang::syntax::ForLoopStatementSyntax &syntax);

    void handle(const slang::syntax::ForeachLoopListSyntax &syntax);

    void handle(const slang::syntax::ForeachLoopStatementSyntax &syntax);

    void handle(const slang::syntax::ReturnStatementSyntax &syntax);

    void handle(const slang::syntax::JumpStatementSyntax &syntax);

    void handle(const slang::syntax::TimingControlStatementSyntax &syntax);

    void handle(const slang::syntax::ExpressionStatementSyntax &syntax);

    void handle(const slang::syntax::VoidCastedCallStatementSyntax &syntax);

    void handle(const slang::syntax::ProceduralAssignStatementSyntax &syntax);

    void handle(const slang::syntax::ProceduralDeassignStatementSyntax &syntax);

    void handle(const slang::syntax::DisableStatementSyntax &syntax);

    void handle(const slang::syntax::DisableForkStatementSyntax &syntax);

    void handle(const slang::syntax::NamedBlockClauseSyntax &syntax);

    void handle(const slang::syntax::BlockStatementSyntax &syntax);

    void handle(const slang::syntax::WaitStatementSyntax &syntax);

    void handle(const slang::syntax::WaitForkStatementSyntax &syntax);

    void handle(const slang::syntax::WaitOrderStatementSyntax &syntax);

    void handle(const slang::syntax::RandCaseItemSyntax &syntax);

    void handle(const slang::syntax::RandCaseStatementSyntax &syntax);

    void handle(const slang::syntax::RsProdSyntax &syntax);

    void handle(const slang::syntax::RsProdItemSyntax &syntax);

    void handle(const slang::syntax::RsCodeBlockSyntax &syntax);

    void handle(const slang::syntax::RsElseClauseSyntax &syntax);

    void handle(const slang::syntax::RsIfElseSyntax &syntax);

    void handle(const slang::syntax::RsRepeatSyntax &syntax);

    void handle(const slang::syntax::RsCaseItemSyntax &syntax);

    void handle(const slang::syntax::DefaultRsCaseItemSyntax &syntax);

    void handle(const slang::syntax::StandardRsCaseItemSyntax &syntax);

    void handle(const slang::syntax::RsCaseSyntax &syntax);

    void handle(const slang::syntax::RandJoinClauseSyntax &syntax);

    void handle(const slang::syntax::RsWeightClauseSyntax &syntax);

    void handle(const slang::syntax::RsRuleSyntax &syntax);

    void handle(const slang::syntax::ProductionSyntax &syntax);

    void handle(const slang::syntax::RandSequenceStatementSyntax &syntax);

    void handle(const slang::syntax::EventTriggerStatementSyntax &syntax);

    void handle(const slang::syntax::PortListSyntax &syntax);

    void handle(const slang::syntax::NonAnsiPortSyntax &syntax);

    void handle(const slang::syntax::PortExpressionSyntax &syntax);

    void handle(const slang::syntax::PortReferenceSyntax &syntax);

    void handle(const slang::syntax::PortConcatenationSyntax &syntax);

    void handle(const slang::syntax::EmptyNonAnsiPortSyntax &syntax);

    void handle(const slang::syntax::ImplicitNonAnsiPortSyntax &syntax);

    void handle(const slang::syntax::ExplicitNonAnsiPortSyntax &syntax);

    void handle(const slang::syntax::NonAnsiPortListSyntax &syntax);

    void handle(const slang::syntax::InterfacePortHeaderSyntax &syntax);

    void handle(const slang::syntax::VariablePortHeaderSyntax &syntax);

    void handle(const slang::syntax::NetPortHeaderSyntax &syntax);

    void handle(const slang::syntax::ImplicitAnsiPortSyntax &syntax);

    void handle(const slang::syntax::ExplicitAnsiPortSyntax &syntax);

    void handle(const slang::syntax::AnsiPortListSyntax &syntax);

    void handle(const slang::syntax::WildcardPortListSyntax &syntax);

    void handle(const slang::syntax::ParameterPortListSyntax &syntax);

    void handle(const slang::syntax::ModuleHeaderSyntax &syntax);

    void handle(const slang::syntax::ModuleDeclarationSyntax &syntax);

    void handle(const slang::syntax::EmptyMemberSyntax &syntax);

    void handle(const slang::syntax::ProceduralBlockSyntax &syntax);

    void handle(const slang::syntax::GenerateRegionSyntax &syntax);

    void handle(const slang::syntax::LoopGenerateSyntax &syntax);

    void handle(const slang::syntax::IfGenerateSyntax &syntax);

    void handle(const slang::syntax::CaseGenerateSyntax &syntax);

    void handle(const slang::syntax::GenerateBlockSyntax &syntax);

    void handle(const slang::syntax::DividerClauseSyntax &syntax);

    void handle(const slang::syntax::TimeUnitsDeclarationSyntax &syntax);

    void handle(const slang::syntax::PortConnectionSyntax &syntax);

    void handle(const slang::syntax::EmptyPortConnectionSyntax &syntax);

    void handle(const slang::syntax::OrderedPortConnectionSyntax &syntax);

    void handle(const slang::syntax::NamedPortConnectionSyntax &syntax);

    void handle(const slang::syntax::WildcardPortConnectionSyntax &syntax);

    void handle(const slang::syntax::InstanceNameSyntax &syntax);

    void handle(const slang::syntax::HierarchicalInstanceSyntax &syntax);

    void handle(const slang::syntax::HierarchyInstantiationSyntax &syntax);

    void handle(const slang::syntax::PrimitiveInstantiationSyntax &syntax);

    void handle(const slang::syntax::CheckerInstantiationSyntax &syntax);

    void handle(const slang::syntax::CheckerInstanceStatementSyntax &syntax);

    void handle(const slang::syntax::BindTargetListSyntax &syntax);

    void handle(const slang::syntax::BindDirectiveSyntax &syntax);

    void handle(const slang::syntax::FunctionPrototypeSyntax &syntax);

    void handle(const slang::syntax::FunctionDeclarationSyntax &syntax);

    void handle(const slang::syntax::EqualsAssertionArgClauseSyntax &syntax);

    void handle(const slang::syntax::AssertionItemPortSyntax &syntax);

    void handle(const slang::syntax::AssertionItemPortListSyntax &syntax);

    void handle(const slang::syntax::LetDeclarationSyntax &syntax);

    void handle(const slang::syntax::ExtendsClauseSyntax &syntax);

    void handle(const slang::syntax::ImplementsClauseSyntax &syntax);

    void handle(const slang::syntax::ClassDeclarationSyntax &syntax);

    void handle(const slang::syntax::ClassPropertyDeclarationSyntax &syntax);

    void handle(const slang::syntax::ClassMethodDeclarationSyntax &syntax);

    void handle(const slang::syntax::ClassMethodPrototypeSyntax &syntax);

    void handle(const slang::syntax::ContinuousAssignSyntax &syntax);

    void handle(const slang::syntax::DefParamAssignmentSyntax &syntax);

    void handle(const slang::syntax::DefParamSyntax &syntax);

    void handle(const slang::syntax::ModportClockingPortSyntax &syntax);

    void handle(const slang::syntax::ModportPortSyntax &syntax);

    void handle(const slang::syntax::ModportNamedPortSyntax &syntax);

    void handle(const slang::syntax::ModportExplicitPortSyntax &syntax);

    void handle(const slang::syntax::ModportSimplePortListSyntax &syntax);

    void handle(const slang::syntax::ModportSubroutinePortSyntax &syntax);

    void handle(const slang::syntax::ModportSubroutinePortListSyntax &syntax);

    void handle(const slang::syntax::ModportItemSyntax &syntax);

    void handle(const slang::syntax::ModportDeclarationSyntax &syntax);

    void handle(const slang::syntax::ClockingSkewSyntax &syntax);

    void handle(const slang::syntax::ClockingDirectionSyntax &syntax);

    void handle(const slang::syntax::DefaultSkewItemSyntax &syntax);

    void handle(const slang::syntax::ClockingItemSyntax &syntax);

    void handle(const slang::syntax::ClockingDeclarationSyntax &syntax);

    void handle(const slang::syntax::DefaultClockingReferenceSyntax &syntax);

    void handle(const slang::syntax::DefaultDisableDeclarationSyntax &syntax);

    void handle(const slang::syntax::DPIImportSyntax &syntax);

    void handle(const slang::syntax::DPIExportSyntax &syntax);

    void handle(const slang::syntax::ElabSystemTaskSyntax &syntax);

    void handle(const slang::syntax::UdpPortDeclSyntax &syntax);

    void handle(const slang::syntax::UdpOutputPortDeclSyntax &syntax);

    void handle(const slang::syntax::UdpInputPortDeclSyntax &syntax);

    void handle(const slang::syntax::UdpPortListSyntax &syntax);

    void handle(const slang::syntax::AnsiUdpPortListSyntax &syntax);

    void handle(const slang::syntax::NonAnsiUdpPortListSyntax &syntax);

    void handle(const slang::syntax::WildcardUdpPortListSyntax &syntax);

    void handle(const slang::syntax::UdpInitialStmtSyntax &syntax);

    void handle(const slang::syntax::UdpEdgeIndicatorSyntax &syntax);

    void handle(const slang::syntax::UdpEntrySyntax &syntax);

    void handle(const slang::syntax::UdpBodySyntax &syntax);

    void handle(const slang::syntax::UdpDeclarationSyntax &syntax);

    void handle(const slang::syntax::SpecparamDeclaratorSyntax &syntax);

    void handle(const slang::syntax::SpecparamDeclarationSyntax &syntax);

    void handle(const slang::syntax::PathSuffixSyntax &syntax);

    void handle(const slang::syntax::SimplePathSuffixSyntax &syntax);

    void handle(const slang::syntax::EdgeSensitivePathSuffixSyntax &syntax);

    void handle(const slang::syntax::PathDescriptionSyntax &syntax);

    void handle(const slang::syntax::PathDeclarationSyntax &syntax);

    void handle(const slang::syntax::ConditionalPathDeclarationSyntax &syntax);

    void handle(const slang::syntax::IfNonePathDeclarationSyntax &syntax);

    void handle(const slang::syntax::PulseStyleDeclarationSyntax &syntax);

    void handle(const slang::syntax::TimingCheckArgSyntax &syntax);

    void handle(const slang::syntax::EmptyTimingCheckArgSyntax &syntax);

    void handle(const slang::syntax::EdgeDescriptorSyntax &syntax);

    void handle(const slang::syntax::EdgeControlSpecifierSyntax &syntax);

    void handle(const slang::syntax::TimingCheckConditionSyntax &syntax);

    void handle(const slang::syntax::TimingCheckEventSyntax &syntax);

    void handle(const slang::syntax::DelayedTerminalArgSyntax &syntax);

    void handle(const slang::syntax::ExpressionTimingCheckArgSyntax &syntax);

    void handle(const slang::syntax::SystemTimingCheckSyntax &syntax);

    void handle(const slang::syntax::SpecifyBlockSyntax &syntax);

    void handle(const slang::syntax::NetAliasSyntax &syntax);

    void handle(const slang::syntax::ExternModuleDeclSyntax &syntax);

    void handle(const slang::syntax::ExternUdpDeclSyntax &syntax);

    void handle(const slang::syntax::ExternInterfaceMethodSyntax &syntax);

    void handle(const slang::syntax::ConstraintItemSyntax &syntax);

    void handle(const slang::syntax::DistWeightSyntax &syntax);

    void handle(const slang::syntax::DistItemSyntax &syntax);

    void handle(const slang::syntax::DistConstraintListSyntax &syntax);

    void handle(const slang::syntax::ExpressionOrDistSyntax &syntax);

    void handle(const slang::syntax::ExpressionConstraintSyntax &syntax);

    void handle(const slang::syntax::UniquenessConstraintSyntax &syntax);

    void handle(const slang::syntax::ImplicationConstraintSyntax &syntax);

    void handle(const slang::syntax::ElseConstraintClauseSyntax &syntax);

    void handle(const slang::syntax::ConditionalConstraintSyntax &syntax);

    void handle(const slang::syntax::LoopConstraintSyntax &syntax);

    void handle(const slang::syntax::DisableConstraintSyntax &syntax);

    void handle(const slang::syntax::SolveBeforeConstraintSyntax &syntax);

    void handle(const slang::syntax::ConstraintBlockSyntax &syntax);

    void handle(const slang::syntax::ConstraintPrototypeSyntax &syntax);

    void handle(const slang::syntax::ConstraintDeclarationSyntax &syntax);

    void handle(const slang::syntax::ParenExpressionListSyntax &syntax);

    void handle(const slang::syntax::ArrayOrRandomizeMethodExpressionSyntax &syntax);

    void handle(const slang::syntax::WithFunctionSampleSyntax &syntax);

    void handle(const slang::syntax::BlockEventExpressionSyntax &syntax);

    void handle(const slang::syntax::BinaryBlockEventExpressionSyntax &syntax);

    void handle(const slang::syntax::PrimaryBlockEventExpressionSyntax &syntax);

    void handle(const slang::syntax::BlockCoverageEventSyntax &syntax);

    void handle(const slang::syntax::CovergroupDeclarationSyntax &syntax);

    void handle(const slang::syntax::CoverageOptionSyntax &syntax);

    void handle(const slang::syntax::CoverageIffClauseSyntax &syntax);

    void handle(const slang::syntax::CoverpointSyntax &syntax);

    void handle(const slang::syntax::CoverageBinInitializerSyntax &syntax);

    void handle(const slang::syntax::DefaultCoverageBinInitializerSyntax &syntax);

    void handle(const slang::syntax::WithClauseSyntax &syntax);

    void handle(const slang::syntax::ExpressionCoverageBinInitializerSyntax &syntax);

    void handle(const slang::syntax::RangeCoverageBinInitializerSyntax &syntax);

    void handle(const slang::syntax::IdWithExprCoverageBinInitializerSyntax &syntax);

    void handle(const slang::syntax::TransRepeatRangeSyntax &syntax);

    void handle(const slang::syntax::TransRangeSyntax &syntax);

    void handle(const slang::syntax::TransSetSyntax &syntax);

    void handle(const slang::syntax::TransListCoverageBinInitializerSyntax &syntax);

    void handle(const slang::syntax::CoverageBinsArraySizeSyntax &syntax);

    void handle(const slang::syntax::CoverageBinsSyntax &syntax);

    void handle(const slang::syntax::CoverCrossSyntax &syntax);

    void handle(const slang::syntax::BinsSelectExpressionSyntax &syntax);

    void handle(const slang::syntax::IntersectClauseSyntax &syntax);

    void handle(const slang::syntax::BinsSelectConditionExprSyntax &syntax);

    void handle(const slang::syntax::UnaryBinsSelectExprSyntax &syntax);

    void handle(const slang::syntax::BinaryBinsSelectExprSyntax &syntax);

    void handle(const slang::syntax::ParenthesizedBinsSelectExprSyntax &syntax);

    void handle(const slang::syntax::SimpleBinsSelectExprSyntax &syntax);

    void handle(const slang::syntax::BinSelectWithFilterExprSyntax &syntax);

    void handle(const slang::syntax::BinsSelectionSyntax &syntax);

    void handle(const slang::syntax::SequenceRepetitionSyntax &syntax);

    void handle(const slang::syntax::SimpleSequenceExprSyntax &syntax);

    void handle(const slang::syntax::SequenceMatchListSyntax &syntax);

    void handle(const slang::syntax::ParenthesizedSequenceExprSyntax &syntax);

    void handle(const slang::syntax::BinarySequenceExprSyntax &syntax);

    void handle(const slang::syntax::FirstMatchSequenceExprSyntax &syntax);

    void handle(const slang::syntax::ClockingSequenceExprSyntax &syntax);

    void handle(const slang::syntax::DelayedSequenceElementSyntax &syntax);

    void handle(const slang::syntax::DelayedSequenceExprSyntax &syntax);

    void handle(const slang::syntax::SimplePropertyExprSyntax &syntax);

    void handle(const slang::syntax::ParenthesizedPropertyExprSyntax &syntax);

    void handle(const slang::syntax::StrongWeakPropertyExprSyntax &syntax);

    void handle(const slang::syntax::UnaryPropertyExprSyntax &syntax);

    void handle(const slang::syntax::UnarySelectPropertyExprSyntax &syntax);

    void handle(const slang::syntax::BinaryPropertyExprSyntax &syntax);

    void handle(const slang::syntax::ClockingPropertyExprSyntax &syntax);

    void handle(const slang::syntax::AcceptOnPropertyExprSyntax &syntax);

    void handle(const slang::syntax::ElsePropertyClauseSyntax &syntax);

    void handle(const slang::syntax::ConditionalPropertyExprSyntax &syntax);

    void handle(const slang::syntax::PropertyCaseItemSyntax &syntax);

    void handle(const slang::syntax::DefaultPropertyCaseItemSyntax &syntax);

    void handle(const slang::syntax::StandardPropertyCaseItemSyntax &syntax);

    void handle(const slang::syntax::CasePropertyExprSyntax &syntax);

    void handle(const slang::syntax::LocalVariableDeclarationSyntax &syntax);

    void handle(const slang::syntax::PropertyDeclarationSyntax &syntax);

    void handle(const slang::syntax::SequenceDeclarationSyntax &syntax);

    void handle(const slang::syntax::CheckerDeclarationSyntax &syntax);

    void handle(const slang::syntax::CheckerDataDeclarationSyntax &syntax);

    void handle(const slang::syntax::CompilationUnitSyntax &syntax);

    void handle(const slang::syntax::DirectiveSyntax &syntax);

    void handle(const slang::syntax::SimpleDirectiveSyntax &syntax);

    void handle(const slang::syntax::IncludeDirectiveSyntax &syntax);

    void handle(const slang::syntax::ConditionalBranchDirectiveSyntax &syntax);

    void handle(const slang::syntax::UnconditionalBranchDirectiveSyntax &syntax);

    void handle(const slang::syntax::MacroArgumentDefaultSyntax &syntax);

    void handle(const slang::syntax::MacroFormalArgumentSyntax &syntax);

    void handle(const slang::syntax::MacroFormalArgumentListSyntax &syntax);

    void handle(const slang::syntax::DefineDirectiveSyntax &syntax);

    void handle(const slang::syntax::MacroActualArgumentSyntax &syntax);

    void handle(const slang::syntax::MacroActualArgumentListSyntax &syntax);

    void handle(const slang::syntax::MacroUsageSyntax &syntax);

    void handle(const slang::syntax::TimeScaleDirectiveSyntax &syntax);

    void handle(const slang::syntax::DefaultNetTypeDirectiveSyntax &syntax);

    void handle(const slang::syntax::UnconnectedDriveDirectiveSyntax &syntax);

    void handle(const slang::syntax::LineDirectiveSyntax &syntax);

    void handle(const slang::syntax::UndefDirectiveSyntax &syntax);

    void handle(const slang::syntax::BeginKeywordsDirectiveSyntax &syntax);

    void handle(const slang::syntax::PragmaExpressionSyntax &syntax);

    void handle(const slang::syntax::SimplePragmaExpressionSyntax &syntax);

    void handle(const slang::syntax::NameValuePragmaExpressionSyntax &syntax);

    void handle(const slang::syntax::NumberPragmaExpressionSyntax &syntax);

    void handle(const slang::syntax::ParenPragmaExpressionSyntax &syntax);

    void handle(const slang::syntax::PragmaDirectiveSyntax &syntax);

    void handle(const slang::syntax::ConfigCellIdentifierSyntax &syntax);

    void handle(const slang::syntax::ConfigRuleClauseSyntax &syntax);

    void handle(const slang::syntax::ConfigLiblistSyntax &syntax);

    void handle(const slang::syntax::ConfigUseClauseSyntax &syntax);

    void handle(const slang::syntax::ConfigRuleSyntax &syntax);

    void handle(const slang::syntax::DefaultConfigRuleSyntax &syntax);

    void handle(const slang::syntax::ConfigInstanceIdentifierSyntax &syntax);

    void handle(const slang::syntax::InstanceConfigRuleSyntax &syntax);

    void handle(const slang::syntax::CellConfigRuleSyntax &syntax);

    void handle(const slang::syntax::ConfigDeclarationSyntax &syntax);

};