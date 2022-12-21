
// Generated from SystemVerilogParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "SystemVerilogParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by SystemVerilogParser.
 */
class  SystemVerilogParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterLibrary_text(SystemVerilogParser::Library_textContext *ctx) = 0;
  virtual void exitLibrary_text(SystemVerilogParser::Library_textContext *ctx) = 0;

  virtual void enterLibrary_description(SystemVerilogParser::Library_descriptionContext *ctx) = 0;
  virtual void exitLibrary_description(SystemVerilogParser::Library_descriptionContext *ctx) = 0;

  virtual void enterLibrary_declaration(SystemVerilogParser::Library_declarationContext *ctx) = 0;
  virtual void exitLibrary_declaration(SystemVerilogParser::Library_declarationContext *ctx) = 0;

  virtual void enterLibrary_incdir(SystemVerilogParser::Library_incdirContext *ctx) = 0;
  virtual void exitLibrary_incdir(SystemVerilogParser::Library_incdirContext *ctx) = 0;

  virtual void enterInclude_statement(SystemVerilogParser::Include_statementContext *ctx) = 0;
  virtual void exitInclude_statement(SystemVerilogParser::Include_statementContext *ctx) = 0;

  virtual void enterFile_path_spec(SystemVerilogParser::File_path_specContext *ctx) = 0;
  virtual void exitFile_path_spec(SystemVerilogParser::File_path_specContext *ctx) = 0;

  virtual void enterSource_text(SystemVerilogParser::Source_textContext *ctx) = 0;
  virtual void exitSource_text(SystemVerilogParser::Source_textContext *ctx) = 0;

  virtual void enterDescription(SystemVerilogParser::DescriptionContext *ctx) = 0;
  virtual void exitDescription(SystemVerilogParser::DescriptionContext *ctx) = 0;

  virtual void enterModule_header(SystemVerilogParser::Module_headerContext *ctx) = 0;
  virtual void exitModule_header(SystemVerilogParser::Module_headerContext *ctx) = 0;

  virtual void enterModule_declaration(SystemVerilogParser::Module_declarationContext *ctx) = 0;
  virtual void exitModule_declaration(SystemVerilogParser::Module_declarationContext *ctx) = 0;

  virtual void enterModule_name(SystemVerilogParser::Module_nameContext *ctx) = 0;
  virtual void exitModule_name(SystemVerilogParser::Module_nameContext *ctx) = 0;

  virtual void enterModule_keyword(SystemVerilogParser::Module_keywordContext *ctx) = 0;
  virtual void exitModule_keyword(SystemVerilogParser::Module_keywordContext *ctx) = 0;

  virtual void enterInterface_declaration(SystemVerilogParser::Interface_declarationContext *ctx) = 0;
  virtual void exitInterface_declaration(SystemVerilogParser::Interface_declarationContext *ctx) = 0;

  virtual void enterInterface_name(SystemVerilogParser::Interface_nameContext *ctx) = 0;
  virtual void exitInterface_name(SystemVerilogParser::Interface_nameContext *ctx) = 0;

  virtual void enterInterface_header(SystemVerilogParser::Interface_headerContext *ctx) = 0;
  virtual void exitInterface_header(SystemVerilogParser::Interface_headerContext *ctx) = 0;

  virtual void enterProgram_declaration(SystemVerilogParser::Program_declarationContext *ctx) = 0;
  virtual void exitProgram_declaration(SystemVerilogParser::Program_declarationContext *ctx) = 0;

  virtual void enterProgram_name(SystemVerilogParser::Program_nameContext *ctx) = 0;
  virtual void exitProgram_name(SystemVerilogParser::Program_nameContext *ctx) = 0;

  virtual void enterProgram_header(SystemVerilogParser::Program_headerContext *ctx) = 0;
  virtual void exitProgram_header(SystemVerilogParser::Program_headerContext *ctx) = 0;

  virtual void enterChecker_declaration(SystemVerilogParser::Checker_declarationContext *ctx) = 0;
  virtual void exitChecker_declaration(SystemVerilogParser::Checker_declarationContext *ctx) = 0;

  virtual void enterChecker_name(SystemVerilogParser::Checker_nameContext *ctx) = 0;
  virtual void exitChecker_name(SystemVerilogParser::Checker_nameContext *ctx) = 0;

  virtual void enterChecker_ports(SystemVerilogParser::Checker_portsContext *ctx) = 0;
  virtual void exitChecker_ports(SystemVerilogParser::Checker_portsContext *ctx) = 0;

  virtual void enterChecker_decl_item(SystemVerilogParser::Checker_decl_itemContext *ctx) = 0;
  virtual void exitChecker_decl_item(SystemVerilogParser::Checker_decl_itemContext *ctx) = 0;

  virtual void enterClass_declaration(SystemVerilogParser::Class_declarationContext *ctx) = 0;
  virtual void exitClass_declaration(SystemVerilogParser::Class_declarationContext *ctx) = 0;

  virtual void enterClass_name(SystemVerilogParser::Class_nameContext *ctx) = 0;
  virtual void exitClass_name(SystemVerilogParser::Class_nameContext *ctx) = 0;

  virtual void enterClass_extension(SystemVerilogParser::Class_extensionContext *ctx) = 0;
  virtual void exitClass_extension(SystemVerilogParser::Class_extensionContext *ctx) = 0;

  virtual void enterClass_implementation(SystemVerilogParser::Class_implementationContext *ctx) = 0;
  virtual void exitClass_implementation(SystemVerilogParser::Class_implementationContext *ctx) = 0;

  virtual void enterInterface_class_type(SystemVerilogParser::Interface_class_typeContext *ctx) = 0;
  virtual void exitInterface_class_type(SystemVerilogParser::Interface_class_typeContext *ctx) = 0;

  virtual void enterInterface_class_declaration(SystemVerilogParser::Interface_class_declarationContext *ctx) = 0;
  virtual void exitInterface_class_declaration(SystemVerilogParser::Interface_class_declarationContext *ctx) = 0;

  virtual void enterInterface_class_extension(SystemVerilogParser::Interface_class_extensionContext *ctx) = 0;
  virtual void exitInterface_class_extension(SystemVerilogParser::Interface_class_extensionContext *ctx) = 0;

  virtual void enterInterface_class_item(SystemVerilogParser::Interface_class_itemContext *ctx) = 0;
  virtual void exitInterface_class_item(SystemVerilogParser::Interface_class_itemContext *ctx) = 0;

  virtual void enterInterface_class_method(SystemVerilogParser::Interface_class_methodContext *ctx) = 0;
  virtual void exitInterface_class_method(SystemVerilogParser::Interface_class_methodContext *ctx) = 0;

  virtual void enterPackage_declaration(SystemVerilogParser::Package_declarationContext *ctx) = 0;
  virtual void exitPackage_declaration(SystemVerilogParser::Package_declarationContext *ctx) = 0;

  virtual void enterPackage_name(SystemVerilogParser::Package_nameContext *ctx) = 0;
  virtual void exitPackage_name(SystemVerilogParser::Package_nameContext *ctx) = 0;

  virtual void enterPkg_decl_item(SystemVerilogParser::Pkg_decl_itemContext *ctx) = 0;
  virtual void exitPkg_decl_item(SystemVerilogParser::Pkg_decl_itemContext *ctx) = 0;

  virtual void enterTimeunits_declaration(SystemVerilogParser::Timeunits_declarationContext *ctx) = 0;
  virtual void exitTimeunits_declaration(SystemVerilogParser::Timeunits_declarationContext *ctx) = 0;

  virtual void enterParameter_port_list(SystemVerilogParser::Parameter_port_listContext *ctx) = 0;
  virtual void exitParameter_port_list(SystemVerilogParser::Parameter_port_listContext *ctx) = 0;

  virtual void enterParameter_port_declaration(SystemVerilogParser::Parameter_port_declarationContext *ctx) = 0;
  virtual void exitParameter_port_declaration(SystemVerilogParser::Parameter_port_declarationContext *ctx) = 0;

  virtual void enterList_of_port_declarations(SystemVerilogParser::List_of_port_declarationsContext *ctx) = 0;
  virtual void exitList_of_port_declarations(SystemVerilogParser::List_of_port_declarationsContext *ctx) = 0;

  virtual void enterPort_decl(SystemVerilogParser::Port_declContext *ctx) = 0;
  virtual void exitPort_decl(SystemVerilogParser::Port_declContext *ctx) = 0;

  virtual void enterPort_declaration(SystemVerilogParser::Port_declarationContext *ctx) = 0;
  virtual void exitPort_declaration(SystemVerilogParser::Port_declarationContext *ctx) = 0;

  virtual void enterPort(SystemVerilogParser::PortContext *ctx) = 0;
  virtual void exitPort(SystemVerilogParser::PortContext *ctx) = 0;

  virtual void enterPort_implicit(SystemVerilogParser::Port_implicitContext *ctx) = 0;
  virtual void exitPort_implicit(SystemVerilogParser::Port_implicitContext *ctx) = 0;

  virtual void enterPort_expression(SystemVerilogParser::Port_expressionContext *ctx) = 0;
  virtual void exitPort_expression(SystemVerilogParser::Port_expressionContext *ctx) = 0;

  virtual void enterPort_reference(SystemVerilogParser::Port_referenceContext *ctx) = 0;
  virtual void exitPort_reference(SystemVerilogParser::Port_referenceContext *ctx) = 0;

  virtual void enterPort_direction(SystemVerilogParser::Port_directionContext *ctx) = 0;
  virtual void exitPort_direction(SystemVerilogParser::Port_directionContext *ctx) = 0;

  virtual void enterAnsi_port_declaration(SystemVerilogParser::Ansi_port_declarationContext *ctx) = 0;
  virtual void exitAnsi_port_declaration(SystemVerilogParser::Ansi_port_declarationContext *ctx) = 0;

  virtual void enterElaboration_system_task(SystemVerilogParser::Elaboration_system_taskContext *ctx) = 0;
  virtual void exitElaboration_system_task(SystemVerilogParser::Elaboration_system_taskContext *ctx) = 0;

  virtual void enterFatal_arg_list(SystemVerilogParser::Fatal_arg_listContext *ctx) = 0;
  virtual void exitFatal_arg_list(SystemVerilogParser::Fatal_arg_listContext *ctx) = 0;

  virtual void enterFinish_number(SystemVerilogParser::Finish_numberContext *ctx) = 0;
  virtual void exitFinish_number(SystemVerilogParser::Finish_numberContext *ctx) = 0;

  virtual void enterModule_common_item(SystemVerilogParser::Module_common_itemContext *ctx) = 0;
  virtual void exitModule_common_item(SystemVerilogParser::Module_common_itemContext *ctx) = 0;

  virtual void enterModule_item(SystemVerilogParser::Module_itemContext *ctx) = 0;
  virtual void exitModule_item(SystemVerilogParser::Module_itemContext *ctx) = 0;

  virtual void enterModule_item_declaration(SystemVerilogParser::Module_item_declarationContext *ctx) = 0;
  virtual void exitModule_item_declaration(SystemVerilogParser::Module_item_declarationContext *ctx) = 0;

  virtual void enterParameter_override(SystemVerilogParser::Parameter_overrideContext *ctx) = 0;
  virtual void exitParameter_override(SystemVerilogParser::Parameter_overrideContext *ctx) = 0;

  virtual void enterBind_directive(SystemVerilogParser::Bind_directiveContext *ctx) = 0;
  virtual void exitBind_directive(SystemVerilogParser::Bind_directiveContext *ctx) = 0;

  virtual void enterBind_target_scope(SystemVerilogParser::Bind_target_scopeContext *ctx) = 0;
  virtual void exitBind_target_scope(SystemVerilogParser::Bind_target_scopeContext *ctx) = 0;

  virtual void enterBind_target_instance(SystemVerilogParser::Bind_target_instanceContext *ctx) = 0;
  virtual void exitBind_target_instance(SystemVerilogParser::Bind_target_instanceContext *ctx) = 0;

  virtual void enterBind_target_instance_list(SystemVerilogParser::Bind_target_instance_listContext *ctx) = 0;
  virtual void exitBind_target_instance_list(SystemVerilogParser::Bind_target_instance_listContext *ctx) = 0;

  virtual void enterBind_instantiation(SystemVerilogParser::Bind_instantiationContext *ctx) = 0;
  virtual void exitBind_instantiation(SystemVerilogParser::Bind_instantiationContext *ctx) = 0;

  virtual void enterConfig_declaration(SystemVerilogParser::Config_declarationContext *ctx) = 0;
  virtual void exitConfig_declaration(SystemVerilogParser::Config_declarationContext *ctx) = 0;

  virtual void enterConfig_name(SystemVerilogParser::Config_nameContext *ctx) = 0;
  virtual void exitConfig_name(SystemVerilogParser::Config_nameContext *ctx) = 0;

  virtual void enterDesign_statement(SystemVerilogParser::Design_statementContext *ctx) = 0;
  virtual void exitDesign_statement(SystemVerilogParser::Design_statementContext *ctx) = 0;

  virtual void enterDesign_statement_item(SystemVerilogParser::Design_statement_itemContext *ctx) = 0;
  virtual void exitDesign_statement_item(SystemVerilogParser::Design_statement_itemContext *ctx) = 0;

  virtual void enterConfig_rule_statement(SystemVerilogParser::Config_rule_statementContext *ctx) = 0;
  virtual void exitConfig_rule_statement(SystemVerilogParser::Config_rule_statementContext *ctx) = 0;

  virtual void enterDefault_clause(SystemVerilogParser::Default_clauseContext *ctx) = 0;
  virtual void exitDefault_clause(SystemVerilogParser::Default_clauseContext *ctx) = 0;

  virtual void enterInst_clause(SystemVerilogParser::Inst_clauseContext *ctx) = 0;
  virtual void exitInst_clause(SystemVerilogParser::Inst_clauseContext *ctx) = 0;

  virtual void enterInst_name(SystemVerilogParser::Inst_nameContext *ctx) = 0;
  virtual void exitInst_name(SystemVerilogParser::Inst_nameContext *ctx) = 0;

  virtual void enterCell_clause(SystemVerilogParser::Cell_clauseContext *ctx) = 0;
  virtual void exitCell_clause(SystemVerilogParser::Cell_clauseContext *ctx) = 0;

  virtual void enterLiblist_clause(SystemVerilogParser::Liblist_clauseContext *ctx) = 0;
  virtual void exitLiblist_clause(SystemVerilogParser::Liblist_clauseContext *ctx) = 0;

  virtual void enterUse_clause(SystemVerilogParser::Use_clauseContext *ctx) = 0;
  virtual void exitUse_clause(SystemVerilogParser::Use_clauseContext *ctx) = 0;

  virtual void enterExtern_tf_declaration(SystemVerilogParser::Extern_tf_declarationContext *ctx) = 0;
  virtual void exitExtern_tf_declaration(SystemVerilogParser::Extern_tf_declarationContext *ctx) = 0;

  virtual void enterInterface_item(SystemVerilogParser::Interface_itemContext *ctx) = 0;
  virtual void exitInterface_item(SystemVerilogParser::Interface_itemContext *ctx) = 0;

  virtual void enterProgram_item(SystemVerilogParser::Program_itemContext *ctx) = 0;
  virtual void exitProgram_item(SystemVerilogParser::Program_itemContext *ctx) = 0;

  virtual void enterChecker_port_list(SystemVerilogParser::Checker_port_listContext *ctx) = 0;
  virtual void exitChecker_port_list(SystemVerilogParser::Checker_port_listContext *ctx) = 0;

  virtual void enterChecker_port_item(SystemVerilogParser::Checker_port_itemContext *ctx) = 0;
  virtual void exitChecker_port_item(SystemVerilogParser::Checker_port_itemContext *ctx) = 0;

  virtual void enterChecker_port_direction(SystemVerilogParser::Checker_port_directionContext *ctx) = 0;
  virtual void exitChecker_port_direction(SystemVerilogParser::Checker_port_directionContext *ctx) = 0;

  virtual void enterChecker_item(SystemVerilogParser::Checker_itemContext *ctx) = 0;
  virtual void exitChecker_item(SystemVerilogParser::Checker_itemContext *ctx) = 0;

  virtual void enterChecker_item_declaration(SystemVerilogParser::Checker_item_declarationContext *ctx) = 0;
  virtual void exitChecker_item_declaration(SystemVerilogParser::Checker_item_declarationContext *ctx) = 0;

  virtual void enterClass_item(SystemVerilogParser::Class_itemContext *ctx) = 0;
  virtual void exitClass_item(SystemVerilogParser::Class_itemContext *ctx) = 0;

  virtual void enterClass_property(SystemVerilogParser::Class_propertyContext *ctx) = 0;
  virtual void exitClass_property(SystemVerilogParser::Class_propertyContext *ctx) = 0;

  virtual void enterClass_method(SystemVerilogParser::Class_methodContext *ctx) = 0;
  virtual void exitClass_method(SystemVerilogParser::Class_methodContext *ctx) = 0;

  virtual void enterClass_constructor_prototype(SystemVerilogParser::Class_constructor_prototypeContext *ctx) = 0;
  virtual void exitClass_constructor_prototype(SystemVerilogParser::Class_constructor_prototypeContext *ctx) = 0;

  virtual void enterPort_list(SystemVerilogParser::Port_listContext *ctx) = 0;
  virtual void exitPort_list(SystemVerilogParser::Port_listContext *ctx) = 0;

  virtual void enterClass_constraint(SystemVerilogParser::Class_constraintContext *ctx) = 0;
  virtual void exitClass_constraint(SystemVerilogParser::Class_constraintContext *ctx) = 0;

  virtual void enterClass_item_qualifier(SystemVerilogParser::Class_item_qualifierContext *ctx) = 0;
  virtual void exitClass_item_qualifier(SystemVerilogParser::Class_item_qualifierContext *ctx) = 0;

  virtual void enterProperty_qualifier(SystemVerilogParser::Property_qualifierContext *ctx) = 0;
  virtual void exitProperty_qualifier(SystemVerilogParser::Property_qualifierContext *ctx) = 0;

  virtual void enterRandom_qualifier(SystemVerilogParser::Random_qualifierContext *ctx) = 0;
  virtual void exitRandom_qualifier(SystemVerilogParser::Random_qualifierContext *ctx) = 0;

  virtual void enterMethod_qualifier(SystemVerilogParser::Method_qualifierContext *ctx) = 0;
  virtual void exitMethod_qualifier(SystemVerilogParser::Method_qualifierContext *ctx) = 0;

  virtual void enterMethod_prototype(SystemVerilogParser::Method_prototypeContext *ctx) = 0;
  virtual void exitMethod_prototype(SystemVerilogParser::Method_prototypeContext *ctx) = 0;

  virtual void enterClass_constructor_declaration(SystemVerilogParser::Class_constructor_declarationContext *ctx) = 0;
  virtual void exitClass_constructor_declaration(SystemVerilogParser::Class_constructor_declarationContext *ctx) = 0;

  virtual void enterSuper_class_constructor_call(SystemVerilogParser::Super_class_constructor_callContext *ctx) = 0;
  virtual void exitSuper_class_constructor_call(SystemVerilogParser::Super_class_constructor_callContext *ctx) = 0;

  virtual void enterConstraint_declaration(SystemVerilogParser::Constraint_declarationContext *ctx) = 0;
  virtual void exitConstraint_declaration(SystemVerilogParser::Constraint_declarationContext *ctx) = 0;

  virtual void enterConstraint_block(SystemVerilogParser::Constraint_blockContext *ctx) = 0;
  virtual void exitConstraint_block(SystemVerilogParser::Constraint_blockContext *ctx) = 0;

  virtual void enterConstraint_block_item(SystemVerilogParser::Constraint_block_itemContext *ctx) = 0;
  virtual void exitConstraint_block_item(SystemVerilogParser::Constraint_block_itemContext *ctx) = 0;

  virtual void enterSolve_before_list(SystemVerilogParser::Solve_before_listContext *ctx) = 0;
  virtual void exitSolve_before_list(SystemVerilogParser::Solve_before_listContext *ctx) = 0;

  virtual void enterConstraint_primary(SystemVerilogParser::Constraint_primaryContext *ctx) = 0;
  virtual void exitConstraint_primary(SystemVerilogParser::Constraint_primaryContext *ctx) = 0;

  virtual void enterConstraint_expression(SystemVerilogParser::Constraint_expressionContext *ctx) = 0;
  virtual void exitConstraint_expression(SystemVerilogParser::Constraint_expressionContext *ctx) = 0;

  virtual void enterUniqueness_constraint(SystemVerilogParser::Uniqueness_constraintContext *ctx) = 0;
  virtual void exitUniqueness_constraint(SystemVerilogParser::Uniqueness_constraintContext *ctx) = 0;

  virtual void enterConstraint_set(SystemVerilogParser::Constraint_setContext *ctx) = 0;
  virtual void exitConstraint_set(SystemVerilogParser::Constraint_setContext *ctx) = 0;

  virtual void enterDist_list(SystemVerilogParser::Dist_listContext *ctx) = 0;
  virtual void exitDist_list(SystemVerilogParser::Dist_listContext *ctx) = 0;

  virtual void enterDist_item(SystemVerilogParser::Dist_itemContext *ctx) = 0;
  virtual void exitDist_item(SystemVerilogParser::Dist_itemContext *ctx) = 0;

  virtual void enterDist_weight(SystemVerilogParser::Dist_weightContext *ctx) = 0;
  virtual void exitDist_weight(SystemVerilogParser::Dist_weightContext *ctx) = 0;

  virtual void enterConstraint_prototype(SystemVerilogParser::Constraint_prototypeContext *ctx) = 0;
  virtual void exitConstraint_prototype(SystemVerilogParser::Constraint_prototypeContext *ctx) = 0;

  virtual void enterConstraint_prototype_qualifier(SystemVerilogParser::Constraint_prototype_qualifierContext *ctx) = 0;
  virtual void exitConstraint_prototype_qualifier(SystemVerilogParser::Constraint_prototype_qualifierContext *ctx) = 0;

  virtual void enterExtern_constraint_declaration(SystemVerilogParser::Extern_constraint_declarationContext *ctx) = 0;
  virtual void exitExtern_constraint_declaration(SystemVerilogParser::Extern_constraint_declarationContext *ctx) = 0;

  virtual void enterIdentifier_list(SystemVerilogParser::Identifier_listContext *ctx) = 0;
  virtual void exitIdentifier_list(SystemVerilogParser::Identifier_listContext *ctx) = 0;

  virtual void enterPackage_item(SystemVerilogParser::Package_itemContext *ctx) = 0;
  virtual void exitPackage_item(SystemVerilogParser::Package_itemContext *ctx) = 0;

  virtual void enterPackage_item_declaration(SystemVerilogParser::Package_item_declarationContext *ctx) = 0;
  virtual void exitPackage_item_declaration(SystemVerilogParser::Package_item_declarationContext *ctx) = 0;

  virtual void enterAnonymous_program(SystemVerilogParser::Anonymous_programContext *ctx) = 0;
  virtual void exitAnonymous_program(SystemVerilogParser::Anonymous_programContext *ctx) = 0;

  virtual void enterAnonymous_program_item(SystemVerilogParser::Anonymous_program_itemContext *ctx) = 0;
  virtual void exitAnonymous_program_item(SystemVerilogParser::Anonymous_program_itemContext *ctx) = 0;

  virtual void enterLocal_parameter_declaration(SystemVerilogParser::Local_parameter_declarationContext *ctx) = 0;
  virtual void exitLocal_parameter_declaration(SystemVerilogParser::Local_parameter_declarationContext *ctx) = 0;

  virtual void enterParameter_declaration(SystemVerilogParser::Parameter_declarationContext *ctx) = 0;
  virtual void exitParameter_declaration(SystemVerilogParser::Parameter_declarationContext *ctx) = 0;

  virtual void enterSpecparam_declaration(SystemVerilogParser::Specparam_declarationContext *ctx) = 0;
  virtual void exitSpecparam_declaration(SystemVerilogParser::Specparam_declarationContext *ctx) = 0;

  virtual void enterInout_declaration(SystemVerilogParser::Inout_declarationContext *ctx) = 0;
  virtual void exitInout_declaration(SystemVerilogParser::Inout_declarationContext *ctx) = 0;

  virtual void enterInput_declaration(SystemVerilogParser::Input_declarationContext *ctx) = 0;
  virtual void exitInput_declaration(SystemVerilogParser::Input_declarationContext *ctx) = 0;

  virtual void enterOutput_declaration(SystemVerilogParser::Output_declarationContext *ctx) = 0;
  virtual void exitOutput_declaration(SystemVerilogParser::Output_declarationContext *ctx) = 0;

  virtual void enterInterface_port_declaration(SystemVerilogParser::Interface_port_declarationContext *ctx) = 0;
  virtual void exitInterface_port_declaration(SystemVerilogParser::Interface_port_declarationContext *ctx) = 0;

  virtual void enterRef_declaration(SystemVerilogParser::Ref_declarationContext *ctx) = 0;
  virtual void exitRef_declaration(SystemVerilogParser::Ref_declarationContext *ctx) = 0;

  virtual void enterData_declaration(SystemVerilogParser::Data_declarationContext *ctx) = 0;
  virtual void exitData_declaration(SystemVerilogParser::Data_declarationContext *ctx) = 0;

  virtual void enterPackage_import_declaration(SystemVerilogParser::Package_import_declarationContext *ctx) = 0;
  virtual void exitPackage_import_declaration(SystemVerilogParser::Package_import_declarationContext *ctx) = 0;

  virtual void enterPackage_import_item(SystemVerilogParser::Package_import_itemContext *ctx) = 0;
  virtual void exitPackage_import_item(SystemVerilogParser::Package_import_itemContext *ctx) = 0;

  virtual void enterPackage_export_declaration(SystemVerilogParser::Package_export_declarationContext *ctx) = 0;
  virtual void exitPackage_export_declaration(SystemVerilogParser::Package_export_declarationContext *ctx) = 0;

  virtual void enterGenvar_declaration(SystemVerilogParser::Genvar_declarationContext *ctx) = 0;
  virtual void exitGenvar_declaration(SystemVerilogParser::Genvar_declarationContext *ctx) = 0;

  virtual void enterNet_declaration(SystemVerilogParser::Net_declarationContext *ctx) = 0;
  virtual void exitNet_declaration(SystemVerilogParser::Net_declarationContext *ctx) = 0;

  virtual void enterNet_id(SystemVerilogParser::Net_idContext *ctx) = 0;
  virtual void exitNet_id(SystemVerilogParser::Net_idContext *ctx) = 0;

  virtual void enterType_declaration(SystemVerilogParser::Type_declarationContext *ctx) = 0;
  virtual void exitType_declaration(SystemVerilogParser::Type_declarationContext *ctx) = 0;

  virtual void enterNet_type_declaration(SystemVerilogParser::Net_type_declarationContext *ctx) = 0;
  virtual void exitNet_type_declaration(SystemVerilogParser::Net_type_declarationContext *ctx) = 0;

  virtual void enterNet_type_decl_with(SystemVerilogParser::Net_type_decl_withContext *ctx) = 0;
  virtual void exitNet_type_decl_with(SystemVerilogParser::Net_type_decl_withContext *ctx) = 0;

  virtual void enterLifetime(SystemVerilogParser::LifetimeContext *ctx) = 0;
  virtual void exitLifetime(SystemVerilogParser::LifetimeContext *ctx) = 0;

  virtual void enterData_type(SystemVerilogParser::Data_typeContext *ctx) = 0;
  virtual void exitData_type(SystemVerilogParser::Data_typeContext *ctx) = 0;

  virtual void enterData_type_or_implicit(SystemVerilogParser::Data_type_or_implicitContext *ctx) = 0;
  virtual void exitData_type_or_implicit(SystemVerilogParser::Data_type_or_implicitContext *ctx) = 0;

  virtual void enterImplicit_data_type(SystemVerilogParser::Implicit_data_typeContext *ctx) = 0;
  virtual void exitImplicit_data_type(SystemVerilogParser::Implicit_data_typeContext *ctx) = 0;

  virtual void enterEnum_base_type(SystemVerilogParser::Enum_base_typeContext *ctx) = 0;
  virtual void exitEnum_base_type(SystemVerilogParser::Enum_base_typeContext *ctx) = 0;

  virtual void enterEnum_name_declaration(SystemVerilogParser::Enum_name_declarationContext *ctx) = 0;
  virtual void exitEnum_name_declaration(SystemVerilogParser::Enum_name_declarationContext *ctx) = 0;

  virtual void enterEnum_name_suffix_range(SystemVerilogParser::Enum_name_suffix_rangeContext *ctx) = 0;
  virtual void exitEnum_name_suffix_range(SystemVerilogParser::Enum_name_suffix_rangeContext *ctx) = 0;

  virtual void enterClass_scope(SystemVerilogParser::Class_scopeContext *ctx) = 0;
  virtual void exitClass_scope(SystemVerilogParser::Class_scopeContext *ctx) = 0;

  virtual void enterClass_type(SystemVerilogParser::Class_typeContext *ctx) = 0;
  virtual void exitClass_type(SystemVerilogParser::Class_typeContext *ctx) = 0;

  virtual void enterClass_ref(SystemVerilogParser::Class_refContext *ctx) = 0;
  virtual void exitClass_ref(SystemVerilogParser::Class_refContext *ctx) = 0;

  virtual void enterPackage_or_class_scope(SystemVerilogParser::Package_or_class_scopeContext *ctx) = 0;
  virtual void exitPackage_or_class_scope(SystemVerilogParser::Package_or_class_scopeContext *ctx) = 0;

  virtual void enterInteger_type(SystemVerilogParser::Integer_typeContext *ctx) = 0;
  virtual void exitInteger_type(SystemVerilogParser::Integer_typeContext *ctx) = 0;

  virtual void enterInteger_atom_type(SystemVerilogParser::Integer_atom_typeContext *ctx) = 0;
  virtual void exitInteger_atom_type(SystemVerilogParser::Integer_atom_typeContext *ctx) = 0;

  virtual void enterInteger_vector_type(SystemVerilogParser::Integer_vector_typeContext *ctx) = 0;
  virtual void exitInteger_vector_type(SystemVerilogParser::Integer_vector_typeContext *ctx) = 0;

  virtual void enterNon_integer_type(SystemVerilogParser::Non_integer_typeContext *ctx) = 0;
  virtual void exitNon_integer_type(SystemVerilogParser::Non_integer_typeContext *ctx) = 0;

  virtual void enterNet_type(SystemVerilogParser::Net_typeContext *ctx) = 0;
  virtual void exitNet_type(SystemVerilogParser::Net_typeContext *ctx) = 0;

  virtual void enterNet_port_type(SystemVerilogParser::Net_port_typeContext *ctx) = 0;
  virtual void exitNet_port_type(SystemVerilogParser::Net_port_typeContext *ctx) = 0;

  virtual void enterVariable_port_type(SystemVerilogParser::Variable_port_typeContext *ctx) = 0;
  virtual void exitVariable_port_type(SystemVerilogParser::Variable_port_typeContext *ctx) = 0;

  virtual void enterVar_data_type(SystemVerilogParser::Var_data_typeContext *ctx) = 0;
  virtual void exitVar_data_type(SystemVerilogParser::Var_data_typeContext *ctx) = 0;

  virtual void enterSigning(SystemVerilogParser::SigningContext *ctx) = 0;
  virtual void exitSigning(SystemVerilogParser::SigningContext *ctx) = 0;

  virtual void enterSimple_type(SystemVerilogParser::Simple_typeContext *ctx) = 0;
  virtual void exitSimple_type(SystemVerilogParser::Simple_typeContext *ctx) = 0;

  virtual void enterStruct_union_member(SystemVerilogParser::Struct_union_memberContext *ctx) = 0;
  virtual void exitStruct_union_member(SystemVerilogParser::Struct_union_memberContext *ctx) = 0;

  virtual void enterData_type_or_void(SystemVerilogParser::Data_type_or_voidContext *ctx) = 0;
  virtual void exitData_type_or_void(SystemVerilogParser::Data_type_or_voidContext *ctx) = 0;

  virtual void enterStruct_union(SystemVerilogParser::Struct_unionContext *ctx) = 0;
  virtual void exitStruct_union(SystemVerilogParser::Struct_unionContext *ctx) = 0;

  virtual void enterType_reference(SystemVerilogParser::Type_referenceContext *ctx) = 0;
  virtual void exitType_reference(SystemVerilogParser::Type_referenceContext *ctx) = 0;

  virtual void enterDrive_strength(SystemVerilogParser::Drive_strengthContext *ctx) = 0;
  virtual void exitDrive_strength(SystemVerilogParser::Drive_strengthContext *ctx) = 0;

  virtual void enterStrength0(SystemVerilogParser::Strength0Context *ctx) = 0;
  virtual void exitStrength0(SystemVerilogParser::Strength0Context *ctx) = 0;

  virtual void enterStrength1(SystemVerilogParser::Strength1Context *ctx) = 0;
  virtual void exitStrength1(SystemVerilogParser::Strength1Context *ctx) = 0;

  virtual void enterCharge_strength(SystemVerilogParser::Charge_strengthContext *ctx) = 0;
  virtual void exitCharge_strength(SystemVerilogParser::Charge_strengthContext *ctx) = 0;

  virtual void enterDelay3(SystemVerilogParser::Delay3Context *ctx) = 0;
  virtual void exitDelay3(SystemVerilogParser::Delay3Context *ctx) = 0;

  virtual void enterDelay2(SystemVerilogParser::Delay2Context *ctx) = 0;
  virtual void exitDelay2(SystemVerilogParser::Delay2Context *ctx) = 0;

  virtual void enterDelay_value(SystemVerilogParser::Delay_valueContext *ctx) = 0;
  virtual void exitDelay_value(SystemVerilogParser::Delay_valueContext *ctx) = 0;

  virtual void enterList_of_defparam_assignments(SystemVerilogParser::List_of_defparam_assignmentsContext *ctx) = 0;
  virtual void exitList_of_defparam_assignments(SystemVerilogParser::List_of_defparam_assignmentsContext *ctx) = 0;

  virtual void enterList_of_genvar_identifiers(SystemVerilogParser::List_of_genvar_identifiersContext *ctx) = 0;
  virtual void exitList_of_genvar_identifiers(SystemVerilogParser::List_of_genvar_identifiersContext *ctx) = 0;

  virtual void enterList_of_interface_identifiers(SystemVerilogParser::List_of_interface_identifiersContext *ctx) = 0;
  virtual void exitList_of_interface_identifiers(SystemVerilogParser::List_of_interface_identifiersContext *ctx) = 0;

  virtual void enterInterface_id(SystemVerilogParser::Interface_idContext *ctx) = 0;
  virtual void exitInterface_id(SystemVerilogParser::Interface_idContext *ctx) = 0;

  virtual void enterList_of_net_decl_assignments(SystemVerilogParser::List_of_net_decl_assignmentsContext *ctx) = 0;
  virtual void exitList_of_net_decl_assignments(SystemVerilogParser::List_of_net_decl_assignmentsContext *ctx) = 0;

  virtual void enterList_of_param_assignments(SystemVerilogParser::List_of_param_assignmentsContext *ctx) = 0;
  virtual void exitList_of_param_assignments(SystemVerilogParser::List_of_param_assignmentsContext *ctx) = 0;

  virtual void enterList_of_port_identifiers(SystemVerilogParser::List_of_port_identifiersContext *ctx) = 0;
  virtual void exitList_of_port_identifiers(SystemVerilogParser::List_of_port_identifiersContext *ctx) = 0;

  virtual void enterPort_id(SystemVerilogParser::Port_idContext *ctx) = 0;
  virtual void exitPort_id(SystemVerilogParser::Port_idContext *ctx) = 0;

  virtual void enterList_of_udp_port_identifiers(SystemVerilogParser::List_of_udp_port_identifiersContext *ctx) = 0;
  virtual void exitList_of_udp_port_identifiers(SystemVerilogParser::List_of_udp_port_identifiersContext *ctx) = 0;

  virtual void enterList_of_specparam_assignments(SystemVerilogParser::List_of_specparam_assignmentsContext *ctx) = 0;
  virtual void exitList_of_specparam_assignments(SystemVerilogParser::List_of_specparam_assignmentsContext *ctx) = 0;

  virtual void enterList_of_tf_variable_identifiers(SystemVerilogParser::List_of_tf_variable_identifiersContext *ctx) = 0;
  virtual void exitList_of_tf_variable_identifiers(SystemVerilogParser::List_of_tf_variable_identifiersContext *ctx) = 0;

  virtual void enterTf_var_id(SystemVerilogParser::Tf_var_idContext *ctx) = 0;
  virtual void exitTf_var_id(SystemVerilogParser::Tf_var_idContext *ctx) = 0;

  virtual void enterList_of_type_assignments(SystemVerilogParser::List_of_type_assignmentsContext *ctx) = 0;
  virtual void exitList_of_type_assignments(SystemVerilogParser::List_of_type_assignmentsContext *ctx) = 0;

  virtual void enterList_of_variable_decl_assignments(SystemVerilogParser::List_of_variable_decl_assignmentsContext *ctx) = 0;
  virtual void exitList_of_variable_decl_assignments(SystemVerilogParser::List_of_variable_decl_assignmentsContext *ctx) = 0;

  virtual void enterList_of_variable_identifiers(SystemVerilogParser::List_of_variable_identifiersContext *ctx) = 0;
  virtual void exitList_of_variable_identifiers(SystemVerilogParser::List_of_variable_identifiersContext *ctx) = 0;

  virtual void enterVar_id(SystemVerilogParser::Var_idContext *ctx) = 0;
  virtual void exitVar_id(SystemVerilogParser::Var_idContext *ctx) = 0;

  virtual void enterList_of_variable_port_identifiers(SystemVerilogParser::List_of_variable_port_identifiersContext *ctx) = 0;
  virtual void exitList_of_variable_port_identifiers(SystemVerilogParser::List_of_variable_port_identifiersContext *ctx) = 0;

  virtual void enterVar_port_id(SystemVerilogParser::Var_port_idContext *ctx) = 0;
  virtual void exitVar_port_id(SystemVerilogParser::Var_port_idContext *ctx) = 0;

  virtual void enterDefparam_assignment(SystemVerilogParser::Defparam_assignmentContext *ctx) = 0;
  virtual void exitDefparam_assignment(SystemVerilogParser::Defparam_assignmentContext *ctx) = 0;

  virtual void enterNet_decl_assignment(SystemVerilogParser::Net_decl_assignmentContext *ctx) = 0;
  virtual void exitNet_decl_assignment(SystemVerilogParser::Net_decl_assignmentContext *ctx) = 0;

  virtual void enterParam_assignment(SystemVerilogParser::Param_assignmentContext *ctx) = 0;
  virtual void exitParam_assignment(SystemVerilogParser::Param_assignmentContext *ctx) = 0;

  virtual void enterSpecparam_assignment(SystemVerilogParser::Specparam_assignmentContext *ctx) = 0;
  virtual void exitSpecparam_assignment(SystemVerilogParser::Specparam_assignmentContext *ctx) = 0;

  virtual void enterType_assignment(SystemVerilogParser::Type_assignmentContext *ctx) = 0;
  virtual void exitType_assignment(SystemVerilogParser::Type_assignmentContext *ctx) = 0;

  virtual void enterPulse_control_specparam(SystemVerilogParser::Pulse_control_specparamContext *ctx) = 0;
  virtual void exitPulse_control_specparam(SystemVerilogParser::Pulse_control_specparamContext *ctx) = 0;

  virtual void enterError_limit_value(SystemVerilogParser::Error_limit_valueContext *ctx) = 0;
  virtual void exitError_limit_value(SystemVerilogParser::Error_limit_valueContext *ctx) = 0;

  virtual void enterReject_limit_value(SystemVerilogParser::Reject_limit_valueContext *ctx) = 0;
  virtual void exitReject_limit_value(SystemVerilogParser::Reject_limit_valueContext *ctx) = 0;

  virtual void enterLimit_value(SystemVerilogParser::Limit_valueContext *ctx) = 0;
  virtual void exitLimit_value(SystemVerilogParser::Limit_valueContext *ctx) = 0;

  virtual void enterVariable_decl_assignment(SystemVerilogParser::Variable_decl_assignmentContext *ctx) = 0;
  virtual void exitVariable_decl_assignment(SystemVerilogParser::Variable_decl_assignmentContext *ctx) = 0;

  virtual void enterClass_new(SystemVerilogParser::Class_newContext *ctx) = 0;
  virtual void exitClass_new(SystemVerilogParser::Class_newContext *ctx) = 0;

  virtual void enterDynamic_array_new(SystemVerilogParser::Dynamic_array_newContext *ctx) = 0;
  virtual void exitDynamic_array_new(SystemVerilogParser::Dynamic_array_newContext *ctx) = 0;

  virtual void enterUnpacked_dimension(SystemVerilogParser::Unpacked_dimensionContext *ctx) = 0;
  virtual void exitUnpacked_dimension(SystemVerilogParser::Unpacked_dimensionContext *ctx) = 0;

  virtual void enterPacked_dimension(SystemVerilogParser::Packed_dimensionContext *ctx) = 0;
  virtual void exitPacked_dimension(SystemVerilogParser::Packed_dimensionContext *ctx) = 0;

  virtual void enterAssociative_dimension(SystemVerilogParser::Associative_dimensionContext *ctx) = 0;
  virtual void exitAssociative_dimension(SystemVerilogParser::Associative_dimensionContext *ctx) = 0;

  virtual void enterVariable_dimension(SystemVerilogParser::Variable_dimensionContext *ctx) = 0;
  virtual void exitVariable_dimension(SystemVerilogParser::Variable_dimensionContext *ctx) = 0;

  virtual void enterQueue_dimension(SystemVerilogParser::Queue_dimensionContext *ctx) = 0;
  virtual void exitQueue_dimension(SystemVerilogParser::Queue_dimensionContext *ctx) = 0;

  virtual void enterUnsized_dimension(SystemVerilogParser::Unsized_dimensionContext *ctx) = 0;
  virtual void exitUnsized_dimension(SystemVerilogParser::Unsized_dimensionContext *ctx) = 0;

  virtual void enterFunction_data_type_or_implicit(SystemVerilogParser::Function_data_type_or_implicitContext *ctx) = 0;
  virtual void exitFunction_data_type_or_implicit(SystemVerilogParser::Function_data_type_or_implicitContext *ctx) = 0;

  virtual void enterFunction_declaration(SystemVerilogParser::Function_declarationContext *ctx) = 0;
  virtual void exitFunction_declaration(SystemVerilogParser::Function_declarationContext *ctx) = 0;

  virtual void enterFunction_body_declaration(SystemVerilogParser::Function_body_declarationContext *ctx) = 0;
  virtual void exitFunction_body_declaration(SystemVerilogParser::Function_body_declarationContext *ctx) = 0;

  virtual void enterFunction_name(SystemVerilogParser::Function_nameContext *ctx) = 0;
  virtual void exitFunction_name(SystemVerilogParser::Function_nameContext *ctx) = 0;

  virtual void enterFunction_prototype(SystemVerilogParser::Function_prototypeContext *ctx) = 0;
  virtual void exitFunction_prototype(SystemVerilogParser::Function_prototypeContext *ctx) = 0;

  virtual void enterDpi_import_export(SystemVerilogParser::Dpi_import_exportContext *ctx) = 0;
  virtual void exitDpi_import_export(SystemVerilogParser::Dpi_import_exportContext *ctx) = 0;

  virtual void enterDpi_spec_string(SystemVerilogParser::Dpi_spec_stringContext *ctx) = 0;
  virtual void exitDpi_spec_string(SystemVerilogParser::Dpi_spec_stringContext *ctx) = 0;

  virtual void enterDpi_function_import_property(SystemVerilogParser::Dpi_function_import_propertyContext *ctx) = 0;
  virtual void exitDpi_function_import_property(SystemVerilogParser::Dpi_function_import_propertyContext *ctx) = 0;

  virtual void enterDpi_task_import_property(SystemVerilogParser::Dpi_task_import_propertyContext *ctx) = 0;
  virtual void exitDpi_task_import_property(SystemVerilogParser::Dpi_task_import_propertyContext *ctx) = 0;

  virtual void enterDpi_function_proto(SystemVerilogParser::Dpi_function_protoContext *ctx) = 0;
  virtual void exitDpi_function_proto(SystemVerilogParser::Dpi_function_protoContext *ctx) = 0;

  virtual void enterDpi_task_proto(SystemVerilogParser::Dpi_task_protoContext *ctx) = 0;
  virtual void exitDpi_task_proto(SystemVerilogParser::Dpi_task_protoContext *ctx) = 0;

  virtual void enterTask_declaration(SystemVerilogParser::Task_declarationContext *ctx) = 0;
  virtual void exitTask_declaration(SystemVerilogParser::Task_declarationContext *ctx) = 0;

  virtual void enterTask_body_declaration(SystemVerilogParser::Task_body_declarationContext *ctx) = 0;
  virtual void exitTask_body_declaration(SystemVerilogParser::Task_body_declarationContext *ctx) = 0;

  virtual void enterTask_name(SystemVerilogParser::Task_nameContext *ctx) = 0;
  virtual void exitTask_name(SystemVerilogParser::Task_nameContext *ctx) = 0;

  virtual void enterTf_item_declaration(SystemVerilogParser::Tf_item_declarationContext *ctx) = 0;
  virtual void exitTf_item_declaration(SystemVerilogParser::Tf_item_declarationContext *ctx) = 0;

  virtual void enterTf_port_list(SystemVerilogParser::Tf_port_listContext *ctx) = 0;
  virtual void exitTf_port_list(SystemVerilogParser::Tf_port_listContext *ctx) = 0;

  virtual void enterTf_port_item(SystemVerilogParser::Tf_port_itemContext *ctx) = 0;
  virtual void exitTf_port_item(SystemVerilogParser::Tf_port_itemContext *ctx) = 0;

  virtual void enterTf_port_id(SystemVerilogParser::Tf_port_idContext *ctx) = 0;
  virtual void exitTf_port_id(SystemVerilogParser::Tf_port_idContext *ctx) = 0;

  virtual void enterTf_port_direction(SystemVerilogParser::Tf_port_directionContext *ctx) = 0;
  virtual void exitTf_port_direction(SystemVerilogParser::Tf_port_directionContext *ctx) = 0;

  virtual void enterTf_port_declaration(SystemVerilogParser::Tf_port_declarationContext *ctx) = 0;
  virtual void exitTf_port_declaration(SystemVerilogParser::Tf_port_declarationContext *ctx) = 0;

  virtual void enterTask_prototype(SystemVerilogParser::Task_prototypeContext *ctx) = 0;
  virtual void exitTask_prototype(SystemVerilogParser::Task_prototypeContext *ctx) = 0;

  virtual void enterBlock_item_declaration(SystemVerilogParser::Block_item_declarationContext *ctx) = 0;
  virtual void exitBlock_item_declaration(SystemVerilogParser::Block_item_declarationContext *ctx) = 0;

  virtual void enterModport_declaration(SystemVerilogParser::Modport_declarationContext *ctx) = 0;
  virtual void exitModport_declaration(SystemVerilogParser::Modport_declarationContext *ctx) = 0;

  virtual void enterModport_item(SystemVerilogParser::Modport_itemContext *ctx) = 0;
  virtual void exitModport_item(SystemVerilogParser::Modport_itemContext *ctx) = 0;

  virtual void enterModport_ports_declaration(SystemVerilogParser::Modport_ports_declarationContext *ctx) = 0;
  virtual void exitModport_ports_declaration(SystemVerilogParser::Modport_ports_declarationContext *ctx) = 0;

  virtual void enterModport_clocking_declaration(SystemVerilogParser::Modport_clocking_declarationContext *ctx) = 0;
  virtual void exitModport_clocking_declaration(SystemVerilogParser::Modport_clocking_declarationContext *ctx) = 0;

  virtual void enterModport_simple_ports_declaration(SystemVerilogParser::Modport_simple_ports_declarationContext *ctx) = 0;
  virtual void exitModport_simple_ports_declaration(SystemVerilogParser::Modport_simple_ports_declarationContext *ctx) = 0;

  virtual void enterModport_simple_port(SystemVerilogParser::Modport_simple_portContext *ctx) = 0;
  virtual void exitModport_simple_port(SystemVerilogParser::Modport_simple_portContext *ctx) = 0;

  virtual void enterModport_tf_ports_declaration(SystemVerilogParser::Modport_tf_ports_declarationContext *ctx) = 0;
  virtual void exitModport_tf_ports_declaration(SystemVerilogParser::Modport_tf_ports_declarationContext *ctx) = 0;

  virtual void enterModport_tf_port(SystemVerilogParser::Modport_tf_portContext *ctx) = 0;
  virtual void exitModport_tf_port(SystemVerilogParser::Modport_tf_portContext *ctx) = 0;

  virtual void enterImport_export(SystemVerilogParser::Import_exportContext *ctx) = 0;
  virtual void exitImport_export(SystemVerilogParser::Import_exportContext *ctx) = 0;

  virtual void enterConcurrent_assertion_item(SystemVerilogParser::Concurrent_assertion_itemContext *ctx) = 0;
  virtual void exitConcurrent_assertion_item(SystemVerilogParser::Concurrent_assertion_itemContext *ctx) = 0;

  virtual void enterBlock_label(SystemVerilogParser::Block_labelContext *ctx) = 0;
  virtual void exitBlock_label(SystemVerilogParser::Block_labelContext *ctx) = 0;

  virtual void enterConcurrent_assertion_statement(SystemVerilogParser::Concurrent_assertion_statementContext *ctx) = 0;
  virtual void exitConcurrent_assertion_statement(SystemVerilogParser::Concurrent_assertion_statementContext *ctx) = 0;

  virtual void enterAssert_property_statement(SystemVerilogParser::Assert_property_statementContext *ctx) = 0;
  virtual void exitAssert_property_statement(SystemVerilogParser::Assert_property_statementContext *ctx) = 0;

  virtual void enterAssume_property_statement(SystemVerilogParser::Assume_property_statementContext *ctx) = 0;
  virtual void exitAssume_property_statement(SystemVerilogParser::Assume_property_statementContext *ctx) = 0;

  virtual void enterCover_property_statement(SystemVerilogParser::Cover_property_statementContext *ctx) = 0;
  virtual void exitCover_property_statement(SystemVerilogParser::Cover_property_statementContext *ctx) = 0;

  virtual void enterExpect_property_statement(SystemVerilogParser::Expect_property_statementContext *ctx) = 0;
  virtual void exitExpect_property_statement(SystemVerilogParser::Expect_property_statementContext *ctx) = 0;

  virtual void enterCover_sequence_statement(SystemVerilogParser::Cover_sequence_statementContext *ctx) = 0;
  virtual void exitCover_sequence_statement(SystemVerilogParser::Cover_sequence_statementContext *ctx) = 0;

  virtual void enterRestrict_property_statement(SystemVerilogParser::Restrict_property_statementContext *ctx) = 0;
  virtual void exitRestrict_property_statement(SystemVerilogParser::Restrict_property_statementContext *ctx) = 0;

  virtual void enterProperty_instance(SystemVerilogParser::Property_instanceContext *ctx) = 0;
  virtual void exitProperty_instance(SystemVerilogParser::Property_instanceContext *ctx) = 0;

  virtual void enterProp_arg_list(SystemVerilogParser::Prop_arg_listContext *ctx) = 0;
  virtual void exitProp_arg_list(SystemVerilogParser::Prop_arg_listContext *ctx) = 0;

  virtual void enterProperty_list_of_arguments(SystemVerilogParser::Property_list_of_argumentsContext *ctx) = 0;
  virtual void exitProperty_list_of_arguments(SystemVerilogParser::Property_list_of_argumentsContext *ctx) = 0;

  virtual void enterProp_ordered_arg(SystemVerilogParser::Prop_ordered_argContext *ctx) = 0;
  virtual void exitProp_ordered_arg(SystemVerilogParser::Prop_ordered_argContext *ctx) = 0;

  virtual void enterProp_named_arg(SystemVerilogParser::Prop_named_argContext *ctx) = 0;
  virtual void exitProp_named_arg(SystemVerilogParser::Prop_named_argContext *ctx) = 0;

  virtual void enterProperty_actual_arg(SystemVerilogParser::Property_actual_argContext *ctx) = 0;
  virtual void exitProperty_actual_arg(SystemVerilogParser::Property_actual_argContext *ctx) = 0;

  virtual void enterAssertion_item_declaration(SystemVerilogParser::Assertion_item_declarationContext *ctx) = 0;
  virtual void exitAssertion_item_declaration(SystemVerilogParser::Assertion_item_declarationContext *ctx) = 0;

  virtual void enterProperty_declaration(SystemVerilogParser::Property_declarationContext *ctx) = 0;
  virtual void exitProperty_declaration(SystemVerilogParser::Property_declarationContext *ctx) = 0;

  virtual void enterProperty_name(SystemVerilogParser::Property_nameContext *ctx) = 0;
  virtual void exitProperty_name(SystemVerilogParser::Property_nameContext *ctx) = 0;

  virtual void enterProp_port_list(SystemVerilogParser::Prop_port_listContext *ctx) = 0;
  virtual void exitProp_port_list(SystemVerilogParser::Prop_port_listContext *ctx) = 0;

  virtual void enterProperty_port_list(SystemVerilogParser::Property_port_listContext *ctx) = 0;
  virtual void exitProperty_port_list(SystemVerilogParser::Property_port_listContext *ctx) = 0;

  virtual void enterProperty_port_item(SystemVerilogParser::Property_port_itemContext *ctx) = 0;
  virtual void exitProperty_port_item(SystemVerilogParser::Property_port_itemContext *ctx) = 0;

  virtual void enterProp_port_item_local(SystemVerilogParser::Prop_port_item_localContext *ctx) = 0;
  virtual void exitProp_port_item_local(SystemVerilogParser::Prop_port_item_localContext *ctx) = 0;

  virtual void enterProperty_lvar_port_direction(SystemVerilogParser::Property_lvar_port_directionContext *ctx) = 0;
  virtual void exitProperty_lvar_port_direction(SystemVerilogParser::Property_lvar_port_directionContext *ctx) = 0;

  virtual void enterProperty_formal_type(SystemVerilogParser::Property_formal_typeContext *ctx) = 0;
  virtual void exitProperty_formal_type(SystemVerilogParser::Property_formal_typeContext *ctx) = 0;

  virtual void enterProperty_spec(SystemVerilogParser::Property_specContext *ctx) = 0;
  virtual void exitProperty_spec(SystemVerilogParser::Property_specContext *ctx) = 0;

  virtual void enterProperty_expr(SystemVerilogParser::Property_exprContext *ctx) = 0;
  virtual void exitProperty_expr(SystemVerilogParser::Property_exprContext *ctx) = 0;

  virtual void enterProperty_case_item(SystemVerilogParser::Property_case_itemContext *ctx) = 0;
  virtual void exitProperty_case_item(SystemVerilogParser::Property_case_itemContext *ctx) = 0;

  virtual void enterSequence_declaration(SystemVerilogParser::Sequence_declarationContext *ctx) = 0;
  virtual void exitSequence_declaration(SystemVerilogParser::Sequence_declarationContext *ctx) = 0;

  virtual void enterSequence_name(SystemVerilogParser::Sequence_nameContext *ctx) = 0;
  virtual void exitSequence_name(SystemVerilogParser::Sequence_nameContext *ctx) = 0;

  virtual void enterSeq_port_list(SystemVerilogParser::Seq_port_listContext *ctx) = 0;
  virtual void exitSeq_port_list(SystemVerilogParser::Seq_port_listContext *ctx) = 0;

  virtual void enterSequence_port_list(SystemVerilogParser::Sequence_port_listContext *ctx) = 0;
  virtual void exitSequence_port_list(SystemVerilogParser::Sequence_port_listContext *ctx) = 0;

  virtual void enterSequence_port_item(SystemVerilogParser::Sequence_port_itemContext *ctx) = 0;
  virtual void exitSequence_port_item(SystemVerilogParser::Sequence_port_itemContext *ctx) = 0;

  virtual void enterSeq_port_item_local(SystemVerilogParser::Seq_port_item_localContext *ctx) = 0;
  virtual void exitSeq_port_item_local(SystemVerilogParser::Seq_port_item_localContext *ctx) = 0;

  virtual void enterSequence_lvar_port_direction(SystemVerilogParser::Sequence_lvar_port_directionContext *ctx) = 0;
  virtual void exitSequence_lvar_port_direction(SystemVerilogParser::Sequence_lvar_port_directionContext *ctx) = 0;

  virtual void enterSequence_formal_type(SystemVerilogParser::Sequence_formal_typeContext *ctx) = 0;
  virtual void exitSequence_formal_type(SystemVerilogParser::Sequence_formal_typeContext *ctx) = 0;

  virtual void enterSequence_expr(SystemVerilogParser::Sequence_exprContext *ctx) = 0;
  virtual void exitSequence_expr(SystemVerilogParser::Sequence_exprContext *ctx) = 0;

  virtual void enterCycle_delay_range(SystemVerilogParser::Cycle_delay_rangeContext *ctx) = 0;
  virtual void exitCycle_delay_range(SystemVerilogParser::Cycle_delay_rangeContext *ctx) = 0;

  virtual void enterSequence_method_call(SystemVerilogParser::Sequence_method_callContext *ctx) = 0;
  virtual void exitSequence_method_call(SystemVerilogParser::Sequence_method_callContext *ctx) = 0;

  virtual void enterSequence_match_item(SystemVerilogParser::Sequence_match_itemContext *ctx) = 0;
  virtual void exitSequence_match_item(SystemVerilogParser::Sequence_match_itemContext *ctx) = 0;

  virtual void enterSequence_instance(SystemVerilogParser::Sequence_instanceContext *ctx) = 0;
  virtual void exitSequence_instance(SystemVerilogParser::Sequence_instanceContext *ctx) = 0;

  virtual void enterSeq_arg_list(SystemVerilogParser::Seq_arg_listContext *ctx) = 0;
  virtual void exitSeq_arg_list(SystemVerilogParser::Seq_arg_listContext *ctx) = 0;

  virtual void enterSequence_list_of_arguments(SystemVerilogParser::Sequence_list_of_argumentsContext *ctx) = 0;
  virtual void exitSequence_list_of_arguments(SystemVerilogParser::Sequence_list_of_argumentsContext *ctx) = 0;

  virtual void enterSeq_ordered_arg(SystemVerilogParser::Seq_ordered_argContext *ctx) = 0;
  virtual void exitSeq_ordered_arg(SystemVerilogParser::Seq_ordered_argContext *ctx) = 0;

  virtual void enterSeq_named_arg(SystemVerilogParser::Seq_named_argContext *ctx) = 0;
  virtual void exitSeq_named_arg(SystemVerilogParser::Seq_named_argContext *ctx) = 0;

  virtual void enterSequence_actual_arg(SystemVerilogParser::Sequence_actual_argContext *ctx) = 0;
  virtual void exitSequence_actual_arg(SystemVerilogParser::Sequence_actual_argContext *ctx) = 0;

  virtual void enterBoolean_abbrev(SystemVerilogParser::Boolean_abbrevContext *ctx) = 0;
  virtual void exitBoolean_abbrev(SystemVerilogParser::Boolean_abbrevContext *ctx) = 0;

  virtual void enterSequence_abbrev(SystemVerilogParser::Sequence_abbrevContext *ctx) = 0;
  virtual void exitSequence_abbrev(SystemVerilogParser::Sequence_abbrevContext *ctx) = 0;

  virtual void enterConsecutive_repetition(SystemVerilogParser::Consecutive_repetitionContext *ctx) = 0;
  virtual void exitConsecutive_repetition(SystemVerilogParser::Consecutive_repetitionContext *ctx) = 0;

  virtual void enterNon_consecutive_repetition(SystemVerilogParser::Non_consecutive_repetitionContext *ctx) = 0;
  virtual void exitNon_consecutive_repetition(SystemVerilogParser::Non_consecutive_repetitionContext *ctx) = 0;

  virtual void enterGoto_repetition(SystemVerilogParser::Goto_repetitionContext *ctx) = 0;
  virtual void exitGoto_repetition(SystemVerilogParser::Goto_repetitionContext *ctx) = 0;

  virtual void enterConst_or_range_expression(SystemVerilogParser::Const_or_range_expressionContext *ctx) = 0;
  virtual void exitConst_or_range_expression(SystemVerilogParser::Const_or_range_expressionContext *ctx) = 0;

  virtual void enterCycle_delay_const_range_expression(SystemVerilogParser::Cycle_delay_const_range_expressionContext *ctx) = 0;
  virtual void exitCycle_delay_const_range_expression(SystemVerilogParser::Cycle_delay_const_range_expressionContext *ctx) = 0;

  virtual void enterExpression_or_dist(SystemVerilogParser::Expression_or_distContext *ctx) = 0;
  virtual void exitExpression_or_dist(SystemVerilogParser::Expression_or_distContext *ctx) = 0;

  virtual void enterAssertion_variable_declaration(SystemVerilogParser::Assertion_variable_declarationContext *ctx) = 0;
  virtual void exitAssertion_variable_declaration(SystemVerilogParser::Assertion_variable_declarationContext *ctx) = 0;

  virtual void enterCovergroup_declaration(SystemVerilogParser::Covergroup_declarationContext *ctx) = 0;
  virtual void exitCovergroup_declaration(SystemVerilogParser::Covergroup_declarationContext *ctx) = 0;

  virtual void enterCovergroup_name(SystemVerilogParser::Covergroup_nameContext *ctx) = 0;
  virtual void exitCovergroup_name(SystemVerilogParser::Covergroup_nameContext *ctx) = 0;

  virtual void enterCoverage_spec_or_option(SystemVerilogParser::Coverage_spec_or_optionContext *ctx) = 0;
  virtual void exitCoverage_spec_or_option(SystemVerilogParser::Coverage_spec_or_optionContext *ctx) = 0;

  virtual void enterCoverage_option(SystemVerilogParser::Coverage_optionContext *ctx) = 0;
  virtual void exitCoverage_option(SystemVerilogParser::Coverage_optionContext *ctx) = 0;

  virtual void enterCoverage_spec(SystemVerilogParser::Coverage_specContext *ctx) = 0;
  virtual void exitCoverage_spec(SystemVerilogParser::Coverage_specContext *ctx) = 0;

  virtual void enterCoverage_event(SystemVerilogParser::Coverage_eventContext *ctx) = 0;
  virtual void exitCoverage_event(SystemVerilogParser::Coverage_eventContext *ctx) = 0;

  virtual void enterBlock_event_expression(SystemVerilogParser::Block_event_expressionContext *ctx) = 0;
  virtual void exitBlock_event_expression(SystemVerilogParser::Block_event_expressionContext *ctx) = 0;

  virtual void enterHierarchical_btf_identifier(SystemVerilogParser::Hierarchical_btf_identifierContext *ctx) = 0;
  virtual void exitHierarchical_btf_identifier(SystemVerilogParser::Hierarchical_btf_identifierContext *ctx) = 0;

  virtual void enterCover_point(SystemVerilogParser::Cover_pointContext *ctx) = 0;
  virtual void exitCover_point(SystemVerilogParser::Cover_pointContext *ctx) = 0;

  virtual void enterCover_point_label(SystemVerilogParser::Cover_point_labelContext *ctx) = 0;
  virtual void exitCover_point_label(SystemVerilogParser::Cover_point_labelContext *ctx) = 0;

  virtual void enterBins_or_empty(SystemVerilogParser::Bins_or_emptyContext *ctx) = 0;
  virtual void exitBins_or_empty(SystemVerilogParser::Bins_or_emptyContext *ctx) = 0;

  virtual void enterBins_or_options(SystemVerilogParser::Bins_or_optionsContext *ctx) = 0;
  virtual void exitBins_or_options(SystemVerilogParser::Bins_or_optionsContext *ctx) = 0;

  virtual void enterBin_array_size(SystemVerilogParser::Bin_array_sizeContext *ctx) = 0;
  virtual void exitBin_array_size(SystemVerilogParser::Bin_array_sizeContext *ctx) = 0;

  virtual void enterBins_keyword(SystemVerilogParser::Bins_keywordContext *ctx) = 0;
  virtual void exitBins_keyword(SystemVerilogParser::Bins_keywordContext *ctx) = 0;

  virtual void enterTrans_list(SystemVerilogParser::Trans_listContext *ctx) = 0;
  virtual void exitTrans_list(SystemVerilogParser::Trans_listContext *ctx) = 0;

  virtual void enterTrans_set(SystemVerilogParser::Trans_setContext *ctx) = 0;
  virtual void exitTrans_set(SystemVerilogParser::Trans_setContext *ctx) = 0;

  virtual void enterTrans_range_list(SystemVerilogParser::Trans_range_listContext *ctx) = 0;
  virtual void exitTrans_range_list(SystemVerilogParser::Trans_range_listContext *ctx) = 0;

  virtual void enterTrans_item(SystemVerilogParser::Trans_itemContext *ctx) = 0;
  virtual void exitTrans_item(SystemVerilogParser::Trans_itemContext *ctx) = 0;

  virtual void enterRepeat_range(SystemVerilogParser::Repeat_rangeContext *ctx) = 0;
  virtual void exitRepeat_range(SystemVerilogParser::Repeat_rangeContext *ctx) = 0;

  virtual void enterCover_cross(SystemVerilogParser::Cover_crossContext *ctx) = 0;
  virtual void exitCover_cross(SystemVerilogParser::Cover_crossContext *ctx) = 0;

  virtual void enterCross_label(SystemVerilogParser::Cross_labelContext *ctx) = 0;
  virtual void exitCross_label(SystemVerilogParser::Cross_labelContext *ctx) = 0;

  virtual void enterList_of_cross_items(SystemVerilogParser::List_of_cross_itemsContext *ctx) = 0;
  virtual void exitList_of_cross_items(SystemVerilogParser::List_of_cross_itemsContext *ctx) = 0;

  virtual void enterCross_item(SystemVerilogParser::Cross_itemContext *ctx) = 0;
  virtual void exitCross_item(SystemVerilogParser::Cross_itemContext *ctx) = 0;

  virtual void enterCross_body(SystemVerilogParser::Cross_bodyContext *ctx) = 0;
  virtual void exitCross_body(SystemVerilogParser::Cross_bodyContext *ctx) = 0;

  virtual void enterCross_body_item(SystemVerilogParser::Cross_body_itemContext *ctx) = 0;
  virtual void exitCross_body_item(SystemVerilogParser::Cross_body_itemContext *ctx) = 0;

  virtual void enterBins_selection_or_option(SystemVerilogParser::Bins_selection_or_optionContext *ctx) = 0;
  virtual void exitBins_selection_or_option(SystemVerilogParser::Bins_selection_or_optionContext *ctx) = 0;

  virtual void enterBins_selection(SystemVerilogParser::Bins_selectionContext *ctx) = 0;
  virtual void exitBins_selection(SystemVerilogParser::Bins_selectionContext *ctx) = 0;

  virtual void enterSelect_expression(SystemVerilogParser::Select_expressionContext *ctx) = 0;
  virtual void exitSelect_expression(SystemVerilogParser::Select_expressionContext *ctx) = 0;

  virtual void enterSelect_condition(SystemVerilogParser::Select_conditionContext *ctx) = 0;
  virtual void exitSelect_condition(SystemVerilogParser::Select_conditionContext *ctx) = 0;

  virtual void enterBins_expression(SystemVerilogParser::Bins_expressionContext *ctx) = 0;
  virtual void exitBins_expression(SystemVerilogParser::Bins_expressionContext *ctx) = 0;

  virtual void enterCovergroup_range_list(SystemVerilogParser::Covergroup_range_listContext *ctx) = 0;
  virtual void exitCovergroup_range_list(SystemVerilogParser::Covergroup_range_listContext *ctx) = 0;

  virtual void enterCovergroup_value_range(SystemVerilogParser::Covergroup_value_rangeContext *ctx) = 0;
  virtual void exitCovergroup_value_range(SystemVerilogParser::Covergroup_value_rangeContext *ctx) = 0;

  virtual void enterWith_covergroup_expression(SystemVerilogParser::With_covergroup_expressionContext *ctx) = 0;
  virtual void exitWith_covergroup_expression(SystemVerilogParser::With_covergroup_expressionContext *ctx) = 0;

  virtual void enterSet_covergroup_expression(SystemVerilogParser::Set_covergroup_expressionContext *ctx) = 0;
  virtual void exitSet_covergroup_expression(SystemVerilogParser::Set_covergroup_expressionContext *ctx) = 0;

  virtual void enterInteger_covergroup_expression(SystemVerilogParser::Integer_covergroup_expressionContext *ctx) = 0;
  virtual void exitInteger_covergroup_expression(SystemVerilogParser::Integer_covergroup_expressionContext *ctx) = 0;

  virtual void enterCross_set_expression(SystemVerilogParser::Cross_set_expressionContext *ctx) = 0;
  virtual void exitCross_set_expression(SystemVerilogParser::Cross_set_expressionContext *ctx) = 0;

  virtual void enterCovergroup_expression(SystemVerilogParser::Covergroup_expressionContext *ctx) = 0;
  virtual void exitCovergroup_expression(SystemVerilogParser::Covergroup_expressionContext *ctx) = 0;

  virtual void enterLet_declaration(SystemVerilogParser::Let_declarationContext *ctx) = 0;
  virtual void exitLet_declaration(SystemVerilogParser::Let_declarationContext *ctx) = 0;

  virtual void enterLet_ports(SystemVerilogParser::Let_portsContext *ctx) = 0;
  virtual void exitLet_ports(SystemVerilogParser::Let_portsContext *ctx) = 0;

  virtual void enterLet_identifier(SystemVerilogParser::Let_identifierContext *ctx) = 0;
  virtual void exitLet_identifier(SystemVerilogParser::Let_identifierContext *ctx) = 0;

  virtual void enterLet_port_list(SystemVerilogParser::Let_port_listContext *ctx) = 0;
  virtual void exitLet_port_list(SystemVerilogParser::Let_port_listContext *ctx) = 0;

  virtual void enterLet_port_item(SystemVerilogParser::Let_port_itemContext *ctx) = 0;
  virtual void exitLet_port_item(SystemVerilogParser::Let_port_itemContext *ctx) = 0;

  virtual void enterLet_formal_type(SystemVerilogParser::Let_formal_typeContext *ctx) = 0;
  virtual void exitLet_formal_type(SystemVerilogParser::Let_formal_typeContext *ctx) = 0;

  virtual void enterGate_instantiation(SystemVerilogParser::Gate_instantiationContext *ctx) = 0;
  virtual void exitGate_instantiation(SystemVerilogParser::Gate_instantiationContext *ctx) = 0;

  virtual void enterCmos_switch_instance(SystemVerilogParser::Cmos_switch_instanceContext *ctx) = 0;
  virtual void exitCmos_switch_instance(SystemVerilogParser::Cmos_switch_instanceContext *ctx) = 0;

  virtual void enterEnable_gate_instance(SystemVerilogParser::Enable_gate_instanceContext *ctx) = 0;
  virtual void exitEnable_gate_instance(SystemVerilogParser::Enable_gate_instanceContext *ctx) = 0;

  virtual void enterMos_switch_instance(SystemVerilogParser::Mos_switch_instanceContext *ctx) = 0;
  virtual void exitMos_switch_instance(SystemVerilogParser::Mos_switch_instanceContext *ctx) = 0;

  virtual void enterN_input_gate_instance(SystemVerilogParser::N_input_gate_instanceContext *ctx) = 0;
  virtual void exitN_input_gate_instance(SystemVerilogParser::N_input_gate_instanceContext *ctx) = 0;

  virtual void enterN_output_gate_instance(SystemVerilogParser::N_output_gate_instanceContext *ctx) = 0;
  virtual void exitN_output_gate_instance(SystemVerilogParser::N_output_gate_instanceContext *ctx) = 0;

  virtual void enterPass_switch_instance(SystemVerilogParser::Pass_switch_instanceContext *ctx) = 0;
  virtual void exitPass_switch_instance(SystemVerilogParser::Pass_switch_instanceContext *ctx) = 0;

  virtual void enterPass_enable_switch_instance(SystemVerilogParser::Pass_enable_switch_instanceContext *ctx) = 0;
  virtual void exitPass_enable_switch_instance(SystemVerilogParser::Pass_enable_switch_instanceContext *ctx) = 0;

  virtual void enterPull_gate_instance(SystemVerilogParser::Pull_gate_instanceContext *ctx) = 0;
  virtual void exitPull_gate_instance(SystemVerilogParser::Pull_gate_instanceContext *ctx) = 0;

  virtual void enterPulldown_strength(SystemVerilogParser::Pulldown_strengthContext *ctx) = 0;
  virtual void exitPulldown_strength(SystemVerilogParser::Pulldown_strengthContext *ctx) = 0;

  virtual void enterPullup_strength(SystemVerilogParser::Pullup_strengthContext *ctx) = 0;
  virtual void exitPullup_strength(SystemVerilogParser::Pullup_strengthContext *ctx) = 0;

  virtual void enterEnable_terminal(SystemVerilogParser::Enable_terminalContext *ctx) = 0;
  virtual void exitEnable_terminal(SystemVerilogParser::Enable_terminalContext *ctx) = 0;

  virtual void enterInout_terminal(SystemVerilogParser::Inout_terminalContext *ctx) = 0;
  virtual void exitInout_terminal(SystemVerilogParser::Inout_terminalContext *ctx) = 0;

  virtual void enterInput_terminal(SystemVerilogParser::Input_terminalContext *ctx) = 0;
  virtual void exitInput_terminal(SystemVerilogParser::Input_terminalContext *ctx) = 0;

  virtual void enterNcontrol_terminal(SystemVerilogParser::Ncontrol_terminalContext *ctx) = 0;
  virtual void exitNcontrol_terminal(SystemVerilogParser::Ncontrol_terminalContext *ctx) = 0;

  virtual void enterOutput_terminal(SystemVerilogParser::Output_terminalContext *ctx) = 0;
  virtual void exitOutput_terminal(SystemVerilogParser::Output_terminalContext *ctx) = 0;

  virtual void enterPcontrol_terminal(SystemVerilogParser::Pcontrol_terminalContext *ctx) = 0;
  virtual void exitPcontrol_terminal(SystemVerilogParser::Pcontrol_terminalContext *ctx) = 0;

  virtual void enterCmos_switchtype(SystemVerilogParser::Cmos_switchtypeContext *ctx) = 0;
  virtual void exitCmos_switchtype(SystemVerilogParser::Cmos_switchtypeContext *ctx) = 0;

  virtual void enterEnable_gatetype(SystemVerilogParser::Enable_gatetypeContext *ctx) = 0;
  virtual void exitEnable_gatetype(SystemVerilogParser::Enable_gatetypeContext *ctx) = 0;

  virtual void enterMos_switchtype(SystemVerilogParser::Mos_switchtypeContext *ctx) = 0;
  virtual void exitMos_switchtype(SystemVerilogParser::Mos_switchtypeContext *ctx) = 0;

  virtual void enterN_input_gatetype(SystemVerilogParser::N_input_gatetypeContext *ctx) = 0;
  virtual void exitN_input_gatetype(SystemVerilogParser::N_input_gatetypeContext *ctx) = 0;

  virtual void enterN_output_gatetype(SystemVerilogParser::N_output_gatetypeContext *ctx) = 0;
  virtual void exitN_output_gatetype(SystemVerilogParser::N_output_gatetypeContext *ctx) = 0;

  virtual void enterPass_en_switchtype(SystemVerilogParser::Pass_en_switchtypeContext *ctx) = 0;
  virtual void exitPass_en_switchtype(SystemVerilogParser::Pass_en_switchtypeContext *ctx) = 0;

  virtual void enterPass_switchtype(SystemVerilogParser::Pass_switchtypeContext *ctx) = 0;
  virtual void exitPass_switchtype(SystemVerilogParser::Pass_switchtypeContext *ctx) = 0;

  virtual void enterModule_program_interface_instantiation(SystemVerilogParser::Module_program_interface_instantiationContext *ctx) = 0;
  virtual void exitModule_program_interface_instantiation(SystemVerilogParser::Module_program_interface_instantiationContext *ctx) = 0;

  virtual void enterParameter_value_assignment(SystemVerilogParser::Parameter_value_assignmentContext *ctx) = 0;
  virtual void exitParameter_value_assignment(SystemVerilogParser::Parameter_value_assignmentContext *ctx) = 0;

  virtual void enterList_of_parameter_assignments(SystemVerilogParser::List_of_parameter_assignmentsContext *ctx) = 0;
  virtual void exitList_of_parameter_assignments(SystemVerilogParser::List_of_parameter_assignmentsContext *ctx) = 0;

  virtual void enterOrdered_parameter_assignment(SystemVerilogParser::Ordered_parameter_assignmentContext *ctx) = 0;
  virtual void exitOrdered_parameter_assignment(SystemVerilogParser::Ordered_parameter_assignmentContext *ctx) = 0;

  virtual void enterNamed_parameter_assignment(SystemVerilogParser::Named_parameter_assignmentContext *ctx) = 0;
  virtual void exitNamed_parameter_assignment(SystemVerilogParser::Named_parameter_assignmentContext *ctx) = 0;

  virtual void enterHierarchical_instance(SystemVerilogParser::Hierarchical_instanceContext *ctx) = 0;
  virtual void exitHierarchical_instance(SystemVerilogParser::Hierarchical_instanceContext *ctx) = 0;

  virtual void enterName_of_instance(SystemVerilogParser::Name_of_instanceContext *ctx) = 0;
  virtual void exitName_of_instance(SystemVerilogParser::Name_of_instanceContext *ctx) = 0;

  virtual void enterList_of_port_connections(SystemVerilogParser::List_of_port_connectionsContext *ctx) = 0;
  virtual void exitList_of_port_connections(SystemVerilogParser::List_of_port_connectionsContext *ctx) = 0;

  virtual void enterOrdered_port_connection(SystemVerilogParser::Ordered_port_connectionContext *ctx) = 0;
  virtual void exitOrdered_port_connection(SystemVerilogParser::Ordered_port_connectionContext *ctx) = 0;

  virtual void enterNamed_port_connection(SystemVerilogParser::Named_port_connectionContext *ctx) = 0;
  virtual void exitNamed_port_connection(SystemVerilogParser::Named_port_connectionContext *ctx) = 0;

  virtual void enterPort_assign(SystemVerilogParser::Port_assignContext *ctx) = 0;
  virtual void exitPort_assign(SystemVerilogParser::Port_assignContext *ctx) = 0;

  virtual void enterChecker_instantiation(SystemVerilogParser::Checker_instantiationContext *ctx) = 0;
  virtual void exitChecker_instantiation(SystemVerilogParser::Checker_instantiationContext *ctx) = 0;

  virtual void enterList_of_checker_port_connections(SystemVerilogParser::List_of_checker_port_connectionsContext *ctx) = 0;
  virtual void exitList_of_checker_port_connections(SystemVerilogParser::List_of_checker_port_connectionsContext *ctx) = 0;

  virtual void enterOrdered_checker_port_connection(SystemVerilogParser::Ordered_checker_port_connectionContext *ctx) = 0;
  virtual void exitOrdered_checker_port_connection(SystemVerilogParser::Ordered_checker_port_connectionContext *ctx) = 0;

  virtual void enterNamed_checker_port_connection(SystemVerilogParser::Named_checker_port_connectionContext *ctx) = 0;
  virtual void exitNamed_checker_port_connection(SystemVerilogParser::Named_checker_port_connectionContext *ctx) = 0;

  virtual void enterChecker_port_assign(SystemVerilogParser::Checker_port_assignContext *ctx) = 0;
  virtual void exitChecker_port_assign(SystemVerilogParser::Checker_port_assignContext *ctx) = 0;

  virtual void enterGenerate_region(SystemVerilogParser::Generate_regionContext *ctx) = 0;
  virtual void exitGenerate_region(SystemVerilogParser::Generate_regionContext *ctx) = 0;

  virtual void enterLoop_generate_construct(SystemVerilogParser::Loop_generate_constructContext *ctx) = 0;
  virtual void exitLoop_generate_construct(SystemVerilogParser::Loop_generate_constructContext *ctx) = 0;

  virtual void enterGenvar_initialization(SystemVerilogParser::Genvar_initializationContext *ctx) = 0;
  virtual void exitGenvar_initialization(SystemVerilogParser::Genvar_initializationContext *ctx) = 0;

  virtual void enterGenvar_iteration(SystemVerilogParser::Genvar_iterationContext *ctx) = 0;
  virtual void exitGenvar_iteration(SystemVerilogParser::Genvar_iterationContext *ctx) = 0;

  virtual void enterConditional_generate_construct(SystemVerilogParser::Conditional_generate_constructContext *ctx) = 0;
  virtual void exitConditional_generate_construct(SystemVerilogParser::Conditional_generate_constructContext *ctx) = 0;

  virtual void enterIf_generate_construct(SystemVerilogParser::If_generate_constructContext *ctx) = 0;
  virtual void exitIf_generate_construct(SystemVerilogParser::If_generate_constructContext *ctx) = 0;

  virtual void enterCase_generate_construct(SystemVerilogParser::Case_generate_constructContext *ctx) = 0;
  virtual void exitCase_generate_construct(SystemVerilogParser::Case_generate_constructContext *ctx) = 0;

  virtual void enterCase_generate_item(SystemVerilogParser::Case_generate_itemContext *ctx) = 0;
  virtual void exitCase_generate_item(SystemVerilogParser::Case_generate_itemContext *ctx) = 0;

  virtual void enterGenerate_block(SystemVerilogParser::Generate_blockContext *ctx) = 0;
  virtual void exitGenerate_block(SystemVerilogParser::Generate_blockContext *ctx) = 0;

  virtual void enterGenerate_block_label(SystemVerilogParser::Generate_block_labelContext *ctx) = 0;
  virtual void exitGenerate_block_label(SystemVerilogParser::Generate_block_labelContext *ctx) = 0;

  virtual void enterGenerate_block_name(SystemVerilogParser::Generate_block_nameContext *ctx) = 0;
  virtual void exitGenerate_block_name(SystemVerilogParser::Generate_block_nameContext *ctx) = 0;

  virtual void enterGenerate_item(SystemVerilogParser::Generate_itemContext *ctx) = 0;
  virtual void exitGenerate_item(SystemVerilogParser::Generate_itemContext *ctx) = 0;

  virtual void enterUdp_nonansi_declaration(SystemVerilogParser::Udp_nonansi_declarationContext *ctx) = 0;
  virtual void exitUdp_nonansi_declaration(SystemVerilogParser::Udp_nonansi_declarationContext *ctx) = 0;

  virtual void enterUdp_ansi_declaration(SystemVerilogParser::Udp_ansi_declarationContext *ctx) = 0;
  virtual void exitUdp_ansi_declaration(SystemVerilogParser::Udp_ansi_declarationContext *ctx) = 0;

  virtual void enterUdp_declaration(SystemVerilogParser::Udp_declarationContext *ctx) = 0;
  virtual void exitUdp_declaration(SystemVerilogParser::Udp_declarationContext *ctx) = 0;

  virtual void enterUdp_name(SystemVerilogParser::Udp_nameContext *ctx) = 0;
  virtual void exitUdp_name(SystemVerilogParser::Udp_nameContext *ctx) = 0;

  virtual void enterUdp_port_list(SystemVerilogParser::Udp_port_listContext *ctx) = 0;
  virtual void exitUdp_port_list(SystemVerilogParser::Udp_port_listContext *ctx) = 0;

  virtual void enterUdp_declaration_port_list(SystemVerilogParser::Udp_declaration_port_listContext *ctx) = 0;
  virtual void exitUdp_declaration_port_list(SystemVerilogParser::Udp_declaration_port_listContext *ctx) = 0;

  virtual void enterUdp_port_declaration(SystemVerilogParser::Udp_port_declarationContext *ctx) = 0;
  virtual void exitUdp_port_declaration(SystemVerilogParser::Udp_port_declarationContext *ctx) = 0;

  virtual void enterUdp_output_declaration(SystemVerilogParser::Udp_output_declarationContext *ctx) = 0;
  virtual void exitUdp_output_declaration(SystemVerilogParser::Udp_output_declarationContext *ctx) = 0;

  virtual void enterUdp_input_declaration(SystemVerilogParser::Udp_input_declarationContext *ctx) = 0;
  virtual void exitUdp_input_declaration(SystemVerilogParser::Udp_input_declarationContext *ctx) = 0;

  virtual void enterUdp_reg_declaration(SystemVerilogParser::Udp_reg_declarationContext *ctx) = 0;
  virtual void exitUdp_reg_declaration(SystemVerilogParser::Udp_reg_declarationContext *ctx) = 0;

  virtual void enterUdp_body(SystemVerilogParser::Udp_bodyContext *ctx) = 0;
  virtual void exitUdp_body(SystemVerilogParser::Udp_bodyContext *ctx) = 0;

  virtual void enterCombinational_body(SystemVerilogParser::Combinational_bodyContext *ctx) = 0;
  virtual void exitCombinational_body(SystemVerilogParser::Combinational_bodyContext *ctx) = 0;

  virtual void enterCombinational_entry(SystemVerilogParser::Combinational_entryContext *ctx) = 0;
  virtual void exitCombinational_entry(SystemVerilogParser::Combinational_entryContext *ctx) = 0;

  virtual void enterSequential_body(SystemVerilogParser::Sequential_bodyContext *ctx) = 0;
  virtual void exitSequential_body(SystemVerilogParser::Sequential_bodyContext *ctx) = 0;

  virtual void enterUdp_initial_statement(SystemVerilogParser::Udp_initial_statementContext *ctx) = 0;
  virtual void exitUdp_initial_statement(SystemVerilogParser::Udp_initial_statementContext *ctx) = 0;

  virtual void enterInit_val(SystemVerilogParser::Init_valContext *ctx) = 0;
  virtual void exitInit_val(SystemVerilogParser::Init_valContext *ctx) = 0;

  virtual void enterSequential_entry(SystemVerilogParser::Sequential_entryContext *ctx) = 0;
  virtual void exitSequential_entry(SystemVerilogParser::Sequential_entryContext *ctx) = 0;

  virtual void enterSeq_input_list(SystemVerilogParser::Seq_input_listContext *ctx) = 0;
  virtual void exitSeq_input_list(SystemVerilogParser::Seq_input_listContext *ctx) = 0;

  virtual void enterLevel_input_list(SystemVerilogParser::Level_input_listContext *ctx) = 0;
  virtual void exitLevel_input_list(SystemVerilogParser::Level_input_listContext *ctx) = 0;

  virtual void enterEdge_input_list(SystemVerilogParser::Edge_input_listContext *ctx) = 0;
  virtual void exitEdge_input_list(SystemVerilogParser::Edge_input_listContext *ctx) = 0;

  virtual void enterEdge_indicator(SystemVerilogParser::Edge_indicatorContext *ctx) = 0;
  virtual void exitEdge_indicator(SystemVerilogParser::Edge_indicatorContext *ctx) = 0;

  virtual void enterCurrent_state(SystemVerilogParser::Current_stateContext *ctx) = 0;
  virtual void exitCurrent_state(SystemVerilogParser::Current_stateContext *ctx) = 0;

  virtual void enterNext_state(SystemVerilogParser::Next_stateContext *ctx) = 0;
  virtual void exitNext_state(SystemVerilogParser::Next_stateContext *ctx) = 0;

  virtual void enterOutput_symbol(SystemVerilogParser::Output_symbolContext *ctx) = 0;
  virtual void exitOutput_symbol(SystemVerilogParser::Output_symbolContext *ctx) = 0;

  virtual void enterLevel_symbol(SystemVerilogParser::Level_symbolContext *ctx) = 0;
  virtual void exitLevel_symbol(SystemVerilogParser::Level_symbolContext *ctx) = 0;

  virtual void enterEdge_symbol(SystemVerilogParser::Edge_symbolContext *ctx) = 0;
  virtual void exitEdge_symbol(SystemVerilogParser::Edge_symbolContext *ctx) = 0;

  virtual void enterUdp_instantiation(SystemVerilogParser::Udp_instantiationContext *ctx) = 0;
  virtual void exitUdp_instantiation(SystemVerilogParser::Udp_instantiationContext *ctx) = 0;

  virtual void enterUdp_instance(SystemVerilogParser::Udp_instanceContext *ctx) = 0;
  virtual void exitUdp_instance(SystemVerilogParser::Udp_instanceContext *ctx) = 0;

  virtual void enterContinuous_assign(SystemVerilogParser::Continuous_assignContext *ctx) = 0;
  virtual void exitContinuous_assign(SystemVerilogParser::Continuous_assignContext *ctx) = 0;

  virtual void enterList_of_net_assignments(SystemVerilogParser::List_of_net_assignmentsContext *ctx) = 0;
  virtual void exitList_of_net_assignments(SystemVerilogParser::List_of_net_assignmentsContext *ctx) = 0;

  virtual void enterList_of_variable_assignments(SystemVerilogParser::List_of_variable_assignmentsContext *ctx) = 0;
  virtual void exitList_of_variable_assignments(SystemVerilogParser::List_of_variable_assignmentsContext *ctx) = 0;

  virtual void enterNet_alias(SystemVerilogParser::Net_aliasContext *ctx) = 0;
  virtual void exitNet_alias(SystemVerilogParser::Net_aliasContext *ctx) = 0;

  virtual void enterNet_assignment(SystemVerilogParser::Net_assignmentContext *ctx) = 0;
  virtual void exitNet_assignment(SystemVerilogParser::Net_assignmentContext *ctx) = 0;

  virtual void enterInitial_construct(SystemVerilogParser::Initial_constructContext *ctx) = 0;
  virtual void exitInitial_construct(SystemVerilogParser::Initial_constructContext *ctx) = 0;

  virtual void enterAlways_construct(SystemVerilogParser::Always_constructContext *ctx) = 0;
  virtual void exitAlways_construct(SystemVerilogParser::Always_constructContext *ctx) = 0;

  virtual void enterAlways_keyword(SystemVerilogParser::Always_keywordContext *ctx) = 0;
  virtual void exitAlways_keyword(SystemVerilogParser::Always_keywordContext *ctx) = 0;

  virtual void enterFinal_construct(SystemVerilogParser::Final_constructContext *ctx) = 0;
  virtual void exitFinal_construct(SystemVerilogParser::Final_constructContext *ctx) = 0;

  virtual void enterBlocking_assignment(SystemVerilogParser::Blocking_assignmentContext *ctx) = 0;
  virtual void exitBlocking_assignment(SystemVerilogParser::Blocking_assignmentContext *ctx) = 0;

  virtual void enterOperator_assignment(SystemVerilogParser::Operator_assignmentContext *ctx) = 0;
  virtual void exitOperator_assignment(SystemVerilogParser::Operator_assignmentContext *ctx) = 0;

  virtual void enterAssignment_operator(SystemVerilogParser::Assignment_operatorContext *ctx) = 0;
  virtual void exitAssignment_operator(SystemVerilogParser::Assignment_operatorContext *ctx) = 0;

  virtual void enterNonblocking_assignment(SystemVerilogParser::Nonblocking_assignmentContext *ctx) = 0;
  virtual void exitNonblocking_assignment(SystemVerilogParser::Nonblocking_assignmentContext *ctx) = 0;

  virtual void enterProcedural_continuous_assignment(SystemVerilogParser::Procedural_continuous_assignmentContext *ctx) = 0;
  virtual void exitProcedural_continuous_assignment(SystemVerilogParser::Procedural_continuous_assignmentContext *ctx) = 0;

  virtual void enterVariable_assignment(SystemVerilogParser::Variable_assignmentContext *ctx) = 0;
  virtual void exitVariable_assignment(SystemVerilogParser::Variable_assignmentContext *ctx) = 0;

  virtual void enterAction_block(SystemVerilogParser::Action_blockContext *ctx) = 0;
  virtual void exitAction_block(SystemVerilogParser::Action_blockContext *ctx) = 0;

  virtual void enterSeq_block(SystemVerilogParser::Seq_blockContext *ctx) = 0;
  virtual void exitSeq_block(SystemVerilogParser::Seq_blockContext *ctx) = 0;

  virtual void enterBlock_name(SystemVerilogParser::Block_nameContext *ctx) = 0;
  virtual void exitBlock_name(SystemVerilogParser::Block_nameContext *ctx) = 0;

  virtual void enterPar_block(SystemVerilogParser::Par_blockContext *ctx) = 0;
  virtual void exitPar_block(SystemVerilogParser::Par_blockContext *ctx) = 0;

  virtual void enterJoin_keyword(SystemVerilogParser::Join_keywordContext *ctx) = 0;
  virtual void exitJoin_keyword(SystemVerilogParser::Join_keywordContext *ctx) = 0;

  virtual void enterStatement_or_null(SystemVerilogParser::Statement_or_nullContext *ctx) = 0;
  virtual void exitStatement_or_null(SystemVerilogParser::Statement_or_nullContext *ctx) = 0;

  virtual void enterStatement(SystemVerilogParser::StatementContext *ctx) = 0;
  virtual void exitStatement(SystemVerilogParser::StatementContext *ctx) = 0;

  virtual void enterStatement_item(SystemVerilogParser::Statement_itemContext *ctx) = 0;
  virtual void exitStatement_item(SystemVerilogParser::Statement_itemContext *ctx) = 0;

  virtual void enterFunction_statement(SystemVerilogParser::Function_statementContext *ctx) = 0;
  virtual void exitFunction_statement(SystemVerilogParser::Function_statementContext *ctx) = 0;

  virtual void enterFunction_statement_or_null(SystemVerilogParser::Function_statement_or_nullContext *ctx) = 0;
  virtual void exitFunction_statement_or_null(SystemVerilogParser::Function_statement_or_nullContext *ctx) = 0;

  virtual void enterVariable_identifier_list(SystemVerilogParser::Variable_identifier_listContext *ctx) = 0;
  virtual void exitVariable_identifier_list(SystemVerilogParser::Variable_identifier_listContext *ctx) = 0;

  virtual void enterProcedural_timing_control_statement(SystemVerilogParser::Procedural_timing_control_statementContext *ctx) = 0;
  virtual void exitProcedural_timing_control_statement(SystemVerilogParser::Procedural_timing_control_statementContext *ctx) = 0;

  virtual void enterDelay_or_event_control(SystemVerilogParser::Delay_or_event_controlContext *ctx) = 0;
  virtual void exitDelay_or_event_control(SystemVerilogParser::Delay_or_event_controlContext *ctx) = 0;

  virtual void enterDelay_control(SystemVerilogParser::Delay_controlContext *ctx) = 0;
  virtual void exitDelay_control(SystemVerilogParser::Delay_controlContext *ctx) = 0;

  virtual void enterEvent_control(SystemVerilogParser::Event_controlContext *ctx) = 0;
  virtual void exitEvent_control(SystemVerilogParser::Event_controlContext *ctx) = 0;

  virtual void enterEvent_expression(SystemVerilogParser::Event_expressionContext *ctx) = 0;
  virtual void exitEvent_expression(SystemVerilogParser::Event_expressionContext *ctx) = 0;

  virtual void enterProcedural_timing_control(SystemVerilogParser::Procedural_timing_controlContext *ctx) = 0;
  virtual void exitProcedural_timing_control(SystemVerilogParser::Procedural_timing_controlContext *ctx) = 0;

  virtual void enterJump_statement(SystemVerilogParser::Jump_statementContext *ctx) = 0;
  virtual void exitJump_statement(SystemVerilogParser::Jump_statementContext *ctx) = 0;

  virtual void enterWait_statement(SystemVerilogParser::Wait_statementContext *ctx) = 0;
  virtual void exitWait_statement(SystemVerilogParser::Wait_statementContext *ctx) = 0;

  virtual void enterEvent_trigger(SystemVerilogParser::Event_triggerContext *ctx) = 0;
  virtual void exitEvent_trigger(SystemVerilogParser::Event_triggerContext *ctx) = 0;

  virtual void enterDisable_statement(SystemVerilogParser::Disable_statementContext *ctx) = 0;
  virtual void exitDisable_statement(SystemVerilogParser::Disable_statementContext *ctx) = 0;

  virtual void enterConditional_statement(SystemVerilogParser::Conditional_statementContext *ctx) = 0;
  virtual void exitConditional_statement(SystemVerilogParser::Conditional_statementContext *ctx) = 0;

  virtual void enterUnique_priority(SystemVerilogParser::Unique_priorityContext *ctx) = 0;
  virtual void exitUnique_priority(SystemVerilogParser::Unique_priorityContext *ctx) = 0;

  virtual void enterCond_predicate(SystemVerilogParser::Cond_predicateContext *ctx) = 0;
  virtual void exitCond_predicate(SystemVerilogParser::Cond_predicateContext *ctx) = 0;

  virtual void enterExpression_or_cond_pattern(SystemVerilogParser::Expression_or_cond_patternContext *ctx) = 0;
  virtual void exitExpression_or_cond_pattern(SystemVerilogParser::Expression_or_cond_patternContext *ctx) = 0;

  virtual void enterCase_statement(SystemVerilogParser::Case_statementContext *ctx) = 0;
  virtual void exitCase_statement(SystemVerilogParser::Case_statementContext *ctx) = 0;

  virtual void enterCase_keyword(SystemVerilogParser::Case_keywordContext *ctx) = 0;
  virtual void exitCase_keyword(SystemVerilogParser::Case_keywordContext *ctx) = 0;

  virtual void enterCase_expression(SystemVerilogParser::Case_expressionContext *ctx) = 0;
  virtual void exitCase_expression(SystemVerilogParser::Case_expressionContext *ctx) = 0;

  virtual void enterCase_item(SystemVerilogParser::Case_itemContext *ctx) = 0;
  virtual void exitCase_item(SystemVerilogParser::Case_itemContext *ctx) = 0;

  virtual void enterCase_pattern_item(SystemVerilogParser::Case_pattern_itemContext *ctx) = 0;
  virtual void exitCase_pattern_item(SystemVerilogParser::Case_pattern_itemContext *ctx) = 0;

  virtual void enterCase_inside_item(SystemVerilogParser::Case_inside_itemContext *ctx) = 0;
  virtual void exitCase_inside_item(SystemVerilogParser::Case_inside_itemContext *ctx) = 0;

  virtual void enterCase_item_expression(SystemVerilogParser::Case_item_expressionContext *ctx) = 0;
  virtual void exitCase_item_expression(SystemVerilogParser::Case_item_expressionContext *ctx) = 0;

  virtual void enterRandcase_statement(SystemVerilogParser::Randcase_statementContext *ctx) = 0;
  virtual void exitRandcase_statement(SystemVerilogParser::Randcase_statementContext *ctx) = 0;

  virtual void enterRandcase_item(SystemVerilogParser::Randcase_itemContext *ctx) = 0;
  virtual void exitRandcase_item(SystemVerilogParser::Randcase_itemContext *ctx) = 0;

  virtual void enterOpen_range_list(SystemVerilogParser::Open_range_listContext *ctx) = 0;
  virtual void exitOpen_range_list(SystemVerilogParser::Open_range_listContext *ctx) = 0;

  virtual void enterOpen_value_range(SystemVerilogParser::Open_value_rangeContext *ctx) = 0;
  virtual void exitOpen_value_range(SystemVerilogParser::Open_value_rangeContext *ctx) = 0;

  virtual void enterPattern(SystemVerilogParser::PatternContext *ctx) = 0;
  virtual void exitPattern(SystemVerilogParser::PatternContext *ctx) = 0;

  virtual void enterMember_pattern_pair(SystemVerilogParser::Member_pattern_pairContext *ctx) = 0;
  virtual void exitMember_pattern_pair(SystemVerilogParser::Member_pattern_pairContext *ctx) = 0;

  virtual void enterAssignment_pattern(SystemVerilogParser::Assignment_patternContext *ctx) = 0;
  virtual void exitAssignment_pattern(SystemVerilogParser::Assignment_patternContext *ctx) = 0;

  virtual void enterArray_key_val_pair(SystemVerilogParser::Array_key_val_pairContext *ctx) = 0;
  virtual void exitArray_key_val_pair(SystemVerilogParser::Array_key_val_pairContext *ctx) = 0;

  virtual void enterArray_pattern_key(SystemVerilogParser::Array_pattern_keyContext *ctx) = 0;
  virtual void exitArray_pattern_key(SystemVerilogParser::Array_pattern_keyContext *ctx) = 0;

  virtual void enterAssignment_pattern_key(SystemVerilogParser::Assignment_pattern_keyContext *ctx) = 0;
  virtual void exitAssignment_pattern_key(SystemVerilogParser::Assignment_pattern_keyContext *ctx) = 0;

  virtual void enterAssignment_pattern_expression(SystemVerilogParser::Assignment_pattern_expressionContext *ctx) = 0;
  virtual void exitAssignment_pattern_expression(SystemVerilogParser::Assignment_pattern_expressionContext *ctx) = 0;

  virtual void enterAssignment_pattern_expression_type(SystemVerilogParser::Assignment_pattern_expression_typeContext *ctx) = 0;
  virtual void exitAssignment_pattern_expression_type(SystemVerilogParser::Assignment_pattern_expression_typeContext *ctx) = 0;

  virtual void enterConstant_assignment_pattern_expression(SystemVerilogParser::Constant_assignment_pattern_expressionContext *ctx) = 0;
  virtual void exitConstant_assignment_pattern_expression(SystemVerilogParser::Constant_assignment_pattern_expressionContext *ctx) = 0;

  virtual void enterAssignment_pattern_net_lvalue(SystemVerilogParser::Assignment_pattern_net_lvalueContext *ctx) = 0;
  virtual void exitAssignment_pattern_net_lvalue(SystemVerilogParser::Assignment_pattern_net_lvalueContext *ctx) = 0;

  virtual void enterAssignment_pattern_variable_lvalue(SystemVerilogParser::Assignment_pattern_variable_lvalueContext *ctx) = 0;
  virtual void exitAssignment_pattern_variable_lvalue(SystemVerilogParser::Assignment_pattern_variable_lvalueContext *ctx) = 0;

  virtual void enterLoop_statement(SystemVerilogParser::Loop_statementContext *ctx) = 0;
  virtual void exitLoop_statement(SystemVerilogParser::Loop_statementContext *ctx) = 0;

  virtual void enterFor_initialization(SystemVerilogParser::For_initializationContext *ctx) = 0;
  virtual void exitFor_initialization(SystemVerilogParser::For_initializationContext *ctx) = 0;

  virtual void enterFor_variable_declaration(SystemVerilogParser::For_variable_declarationContext *ctx) = 0;
  virtual void exitFor_variable_declaration(SystemVerilogParser::For_variable_declarationContext *ctx) = 0;

  virtual void enterFor_variable_assign(SystemVerilogParser::For_variable_assignContext *ctx) = 0;
  virtual void exitFor_variable_assign(SystemVerilogParser::For_variable_assignContext *ctx) = 0;

  virtual void enterFor_step(SystemVerilogParser::For_stepContext *ctx) = 0;
  virtual void exitFor_step(SystemVerilogParser::For_stepContext *ctx) = 0;

  virtual void enterFor_step_assignment(SystemVerilogParser::For_step_assignmentContext *ctx) = 0;
  virtual void exitFor_step_assignment(SystemVerilogParser::For_step_assignmentContext *ctx) = 0;

  virtual void enterLoop_variables(SystemVerilogParser::Loop_variablesContext *ctx) = 0;
  virtual void exitLoop_variables(SystemVerilogParser::Loop_variablesContext *ctx) = 0;

  virtual void enterLoop_var(SystemVerilogParser::Loop_varContext *ctx) = 0;
  virtual void exitLoop_var(SystemVerilogParser::Loop_varContext *ctx) = 0;

  virtual void enterSubroutine_call_statement(SystemVerilogParser::Subroutine_call_statementContext *ctx) = 0;
  virtual void exitSubroutine_call_statement(SystemVerilogParser::Subroutine_call_statementContext *ctx) = 0;

  virtual void enterAssertion_item(SystemVerilogParser::Assertion_itemContext *ctx) = 0;
  virtual void exitAssertion_item(SystemVerilogParser::Assertion_itemContext *ctx) = 0;

  virtual void enterDeferred_immediate_assertion_item(SystemVerilogParser::Deferred_immediate_assertion_itemContext *ctx) = 0;
  virtual void exitDeferred_immediate_assertion_item(SystemVerilogParser::Deferred_immediate_assertion_itemContext *ctx) = 0;

  virtual void enterProcedural_assertion_statement(SystemVerilogParser::Procedural_assertion_statementContext *ctx) = 0;
  virtual void exitProcedural_assertion_statement(SystemVerilogParser::Procedural_assertion_statementContext *ctx) = 0;

  virtual void enterImmediate_assertion_statement(SystemVerilogParser::Immediate_assertion_statementContext *ctx) = 0;
  virtual void exitImmediate_assertion_statement(SystemVerilogParser::Immediate_assertion_statementContext *ctx) = 0;

  virtual void enterSimple_immediate_assertion_statement(SystemVerilogParser::Simple_immediate_assertion_statementContext *ctx) = 0;
  virtual void exitSimple_immediate_assertion_statement(SystemVerilogParser::Simple_immediate_assertion_statementContext *ctx) = 0;

  virtual void enterSimple_immediate_assert_statement(SystemVerilogParser::Simple_immediate_assert_statementContext *ctx) = 0;
  virtual void exitSimple_immediate_assert_statement(SystemVerilogParser::Simple_immediate_assert_statementContext *ctx) = 0;

  virtual void enterSimple_immediate_assume_statement(SystemVerilogParser::Simple_immediate_assume_statementContext *ctx) = 0;
  virtual void exitSimple_immediate_assume_statement(SystemVerilogParser::Simple_immediate_assume_statementContext *ctx) = 0;

  virtual void enterSimple_immediate_cover_statement(SystemVerilogParser::Simple_immediate_cover_statementContext *ctx) = 0;
  virtual void exitSimple_immediate_cover_statement(SystemVerilogParser::Simple_immediate_cover_statementContext *ctx) = 0;

  virtual void enterDeferred_immediate_assertion_statement(SystemVerilogParser::Deferred_immediate_assertion_statementContext *ctx) = 0;
  virtual void exitDeferred_immediate_assertion_statement(SystemVerilogParser::Deferred_immediate_assertion_statementContext *ctx) = 0;

  virtual void enterDeferred_immediate_assert_statement(SystemVerilogParser::Deferred_immediate_assert_statementContext *ctx) = 0;
  virtual void exitDeferred_immediate_assert_statement(SystemVerilogParser::Deferred_immediate_assert_statementContext *ctx) = 0;

  virtual void enterDeferred_immediate_assume_statement(SystemVerilogParser::Deferred_immediate_assume_statementContext *ctx) = 0;
  virtual void exitDeferred_immediate_assume_statement(SystemVerilogParser::Deferred_immediate_assume_statementContext *ctx) = 0;

  virtual void enterDeferred_immediate_cover_statement(SystemVerilogParser::Deferred_immediate_cover_statementContext *ctx) = 0;
  virtual void exitDeferred_immediate_cover_statement(SystemVerilogParser::Deferred_immediate_cover_statementContext *ctx) = 0;

  virtual void enterClocking_declaration(SystemVerilogParser::Clocking_declarationContext *ctx) = 0;
  virtual void exitClocking_declaration(SystemVerilogParser::Clocking_declarationContext *ctx) = 0;

  virtual void enterClocking_name(SystemVerilogParser::Clocking_nameContext *ctx) = 0;
  virtual void exitClocking_name(SystemVerilogParser::Clocking_nameContext *ctx) = 0;

  virtual void enterClocking_event(SystemVerilogParser::Clocking_eventContext *ctx) = 0;
  virtual void exitClocking_event(SystemVerilogParser::Clocking_eventContext *ctx) = 0;

  virtual void enterClocking_item(SystemVerilogParser::Clocking_itemContext *ctx) = 0;
  virtual void exitClocking_item(SystemVerilogParser::Clocking_itemContext *ctx) = 0;

  virtual void enterDefault_skew(SystemVerilogParser::Default_skewContext *ctx) = 0;
  virtual void exitDefault_skew(SystemVerilogParser::Default_skewContext *ctx) = 0;

  virtual void enterClocking_direction(SystemVerilogParser::Clocking_directionContext *ctx) = 0;
  virtual void exitClocking_direction(SystemVerilogParser::Clocking_directionContext *ctx) = 0;

  virtual void enterList_of_clocking_decl_assign(SystemVerilogParser::List_of_clocking_decl_assignContext *ctx) = 0;
  virtual void exitList_of_clocking_decl_assign(SystemVerilogParser::List_of_clocking_decl_assignContext *ctx) = 0;

  virtual void enterClocking_decl_assign(SystemVerilogParser::Clocking_decl_assignContext *ctx) = 0;
  virtual void exitClocking_decl_assign(SystemVerilogParser::Clocking_decl_assignContext *ctx) = 0;

  virtual void enterClocking_skew(SystemVerilogParser::Clocking_skewContext *ctx) = 0;
  virtual void exitClocking_skew(SystemVerilogParser::Clocking_skewContext *ctx) = 0;

  virtual void enterClocking_drive(SystemVerilogParser::Clocking_driveContext *ctx) = 0;
  virtual void exitClocking_drive(SystemVerilogParser::Clocking_driveContext *ctx) = 0;

  virtual void enterCycle_delay(SystemVerilogParser::Cycle_delayContext *ctx) = 0;
  virtual void exitCycle_delay(SystemVerilogParser::Cycle_delayContext *ctx) = 0;

  virtual void enterClockvar(SystemVerilogParser::ClockvarContext *ctx) = 0;
  virtual void exitClockvar(SystemVerilogParser::ClockvarContext *ctx) = 0;

  virtual void enterClockvar_expression(SystemVerilogParser::Clockvar_expressionContext *ctx) = 0;
  virtual void exitClockvar_expression(SystemVerilogParser::Clockvar_expressionContext *ctx) = 0;

  virtual void enterRandsequence_statement(SystemVerilogParser::Randsequence_statementContext *ctx) = 0;
  virtual void exitRandsequence_statement(SystemVerilogParser::Randsequence_statementContext *ctx) = 0;

  virtual void enterProduction(SystemVerilogParser::ProductionContext *ctx) = 0;
  virtual void exitProduction(SystemVerilogParser::ProductionContext *ctx) = 0;

  virtual void enterRs_rule(SystemVerilogParser::Rs_ruleContext *ctx) = 0;
  virtual void exitRs_rule(SystemVerilogParser::Rs_ruleContext *ctx) = 0;

  virtual void enterWeight_spec(SystemVerilogParser::Weight_specContext *ctx) = 0;
  virtual void exitWeight_spec(SystemVerilogParser::Weight_specContext *ctx) = 0;

  virtual void enterRs_production_list(SystemVerilogParser::Rs_production_listContext *ctx) = 0;
  virtual void exitRs_production_list(SystemVerilogParser::Rs_production_listContext *ctx) = 0;

  virtual void enterWeight_specification(SystemVerilogParser::Weight_specificationContext *ctx) = 0;
  virtual void exitWeight_specification(SystemVerilogParser::Weight_specificationContext *ctx) = 0;

  virtual void enterRs_code_block(SystemVerilogParser::Rs_code_blockContext *ctx) = 0;
  virtual void exitRs_code_block(SystemVerilogParser::Rs_code_blockContext *ctx) = 0;

  virtual void enterRs_prod(SystemVerilogParser::Rs_prodContext *ctx) = 0;
  virtual void exitRs_prod(SystemVerilogParser::Rs_prodContext *ctx) = 0;

  virtual void enterProduction_item(SystemVerilogParser::Production_itemContext *ctx) = 0;
  virtual void exitProduction_item(SystemVerilogParser::Production_itemContext *ctx) = 0;

  virtual void enterRs_if_else(SystemVerilogParser::Rs_if_elseContext *ctx) = 0;
  virtual void exitRs_if_else(SystemVerilogParser::Rs_if_elseContext *ctx) = 0;

  virtual void enterRs_repeat(SystemVerilogParser::Rs_repeatContext *ctx) = 0;
  virtual void exitRs_repeat(SystemVerilogParser::Rs_repeatContext *ctx) = 0;

  virtual void enterRs_case(SystemVerilogParser::Rs_caseContext *ctx) = 0;
  virtual void exitRs_case(SystemVerilogParser::Rs_caseContext *ctx) = 0;

  virtual void enterRs_case_item(SystemVerilogParser::Rs_case_itemContext *ctx) = 0;
  virtual void exitRs_case_item(SystemVerilogParser::Rs_case_itemContext *ctx) = 0;

  virtual void enterSpecify_block(SystemVerilogParser::Specify_blockContext *ctx) = 0;
  virtual void exitSpecify_block(SystemVerilogParser::Specify_blockContext *ctx) = 0;

  virtual void enterSpecify_item(SystemVerilogParser::Specify_itemContext *ctx) = 0;
  virtual void exitSpecify_item(SystemVerilogParser::Specify_itemContext *ctx) = 0;

  virtual void enterPulsestyle_declaration(SystemVerilogParser::Pulsestyle_declarationContext *ctx) = 0;
  virtual void exitPulsestyle_declaration(SystemVerilogParser::Pulsestyle_declarationContext *ctx) = 0;

  virtual void enterShowcancelled_declaration(SystemVerilogParser::Showcancelled_declarationContext *ctx) = 0;
  virtual void exitShowcancelled_declaration(SystemVerilogParser::Showcancelled_declarationContext *ctx) = 0;

  virtual void enterPath_declaration(SystemVerilogParser::Path_declarationContext *ctx) = 0;
  virtual void exitPath_declaration(SystemVerilogParser::Path_declarationContext *ctx) = 0;

  virtual void enterSimple_path_declaration(SystemVerilogParser::Simple_path_declarationContext *ctx) = 0;
  virtual void exitSimple_path_declaration(SystemVerilogParser::Simple_path_declarationContext *ctx) = 0;

  virtual void enterParallel_path_description(SystemVerilogParser::Parallel_path_descriptionContext *ctx) = 0;
  virtual void exitParallel_path_description(SystemVerilogParser::Parallel_path_descriptionContext *ctx) = 0;

  virtual void enterFull_path_description(SystemVerilogParser::Full_path_descriptionContext *ctx) = 0;
  virtual void exitFull_path_description(SystemVerilogParser::Full_path_descriptionContext *ctx) = 0;

  virtual void enterList_of_path_inputs(SystemVerilogParser::List_of_path_inputsContext *ctx) = 0;
  virtual void exitList_of_path_inputs(SystemVerilogParser::List_of_path_inputsContext *ctx) = 0;

  virtual void enterList_of_path_outputs(SystemVerilogParser::List_of_path_outputsContext *ctx) = 0;
  virtual void exitList_of_path_outputs(SystemVerilogParser::List_of_path_outputsContext *ctx) = 0;

  virtual void enterSpecify_input_terminal_descriptor(SystemVerilogParser::Specify_input_terminal_descriptorContext *ctx) = 0;
  virtual void exitSpecify_input_terminal_descriptor(SystemVerilogParser::Specify_input_terminal_descriptorContext *ctx) = 0;

  virtual void enterSpecify_output_terminal_descriptor(SystemVerilogParser::Specify_output_terminal_descriptorContext *ctx) = 0;
  virtual void exitSpecify_output_terminal_descriptor(SystemVerilogParser::Specify_output_terminal_descriptorContext *ctx) = 0;

  virtual void enterInput_identifier(SystemVerilogParser::Input_identifierContext *ctx) = 0;
  virtual void exitInput_identifier(SystemVerilogParser::Input_identifierContext *ctx) = 0;

  virtual void enterOutput_identifier(SystemVerilogParser::Output_identifierContext *ctx) = 0;
  virtual void exitOutput_identifier(SystemVerilogParser::Output_identifierContext *ctx) = 0;

  virtual void enterPath_delay_value(SystemVerilogParser::Path_delay_valueContext *ctx) = 0;
  virtual void exitPath_delay_value(SystemVerilogParser::Path_delay_valueContext *ctx) = 0;

  virtual void enterList_of_path_delay_expressions(SystemVerilogParser::List_of_path_delay_expressionsContext *ctx) = 0;
  virtual void exitList_of_path_delay_expressions(SystemVerilogParser::List_of_path_delay_expressionsContext *ctx) = 0;

  virtual void enterT_path_delay_expression(SystemVerilogParser::T_path_delay_expressionContext *ctx) = 0;
  virtual void exitT_path_delay_expression(SystemVerilogParser::T_path_delay_expressionContext *ctx) = 0;

  virtual void enterTrise_path_delay_expression(SystemVerilogParser::Trise_path_delay_expressionContext *ctx) = 0;
  virtual void exitTrise_path_delay_expression(SystemVerilogParser::Trise_path_delay_expressionContext *ctx) = 0;

  virtual void enterTfall_path_delay_expression(SystemVerilogParser::Tfall_path_delay_expressionContext *ctx) = 0;
  virtual void exitTfall_path_delay_expression(SystemVerilogParser::Tfall_path_delay_expressionContext *ctx) = 0;

  virtual void enterTz_path_delay_expression(SystemVerilogParser::Tz_path_delay_expressionContext *ctx) = 0;
  virtual void exitTz_path_delay_expression(SystemVerilogParser::Tz_path_delay_expressionContext *ctx) = 0;

  virtual void enterT01_path_delay_expression(SystemVerilogParser::T01_path_delay_expressionContext *ctx) = 0;
  virtual void exitT01_path_delay_expression(SystemVerilogParser::T01_path_delay_expressionContext *ctx) = 0;

  virtual void enterT10_path_delay_expression(SystemVerilogParser::T10_path_delay_expressionContext *ctx) = 0;
  virtual void exitT10_path_delay_expression(SystemVerilogParser::T10_path_delay_expressionContext *ctx) = 0;

  virtual void enterT0z_path_delay_expression(SystemVerilogParser::T0z_path_delay_expressionContext *ctx) = 0;
  virtual void exitT0z_path_delay_expression(SystemVerilogParser::T0z_path_delay_expressionContext *ctx) = 0;

  virtual void enterTz1_path_delay_expression(SystemVerilogParser::Tz1_path_delay_expressionContext *ctx) = 0;
  virtual void exitTz1_path_delay_expression(SystemVerilogParser::Tz1_path_delay_expressionContext *ctx) = 0;

  virtual void enterT1z_path_delay_expression(SystemVerilogParser::T1z_path_delay_expressionContext *ctx) = 0;
  virtual void exitT1z_path_delay_expression(SystemVerilogParser::T1z_path_delay_expressionContext *ctx) = 0;

  virtual void enterTz0_path_delay_expression(SystemVerilogParser::Tz0_path_delay_expressionContext *ctx) = 0;
  virtual void exitTz0_path_delay_expression(SystemVerilogParser::Tz0_path_delay_expressionContext *ctx) = 0;

  virtual void enterT0x_path_delay_expression(SystemVerilogParser::T0x_path_delay_expressionContext *ctx) = 0;
  virtual void exitT0x_path_delay_expression(SystemVerilogParser::T0x_path_delay_expressionContext *ctx) = 0;

  virtual void enterTx1_path_delay_expression(SystemVerilogParser::Tx1_path_delay_expressionContext *ctx) = 0;
  virtual void exitTx1_path_delay_expression(SystemVerilogParser::Tx1_path_delay_expressionContext *ctx) = 0;

  virtual void enterT1x_path_delay_expression(SystemVerilogParser::T1x_path_delay_expressionContext *ctx) = 0;
  virtual void exitT1x_path_delay_expression(SystemVerilogParser::T1x_path_delay_expressionContext *ctx) = 0;

  virtual void enterTx0_path_delay_expression(SystemVerilogParser::Tx0_path_delay_expressionContext *ctx) = 0;
  virtual void exitTx0_path_delay_expression(SystemVerilogParser::Tx0_path_delay_expressionContext *ctx) = 0;

  virtual void enterTxz_path_delay_expression(SystemVerilogParser::Txz_path_delay_expressionContext *ctx) = 0;
  virtual void exitTxz_path_delay_expression(SystemVerilogParser::Txz_path_delay_expressionContext *ctx) = 0;

  virtual void enterTzx_path_delay_expression(SystemVerilogParser::Tzx_path_delay_expressionContext *ctx) = 0;
  virtual void exitTzx_path_delay_expression(SystemVerilogParser::Tzx_path_delay_expressionContext *ctx) = 0;

  virtual void enterPath_delay_expression(SystemVerilogParser::Path_delay_expressionContext *ctx) = 0;
  virtual void exitPath_delay_expression(SystemVerilogParser::Path_delay_expressionContext *ctx) = 0;

  virtual void enterEdge_sensitive_path_declaration(SystemVerilogParser::Edge_sensitive_path_declarationContext *ctx) = 0;
  virtual void exitEdge_sensitive_path_declaration(SystemVerilogParser::Edge_sensitive_path_declarationContext *ctx) = 0;

  virtual void enterParallel_edge_sensitive_path_description(SystemVerilogParser::Parallel_edge_sensitive_path_descriptionContext *ctx) = 0;
  virtual void exitParallel_edge_sensitive_path_description(SystemVerilogParser::Parallel_edge_sensitive_path_descriptionContext *ctx) = 0;

  virtual void enterFull_edge_sensitive_path_description(SystemVerilogParser::Full_edge_sensitive_path_descriptionContext *ctx) = 0;
  virtual void exitFull_edge_sensitive_path_description(SystemVerilogParser::Full_edge_sensitive_path_descriptionContext *ctx) = 0;

  virtual void enterData_source_expression(SystemVerilogParser::Data_source_expressionContext *ctx) = 0;
  virtual void exitData_source_expression(SystemVerilogParser::Data_source_expressionContext *ctx) = 0;

  virtual void enterEdge_identifier(SystemVerilogParser::Edge_identifierContext *ctx) = 0;
  virtual void exitEdge_identifier(SystemVerilogParser::Edge_identifierContext *ctx) = 0;

  virtual void enterState_dependent_path_declaration(SystemVerilogParser::State_dependent_path_declarationContext *ctx) = 0;
  virtual void exitState_dependent_path_declaration(SystemVerilogParser::State_dependent_path_declarationContext *ctx) = 0;

  virtual void enterPolarity_operator(SystemVerilogParser::Polarity_operatorContext *ctx) = 0;
  virtual void exitPolarity_operator(SystemVerilogParser::Polarity_operatorContext *ctx) = 0;

  virtual void enterSystem_timing_check(SystemVerilogParser::System_timing_checkContext *ctx) = 0;
  virtual void exitSystem_timing_check(SystemVerilogParser::System_timing_checkContext *ctx) = 0;

  virtual void enterSetup_timing_check(SystemVerilogParser::Setup_timing_checkContext *ctx) = 0;
  virtual void exitSetup_timing_check(SystemVerilogParser::Setup_timing_checkContext *ctx) = 0;

  virtual void enterNotifier_opt(SystemVerilogParser::Notifier_optContext *ctx) = 0;
  virtual void exitNotifier_opt(SystemVerilogParser::Notifier_optContext *ctx) = 0;

  virtual void enterHold_timing_check(SystemVerilogParser::Hold_timing_checkContext *ctx) = 0;
  virtual void exitHold_timing_check(SystemVerilogParser::Hold_timing_checkContext *ctx) = 0;

  virtual void enterSetuphold_timing_check(SystemVerilogParser::Setuphold_timing_checkContext *ctx) = 0;
  virtual void exitSetuphold_timing_check(SystemVerilogParser::Setuphold_timing_checkContext *ctx) = 0;

  virtual void enterTiming_check_opt(SystemVerilogParser::Timing_check_optContext *ctx) = 0;
  virtual void exitTiming_check_opt(SystemVerilogParser::Timing_check_optContext *ctx) = 0;

  virtual void enterTimestamp_cond_opt(SystemVerilogParser::Timestamp_cond_optContext *ctx) = 0;
  virtual void exitTimestamp_cond_opt(SystemVerilogParser::Timestamp_cond_optContext *ctx) = 0;

  virtual void enterTimecheck_cond_opt(SystemVerilogParser::Timecheck_cond_optContext *ctx) = 0;
  virtual void exitTimecheck_cond_opt(SystemVerilogParser::Timecheck_cond_optContext *ctx) = 0;

  virtual void enterDelayed_ref_opt(SystemVerilogParser::Delayed_ref_optContext *ctx) = 0;
  virtual void exitDelayed_ref_opt(SystemVerilogParser::Delayed_ref_optContext *ctx) = 0;

  virtual void enterDelayed_data_opt(SystemVerilogParser::Delayed_data_optContext *ctx) = 0;
  virtual void exitDelayed_data_opt(SystemVerilogParser::Delayed_data_optContext *ctx) = 0;

  virtual void enterRecovery_timing_check(SystemVerilogParser::Recovery_timing_checkContext *ctx) = 0;
  virtual void exitRecovery_timing_check(SystemVerilogParser::Recovery_timing_checkContext *ctx) = 0;

  virtual void enterRemoval_timing_check(SystemVerilogParser::Removal_timing_checkContext *ctx) = 0;
  virtual void exitRemoval_timing_check(SystemVerilogParser::Removal_timing_checkContext *ctx) = 0;

  virtual void enterRecrem_timing_check(SystemVerilogParser::Recrem_timing_checkContext *ctx) = 0;
  virtual void exitRecrem_timing_check(SystemVerilogParser::Recrem_timing_checkContext *ctx) = 0;

  virtual void enterSkew_timing_check(SystemVerilogParser::Skew_timing_checkContext *ctx) = 0;
  virtual void exitSkew_timing_check(SystemVerilogParser::Skew_timing_checkContext *ctx) = 0;

  virtual void enterTimeskew_timing_check(SystemVerilogParser::Timeskew_timing_checkContext *ctx) = 0;
  virtual void exitTimeskew_timing_check(SystemVerilogParser::Timeskew_timing_checkContext *ctx) = 0;

  virtual void enterSkew_timing_check_opt(SystemVerilogParser::Skew_timing_check_optContext *ctx) = 0;
  virtual void exitSkew_timing_check_opt(SystemVerilogParser::Skew_timing_check_optContext *ctx) = 0;

  virtual void enterEvent_based_flag_opt(SystemVerilogParser::Event_based_flag_optContext *ctx) = 0;
  virtual void exitEvent_based_flag_opt(SystemVerilogParser::Event_based_flag_optContext *ctx) = 0;

  virtual void enterRemain_active_flag_opt(SystemVerilogParser::Remain_active_flag_optContext *ctx) = 0;
  virtual void exitRemain_active_flag_opt(SystemVerilogParser::Remain_active_flag_optContext *ctx) = 0;

  virtual void enterFullskew_timing_check(SystemVerilogParser::Fullskew_timing_checkContext *ctx) = 0;
  virtual void exitFullskew_timing_check(SystemVerilogParser::Fullskew_timing_checkContext *ctx) = 0;

  virtual void enterPeriod_timing_check(SystemVerilogParser::Period_timing_checkContext *ctx) = 0;
  virtual void exitPeriod_timing_check(SystemVerilogParser::Period_timing_checkContext *ctx) = 0;

  virtual void enterWidth_timing_check(SystemVerilogParser::Width_timing_checkContext *ctx) = 0;
  virtual void exitWidth_timing_check(SystemVerilogParser::Width_timing_checkContext *ctx) = 0;

  virtual void enterNochange_timing_check(SystemVerilogParser::Nochange_timing_checkContext *ctx) = 0;
  virtual void exitNochange_timing_check(SystemVerilogParser::Nochange_timing_checkContext *ctx) = 0;

  virtual void enterTimecheck_condition(SystemVerilogParser::Timecheck_conditionContext *ctx) = 0;
  virtual void exitTimecheck_condition(SystemVerilogParser::Timecheck_conditionContext *ctx) = 0;

  virtual void enterControlled_reference_event(SystemVerilogParser::Controlled_reference_eventContext *ctx) = 0;
  virtual void exitControlled_reference_event(SystemVerilogParser::Controlled_reference_eventContext *ctx) = 0;

  virtual void enterData_event(SystemVerilogParser::Data_eventContext *ctx) = 0;
  virtual void exitData_event(SystemVerilogParser::Data_eventContext *ctx) = 0;

  virtual void enterDelayed_data(SystemVerilogParser::Delayed_dataContext *ctx) = 0;
  virtual void exitDelayed_data(SystemVerilogParser::Delayed_dataContext *ctx) = 0;

  virtual void enterDelayed_reference(SystemVerilogParser::Delayed_referenceContext *ctx) = 0;
  virtual void exitDelayed_reference(SystemVerilogParser::Delayed_referenceContext *ctx) = 0;

  virtual void enterEnd_edge_offset(SystemVerilogParser::End_edge_offsetContext *ctx) = 0;
  virtual void exitEnd_edge_offset(SystemVerilogParser::End_edge_offsetContext *ctx) = 0;

  virtual void enterEvent_based_flag(SystemVerilogParser::Event_based_flagContext *ctx) = 0;
  virtual void exitEvent_based_flag(SystemVerilogParser::Event_based_flagContext *ctx) = 0;

  virtual void enterNotifier(SystemVerilogParser::NotifierContext *ctx) = 0;
  virtual void exitNotifier(SystemVerilogParser::NotifierContext *ctx) = 0;

  virtual void enterReference_event(SystemVerilogParser::Reference_eventContext *ctx) = 0;
  virtual void exitReference_event(SystemVerilogParser::Reference_eventContext *ctx) = 0;

  virtual void enterRemain_active_flag(SystemVerilogParser::Remain_active_flagContext *ctx) = 0;
  virtual void exitRemain_active_flag(SystemVerilogParser::Remain_active_flagContext *ctx) = 0;

  virtual void enterTimestamp_condition(SystemVerilogParser::Timestamp_conditionContext *ctx) = 0;
  virtual void exitTimestamp_condition(SystemVerilogParser::Timestamp_conditionContext *ctx) = 0;

  virtual void enterStart_edge_offset(SystemVerilogParser::Start_edge_offsetContext *ctx) = 0;
  virtual void exitStart_edge_offset(SystemVerilogParser::Start_edge_offsetContext *ctx) = 0;

  virtual void enterThreshold(SystemVerilogParser::ThresholdContext *ctx) = 0;
  virtual void exitThreshold(SystemVerilogParser::ThresholdContext *ctx) = 0;

  virtual void enterTiming_check_limit(SystemVerilogParser::Timing_check_limitContext *ctx) = 0;
  virtual void exitTiming_check_limit(SystemVerilogParser::Timing_check_limitContext *ctx) = 0;

  virtual void enterTiming_check_event(SystemVerilogParser::Timing_check_eventContext *ctx) = 0;
  virtual void exitTiming_check_event(SystemVerilogParser::Timing_check_eventContext *ctx) = 0;

  virtual void enterControlled_timing_check_event(SystemVerilogParser::Controlled_timing_check_eventContext *ctx) = 0;
  virtual void exitControlled_timing_check_event(SystemVerilogParser::Controlled_timing_check_eventContext *ctx) = 0;

  virtual void enterTiming_check_event_control(SystemVerilogParser::Timing_check_event_controlContext *ctx) = 0;
  virtual void exitTiming_check_event_control(SystemVerilogParser::Timing_check_event_controlContext *ctx) = 0;

  virtual void enterSpecify_terminal_descriptor(SystemVerilogParser::Specify_terminal_descriptorContext *ctx) = 0;
  virtual void exitSpecify_terminal_descriptor(SystemVerilogParser::Specify_terminal_descriptorContext *ctx) = 0;

  virtual void enterEdge_control_specifier(SystemVerilogParser::Edge_control_specifierContext *ctx) = 0;
  virtual void exitEdge_control_specifier(SystemVerilogParser::Edge_control_specifierContext *ctx) = 0;

  virtual void enterEdge_descriptor(SystemVerilogParser::Edge_descriptorContext *ctx) = 0;
  virtual void exitEdge_descriptor(SystemVerilogParser::Edge_descriptorContext *ctx) = 0;

  virtual void enterTiming_check_condition(SystemVerilogParser::Timing_check_conditionContext *ctx) = 0;
  virtual void exitTiming_check_condition(SystemVerilogParser::Timing_check_conditionContext *ctx) = 0;

  virtual void enterScalar_timing_check_condition(SystemVerilogParser::Scalar_timing_check_conditionContext *ctx) = 0;
  virtual void exitScalar_timing_check_condition(SystemVerilogParser::Scalar_timing_check_conditionContext *ctx) = 0;

  virtual void enterScalar_constant(SystemVerilogParser::Scalar_constantContext *ctx) = 0;
  virtual void exitScalar_constant(SystemVerilogParser::Scalar_constantContext *ctx) = 0;

  virtual void enterConcatenation(SystemVerilogParser::ConcatenationContext *ctx) = 0;
  virtual void exitConcatenation(SystemVerilogParser::ConcatenationContext *ctx) = 0;

  virtual void enterConstant_concatenation(SystemVerilogParser::Constant_concatenationContext *ctx) = 0;
  virtual void exitConstant_concatenation(SystemVerilogParser::Constant_concatenationContext *ctx) = 0;

  virtual void enterConstant_multiple_concatenation(SystemVerilogParser::Constant_multiple_concatenationContext *ctx) = 0;
  virtual void exitConstant_multiple_concatenation(SystemVerilogParser::Constant_multiple_concatenationContext *ctx) = 0;

  virtual void enterModule_path_concatenation(SystemVerilogParser::Module_path_concatenationContext *ctx) = 0;
  virtual void exitModule_path_concatenation(SystemVerilogParser::Module_path_concatenationContext *ctx) = 0;

  virtual void enterModule_path_multiple_concatenation(SystemVerilogParser::Module_path_multiple_concatenationContext *ctx) = 0;
  virtual void exitModule_path_multiple_concatenation(SystemVerilogParser::Module_path_multiple_concatenationContext *ctx) = 0;

  virtual void enterMultiple_concatenation(SystemVerilogParser::Multiple_concatenationContext *ctx) = 0;
  virtual void exitMultiple_concatenation(SystemVerilogParser::Multiple_concatenationContext *ctx) = 0;

  virtual void enterStreaming_concatenation(SystemVerilogParser::Streaming_concatenationContext *ctx) = 0;
  virtual void exitStreaming_concatenation(SystemVerilogParser::Streaming_concatenationContext *ctx) = 0;

  virtual void enterStream_operator(SystemVerilogParser::Stream_operatorContext *ctx) = 0;
  virtual void exitStream_operator(SystemVerilogParser::Stream_operatorContext *ctx) = 0;

  virtual void enterSlice_size(SystemVerilogParser::Slice_sizeContext *ctx) = 0;
  virtual void exitSlice_size(SystemVerilogParser::Slice_sizeContext *ctx) = 0;

  virtual void enterStream_concatenation(SystemVerilogParser::Stream_concatenationContext *ctx) = 0;
  virtual void exitStream_concatenation(SystemVerilogParser::Stream_concatenationContext *ctx) = 0;

  virtual void enterStream_expression(SystemVerilogParser::Stream_expressionContext *ctx) = 0;
  virtual void exitStream_expression(SystemVerilogParser::Stream_expressionContext *ctx) = 0;

  virtual void enterArray_range_expression(SystemVerilogParser::Array_range_expressionContext *ctx) = 0;
  virtual void exitArray_range_expression(SystemVerilogParser::Array_range_expressionContext *ctx) = 0;

  virtual void enterEmpty_unpacked_array_concatenation(SystemVerilogParser::Empty_unpacked_array_concatenationContext *ctx) = 0;
  virtual void exitEmpty_unpacked_array_concatenation(SystemVerilogParser::Empty_unpacked_array_concatenationContext *ctx) = 0;

  virtual void enterSystem_tf_call(SystemVerilogParser::System_tf_callContext *ctx) = 0;
  virtual void exitSystem_tf_call(SystemVerilogParser::System_tf_callContext *ctx) = 0;

  virtual void enterArg_list(SystemVerilogParser::Arg_listContext *ctx) = 0;
  virtual void exitArg_list(SystemVerilogParser::Arg_listContext *ctx) = 0;

  virtual void enterSubroutine_call(SystemVerilogParser::Subroutine_callContext *ctx) = 0;
  virtual void exitSubroutine_call(SystemVerilogParser::Subroutine_callContext *ctx) = 0;

  virtual void enterList_of_arguments(SystemVerilogParser::List_of_argumentsContext *ctx) = 0;
  virtual void exitList_of_arguments(SystemVerilogParser::List_of_argumentsContext *ctx) = 0;

  virtual void enterOrdered_arg(SystemVerilogParser::Ordered_argContext *ctx) = 0;
  virtual void exitOrdered_arg(SystemVerilogParser::Ordered_argContext *ctx) = 0;

  virtual void enterNamed_arg(SystemVerilogParser::Named_argContext *ctx) = 0;
  virtual void exitNamed_arg(SystemVerilogParser::Named_argContext *ctx) = 0;

  virtual void enterArray_manipulation_call(SystemVerilogParser::Array_manipulation_callContext *ctx) = 0;
  virtual void exitArray_manipulation_call(SystemVerilogParser::Array_manipulation_callContext *ctx) = 0;

  virtual void enterRandomize_call(SystemVerilogParser::Randomize_callContext *ctx) = 0;
  virtual void exitRandomize_call(SystemVerilogParser::Randomize_callContext *ctx) = 0;

  virtual void enterRand_list(SystemVerilogParser::Rand_listContext *ctx) = 0;
  virtual void exitRand_list(SystemVerilogParser::Rand_listContext *ctx) = 0;

  virtual void enterRand_with(SystemVerilogParser::Rand_withContext *ctx) = 0;
  virtual void exitRand_with(SystemVerilogParser::Rand_withContext *ctx) = 0;

  virtual void enterId_list(SystemVerilogParser::Id_listContext *ctx) = 0;
  virtual void exitId_list(SystemVerilogParser::Id_listContext *ctx) = 0;

  virtual void enterMethod_call_root(SystemVerilogParser::Method_call_rootContext *ctx) = 0;
  virtual void exitMethod_call_root(SystemVerilogParser::Method_call_rootContext *ctx) = 0;

  virtual void enterArray_method_name(SystemVerilogParser::Array_method_nameContext *ctx) = 0;
  virtual void exitArray_method_name(SystemVerilogParser::Array_method_nameContext *ctx) = 0;

  virtual void enterInc_or_dec_expression(SystemVerilogParser::Inc_or_dec_expressionContext *ctx) = 0;
  virtual void exitInc_or_dec_expression(SystemVerilogParser::Inc_or_dec_expressionContext *ctx) = 0;

  virtual void enterConstant_expression(SystemVerilogParser::Constant_expressionContext *ctx) = 0;
  virtual void exitConstant_expression(SystemVerilogParser::Constant_expressionContext *ctx) = 0;

  virtual void enterConstant_mintypmax_expression(SystemVerilogParser::Constant_mintypmax_expressionContext *ctx) = 0;
  virtual void exitConstant_mintypmax_expression(SystemVerilogParser::Constant_mintypmax_expressionContext *ctx) = 0;

  virtual void enterConstant_param_expression(SystemVerilogParser::Constant_param_expressionContext *ctx) = 0;
  virtual void exitConstant_param_expression(SystemVerilogParser::Constant_param_expressionContext *ctx) = 0;

  virtual void enterParam_expression(SystemVerilogParser::Param_expressionContext *ctx) = 0;
  virtual void exitParam_expression(SystemVerilogParser::Param_expressionContext *ctx) = 0;

  virtual void enterConstant_range_expression(SystemVerilogParser::Constant_range_expressionContext *ctx) = 0;
  virtual void exitConstant_range_expression(SystemVerilogParser::Constant_range_expressionContext *ctx) = 0;

  virtual void enterConstant_part_select_range(SystemVerilogParser::Constant_part_select_rangeContext *ctx) = 0;
  virtual void exitConstant_part_select_range(SystemVerilogParser::Constant_part_select_rangeContext *ctx) = 0;

  virtual void enterConstant_range(SystemVerilogParser::Constant_rangeContext *ctx) = 0;
  virtual void exitConstant_range(SystemVerilogParser::Constant_rangeContext *ctx) = 0;

  virtual void enterConstant_indexed_range(SystemVerilogParser::Constant_indexed_rangeContext *ctx) = 0;
  virtual void exitConstant_indexed_range(SystemVerilogParser::Constant_indexed_rangeContext *ctx) = 0;

  virtual void enterExpression(SystemVerilogParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(SystemVerilogParser::ExpressionContext *ctx) = 0;

  virtual void enterTagged_union_expression(SystemVerilogParser::Tagged_union_expressionContext *ctx) = 0;
  virtual void exitTagged_union_expression(SystemVerilogParser::Tagged_union_expressionContext *ctx) = 0;

  virtual void enterValue_range(SystemVerilogParser::Value_rangeContext *ctx) = 0;
  virtual void exitValue_range(SystemVerilogParser::Value_rangeContext *ctx) = 0;

  virtual void enterMintypmax_expression(SystemVerilogParser::Mintypmax_expressionContext *ctx) = 0;
  virtual void exitMintypmax_expression(SystemVerilogParser::Mintypmax_expressionContext *ctx) = 0;

  virtual void enterModule_path_expression(SystemVerilogParser::Module_path_expressionContext *ctx) = 0;
  virtual void exitModule_path_expression(SystemVerilogParser::Module_path_expressionContext *ctx) = 0;

  virtual void enterModule_path_mintypmax_expression(SystemVerilogParser::Module_path_mintypmax_expressionContext *ctx) = 0;
  virtual void exitModule_path_mintypmax_expression(SystemVerilogParser::Module_path_mintypmax_expressionContext *ctx) = 0;

  virtual void enterPart_select_range(SystemVerilogParser::Part_select_rangeContext *ctx) = 0;
  virtual void exitPart_select_range(SystemVerilogParser::Part_select_rangeContext *ctx) = 0;

  virtual void enterIndexed_range(SystemVerilogParser::Indexed_rangeContext *ctx) = 0;
  virtual void exitIndexed_range(SystemVerilogParser::Indexed_rangeContext *ctx) = 0;

  virtual void enterGenvar_expression(SystemVerilogParser::Genvar_expressionContext *ctx) = 0;
  virtual void exitGenvar_expression(SystemVerilogParser::Genvar_expressionContext *ctx) = 0;

  virtual void enterConstant_primary(SystemVerilogParser::Constant_primaryContext *ctx) = 0;
  virtual void exitConstant_primary(SystemVerilogParser::Constant_primaryContext *ctx) = 0;

  virtual void enterModule_path_primary(SystemVerilogParser::Module_path_primaryContext *ctx) = 0;
  virtual void exitModule_path_primary(SystemVerilogParser::Module_path_primaryContext *ctx) = 0;

  virtual void enterPrimary(SystemVerilogParser::PrimaryContext *ctx) = 0;
  virtual void exitPrimary(SystemVerilogParser::PrimaryContext *ctx) = 0;

  virtual void enterRange_expression(SystemVerilogParser::Range_expressionContext *ctx) = 0;
  virtual void exitRange_expression(SystemVerilogParser::Range_expressionContext *ctx) = 0;

  virtual void enterPrimary_literal(SystemVerilogParser::Primary_literalContext *ctx) = 0;
  virtual void exitPrimary_literal(SystemVerilogParser::Primary_literalContext *ctx) = 0;

  virtual void enterTime_literal(SystemVerilogParser::Time_literalContext *ctx) = 0;
  virtual void exitTime_literal(SystemVerilogParser::Time_literalContext *ctx) = 0;

  virtual void enterImplicit_class_handle(SystemVerilogParser::Implicit_class_handleContext *ctx) = 0;
  virtual void exitImplicit_class_handle(SystemVerilogParser::Implicit_class_handleContext *ctx) = 0;

  virtual void enterBit_select(SystemVerilogParser::Bit_selectContext *ctx) = 0;
  virtual void exitBit_select(SystemVerilogParser::Bit_selectContext *ctx) = 0;

  virtual void enterSelect_(SystemVerilogParser::Select_Context *ctx) = 0;
  virtual void exitSelect_(SystemVerilogParser::Select_Context *ctx) = 0;

  virtual void enterNonrange_select(SystemVerilogParser::Nonrange_selectContext *ctx) = 0;
  virtual void exitNonrange_select(SystemVerilogParser::Nonrange_selectContext *ctx) = 0;

  virtual void enterMember_select(SystemVerilogParser::Member_selectContext *ctx) = 0;
  virtual void exitMember_select(SystemVerilogParser::Member_selectContext *ctx) = 0;

  virtual void enterConstant_bit_select(SystemVerilogParser::Constant_bit_selectContext *ctx) = 0;
  virtual void exitConstant_bit_select(SystemVerilogParser::Constant_bit_selectContext *ctx) = 0;

  virtual void enterConstant_select(SystemVerilogParser::Constant_selectContext *ctx) = 0;
  virtual void exitConstant_select(SystemVerilogParser::Constant_selectContext *ctx) = 0;

  virtual void enterConst_member_select(SystemVerilogParser::Const_member_selectContext *ctx) = 0;
  virtual void exitConst_member_select(SystemVerilogParser::Const_member_selectContext *ctx) = 0;

  virtual void enterNet_lvalue(SystemVerilogParser::Net_lvalueContext *ctx) = 0;
  virtual void exitNet_lvalue(SystemVerilogParser::Net_lvalueContext *ctx) = 0;

  virtual void enterVariable_lvalue(SystemVerilogParser::Variable_lvalueContext *ctx) = 0;
  virtual void exitVariable_lvalue(SystemVerilogParser::Variable_lvalueContext *ctx) = 0;

  virtual void enterNonrange_variable_lvalue(SystemVerilogParser::Nonrange_variable_lvalueContext *ctx) = 0;
  virtual void exitNonrange_variable_lvalue(SystemVerilogParser::Nonrange_variable_lvalueContext *ctx) = 0;

  virtual void enterUnary_operator(SystemVerilogParser::Unary_operatorContext *ctx) = 0;
  virtual void exitUnary_operator(SystemVerilogParser::Unary_operatorContext *ctx) = 0;

  virtual void enterInc_or_dec_operator(SystemVerilogParser::Inc_or_dec_operatorContext *ctx) = 0;
  virtual void exitInc_or_dec_operator(SystemVerilogParser::Inc_or_dec_operatorContext *ctx) = 0;

  virtual void enterUnary_module_path_operator(SystemVerilogParser::Unary_module_path_operatorContext *ctx) = 0;
  virtual void exitUnary_module_path_operator(SystemVerilogParser::Unary_module_path_operatorContext *ctx) = 0;

  virtual void enterNumber(SystemVerilogParser::NumberContext *ctx) = 0;
  virtual void exitNumber(SystemVerilogParser::NumberContext *ctx) = 0;

  virtual void enterIntegral_number(SystemVerilogParser::Integral_numberContext *ctx) = 0;
  virtual void exitIntegral_number(SystemVerilogParser::Integral_numberContext *ctx) = 0;

  virtual void enterDecimal_number(SystemVerilogParser::Decimal_numberContext *ctx) = 0;
  virtual void exitDecimal_number(SystemVerilogParser::Decimal_numberContext *ctx) = 0;

  virtual void enterBinary_number(SystemVerilogParser::Binary_numberContext *ctx) = 0;
  virtual void exitBinary_number(SystemVerilogParser::Binary_numberContext *ctx) = 0;

  virtual void enterOctal_number(SystemVerilogParser::Octal_numberContext *ctx) = 0;
  virtual void exitOctal_number(SystemVerilogParser::Octal_numberContext *ctx) = 0;

  virtual void enterHex_number(SystemVerilogParser::Hex_numberContext *ctx) = 0;
  virtual void exitHex_number(SystemVerilogParser::Hex_numberContext *ctx) = 0;

  virtual void enterSize(SystemVerilogParser::SizeContext *ctx) = 0;
  virtual void exitSize(SystemVerilogParser::SizeContext *ctx) = 0;

  virtual void enterReal_number(SystemVerilogParser::Real_numberContext *ctx) = 0;
  virtual void exitReal_number(SystemVerilogParser::Real_numberContext *ctx) = 0;

  virtual void enterFixed_point_number(SystemVerilogParser::Fixed_point_numberContext *ctx) = 0;
  virtual void exitFixed_point_number(SystemVerilogParser::Fixed_point_numberContext *ctx) = 0;

  virtual void enterExponential_number(SystemVerilogParser::Exponential_numberContext *ctx) = 0;
  virtual void exitExponential_number(SystemVerilogParser::Exponential_numberContext *ctx) = 0;

  virtual void enterUnsigned_number(SystemVerilogParser::Unsigned_numberContext *ctx) = 0;
  virtual void exitUnsigned_number(SystemVerilogParser::Unsigned_numberContext *ctx) = 0;

  virtual void enterDecimal_value(SystemVerilogParser::Decimal_valueContext *ctx) = 0;
  virtual void exitDecimal_value(SystemVerilogParser::Decimal_valueContext *ctx) = 0;

  virtual void enterBinary_value(SystemVerilogParser::Binary_valueContext *ctx) = 0;
  virtual void exitBinary_value(SystemVerilogParser::Binary_valueContext *ctx) = 0;

  virtual void enterOctal_value(SystemVerilogParser::Octal_valueContext *ctx) = 0;
  virtual void exitOctal_value(SystemVerilogParser::Octal_valueContext *ctx) = 0;

  virtual void enterHex_value(SystemVerilogParser::Hex_valueContext *ctx) = 0;
  virtual void exitHex_value(SystemVerilogParser::Hex_valueContext *ctx) = 0;

  virtual void enterDecimal_base(SystemVerilogParser::Decimal_baseContext *ctx) = 0;
  virtual void exitDecimal_base(SystemVerilogParser::Decimal_baseContext *ctx) = 0;

  virtual void enterBinary_base(SystemVerilogParser::Binary_baseContext *ctx) = 0;
  virtual void exitBinary_base(SystemVerilogParser::Binary_baseContext *ctx) = 0;

  virtual void enterOctal_base(SystemVerilogParser::Octal_baseContext *ctx) = 0;
  virtual void exitOctal_base(SystemVerilogParser::Octal_baseContext *ctx) = 0;

  virtual void enterHex_base(SystemVerilogParser::Hex_baseContext *ctx) = 0;
  virtual void exitHex_base(SystemVerilogParser::Hex_baseContext *ctx) = 0;

  virtual void enterUnbased_unsized_literal(SystemVerilogParser::Unbased_unsized_literalContext *ctx) = 0;
  virtual void exitUnbased_unsized_literal(SystemVerilogParser::Unbased_unsized_literalContext *ctx) = 0;

  virtual void enterString_literal(SystemVerilogParser::String_literalContext *ctx) = 0;
  virtual void exitString_literal(SystemVerilogParser::String_literalContext *ctx) = 0;

  virtual void enterAttribute_instance(SystemVerilogParser::Attribute_instanceContext *ctx) = 0;
  virtual void exitAttribute_instance(SystemVerilogParser::Attribute_instanceContext *ctx) = 0;

  virtual void enterAttr_spec(SystemVerilogParser::Attr_specContext *ctx) = 0;
  virtual void exitAttr_spec(SystemVerilogParser::Attr_specContext *ctx) = 0;

  virtual void enterAttr_name(SystemVerilogParser::Attr_nameContext *ctx) = 0;
  virtual void exitAttr_name(SystemVerilogParser::Attr_nameContext *ctx) = 0;

  virtual void enterBlock_identifier(SystemVerilogParser::Block_identifierContext *ctx) = 0;
  virtual void exitBlock_identifier(SystemVerilogParser::Block_identifierContext *ctx) = 0;

  virtual void enterBin_identifier(SystemVerilogParser::Bin_identifierContext *ctx) = 0;
  virtual void exitBin_identifier(SystemVerilogParser::Bin_identifierContext *ctx) = 0;

  virtual void enterC_identifier(SystemVerilogParser::C_identifierContext *ctx) = 0;
  virtual void exitC_identifier(SystemVerilogParser::C_identifierContext *ctx) = 0;

  virtual void enterCell_identifier(SystemVerilogParser::Cell_identifierContext *ctx) = 0;
  virtual void exitCell_identifier(SystemVerilogParser::Cell_identifierContext *ctx) = 0;

  virtual void enterChecker_identifier(SystemVerilogParser::Checker_identifierContext *ctx) = 0;
  virtual void exitChecker_identifier(SystemVerilogParser::Checker_identifierContext *ctx) = 0;

  virtual void enterClass_identifier(SystemVerilogParser::Class_identifierContext *ctx) = 0;
  virtual void exitClass_identifier(SystemVerilogParser::Class_identifierContext *ctx) = 0;

  virtual void enterClass_variable_identifier(SystemVerilogParser::Class_variable_identifierContext *ctx) = 0;
  virtual void exitClass_variable_identifier(SystemVerilogParser::Class_variable_identifierContext *ctx) = 0;

  virtual void enterClocking_identifier(SystemVerilogParser::Clocking_identifierContext *ctx) = 0;
  virtual void exitClocking_identifier(SystemVerilogParser::Clocking_identifierContext *ctx) = 0;

  virtual void enterConfig_identifier(SystemVerilogParser::Config_identifierContext *ctx) = 0;
  virtual void exitConfig_identifier(SystemVerilogParser::Config_identifierContext *ctx) = 0;

  virtual void enterConst_identifier(SystemVerilogParser::Const_identifierContext *ctx) = 0;
  virtual void exitConst_identifier(SystemVerilogParser::Const_identifierContext *ctx) = 0;

  virtual void enterConstraint_identifier(SystemVerilogParser::Constraint_identifierContext *ctx) = 0;
  virtual void exitConstraint_identifier(SystemVerilogParser::Constraint_identifierContext *ctx) = 0;

  virtual void enterCovergroup_identifier(SystemVerilogParser::Covergroup_identifierContext *ctx) = 0;
  virtual void exitCovergroup_identifier(SystemVerilogParser::Covergroup_identifierContext *ctx) = 0;

  virtual void enterCover_point_identifier(SystemVerilogParser::Cover_point_identifierContext *ctx) = 0;
  virtual void exitCover_point_identifier(SystemVerilogParser::Cover_point_identifierContext *ctx) = 0;

  virtual void enterCross_identifier(SystemVerilogParser::Cross_identifierContext *ctx) = 0;
  virtual void exitCross_identifier(SystemVerilogParser::Cross_identifierContext *ctx) = 0;

  virtual void enterDynamic_array_variable_identifier(SystemVerilogParser::Dynamic_array_variable_identifierContext *ctx) = 0;
  virtual void exitDynamic_array_variable_identifier(SystemVerilogParser::Dynamic_array_variable_identifierContext *ctx) = 0;

  virtual void enterEnum_identifier(SystemVerilogParser::Enum_identifierContext *ctx) = 0;
  virtual void exitEnum_identifier(SystemVerilogParser::Enum_identifierContext *ctx) = 0;

  virtual void enterEscaped_identifier(SystemVerilogParser::Escaped_identifierContext *ctx) = 0;
  virtual void exitEscaped_identifier(SystemVerilogParser::Escaped_identifierContext *ctx) = 0;

  virtual void enterFormal_port_identifier(SystemVerilogParser::Formal_port_identifierContext *ctx) = 0;
  virtual void exitFormal_port_identifier(SystemVerilogParser::Formal_port_identifierContext *ctx) = 0;

  virtual void enterFunction_identifier(SystemVerilogParser::Function_identifierContext *ctx) = 0;
  virtual void exitFunction_identifier(SystemVerilogParser::Function_identifierContext *ctx) = 0;

  virtual void enterGenerate_block_identifier(SystemVerilogParser::Generate_block_identifierContext *ctx) = 0;
  virtual void exitGenerate_block_identifier(SystemVerilogParser::Generate_block_identifierContext *ctx) = 0;

  virtual void enterGenvar_identifier(SystemVerilogParser::Genvar_identifierContext *ctx) = 0;
  virtual void exitGenvar_identifier(SystemVerilogParser::Genvar_identifierContext *ctx) = 0;

  virtual void enterHierarchical_identifier(SystemVerilogParser::Hierarchical_identifierContext *ctx) = 0;
  virtual void exitHierarchical_identifier(SystemVerilogParser::Hierarchical_identifierContext *ctx) = 0;

  virtual void enterHier_ref(SystemVerilogParser::Hier_refContext *ctx) = 0;
  virtual void exitHier_ref(SystemVerilogParser::Hier_refContext *ctx) = 0;

  virtual void enterIdentifier(SystemVerilogParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(SystemVerilogParser::IdentifierContext *ctx) = 0;

  virtual void enterIndex_variable_identifier(SystemVerilogParser::Index_variable_identifierContext *ctx) = 0;
  virtual void exitIndex_variable_identifier(SystemVerilogParser::Index_variable_identifierContext *ctx) = 0;

  virtual void enterInterface_identifier(SystemVerilogParser::Interface_identifierContext *ctx) = 0;
  virtual void exitInterface_identifier(SystemVerilogParser::Interface_identifierContext *ctx) = 0;

  virtual void enterInterface_instance_identifier(SystemVerilogParser::Interface_instance_identifierContext *ctx) = 0;
  virtual void exitInterface_instance_identifier(SystemVerilogParser::Interface_instance_identifierContext *ctx) = 0;

  virtual void enterInput_port_identifier(SystemVerilogParser::Input_port_identifierContext *ctx) = 0;
  virtual void exitInput_port_identifier(SystemVerilogParser::Input_port_identifierContext *ctx) = 0;

  virtual void enterInstance_identifier(SystemVerilogParser::Instance_identifierContext *ctx) = 0;
  virtual void exitInstance_identifier(SystemVerilogParser::Instance_identifierContext *ctx) = 0;

  virtual void enterLibrary_identifier(SystemVerilogParser::Library_identifierContext *ctx) = 0;
  virtual void exitLibrary_identifier(SystemVerilogParser::Library_identifierContext *ctx) = 0;

  virtual void enterMember_identifier(SystemVerilogParser::Member_identifierContext *ctx) = 0;
  virtual void exitMember_identifier(SystemVerilogParser::Member_identifierContext *ctx) = 0;

  virtual void enterMethod_identifier(SystemVerilogParser::Method_identifierContext *ctx) = 0;
  virtual void exitMethod_identifier(SystemVerilogParser::Method_identifierContext *ctx) = 0;

  virtual void enterModport_identifier(SystemVerilogParser::Modport_identifierContext *ctx) = 0;
  virtual void exitModport_identifier(SystemVerilogParser::Modport_identifierContext *ctx) = 0;

  virtual void enterModule_identifier(SystemVerilogParser::Module_identifierContext *ctx) = 0;
  virtual void exitModule_identifier(SystemVerilogParser::Module_identifierContext *ctx) = 0;

  virtual void enterNet_identifier(SystemVerilogParser::Net_identifierContext *ctx) = 0;
  virtual void exitNet_identifier(SystemVerilogParser::Net_identifierContext *ctx) = 0;

  virtual void enterNet_type_identifier(SystemVerilogParser::Net_type_identifierContext *ctx) = 0;
  virtual void exitNet_type_identifier(SystemVerilogParser::Net_type_identifierContext *ctx) = 0;

  virtual void enterOutput_port_identifier(SystemVerilogParser::Output_port_identifierContext *ctx) = 0;
  virtual void exitOutput_port_identifier(SystemVerilogParser::Output_port_identifierContext *ctx) = 0;

  virtual void enterPackage_identifier(SystemVerilogParser::Package_identifierContext *ctx) = 0;
  virtual void exitPackage_identifier(SystemVerilogParser::Package_identifierContext *ctx) = 0;

  virtual void enterPackage_scope(SystemVerilogParser::Package_scopeContext *ctx) = 0;
  virtual void exitPackage_scope(SystemVerilogParser::Package_scopeContext *ctx) = 0;

  virtual void enterParameter_identifier(SystemVerilogParser::Parameter_identifierContext *ctx) = 0;
  virtual void exitParameter_identifier(SystemVerilogParser::Parameter_identifierContext *ctx) = 0;

  virtual void enterPort_identifier(SystemVerilogParser::Port_identifierContext *ctx) = 0;
  virtual void exitPort_identifier(SystemVerilogParser::Port_identifierContext *ctx) = 0;

  virtual void enterProduction_identifier(SystemVerilogParser::Production_identifierContext *ctx) = 0;
  virtual void exitProduction_identifier(SystemVerilogParser::Production_identifierContext *ctx) = 0;

  virtual void enterProgram_identifier(SystemVerilogParser::Program_identifierContext *ctx) = 0;
  virtual void exitProgram_identifier(SystemVerilogParser::Program_identifierContext *ctx) = 0;

  virtual void enterProperty_identifier(SystemVerilogParser::Property_identifierContext *ctx) = 0;
  virtual void exitProperty_identifier(SystemVerilogParser::Property_identifierContext *ctx) = 0;

  virtual void enterPs_identifier(SystemVerilogParser::Ps_identifierContext *ctx) = 0;
  virtual void exitPs_identifier(SystemVerilogParser::Ps_identifierContext *ctx) = 0;

  virtual void enterPs_or_hierarchical_array_identifier(SystemVerilogParser::Ps_or_hierarchical_array_identifierContext *ctx) = 0;
  virtual void exitPs_or_hierarchical_array_identifier(SystemVerilogParser::Ps_or_hierarchical_array_identifierContext *ctx) = 0;

  virtual void enterPs_or_hierarchical_identifier(SystemVerilogParser::Ps_or_hierarchical_identifierContext *ctx) = 0;
  virtual void exitPs_or_hierarchical_identifier(SystemVerilogParser::Ps_or_hierarchical_identifierContext *ctx) = 0;

  virtual void enterPs_type_or_parameter_identifier(SystemVerilogParser::Ps_type_or_parameter_identifierContext *ctx) = 0;
  virtual void exitPs_type_or_parameter_identifier(SystemVerilogParser::Ps_type_or_parameter_identifierContext *ctx) = 0;

  virtual void enterGen_ref(SystemVerilogParser::Gen_refContext *ctx) = 0;
  virtual void exitGen_ref(SystemVerilogParser::Gen_refContext *ctx) = 0;

  virtual void enterSequence_identifier(SystemVerilogParser::Sequence_identifierContext *ctx) = 0;
  virtual void exitSequence_identifier(SystemVerilogParser::Sequence_identifierContext *ctx) = 0;

  virtual void enterSignal_identifier(SystemVerilogParser::Signal_identifierContext *ctx) = 0;
  virtual void exitSignal_identifier(SystemVerilogParser::Signal_identifierContext *ctx) = 0;

  virtual void enterSimple_identifier(SystemVerilogParser::Simple_identifierContext *ctx) = 0;
  virtual void exitSimple_identifier(SystemVerilogParser::Simple_identifierContext *ctx) = 0;

  virtual void enterSpecparam_identifier(SystemVerilogParser::Specparam_identifierContext *ctx) = 0;
  virtual void exitSpecparam_identifier(SystemVerilogParser::Specparam_identifierContext *ctx) = 0;

  virtual void enterSystem_tf_identifier(SystemVerilogParser::System_tf_identifierContext *ctx) = 0;
  virtual void exitSystem_tf_identifier(SystemVerilogParser::System_tf_identifierContext *ctx) = 0;

  virtual void enterTask_identifier(SystemVerilogParser::Task_identifierContext *ctx) = 0;
  virtual void exitTask_identifier(SystemVerilogParser::Task_identifierContext *ctx) = 0;

  virtual void enterTf_identifier(SystemVerilogParser::Tf_identifierContext *ctx) = 0;
  virtual void exitTf_identifier(SystemVerilogParser::Tf_identifierContext *ctx) = 0;

  virtual void enterTerminal_identifier(SystemVerilogParser::Terminal_identifierContext *ctx) = 0;
  virtual void exitTerminal_identifier(SystemVerilogParser::Terminal_identifierContext *ctx) = 0;

  virtual void enterTopmodule_identifier(SystemVerilogParser::Topmodule_identifierContext *ctx) = 0;
  virtual void exitTopmodule_identifier(SystemVerilogParser::Topmodule_identifierContext *ctx) = 0;

  virtual void enterType_identifier(SystemVerilogParser::Type_identifierContext *ctx) = 0;
  virtual void exitType_identifier(SystemVerilogParser::Type_identifierContext *ctx) = 0;

  virtual void enterUdp_identifier(SystemVerilogParser::Udp_identifierContext *ctx) = 0;
  virtual void exitUdp_identifier(SystemVerilogParser::Udp_identifierContext *ctx) = 0;

  virtual void enterVariable_identifier(SystemVerilogParser::Variable_identifierContext *ctx) = 0;
  virtual void exitVariable_identifier(SystemVerilogParser::Variable_identifierContext *ctx) = 0;


};

