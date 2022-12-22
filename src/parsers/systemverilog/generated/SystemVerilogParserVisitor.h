
// Generated from SystemVerilogParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "SystemVerilogParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by SystemVerilogParser.
 */
class  SystemVerilogParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SystemVerilogParser.
   */
    virtual std::any visitLibrary_text(SystemVerilogParser::Library_textContext *context) = 0;

    virtual std::any visitLibrary_description(SystemVerilogParser::Library_descriptionContext *context) = 0;

    virtual std::any visitLibrary_declaration(SystemVerilogParser::Library_declarationContext *context) = 0;

    virtual std::any visitLibrary_incdir(SystemVerilogParser::Library_incdirContext *context) = 0;

    virtual std::any visitInclude_statement(SystemVerilogParser::Include_statementContext *context) = 0;

    virtual std::any visitFile_path_spec(SystemVerilogParser::File_path_specContext *context) = 0;

    virtual std::any visitSource_text(SystemVerilogParser::Source_textContext *context) = 0;

    virtual std::any visitDescription(SystemVerilogParser::DescriptionContext *context) = 0;

    virtual std::any visitModule_header(SystemVerilogParser::Module_headerContext *context) = 0;

    virtual std::any visitModule_declaration(SystemVerilogParser::Module_declarationContext *context) = 0;

    virtual std::any visitModule_name(SystemVerilogParser::Module_nameContext *context) = 0;

    virtual std::any visitModule_keyword(SystemVerilogParser::Module_keywordContext *context) = 0;

    virtual std::any visitInterface_declaration(SystemVerilogParser::Interface_declarationContext *context) = 0;

    virtual std::any visitInterface_name(SystemVerilogParser::Interface_nameContext *context) = 0;

    virtual std::any visitInterface_header(SystemVerilogParser::Interface_headerContext *context) = 0;

    virtual std::any visitProgram_declaration(SystemVerilogParser::Program_declarationContext *context) = 0;

    virtual std::any visitProgram_name(SystemVerilogParser::Program_nameContext *context) = 0;

    virtual std::any visitProgram_header(SystemVerilogParser::Program_headerContext *context) = 0;

    virtual std::any visitChecker_declaration(SystemVerilogParser::Checker_declarationContext *context) = 0;

    virtual std::any visitChecker_name(SystemVerilogParser::Checker_nameContext *context) = 0;

    virtual std::any visitChecker_ports(SystemVerilogParser::Checker_portsContext *context) = 0;

    virtual std::any visitChecker_decl_item(SystemVerilogParser::Checker_decl_itemContext *context) = 0;

    virtual std::any visitClass_declaration(SystemVerilogParser::Class_declarationContext *context) = 0;

    virtual std::any visitClass_name(SystemVerilogParser::Class_nameContext *context) = 0;

    virtual std::any visitClass_extension(SystemVerilogParser::Class_extensionContext *context) = 0;

    virtual std::any visitClass_implementation(SystemVerilogParser::Class_implementationContext *context) = 0;

    virtual std::any visitInterface_class_type(SystemVerilogParser::Interface_class_typeContext *context) = 0;

    virtual std::any visitInterface_class_declaration(SystemVerilogParser::Interface_class_declarationContext *context) = 0;

    virtual std::any visitInterface_class_extension(SystemVerilogParser::Interface_class_extensionContext *context) = 0;

    virtual std::any visitInterface_class_item(SystemVerilogParser::Interface_class_itemContext *context) = 0;

    virtual std::any visitInterface_class_method(SystemVerilogParser::Interface_class_methodContext *context) = 0;

    virtual std::any visitPackage_declaration(SystemVerilogParser::Package_declarationContext *context) = 0;

    virtual std::any visitPackage_name(SystemVerilogParser::Package_nameContext *context) = 0;

    virtual std::any visitPkg_decl_item(SystemVerilogParser::Pkg_decl_itemContext *context) = 0;

    virtual std::any visitTimeunits_declaration(SystemVerilogParser::Timeunits_declarationContext *context) = 0;

    virtual std::any visitParameter_port_list(SystemVerilogParser::Parameter_port_listContext *context) = 0;

    virtual std::any visitParameter_port_declaration(SystemVerilogParser::Parameter_port_declarationContext *context) = 0;

    virtual std::any visitList_of_port_declarations(SystemVerilogParser::List_of_port_declarationsContext *context) = 0;

    virtual std::any visitPort_decl(SystemVerilogParser::Port_declContext *context) = 0;

    virtual std::any visitPort_declaration(SystemVerilogParser::Port_declarationContext *context) = 0;

    virtual std::any visitPort(SystemVerilogParser::PortContext *context) = 0;

    virtual std::any visitPort_implicit(SystemVerilogParser::Port_implicitContext *context) = 0;

    virtual std::any visitPort_expression(SystemVerilogParser::Port_expressionContext *context) = 0;

    virtual std::any visitPort_reference(SystemVerilogParser::Port_referenceContext *context) = 0;

    virtual std::any visitPort_direction(SystemVerilogParser::Port_directionContext *context) = 0;

    virtual std::any visitAnsi_port_declaration(SystemVerilogParser::Ansi_port_declarationContext *context) = 0;

    virtual std::any visitElaboration_system_task(SystemVerilogParser::Elaboration_system_taskContext *context) = 0;

    virtual std::any visitFatal_arg_list(SystemVerilogParser::Fatal_arg_listContext *context) = 0;

    virtual std::any visitFinish_number(SystemVerilogParser::Finish_numberContext *context) = 0;

    virtual std::any visitModule_common_item(SystemVerilogParser::Module_common_itemContext *context) = 0;

    virtual std::any visitModule_item(SystemVerilogParser::Module_itemContext *context) = 0;

    virtual std::any visitModule_item_declaration(SystemVerilogParser::Module_item_declarationContext *context) = 0;

    virtual std::any visitParameter_override(SystemVerilogParser::Parameter_overrideContext *context) = 0;

    virtual std::any visitBind_directive(SystemVerilogParser::Bind_directiveContext *context) = 0;

    virtual std::any visitBind_target_scope(SystemVerilogParser::Bind_target_scopeContext *context) = 0;

    virtual std::any visitBind_target_instance(SystemVerilogParser::Bind_target_instanceContext *context) = 0;

    virtual std::any visitBind_target_instance_list(SystemVerilogParser::Bind_target_instance_listContext *context) = 0;

    virtual std::any visitBind_instantiation(SystemVerilogParser::Bind_instantiationContext *context) = 0;

    virtual std::any visitConfig_declaration(SystemVerilogParser::Config_declarationContext *context) = 0;

    virtual std::any visitConfig_name(SystemVerilogParser::Config_nameContext *context) = 0;

    virtual std::any visitDesign_statement(SystemVerilogParser::Design_statementContext *context) = 0;

    virtual std::any visitDesign_statement_item(SystemVerilogParser::Design_statement_itemContext *context) = 0;

    virtual std::any visitConfig_rule_statement(SystemVerilogParser::Config_rule_statementContext *context) = 0;

    virtual std::any visitDefault_clause(SystemVerilogParser::Default_clauseContext *context) = 0;

    virtual std::any visitInst_clause(SystemVerilogParser::Inst_clauseContext *context) = 0;

    virtual std::any visitInst_name(SystemVerilogParser::Inst_nameContext *context) = 0;

    virtual std::any visitCell_clause(SystemVerilogParser::Cell_clauseContext *context) = 0;

    virtual std::any visitLiblist_clause(SystemVerilogParser::Liblist_clauseContext *context) = 0;

    virtual std::any visitUse_clause(SystemVerilogParser::Use_clauseContext *context) = 0;

    virtual std::any visitExtern_tf_declaration(SystemVerilogParser::Extern_tf_declarationContext *context) = 0;

    virtual std::any visitInterface_item(SystemVerilogParser::Interface_itemContext *context) = 0;

    virtual std::any visitProgram_item(SystemVerilogParser::Program_itemContext *context) = 0;

    virtual std::any visitChecker_port_list(SystemVerilogParser::Checker_port_listContext *context) = 0;

    virtual std::any visitChecker_port_item(SystemVerilogParser::Checker_port_itemContext *context) = 0;

    virtual std::any visitChecker_port_direction(SystemVerilogParser::Checker_port_directionContext *context) = 0;

    virtual std::any visitChecker_item(SystemVerilogParser::Checker_itemContext *context) = 0;

    virtual std::any visitChecker_item_declaration(SystemVerilogParser::Checker_item_declarationContext *context) = 0;

    virtual std::any visitClass_item(SystemVerilogParser::Class_itemContext *context) = 0;

    virtual std::any visitClass_property(SystemVerilogParser::Class_propertyContext *context) = 0;

    virtual std::any visitClass_method(SystemVerilogParser::Class_methodContext *context) = 0;

    virtual std::any visitClass_constructor_prototype(SystemVerilogParser::Class_constructor_prototypeContext *context) = 0;

    virtual std::any visitPort_list(SystemVerilogParser::Port_listContext *context) = 0;

    virtual std::any visitClass_constraint(SystemVerilogParser::Class_constraintContext *context) = 0;

    virtual std::any visitClass_item_qualifier(SystemVerilogParser::Class_item_qualifierContext *context) = 0;

    virtual std::any visitProperty_qualifier(SystemVerilogParser::Property_qualifierContext *context) = 0;

    virtual std::any visitRandom_qualifier(SystemVerilogParser::Random_qualifierContext *context) = 0;

    virtual std::any visitMethod_qualifier(SystemVerilogParser::Method_qualifierContext *context) = 0;

    virtual std::any visitMethod_prototype(SystemVerilogParser::Method_prototypeContext *context) = 0;

    virtual std::any visitClass_constructor_declaration(SystemVerilogParser::Class_constructor_declarationContext *context) = 0;

    virtual std::any visitSuper_class_constructor_call(SystemVerilogParser::Super_class_constructor_callContext *context) = 0;

    virtual std::any visitConstraint_declaration(SystemVerilogParser::Constraint_declarationContext *context) = 0;

    virtual std::any visitConstraint_block(SystemVerilogParser::Constraint_blockContext *context) = 0;

    virtual std::any visitConstraint_block_item(SystemVerilogParser::Constraint_block_itemContext *context) = 0;

    virtual std::any visitSolve_before_list(SystemVerilogParser::Solve_before_listContext *context) = 0;

    virtual std::any visitConstraint_primary(SystemVerilogParser::Constraint_primaryContext *context) = 0;

    virtual std::any visitConstraint_expression(SystemVerilogParser::Constraint_expressionContext *context) = 0;

    virtual std::any visitUniqueness_constraint(SystemVerilogParser::Uniqueness_constraintContext *context) = 0;

    virtual std::any visitConstraint_set(SystemVerilogParser::Constraint_setContext *context) = 0;

    virtual std::any visitDist_list(SystemVerilogParser::Dist_listContext *context) = 0;

    virtual std::any visitDist_item(SystemVerilogParser::Dist_itemContext *context) = 0;

    virtual std::any visitDist_weight(SystemVerilogParser::Dist_weightContext *context) = 0;

    virtual std::any visitConstraint_prototype(SystemVerilogParser::Constraint_prototypeContext *context) = 0;

    virtual std::any visitConstraint_prototype_qualifier(SystemVerilogParser::Constraint_prototype_qualifierContext *context) = 0;

    virtual std::any visitExtern_constraint_declaration(SystemVerilogParser::Extern_constraint_declarationContext *context) = 0;

    virtual std::any visitIdentifier_list(SystemVerilogParser::Identifier_listContext *context) = 0;

    virtual std::any visitPackage_item(SystemVerilogParser::Package_itemContext *context) = 0;

    virtual std::any visitPackage_item_declaration(SystemVerilogParser::Package_item_declarationContext *context) = 0;

    virtual std::any visitAnonymous_program(SystemVerilogParser::Anonymous_programContext *context) = 0;

    virtual std::any visitAnonymous_program_item(SystemVerilogParser::Anonymous_program_itemContext *context) = 0;

    virtual std::any visitLocal_parameter_declaration(SystemVerilogParser::Local_parameter_declarationContext *context) = 0;

    virtual std::any visitParameter_declaration(SystemVerilogParser::Parameter_declarationContext *context) = 0;

    virtual std::any visitSpecparam_declaration(SystemVerilogParser::Specparam_declarationContext *context) = 0;

    virtual std::any visitInout_declaration(SystemVerilogParser::Inout_declarationContext *context) = 0;

    virtual std::any visitInput_declaration(SystemVerilogParser::Input_declarationContext *context) = 0;

    virtual std::any visitOutput_declaration(SystemVerilogParser::Output_declarationContext *context) = 0;

    virtual std::any visitInterface_port_declaration(SystemVerilogParser::Interface_port_declarationContext *context) = 0;

    virtual std::any visitRef_declaration(SystemVerilogParser::Ref_declarationContext *context) = 0;

    virtual std::any visitData_declaration(SystemVerilogParser::Data_declarationContext *context) = 0;

    virtual std::any visitPackage_import_declaration(SystemVerilogParser::Package_import_declarationContext *context) = 0;

    virtual std::any visitPackage_import_item(SystemVerilogParser::Package_import_itemContext *context) = 0;

    virtual std::any visitPackage_export_declaration(SystemVerilogParser::Package_export_declarationContext *context) = 0;

    virtual std::any visitGenvar_declaration(SystemVerilogParser::Genvar_declarationContext *context) = 0;

    virtual std::any visitNet_declaration(SystemVerilogParser::Net_declarationContext *context) = 0;

    virtual std::any visitNet_id(SystemVerilogParser::Net_idContext *context) = 0;

    virtual std::any visitType_declaration(SystemVerilogParser::Type_declarationContext *context) = 0;

    virtual std::any visitNet_type_declaration(SystemVerilogParser::Net_type_declarationContext *context) = 0;

    virtual std::any visitNet_type_decl_with(SystemVerilogParser::Net_type_decl_withContext *context) = 0;

    virtual std::any visitLifetime(SystemVerilogParser::LifetimeContext *context) = 0;

    virtual std::any visitData_type(SystemVerilogParser::Data_typeContext *context) = 0;

    virtual std::any visitData_type_or_implicit(SystemVerilogParser::Data_type_or_implicitContext *context) = 0;

    virtual std::any visitImplicit_data_type(SystemVerilogParser::Implicit_data_typeContext *context) = 0;

    virtual std::any visitEnum_base_type(SystemVerilogParser::Enum_base_typeContext *context) = 0;

    virtual std::any visitEnum_name_declaration(SystemVerilogParser::Enum_name_declarationContext *context) = 0;

    virtual std::any visitEnum_name_suffix_range(SystemVerilogParser::Enum_name_suffix_rangeContext *context) = 0;

    virtual std::any visitClass_scope(SystemVerilogParser::Class_scopeContext *context) = 0;

    virtual std::any visitClass_type(SystemVerilogParser::Class_typeContext *context) = 0;

    virtual std::any visitClass_ref(SystemVerilogParser::Class_refContext *context) = 0;

    virtual std::any visitPackage_or_class_scope(SystemVerilogParser::Package_or_class_scopeContext *context) = 0;

    virtual std::any visitInteger_type(SystemVerilogParser::Integer_typeContext *context) = 0;

    virtual std::any visitInteger_atom_type(SystemVerilogParser::Integer_atom_typeContext *context) = 0;

    virtual std::any visitInteger_vector_type(SystemVerilogParser::Integer_vector_typeContext *context) = 0;

    virtual std::any visitNon_integer_type(SystemVerilogParser::Non_integer_typeContext *context) = 0;

    virtual std::any visitNet_type(SystemVerilogParser::Net_typeContext *context) = 0;

    virtual std::any visitNet_port_type(SystemVerilogParser::Net_port_typeContext *context) = 0;

    virtual std::any visitVariable_port_type(SystemVerilogParser::Variable_port_typeContext *context) = 0;

    virtual std::any visitVar_data_type(SystemVerilogParser::Var_data_typeContext *context) = 0;

    virtual std::any visitSigning(SystemVerilogParser::SigningContext *context) = 0;

    virtual std::any visitSimple_type(SystemVerilogParser::Simple_typeContext *context) = 0;

    virtual std::any visitStruct_union_member(SystemVerilogParser::Struct_union_memberContext *context) = 0;

    virtual std::any visitData_type_or_void(SystemVerilogParser::Data_type_or_voidContext *context) = 0;

    virtual std::any visitStruct_union(SystemVerilogParser::Struct_unionContext *context) = 0;

    virtual std::any visitType_reference(SystemVerilogParser::Type_referenceContext *context) = 0;

    virtual std::any visitDrive_strength(SystemVerilogParser::Drive_strengthContext *context) = 0;

    virtual std::any visitStrength0(SystemVerilogParser::Strength0Context *context) = 0;

    virtual std::any visitStrength1(SystemVerilogParser::Strength1Context *context) = 0;

    virtual std::any visitCharge_strength(SystemVerilogParser::Charge_strengthContext *context) = 0;

    virtual std::any visitDelay3(SystemVerilogParser::Delay3Context *context) = 0;

    virtual std::any visitDelay2(SystemVerilogParser::Delay2Context *context) = 0;

    virtual std::any visitDelay_value(SystemVerilogParser::Delay_valueContext *context) = 0;

    virtual std::any visitList_of_defparam_assignments(SystemVerilogParser::List_of_defparam_assignmentsContext *context) = 0;

    virtual std::any visitList_of_genvar_identifiers(SystemVerilogParser::List_of_genvar_identifiersContext *context) = 0;

    virtual std::any visitList_of_interface_identifiers(SystemVerilogParser::List_of_interface_identifiersContext *context) = 0;

    virtual std::any visitInterface_id(SystemVerilogParser::Interface_idContext *context) = 0;

    virtual std::any visitList_of_net_decl_assignments(SystemVerilogParser::List_of_net_decl_assignmentsContext *context) = 0;

    virtual std::any visitList_of_param_assignments(SystemVerilogParser::List_of_param_assignmentsContext *context) = 0;

    virtual std::any visitList_of_port_identifiers(SystemVerilogParser::List_of_port_identifiersContext *context) = 0;

    virtual std::any visitPort_id(SystemVerilogParser::Port_idContext *context) = 0;

    virtual std::any visitList_of_udp_port_identifiers(SystemVerilogParser::List_of_udp_port_identifiersContext *context) = 0;

    virtual std::any visitList_of_specparam_assignments(SystemVerilogParser::List_of_specparam_assignmentsContext *context) = 0;

    virtual std::any visitList_of_tf_variable_identifiers(SystemVerilogParser::List_of_tf_variable_identifiersContext *context) = 0;

    virtual std::any visitTf_var_id(SystemVerilogParser::Tf_var_idContext *context) = 0;

    virtual std::any visitList_of_type_assignments(SystemVerilogParser::List_of_type_assignmentsContext *context) = 0;

    virtual std::any visitList_of_variable_decl_assignments(SystemVerilogParser::List_of_variable_decl_assignmentsContext *context) = 0;

    virtual std::any visitList_of_variable_identifiers(SystemVerilogParser::List_of_variable_identifiersContext *context) = 0;

    virtual std::any visitVar_id(SystemVerilogParser::Var_idContext *context) = 0;

    virtual std::any visitList_of_variable_port_identifiers(SystemVerilogParser::List_of_variable_port_identifiersContext *context) = 0;

    virtual std::any visitVar_port_id(SystemVerilogParser::Var_port_idContext *context) = 0;

    virtual std::any visitDefparam_assignment(SystemVerilogParser::Defparam_assignmentContext *context) = 0;

    virtual std::any visitNet_decl_assignment(SystemVerilogParser::Net_decl_assignmentContext *context) = 0;

    virtual std::any visitParam_assignment(SystemVerilogParser::Param_assignmentContext *context) = 0;

    virtual std::any visitSpecparam_assignment(SystemVerilogParser::Specparam_assignmentContext *context) = 0;

    virtual std::any visitType_assignment(SystemVerilogParser::Type_assignmentContext *context) = 0;

    virtual std::any visitPulse_control_specparam(SystemVerilogParser::Pulse_control_specparamContext *context) = 0;

    virtual std::any visitError_limit_value(SystemVerilogParser::Error_limit_valueContext *context) = 0;

    virtual std::any visitReject_limit_value(SystemVerilogParser::Reject_limit_valueContext *context) = 0;

    virtual std::any visitLimit_value(SystemVerilogParser::Limit_valueContext *context) = 0;

    virtual std::any visitVariable_decl_assignment(SystemVerilogParser::Variable_decl_assignmentContext *context) = 0;

    virtual std::any visitClass_new(SystemVerilogParser::Class_newContext *context) = 0;

    virtual std::any visitDynamic_array_new(SystemVerilogParser::Dynamic_array_newContext *context) = 0;

    virtual std::any visitUnpacked_dimension(SystemVerilogParser::Unpacked_dimensionContext *context) = 0;

    virtual std::any visitPacked_dimension(SystemVerilogParser::Packed_dimensionContext *context) = 0;

    virtual std::any visitAssociative_dimension(SystemVerilogParser::Associative_dimensionContext *context) = 0;

    virtual std::any visitVariable_dimension(SystemVerilogParser::Variable_dimensionContext *context) = 0;

    virtual std::any visitQueue_dimension(SystemVerilogParser::Queue_dimensionContext *context) = 0;

    virtual std::any visitUnsized_dimension(SystemVerilogParser::Unsized_dimensionContext *context) = 0;

    virtual std::any visitFunction_data_type_or_implicit(SystemVerilogParser::Function_data_type_or_implicitContext *context) = 0;

    virtual std::any visitFunction_declaration(SystemVerilogParser::Function_declarationContext *context) = 0;

    virtual std::any visitFunction_body_declaration(SystemVerilogParser::Function_body_declarationContext *context) = 0;

    virtual std::any visitFunction_name(SystemVerilogParser::Function_nameContext *context) = 0;

    virtual std::any visitFunction_prototype(SystemVerilogParser::Function_prototypeContext *context) = 0;

    virtual std::any visitDpi_import_export(SystemVerilogParser::Dpi_import_exportContext *context) = 0;

    virtual std::any visitDpi_spec_string(SystemVerilogParser::Dpi_spec_stringContext *context) = 0;

    virtual std::any visitDpi_function_import_property(SystemVerilogParser::Dpi_function_import_propertyContext *context) = 0;

    virtual std::any visitDpi_task_import_property(SystemVerilogParser::Dpi_task_import_propertyContext *context) = 0;

    virtual std::any visitDpi_function_proto(SystemVerilogParser::Dpi_function_protoContext *context) = 0;

    virtual std::any visitDpi_task_proto(SystemVerilogParser::Dpi_task_protoContext *context) = 0;

    virtual std::any visitTask_declaration(SystemVerilogParser::Task_declarationContext *context) = 0;

    virtual std::any visitTask_body_declaration(SystemVerilogParser::Task_body_declarationContext *context) = 0;

    virtual std::any visitTask_name(SystemVerilogParser::Task_nameContext *context) = 0;

    virtual std::any visitTf_item_declaration(SystemVerilogParser::Tf_item_declarationContext *context) = 0;

    virtual std::any visitTf_port_list(SystemVerilogParser::Tf_port_listContext *context) = 0;

    virtual std::any visitTf_port_item(SystemVerilogParser::Tf_port_itemContext *context) = 0;

    virtual std::any visitTf_port_id(SystemVerilogParser::Tf_port_idContext *context) = 0;

    virtual std::any visitTf_port_direction(SystemVerilogParser::Tf_port_directionContext *context) = 0;

    virtual std::any visitTf_port_declaration(SystemVerilogParser::Tf_port_declarationContext *context) = 0;

    virtual std::any visitTask_prototype(SystemVerilogParser::Task_prototypeContext *context) = 0;

    virtual std::any visitBlock_item_declaration(SystemVerilogParser::Block_item_declarationContext *context) = 0;

    virtual std::any visitModport_declaration(SystemVerilogParser::Modport_declarationContext *context) = 0;

    virtual std::any visitModport_item(SystemVerilogParser::Modport_itemContext *context) = 0;

    virtual std::any visitModport_ports_declaration(SystemVerilogParser::Modport_ports_declarationContext *context) = 0;

    virtual std::any visitModport_clocking_declaration(SystemVerilogParser::Modport_clocking_declarationContext *context) = 0;

    virtual std::any visitModport_simple_ports_declaration(SystemVerilogParser::Modport_simple_ports_declarationContext *context) = 0;

    virtual std::any visitModport_simple_port(SystemVerilogParser::Modport_simple_portContext *context) = 0;

    virtual std::any visitModport_tf_ports_declaration(SystemVerilogParser::Modport_tf_ports_declarationContext *context) = 0;

    virtual std::any visitModport_tf_port(SystemVerilogParser::Modport_tf_portContext *context) = 0;

    virtual std::any visitImport_export(SystemVerilogParser::Import_exportContext *context) = 0;

    virtual std::any visitConcurrent_assertion_item(SystemVerilogParser::Concurrent_assertion_itemContext *context) = 0;

    virtual std::any visitBlock_label(SystemVerilogParser::Block_labelContext *context) = 0;

    virtual std::any visitConcurrent_assertion_statement(SystemVerilogParser::Concurrent_assertion_statementContext *context) = 0;

    virtual std::any visitAssert_property_statement(SystemVerilogParser::Assert_property_statementContext *context) = 0;

    virtual std::any visitAssume_property_statement(SystemVerilogParser::Assume_property_statementContext *context) = 0;

    virtual std::any visitCover_property_statement(SystemVerilogParser::Cover_property_statementContext *context) = 0;

    virtual std::any visitExpect_property_statement(SystemVerilogParser::Expect_property_statementContext *context) = 0;

    virtual std::any visitCover_sequence_statement(SystemVerilogParser::Cover_sequence_statementContext *context) = 0;

    virtual std::any visitRestrict_property_statement(SystemVerilogParser::Restrict_property_statementContext *context) = 0;

    virtual std::any visitProperty_instance(SystemVerilogParser::Property_instanceContext *context) = 0;

    virtual std::any visitProp_arg_list(SystemVerilogParser::Prop_arg_listContext *context) = 0;

    virtual std::any visitProperty_list_of_arguments(SystemVerilogParser::Property_list_of_argumentsContext *context) = 0;

    virtual std::any visitProp_ordered_arg(SystemVerilogParser::Prop_ordered_argContext *context) = 0;

    virtual std::any visitProp_named_arg(SystemVerilogParser::Prop_named_argContext *context) = 0;

    virtual std::any visitProperty_actual_arg(SystemVerilogParser::Property_actual_argContext *context) = 0;

    virtual std::any visitAssertion_item_declaration(SystemVerilogParser::Assertion_item_declarationContext *context) = 0;

    virtual std::any visitProperty_declaration(SystemVerilogParser::Property_declarationContext *context) = 0;

    virtual std::any visitProperty_name(SystemVerilogParser::Property_nameContext *context) = 0;

    virtual std::any visitProp_port_list(SystemVerilogParser::Prop_port_listContext *context) = 0;

    virtual std::any visitProperty_port_list(SystemVerilogParser::Property_port_listContext *context) = 0;

    virtual std::any visitProperty_port_item(SystemVerilogParser::Property_port_itemContext *context) = 0;

    virtual std::any visitProp_port_item_local(SystemVerilogParser::Prop_port_item_localContext *context) = 0;

    virtual std::any visitProperty_lvar_port_direction(SystemVerilogParser::Property_lvar_port_directionContext *context) = 0;

    virtual std::any visitProperty_formal_type(SystemVerilogParser::Property_formal_typeContext *context) = 0;

    virtual std::any visitProperty_spec(SystemVerilogParser::Property_specContext *context) = 0;

    virtual std::any visitProperty_expr(SystemVerilogParser::Property_exprContext *context) = 0;

    virtual std::any visitProperty_case_item(SystemVerilogParser::Property_case_itemContext *context) = 0;

    virtual std::any visitSequence_declaration(SystemVerilogParser::Sequence_declarationContext *context) = 0;

    virtual std::any visitSequence_name(SystemVerilogParser::Sequence_nameContext *context) = 0;

    virtual std::any visitSeq_port_list(SystemVerilogParser::Seq_port_listContext *context) = 0;

    virtual std::any visitSequence_port_list(SystemVerilogParser::Sequence_port_listContext *context) = 0;

    virtual std::any visitSequence_port_item(SystemVerilogParser::Sequence_port_itemContext *context) = 0;

    virtual std::any visitSeq_port_item_local(SystemVerilogParser::Seq_port_item_localContext *context) = 0;

    virtual std::any visitSequence_lvar_port_direction(SystemVerilogParser::Sequence_lvar_port_directionContext *context) = 0;

    virtual std::any visitSequence_formal_type(SystemVerilogParser::Sequence_formal_typeContext *context) = 0;

    virtual std::any visitSequence_expr(SystemVerilogParser::Sequence_exprContext *context) = 0;

    virtual std::any visitCycle_delay_range(SystemVerilogParser::Cycle_delay_rangeContext *context) = 0;

    virtual std::any visitSequence_method_call(SystemVerilogParser::Sequence_method_callContext *context) = 0;

    virtual std::any visitSequence_match_item(SystemVerilogParser::Sequence_match_itemContext *context) = 0;

    virtual std::any visitSequence_instance(SystemVerilogParser::Sequence_instanceContext *context) = 0;

    virtual std::any visitSeq_arg_list(SystemVerilogParser::Seq_arg_listContext *context) = 0;

    virtual std::any visitSequence_list_of_arguments(SystemVerilogParser::Sequence_list_of_argumentsContext *context) = 0;

    virtual std::any visitSeq_ordered_arg(SystemVerilogParser::Seq_ordered_argContext *context) = 0;

    virtual std::any visitSeq_named_arg(SystemVerilogParser::Seq_named_argContext *context) = 0;

    virtual std::any visitSequence_actual_arg(SystemVerilogParser::Sequence_actual_argContext *context) = 0;

    virtual std::any visitBoolean_abbrev(SystemVerilogParser::Boolean_abbrevContext *context) = 0;

    virtual std::any visitSequence_abbrev(SystemVerilogParser::Sequence_abbrevContext *context) = 0;

    virtual std::any visitConsecutive_repetition(SystemVerilogParser::Consecutive_repetitionContext *context) = 0;

    virtual std::any visitNon_consecutive_repetition(SystemVerilogParser::Non_consecutive_repetitionContext *context) = 0;

    virtual std::any visitGoto_repetition(SystemVerilogParser::Goto_repetitionContext *context) = 0;

    virtual std::any visitConst_or_range_expression(SystemVerilogParser::Const_or_range_expressionContext *context) = 0;

    virtual std::any visitCycle_delay_const_range_expression(SystemVerilogParser::Cycle_delay_const_range_expressionContext *context) = 0;

    virtual std::any visitExpression_or_dist(SystemVerilogParser::Expression_or_distContext *context) = 0;

    virtual std::any visitAssertion_variable_declaration(SystemVerilogParser::Assertion_variable_declarationContext *context) = 0;

    virtual std::any visitCovergroup_declaration(SystemVerilogParser::Covergroup_declarationContext *context) = 0;

    virtual std::any visitCovergroup_name(SystemVerilogParser::Covergroup_nameContext *context) = 0;

    virtual std::any visitCoverage_spec_or_option(SystemVerilogParser::Coverage_spec_or_optionContext *context) = 0;

    virtual std::any visitCoverage_option(SystemVerilogParser::Coverage_optionContext *context) = 0;

    virtual std::any visitCoverage_spec(SystemVerilogParser::Coverage_specContext *context) = 0;

    virtual std::any visitCoverage_event(SystemVerilogParser::Coverage_eventContext *context) = 0;

    virtual std::any visitBlock_event_expression(SystemVerilogParser::Block_event_expressionContext *context) = 0;

    virtual std::any visitHierarchical_btf_identifier(SystemVerilogParser::Hierarchical_btf_identifierContext *context) = 0;

    virtual std::any visitCover_point(SystemVerilogParser::Cover_pointContext *context) = 0;

    virtual std::any visitCover_point_label(SystemVerilogParser::Cover_point_labelContext *context) = 0;

    virtual std::any visitBins_or_empty(SystemVerilogParser::Bins_or_emptyContext *context) = 0;

    virtual std::any visitBins_or_options(SystemVerilogParser::Bins_or_optionsContext *context) = 0;

    virtual std::any visitBin_array_size(SystemVerilogParser::Bin_array_sizeContext *context) = 0;

    virtual std::any visitBins_keyword(SystemVerilogParser::Bins_keywordContext *context) = 0;

    virtual std::any visitTrans_list(SystemVerilogParser::Trans_listContext *context) = 0;

    virtual std::any visitTrans_set(SystemVerilogParser::Trans_setContext *context) = 0;

    virtual std::any visitTrans_range_list(SystemVerilogParser::Trans_range_listContext *context) = 0;

    virtual std::any visitTrans_item(SystemVerilogParser::Trans_itemContext *context) = 0;

    virtual std::any visitRepeat_range(SystemVerilogParser::Repeat_rangeContext *context) = 0;

    virtual std::any visitCover_cross(SystemVerilogParser::Cover_crossContext *context) = 0;

    virtual std::any visitCross_label(SystemVerilogParser::Cross_labelContext *context) = 0;

    virtual std::any visitList_of_cross_items(SystemVerilogParser::List_of_cross_itemsContext *context) = 0;

    virtual std::any visitCross_item(SystemVerilogParser::Cross_itemContext *context) = 0;

    virtual std::any visitCross_body(SystemVerilogParser::Cross_bodyContext *context) = 0;

    virtual std::any visitCross_body_item(SystemVerilogParser::Cross_body_itemContext *context) = 0;

    virtual std::any visitBins_selection_or_option(SystemVerilogParser::Bins_selection_or_optionContext *context) = 0;

    virtual std::any visitBins_selection(SystemVerilogParser::Bins_selectionContext *context) = 0;

    virtual std::any visitSelect_expression(SystemVerilogParser::Select_expressionContext *context) = 0;

    virtual std::any visitSelect_condition(SystemVerilogParser::Select_conditionContext *context) = 0;

    virtual std::any visitBins_expression(SystemVerilogParser::Bins_expressionContext *context) = 0;

    virtual std::any visitCovergroup_range_list(SystemVerilogParser::Covergroup_range_listContext *context) = 0;

    virtual std::any visitCovergroup_value_range(SystemVerilogParser::Covergroup_value_rangeContext *context) = 0;

    virtual std::any visitWith_covergroup_expression(SystemVerilogParser::With_covergroup_expressionContext *context) = 0;

    virtual std::any visitSet_covergroup_expression(SystemVerilogParser::Set_covergroup_expressionContext *context) = 0;

    virtual std::any visitInteger_covergroup_expression(SystemVerilogParser::Integer_covergroup_expressionContext *context) = 0;

    virtual std::any visitCross_set_expression(SystemVerilogParser::Cross_set_expressionContext *context) = 0;

    virtual std::any visitCovergroup_expression(SystemVerilogParser::Covergroup_expressionContext *context) = 0;

    virtual std::any visitLet_declaration(SystemVerilogParser::Let_declarationContext *context) = 0;

    virtual std::any visitLet_ports(SystemVerilogParser::Let_portsContext *context) = 0;

    virtual std::any visitLet_identifier(SystemVerilogParser::Let_identifierContext *context) = 0;

    virtual std::any visitLet_port_list(SystemVerilogParser::Let_port_listContext *context) = 0;

    virtual std::any visitLet_port_item(SystemVerilogParser::Let_port_itemContext *context) = 0;

    virtual std::any visitLet_formal_type(SystemVerilogParser::Let_formal_typeContext *context) = 0;

    virtual std::any visitGate_instantiation(SystemVerilogParser::Gate_instantiationContext *context) = 0;

    virtual std::any visitCmos_switch_instance(SystemVerilogParser::Cmos_switch_instanceContext *context) = 0;

    virtual std::any visitEnable_gate_instance(SystemVerilogParser::Enable_gate_instanceContext *context) = 0;

    virtual std::any visitMos_switch_instance(SystemVerilogParser::Mos_switch_instanceContext *context) = 0;

    virtual std::any visitN_input_gate_instance(SystemVerilogParser::N_input_gate_instanceContext *context) = 0;

    virtual std::any visitN_output_gate_instance(SystemVerilogParser::N_output_gate_instanceContext *context) = 0;

    virtual std::any visitPass_switch_instance(SystemVerilogParser::Pass_switch_instanceContext *context) = 0;

    virtual std::any visitPass_enable_switch_instance(SystemVerilogParser::Pass_enable_switch_instanceContext *context) = 0;

    virtual std::any visitPull_gate_instance(SystemVerilogParser::Pull_gate_instanceContext *context) = 0;

    virtual std::any visitPulldown_strength(SystemVerilogParser::Pulldown_strengthContext *context) = 0;

    virtual std::any visitPullup_strength(SystemVerilogParser::Pullup_strengthContext *context) = 0;

    virtual std::any visitEnable_terminal(SystemVerilogParser::Enable_terminalContext *context) = 0;

    virtual std::any visitInout_terminal(SystemVerilogParser::Inout_terminalContext *context) = 0;

    virtual std::any visitInput_terminal(SystemVerilogParser::Input_terminalContext *context) = 0;

    virtual std::any visitNcontrol_terminal(SystemVerilogParser::Ncontrol_terminalContext *context) = 0;

    virtual std::any visitOutput_terminal(SystemVerilogParser::Output_terminalContext *context) = 0;

    virtual std::any visitPcontrol_terminal(SystemVerilogParser::Pcontrol_terminalContext *context) = 0;

    virtual std::any visitCmos_switchtype(SystemVerilogParser::Cmos_switchtypeContext *context) = 0;

    virtual std::any visitEnable_gatetype(SystemVerilogParser::Enable_gatetypeContext *context) = 0;

    virtual std::any visitMos_switchtype(SystemVerilogParser::Mos_switchtypeContext *context) = 0;

    virtual std::any visitN_input_gatetype(SystemVerilogParser::N_input_gatetypeContext *context) = 0;

    virtual std::any visitN_output_gatetype(SystemVerilogParser::N_output_gatetypeContext *context) = 0;

    virtual std::any visitPass_en_switchtype(SystemVerilogParser::Pass_en_switchtypeContext *context) = 0;

    virtual std::any visitPass_switchtype(SystemVerilogParser::Pass_switchtypeContext *context) = 0;

    virtual std::any visitModule_program_interface_instantiation(SystemVerilogParser::Module_program_interface_instantiationContext *context) = 0;

    virtual std::any visitParameter_value_assignment(SystemVerilogParser::Parameter_value_assignmentContext *context) = 0;

    virtual std::any visitList_of_parameter_assignments(SystemVerilogParser::List_of_parameter_assignmentsContext *context) = 0;

    virtual std::any visitOrdered_parameter_assignment(SystemVerilogParser::Ordered_parameter_assignmentContext *context) = 0;

    virtual std::any visitNamed_parameter_assignment(SystemVerilogParser::Named_parameter_assignmentContext *context) = 0;

    virtual std::any visitHierarchical_instance(SystemVerilogParser::Hierarchical_instanceContext *context) = 0;

    virtual std::any visitName_of_instance(SystemVerilogParser::Name_of_instanceContext *context) = 0;

    virtual std::any visitList_of_port_connections(SystemVerilogParser::List_of_port_connectionsContext *context) = 0;

    virtual std::any visitOrdered_port_connection(SystemVerilogParser::Ordered_port_connectionContext *context) = 0;

    virtual std::any visitNamed_port_connection(SystemVerilogParser::Named_port_connectionContext *context) = 0;

    virtual std::any visitPort_assign(SystemVerilogParser::Port_assignContext *context) = 0;

    virtual std::any visitChecker_instantiation(SystemVerilogParser::Checker_instantiationContext *context) = 0;

    virtual std::any visitList_of_checker_port_connections(SystemVerilogParser::List_of_checker_port_connectionsContext *context) = 0;

    virtual std::any visitOrdered_checker_port_connection(SystemVerilogParser::Ordered_checker_port_connectionContext *context) = 0;

    virtual std::any visitNamed_checker_port_connection(SystemVerilogParser::Named_checker_port_connectionContext *context) = 0;

    virtual std::any visitChecker_port_assign(SystemVerilogParser::Checker_port_assignContext *context) = 0;

    virtual std::any visitGenerate_region(SystemVerilogParser::Generate_regionContext *context) = 0;

    virtual std::any visitLoop_generate_construct(SystemVerilogParser::Loop_generate_constructContext *context) = 0;

    virtual std::any visitGenvar_initialization(SystemVerilogParser::Genvar_initializationContext *context) = 0;

    virtual std::any visitGenvar_iteration(SystemVerilogParser::Genvar_iterationContext *context) = 0;

    virtual std::any visitConditional_generate_construct(SystemVerilogParser::Conditional_generate_constructContext *context) = 0;

    virtual std::any visitIf_generate_construct(SystemVerilogParser::If_generate_constructContext *context) = 0;

    virtual std::any visitCase_generate_construct(SystemVerilogParser::Case_generate_constructContext *context) = 0;

    virtual std::any visitCase_generate_item(SystemVerilogParser::Case_generate_itemContext *context) = 0;

    virtual std::any visitGenerate_block(SystemVerilogParser::Generate_blockContext *context) = 0;

    virtual std::any visitGenerate_block_label(SystemVerilogParser::Generate_block_labelContext *context) = 0;

    virtual std::any visitGenerate_block_name(SystemVerilogParser::Generate_block_nameContext *context) = 0;

    virtual std::any visitGenerate_item(SystemVerilogParser::Generate_itemContext *context) = 0;

    virtual std::any visitUdp_nonansi_declaration(SystemVerilogParser::Udp_nonansi_declarationContext *context) = 0;

    virtual std::any visitUdp_ansi_declaration(SystemVerilogParser::Udp_ansi_declarationContext *context) = 0;

    virtual std::any visitUdp_declaration(SystemVerilogParser::Udp_declarationContext *context) = 0;

    virtual std::any visitUdp_name(SystemVerilogParser::Udp_nameContext *context) = 0;

    virtual std::any visitUdp_port_list(SystemVerilogParser::Udp_port_listContext *context) = 0;

    virtual std::any visitUdp_declaration_port_list(SystemVerilogParser::Udp_declaration_port_listContext *context) = 0;

    virtual std::any visitUdp_port_declaration(SystemVerilogParser::Udp_port_declarationContext *context) = 0;

    virtual std::any visitUdp_output_declaration(SystemVerilogParser::Udp_output_declarationContext *context) = 0;

    virtual std::any visitUdp_input_declaration(SystemVerilogParser::Udp_input_declarationContext *context) = 0;

    virtual std::any visitUdp_reg_declaration(SystemVerilogParser::Udp_reg_declarationContext *context) = 0;

    virtual std::any visitUdp_body(SystemVerilogParser::Udp_bodyContext *context) = 0;

    virtual std::any visitCombinational_body(SystemVerilogParser::Combinational_bodyContext *context) = 0;

    virtual std::any visitCombinational_entry(SystemVerilogParser::Combinational_entryContext *context) = 0;

    virtual std::any visitSequential_body(SystemVerilogParser::Sequential_bodyContext *context) = 0;

    virtual std::any visitUdp_initial_statement(SystemVerilogParser::Udp_initial_statementContext *context) = 0;

    virtual std::any visitInit_val(SystemVerilogParser::Init_valContext *context) = 0;

    virtual std::any visitSequential_entry(SystemVerilogParser::Sequential_entryContext *context) = 0;

    virtual std::any visitSeq_input_list(SystemVerilogParser::Seq_input_listContext *context) = 0;

    virtual std::any visitLevel_input_list(SystemVerilogParser::Level_input_listContext *context) = 0;

    virtual std::any visitEdge_input_list(SystemVerilogParser::Edge_input_listContext *context) = 0;

    virtual std::any visitEdge_indicator(SystemVerilogParser::Edge_indicatorContext *context) = 0;

    virtual std::any visitCurrent_state(SystemVerilogParser::Current_stateContext *context) = 0;

    virtual std::any visitNext_state(SystemVerilogParser::Next_stateContext *context) = 0;

    virtual std::any visitOutput_symbol(SystemVerilogParser::Output_symbolContext *context) = 0;

    virtual std::any visitLevel_symbol(SystemVerilogParser::Level_symbolContext *context) = 0;

    virtual std::any visitEdge_symbol(SystemVerilogParser::Edge_symbolContext *context) = 0;

    virtual std::any visitUdp_instantiation(SystemVerilogParser::Udp_instantiationContext *context) = 0;

    virtual std::any visitUdp_instance(SystemVerilogParser::Udp_instanceContext *context) = 0;

    virtual std::any visitContinuous_assign(SystemVerilogParser::Continuous_assignContext *context) = 0;

    virtual std::any visitList_of_net_assignments(SystemVerilogParser::List_of_net_assignmentsContext *context) = 0;

    virtual std::any visitList_of_variable_assignments(SystemVerilogParser::List_of_variable_assignmentsContext *context) = 0;

    virtual std::any visitNet_alias(SystemVerilogParser::Net_aliasContext *context) = 0;

    virtual std::any visitNet_assignment(SystemVerilogParser::Net_assignmentContext *context) = 0;

    virtual std::any visitInitial_construct(SystemVerilogParser::Initial_constructContext *context) = 0;

    virtual std::any visitAlways_construct(SystemVerilogParser::Always_constructContext *context) = 0;

    virtual std::any visitAlways_keyword(SystemVerilogParser::Always_keywordContext *context) = 0;

    virtual std::any visitFinal_construct(SystemVerilogParser::Final_constructContext *context) = 0;

    virtual std::any visitBlocking_assignment(SystemVerilogParser::Blocking_assignmentContext *context) = 0;

    virtual std::any visitOperator_assignment(SystemVerilogParser::Operator_assignmentContext *context) = 0;

    virtual std::any visitAssignment_operator(SystemVerilogParser::Assignment_operatorContext *context) = 0;

    virtual std::any visitNonblocking_assignment(SystemVerilogParser::Nonblocking_assignmentContext *context) = 0;

    virtual std::any visitProcedural_continuous_assignment(SystemVerilogParser::Procedural_continuous_assignmentContext *context) = 0;

    virtual std::any visitVariable_assignment(SystemVerilogParser::Variable_assignmentContext *context) = 0;

    virtual std::any visitAction_block(SystemVerilogParser::Action_blockContext *context) = 0;

    virtual std::any visitSeq_block(SystemVerilogParser::Seq_blockContext *context) = 0;

    virtual std::any visitBlock_name(SystemVerilogParser::Block_nameContext *context) = 0;

    virtual std::any visitPar_block(SystemVerilogParser::Par_blockContext *context) = 0;

    virtual std::any visitJoin_keyword(SystemVerilogParser::Join_keywordContext *context) = 0;

    virtual std::any visitStatement_or_null(SystemVerilogParser::Statement_or_nullContext *context) = 0;

    virtual std::any visitStatement(SystemVerilogParser::StatementContext *context) = 0;

    virtual std::any visitStatement_item(SystemVerilogParser::Statement_itemContext *context) = 0;

    virtual std::any visitFunction_statement(SystemVerilogParser::Function_statementContext *context) = 0;

    virtual std::any visitFunction_statement_or_null(SystemVerilogParser::Function_statement_or_nullContext *context) = 0;

    virtual std::any visitVariable_identifier_list(SystemVerilogParser::Variable_identifier_listContext *context) = 0;

    virtual std::any visitProcedural_timing_control_statement(SystemVerilogParser::Procedural_timing_control_statementContext *context) = 0;

    virtual std::any visitDelay_or_event_control(SystemVerilogParser::Delay_or_event_controlContext *context) = 0;

    virtual std::any visitDelay_control(SystemVerilogParser::Delay_controlContext *context) = 0;

    virtual std::any visitEvent_control(SystemVerilogParser::Event_controlContext *context) = 0;

    virtual std::any visitEvent_expression(SystemVerilogParser::Event_expressionContext *context) = 0;

    virtual std::any visitProcedural_timing_control(SystemVerilogParser::Procedural_timing_controlContext *context) = 0;

    virtual std::any visitJump_statement(SystemVerilogParser::Jump_statementContext *context) = 0;

    virtual std::any visitWait_statement(SystemVerilogParser::Wait_statementContext *context) = 0;

    virtual std::any visitEvent_trigger(SystemVerilogParser::Event_triggerContext *context) = 0;

    virtual std::any visitDisable_statement(SystemVerilogParser::Disable_statementContext *context) = 0;

    virtual std::any visitConditional_statement(SystemVerilogParser::Conditional_statementContext *context) = 0;

    virtual std::any visitUnique_priority(SystemVerilogParser::Unique_priorityContext *context) = 0;

    virtual std::any visitCond_predicate(SystemVerilogParser::Cond_predicateContext *context) = 0;

    virtual std::any visitExpression_or_cond_pattern(SystemVerilogParser::Expression_or_cond_patternContext *context) = 0;

    virtual std::any visitCase_statement(SystemVerilogParser::Case_statementContext *context) = 0;

    virtual std::any visitCase_keyword(SystemVerilogParser::Case_keywordContext *context) = 0;

    virtual std::any visitCase_expression(SystemVerilogParser::Case_expressionContext *context) = 0;

    virtual std::any visitCase_item(SystemVerilogParser::Case_itemContext *context) = 0;

    virtual std::any visitCase_pattern_item(SystemVerilogParser::Case_pattern_itemContext *context) = 0;

    virtual std::any visitCase_inside_item(SystemVerilogParser::Case_inside_itemContext *context) = 0;

    virtual std::any visitCase_item_expression(SystemVerilogParser::Case_item_expressionContext *context) = 0;

    virtual std::any visitRandcase_statement(SystemVerilogParser::Randcase_statementContext *context) = 0;

    virtual std::any visitRandcase_item(SystemVerilogParser::Randcase_itemContext *context) = 0;

    virtual std::any visitOpen_range_list(SystemVerilogParser::Open_range_listContext *context) = 0;

    virtual std::any visitOpen_value_range(SystemVerilogParser::Open_value_rangeContext *context) = 0;

    virtual std::any visitPattern(SystemVerilogParser::PatternContext *context) = 0;

    virtual std::any visitMember_pattern_pair(SystemVerilogParser::Member_pattern_pairContext *context) = 0;

    virtual std::any visitAssignment_pattern(SystemVerilogParser::Assignment_patternContext *context) = 0;

    virtual std::any visitArray_key_val_pair(SystemVerilogParser::Array_key_val_pairContext *context) = 0;

    virtual std::any visitArray_pattern_key(SystemVerilogParser::Array_pattern_keyContext *context) = 0;

    virtual std::any visitAssignment_pattern_key(SystemVerilogParser::Assignment_pattern_keyContext *context) = 0;

    virtual std::any visitAssignment_pattern_expression(SystemVerilogParser::Assignment_pattern_expressionContext *context) = 0;

    virtual std::any visitAssignment_pattern_expression_type(SystemVerilogParser::Assignment_pattern_expression_typeContext *context) = 0;

    virtual std::any visitConstant_assignment_pattern_expression(SystemVerilogParser::Constant_assignment_pattern_expressionContext *context) = 0;

    virtual std::any visitAssignment_pattern_net_lvalue(SystemVerilogParser::Assignment_pattern_net_lvalueContext *context) = 0;

    virtual std::any visitAssignment_pattern_variable_lvalue(SystemVerilogParser::Assignment_pattern_variable_lvalueContext *context) = 0;

    virtual std::any visitLoop_statement(SystemVerilogParser::Loop_statementContext *context) = 0;

    virtual std::any visitFor_initialization(SystemVerilogParser::For_initializationContext *context) = 0;

    virtual std::any visitFor_variable_declaration(SystemVerilogParser::For_variable_declarationContext *context) = 0;

    virtual std::any visitFor_variable_assign(SystemVerilogParser::For_variable_assignContext *context) = 0;

    virtual std::any visitFor_step(SystemVerilogParser::For_stepContext *context) = 0;

    virtual std::any visitFor_step_assignment(SystemVerilogParser::For_step_assignmentContext *context) = 0;

    virtual std::any visitLoop_variables(SystemVerilogParser::Loop_variablesContext *context) = 0;

    virtual std::any visitLoop_var(SystemVerilogParser::Loop_varContext *context) = 0;

    virtual std::any visitSubroutine_call_statement(SystemVerilogParser::Subroutine_call_statementContext *context) = 0;

    virtual std::any visitAssertion_item(SystemVerilogParser::Assertion_itemContext *context) = 0;

    virtual std::any visitDeferred_immediate_assertion_item(SystemVerilogParser::Deferred_immediate_assertion_itemContext *context) = 0;

    virtual std::any visitProcedural_assertion_statement(SystemVerilogParser::Procedural_assertion_statementContext *context) = 0;

    virtual std::any visitImmediate_assertion_statement(SystemVerilogParser::Immediate_assertion_statementContext *context) = 0;

    virtual std::any visitSimple_immediate_assertion_statement(SystemVerilogParser::Simple_immediate_assertion_statementContext *context) = 0;

    virtual std::any visitSimple_immediate_assert_statement(SystemVerilogParser::Simple_immediate_assert_statementContext *context) = 0;

    virtual std::any visitSimple_immediate_assume_statement(SystemVerilogParser::Simple_immediate_assume_statementContext *context) = 0;

    virtual std::any visitSimple_immediate_cover_statement(SystemVerilogParser::Simple_immediate_cover_statementContext *context) = 0;

    virtual std::any visitDeferred_immediate_assertion_statement(SystemVerilogParser::Deferred_immediate_assertion_statementContext *context) = 0;

    virtual std::any visitDeferred_immediate_assert_statement(SystemVerilogParser::Deferred_immediate_assert_statementContext *context) = 0;

    virtual std::any visitDeferred_immediate_assume_statement(SystemVerilogParser::Deferred_immediate_assume_statementContext *context) = 0;

    virtual std::any visitDeferred_immediate_cover_statement(SystemVerilogParser::Deferred_immediate_cover_statementContext *context) = 0;

    virtual std::any visitClocking_declaration(SystemVerilogParser::Clocking_declarationContext *context) = 0;

    virtual std::any visitClocking_name(SystemVerilogParser::Clocking_nameContext *context) = 0;

    virtual std::any visitClocking_event(SystemVerilogParser::Clocking_eventContext *context) = 0;

    virtual std::any visitClocking_item(SystemVerilogParser::Clocking_itemContext *context) = 0;

    virtual std::any visitDefault_skew(SystemVerilogParser::Default_skewContext *context) = 0;

    virtual std::any visitClocking_direction(SystemVerilogParser::Clocking_directionContext *context) = 0;

    virtual std::any visitList_of_clocking_decl_assign(SystemVerilogParser::List_of_clocking_decl_assignContext *context) = 0;

    virtual std::any visitClocking_decl_assign(SystemVerilogParser::Clocking_decl_assignContext *context) = 0;

    virtual std::any visitClocking_skew(SystemVerilogParser::Clocking_skewContext *context) = 0;

    virtual std::any visitClocking_drive(SystemVerilogParser::Clocking_driveContext *context) = 0;

    virtual std::any visitCycle_delay(SystemVerilogParser::Cycle_delayContext *context) = 0;

    virtual std::any visitClockvar(SystemVerilogParser::ClockvarContext *context) = 0;

    virtual std::any visitClockvar_expression(SystemVerilogParser::Clockvar_expressionContext *context) = 0;

    virtual std::any visitRandsequence_statement(SystemVerilogParser::Randsequence_statementContext *context) = 0;

    virtual std::any visitProduction(SystemVerilogParser::ProductionContext *context) = 0;

    virtual std::any visitRs_rule(SystemVerilogParser::Rs_ruleContext *context) = 0;

    virtual std::any visitWeight_spec(SystemVerilogParser::Weight_specContext *context) = 0;

    virtual std::any visitRs_production_list(SystemVerilogParser::Rs_production_listContext *context) = 0;

    virtual std::any visitWeight_specification(SystemVerilogParser::Weight_specificationContext *context) = 0;

    virtual std::any visitRs_code_block(SystemVerilogParser::Rs_code_blockContext *context) = 0;

    virtual std::any visitRs_prod(SystemVerilogParser::Rs_prodContext *context) = 0;

    virtual std::any visitProduction_item(SystemVerilogParser::Production_itemContext *context) = 0;

    virtual std::any visitRs_if_else(SystemVerilogParser::Rs_if_elseContext *context) = 0;

    virtual std::any visitRs_repeat(SystemVerilogParser::Rs_repeatContext *context) = 0;

    virtual std::any visitRs_case(SystemVerilogParser::Rs_caseContext *context) = 0;

    virtual std::any visitRs_case_item(SystemVerilogParser::Rs_case_itemContext *context) = 0;

    virtual std::any visitSpecify_block(SystemVerilogParser::Specify_blockContext *context) = 0;

    virtual std::any visitSpecify_item(SystemVerilogParser::Specify_itemContext *context) = 0;

    virtual std::any visitPulsestyle_declaration(SystemVerilogParser::Pulsestyle_declarationContext *context) = 0;

    virtual std::any visitShowcancelled_declaration(SystemVerilogParser::Showcancelled_declarationContext *context) = 0;

    virtual std::any visitPath_declaration(SystemVerilogParser::Path_declarationContext *context) = 0;

    virtual std::any visitSimple_path_declaration(SystemVerilogParser::Simple_path_declarationContext *context) = 0;

    virtual std::any visitParallel_path_description(SystemVerilogParser::Parallel_path_descriptionContext *context) = 0;

    virtual std::any visitFull_path_description(SystemVerilogParser::Full_path_descriptionContext *context) = 0;

    virtual std::any visitList_of_path_inputs(SystemVerilogParser::List_of_path_inputsContext *context) = 0;

    virtual std::any visitList_of_path_outputs(SystemVerilogParser::List_of_path_outputsContext *context) = 0;

    virtual std::any visitSpecify_input_terminal_descriptor(SystemVerilogParser::Specify_input_terminal_descriptorContext *context) = 0;

    virtual std::any visitSpecify_output_terminal_descriptor(SystemVerilogParser::Specify_output_terminal_descriptorContext *context) = 0;

    virtual std::any visitInput_identifier(SystemVerilogParser::Input_identifierContext *context) = 0;

    virtual std::any visitOutput_identifier(SystemVerilogParser::Output_identifierContext *context) = 0;

    virtual std::any visitPath_delay_value(SystemVerilogParser::Path_delay_valueContext *context) = 0;

    virtual std::any visitList_of_path_delay_expressions(SystemVerilogParser::List_of_path_delay_expressionsContext *context) = 0;

    virtual std::any visitT_path_delay_expression(SystemVerilogParser::T_path_delay_expressionContext *context) = 0;

    virtual std::any visitTrise_path_delay_expression(SystemVerilogParser::Trise_path_delay_expressionContext *context) = 0;

    virtual std::any visitTfall_path_delay_expression(SystemVerilogParser::Tfall_path_delay_expressionContext *context) = 0;

    virtual std::any visitTz_path_delay_expression(SystemVerilogParser::Tz_path_delay_expressionContext *context) = 0;

    virtual std::any visitT01_path_delay_expression(SystemVerilogParser::T01_path_delay_expressionContext *context) = 0;

    virtual std::any visitT10_path_delay_expression(SystemVerilogParser::T10_path_delay_expressionContext *context) = 0;

    virtual std::any visitT0z_path_delay_expression(SystemVerilogParser::T0z_path_delay_expressionContext *context) = 0;

    virtual std::any visitTz1_path_delay_expression(SystemVerilogParser::Tz1_path_delay_expressionContext *context) = 0;

    virtual std::any visitT1z_path_delay_expression(SystemVerilogParser::T1z_path_delay_expressionContext *context) = 0;

    virtual std::any visitTz0_path_delay_expression(SystemVerilogParser::Tz0_path_delay_expressionContext *context) = 0;

    virtual std::any visitT0x_path_delay_expression(SystemVerilogParser::T0x_path_delay_expressionContext *context) = 0;

    virtual std::any visitTx1_path_delay_expression(SystemVerilogParser::Tx1_path_delay_expressionContext *context) = 0;

    virtual std::any visitT1x_path_delay_expression(SystemVerilogParser::T1x_path_delay_expressionContext *context) = 0;

    virtual std::any visitTx0_path_delay_expression(SystemVerilogParser::Tx0_path_delay_expressionContext *context) = 0;

    virtual std::any visitTxz_path_delay_expression(SystemVerilogParser::Txz_path_delay_expressionContext *context) = 0;

    virtual std::any visitTzx_path_delay_expression(SystemVerilogParser::Tzx_path_delay_expressionContext *context) = 0;

    virtual std::any visitPath_delay_expression(SystemVerilogParser::Path_delay_expressionContext *context) = 0;

    virtual std::any visitEdge_sensitive_path_declaration(SystemVerilogParser::Edge_sensitive_path_declarationContext *context) = 0;

    virtual std::any visitParallel_edge_sensitive_path_description(SystemVerilogParser::Parallel_edge_sensitive_path_descriptionContext *context) = 0;

    virtual std::any visitFull_edge_sensitive_path_description(SystemVerilogParser::Full_edge_sensitive_path_descriptionContext *context) = 0;

    virtual std::any visitData_source_expression(SystemVerilogParser::Data_source_expressionContext *context) = 0;

    virtual std::any visitEdge_identifier(SystemVerilogParser::Edge_identifierContext *context) = 0;

    virtual std::any visitState_dependent_path_declaration(SystemVerilogParser::State_dependent_path_declarationContext *context) = 0;

    virtual std::any visitPolarity_operator(SystemVerilogParser::Polarity_operatorContext *context) = 0;

    virtual std::any visitSystem_timing_check(SystemVerilogParser::System_timing_checkContext *context) = 0;

    virtual std::any visitSetup_timing_check(SystemVerilogParser::Setup_timing_checkContext *context) = 0;

    virtual std::any visitNotifier_opt(SystemVerilogParser::Notifier_optContext *context) = 0;

    virtual std::any visitHold_timing_check(SystemVerilogParser::Hold_timing_checkContext *context) = 0;

    virtual std::any visitSetuphold_timing_check(SystemVerilogParser::Setuphold_timing_checkContext *context) = 0;

    virtual std::any visitTiming_check_opt(SystemVerilogParser::Timing_check_optContext *context) = 0;

    virtual std::any visitTimestamp_cond_opt(SystemVerilogParser::Timestamp_cond_optContext *context) = 0;

    virtual std::any visitTimecheck_cond_opt(SystemVerilogParser::Timecheck_cond_optContext *context) = 0;

    virtual std::any visitDelayed_ref_opt(SystemVerilogParser::Delayed_ref_optContext *context) = 0;

    virtual std::any visitDelayed_data_opt(SystemVerilogParser::Delayed_data_optContext *context) = 0;

    virtual std::any visitRecovery_timing_check(SystemVerilogParser::Recovery_timing_checkContext *context) = 0;

    virtual std::any visitRemoval_timing_check(SystemVerilogParser::Removal_timing_checkContext *context) = 0;

    virtual std::any visitRecrem_timing_check(SystemVerilogParser::Recrem_timing_checkContext *context) = 0;

    virtual std::any visitSkew_timing_check(SystemVerilogParser::Skew_timing_checkContext *context) = 0;

    virtual std::any visitTimeskew_timing_check(SystemVerilogParser::Timeskew_timing_checkContext *context) = 0;

    virtual std::any visitSkew_timing_check_opt(SystemVerilogParser::Skew_timing_check_optContext *context) = 0;

    virtual std::any visitEvent_based_flag_opt(SystemVerilogParser::Event_based_flag_optContext *context) = 0;

    virtual std::any visitRemain_active_flag_opt(SystemVerilogParser::Remain_active_flag_optContext *context) = 0;

    virtual std::any visitFullskew_timing_check(SystemVerilogParser::Fullskew_timing_checkContext *context) = 0;

    virtual std::any visitPeriod_timing_check(SystemVerilogParser::Period_timing_checkContext *context) = 0;

    virtual std::any visitWidth_timing_check(SystemVerilogParser::Width_timing_checkContext *context) = 0;

    virtual std::any visitNochange_timing_check(SystemVerilogParser::Nochange_timing_checkContext *context) = 0;

    virtual std::any visitTimecheck_condition(SystemVerilogParser::Timecheck_conditionContext *context) = 0;

    virtual std::any visitControlled_reference_event(SystemVerilogParser::Controlled_reference_eventContext *context) = 0;

    virtual std::any visitData_event(SystemVerilogParser::Data_eventContext *context) = 0;

    virtual std::any visitDelayed_data(SystemVerilogParser::Delayed_dataContext *context) = 0;

    virtual std::any visitDelayed_reference(SystemVerilogParser::Delayed_referenceContext *context) = 0;

    virtual std::any visitEnd_edge_offset(SystemVerilogParser::End_edge_offsetContext *context) = 0;

    virtual std::any visitEvent_based_flag(SystemVerilogParser::Event_based_flagContext *context) = 0;

    virtual std::any visitNotifier(SystemVerilogParser::NotifierContext *context) = 0;

    virtual std::any visitReference_event(SystemVerilogParser::Reference_eventContext *context) = 0;

    virtual std::any visitRemain_active_flag(SystemVerilogParser::Remain_active_flagContext *context) = 0;

    virtual std::any visitTimestamp_condition(SystemVerilogParser::Timestamp_conditionContext *context) = 0;

    virtual std::any visitStart_edge_offset(SystemVerilogParser::Start_edge_offsetContext *context) = 0;

    virtual std::any visitThreshold(SystemVerilogParser::ThresholdContext *context) = 0;

    virtual std::any visitTiming_check_limit(SystemVerilogParser::Timing_check_limitContext *context) = 0;

    virtual std::any visitTiming_check_event(SystemVerilogParser::Timing_check_eventContext *context) = 0;

    virtual std::any visitControlled_timing_check_event(SystemVerilogParser::Controlled_timing_check_eventContext *context) = 0;

    virtual std::any visitTiming_check_event_control(SystemVerilogParser::Timing_check_event_controlContext *context) = 0;

    virtual std::any visitSpecify_terminal_descriptor(SystemVerilogParser::Specify_terminal_descriptorContext *context) = 0;

    virtual std::any visitEdge_control_specifier(SystemVerilogParser::Edge_control_specifierContext *context) = 0;

    virtual std::any visitEdge_descriptor(SystemVerilogParser::Edge_descriptorContext *context) = 0;

    virtual std::any visitTiming_check_condition(SystemVerilogParser::Timing_check_conditionContext *context) = 0;

    virtual std::any visitScalar_timing_check_condition(SystemVerilogParser::Scalar_timing_check_conditionContext *context) = 0;

    virtual std::any visitScalar_constant(SystemVerilogParser::Scalar_constantContext *context) = 0;

    virtual std::any visitConcatenation(SystemVerilogParser::ConcatenationContext *context) = 0;

    virtual std::any visitConstant_concatenation(SystemVerilogParser::Constant_concatenationContext *context) = 0;

    virtual std::any visitConstant_multiple_concatenation(SystemVerilogParser::Constant_multiple_concatenationContext *context) = 0;

    virtual std::any visitModule_path_concatenation(SystemVerilogParser::Module_path_concatenationContext *context) = 0;

    virtual std::any visitModule_path_multiple_concatenation(SystemVerilogParser::Module_path_multiple_concatenationContext *context) = 0;

    virtual std::any visitMultiple_concatenation(SystemVerilogParser::Multiple_concatenationContext *context) = 0;

    virtual std::any visitStreaming_concatenation(SystemVerilogParser::Streaming_concatenationContext *context) = 0;

    virtual std::any visitStream_operator(SystemVerilogParser::Stream_operatorContext *context) = 0;

    virtual std::any visitSlice_size(SystemVerilogParser::Slice_sizeContext *context) = 0;

    virtual std::any visitStream_concatenation(SystemVerilogParser::Stream_concatenationContext *context) = 0;

    virtual std::any visitStream_expression(SystemVerilogParser::Stream_expressionContext *context) = 0;

    virtual std::any visitArray_range_expression(SystemVerilogParser::Array_range_expressionContext *context) = 0;

    virtual std::any visitEmpty_unpacked_array_concatenation(SystemVerilogParser::Empty_unpacked_array_concatenationContext *context) = 0;

    virtual std::any visitSystem_tf_call(SystemVerilogParser::System_tf_callContext *context) = 0;

    virtual std::any visitArg_list(SystemVerilogParser::Arg_listContext *context) = 0;

    virtual std::any visitSubroutine_call(SystemVerilogParser::Subroutine_callContext *context) = 0;

    virtual std::any visitList_of_arguments(SystemVerilogParser::List_of_argumentsContext *context) = 0;

    virtual std::any visitOrdered_arg(SystemVerilogParser::Ordered_argContext *context) = 0;

    virtual std::any visitNamed_arg(SystemVerilogParser::Named_argContext *context) = 0;

    virtual std::any visitArray_manipulation_call(SystemVerilogParser::Array_manipulation_callContext *context) = 0;

    virtual std::any visitRandomize_call(SystemVerilogParser::Randomize_callContext *context) = 0;

    virtual std::any visitRand_list(SystemVerilogParser::Rand_listContext *context) = 0;

    virtual std::any visitRand_with(SystemVerilogParser::Rand_withContext *context) = 0;

    virtual std::any visitId_list(SystemVerilogParser::Id_listContext *context) = 0;

    virtual std::any visitMethod_call_root(SystemVerilogParser::Method_call_rootContext *context) = 0;

    virtual std::any visitArray_method_name(SystemVerilogParser::Array_method_nameContext *context) = 0;

    virtual std::any visitInc_or_dec_expression(SystemVerilogParser::Inc_or_dec_expressionContext *context) = 0;

    virtual std::any visitConstant_expression(SystemVerilogParser::Constant_expressionContext *context) = 0;

    virtual std::any visitConstant_mintypmax_expression(SystemVerilogParser::Constant_mintypmax_expressionContext *context) = 0;

    virtual std::any visitConstant_param_expression(SystemVerilogParser::Constant_param_expressionContext *context) = 0;

    virtual std::any visitParam_expression(SystemVerilogParser::Param_expressionContext *context) = 0;

    virtual std::any visitConstant_range_expression(SystemVerilogParser::Constant_range_expressionContext *context) = 0;

    virtual std::any visitConstant_part_select_range(SystemVerilogParser::Constant_part_select_rangeContext *context) = 0;

    virtual std::any visitConstant_range(SystemVerilogParser::Constant_rangeContext *context) = 0;

    virtual std::any visitConstant_indexed_range(SystemVerilogParser::Constant_indexed_rangeContext *context) = 0;

    virtual std::any visitExpression(SystemVerilogParser::ExpressionContext *context) = 0;

    virtual std::any visitTagged_union_expression(SystemVerilogParser::Tagged_union_expressionContext *context) = 0;

    virtual std::any visitValue_range(SystemVerilogParser::Value_rangeContext *context) = 0;

    virtual std::any visitMintypmax_expression(SystemVerilogParser::Mintypmax_expressionContext *context) = 0;

    virtual std::any visitModule_path_expression(SystemVerilogParser::Module_path_expressionContext *context) = 0;

    virtual std::any visitModule_path_mintypmax_expression(SystemVerilogParser::Module_path_mintypmax_expressionContext *context) = 0;

    virtual std::any visitPart_select_range(SystemVerilogParser::Part_select_rangeContext *context) = 0;

    virtual std::any visitIndexed_range(SystemVerilogParser::Indexed_rangeContext *context) = 0;

    virtual std::any visitGenvar_expression(SystemVerilogParser::Genvar_expressionContext *context) = 0;

    virtual std::any visitConstant_primary(SystemVerilogParser::Constant_primaryContext *context) = 0;

    virtual std::any visitModule_path_primary(SystemVerilogParser::Module_path_primaryContext *context) = 0;

    virtual std::any visitPrimary(SystemVerilogParser::PrimaryContext *context) = 0;

    virtual std::any visitRange_expression(SystemVerilogParser::Range_expressionContext *context) = 0;

    virtual std::any visitPrimary_literal(SystemVerilogParser::Primary_literalContext *context) = 0;

    virtual std::any visitTime_literal(SystemVerilogParser::Time_literalContext *context) = 0;

    virtual std::any visitImplicit_class_handle(SystemVerilogParser::Implicit_class_handleContext *context) = 0;

    virtual std::any visitBit_select(SystemVerilogParser::Bit_selectContext *context) = 0;

    virtual std::any visitSelect_(SystemVerilogParser::Select_Context *context) = 0;

    virtual std::any visitNonrange_select(SystemVerilogParser::Nonrange_selectContext *context) = 0;

    virtual std::any visitMember_select(SystemVerilogParser::Member_selectContext *context) = 0;

    virtual std::any visitConstant_bit_select(SystemVerilogParser::Constant_bit_selectContext *context) = 0;

    virtual std::any visitConstant_select(SystemVerilogParser::Constant_selectContext *context) = 0;

    virtual std::any visitConst_member_select(SystemVerilogParser::Const_member_selectContext *context) = 0;

    virtual std::any visitNet_lvalue(SystemVerilogParser::Net_lvalueContext *context) = 0;

    virtual std::any visitVariable_lvalue(SystemVerilogParser::Variable_lvalueContext *context) = 0;

    virtual std::any visitNonrange_variable_lvalue(SystemVerilogParser::Nonrange_variable_lvalueContext *context) = 0;

    virtual std::any visitUnary_operator(SystemVerilogParser::Unary_operatorContext *context) = 0;

    virtual std::any visitInc_or_dec_operator(SystemVerilogParser::Inc_or_dec_operatorContext *context) = 0;

    virtual std::any visitUnary_module_path_operator(SystemVerilogParser::Unary_module_path_operatorContext *context) = 0;

    virtual std::any visitNumber(SystemVerilogParser::NumberContext *context) = 0;

    virtual std::any visitIntegral_number(SystemVerilogParser::Integral_numberContext *context) = 0;

    virtual std::any visitDecimal_number(SystemVerilogParser::Decimal_numberContext *context) = 0;

    virtual std::any visitBinary_number(SystemVerilogParser::Binary_numberContext *context) = 0;

    virtual std::any visitOctal_number(SystemVerilogParser::Octal_numberContext *context) = 0;

    virtual std::any visitHex_number(SystemVerilogParser::Hex_numberContext *context) = 0;

    virtual std::any visitSize(SystemVerilogParser::SizeContext *context) = 0;

    virtual std::any visitReal_number(SystemVerilogParser::Real_numberContext *context) = 0;

    virtual std::any visitFixed_point_number(SystemVerilogParser::Fixed_point_numberContext *context) = 0;

    virtual std::any visitExponential_number(SystemVerilogParser::Exponential_numberContext *context) = 0;

    virtual std::any visitUnsigned_number(SystemVerilogParser::Unsigned_numberContext *context) = 0;

    virtual std::any visitDecimal_value(SystemVerilogParser::Decimal_valueContext *context) = 0;

    virtual std::any visitBinary_value(SystemVerilogParser::Binary_valueContext *context) = 0;

    virtual std::any visitOctal_value(SystemVerilogParser::Octal_valueContext *context) = 0;

    virtual std::any visitHex_value(SystemVerilogParser::Hex_valueContext *context) = 0;

    virtual std::any visitDecimal_base(SystemVerilogParser::Decimal_baseContext *context) = 0;

    virtual std::any visitBinary_base(SystemVerilogParser::Binary_baseContext *context) = 0;

    virtual std::any visitOctal_base(SystemVerilogParser::Octal_baseContext *context) = 0;

    virtual std::any visitHex_base(SystemVerilogParser::Hex_baseContext *context) = 0;

    virtual std::any visitUnbased_unsized_literal(SystemVerilogParser::Unbased_unsized_literalContext *context) = 0;

    virtual std::any visitString_literal(SystemVerilogParser::String_literalContext *context) = 0;

    virtual std::any visitAttribute_instance(SystemVerilogParser::Attribute_instanceContext *context) = 0;

    virtual std::any visitAttr_spec(SystemVerilogParser::Attr_specContext *context) = 0;

    virtual std::any visitAttr_name(SystemVerilogParser::Attr_nameContext *context) = 0;

    virtual std::any visitBlock_identifier(SystemVerilogParser::Block_identifierContext *context) = 0;

    virtual std::any visitBin_identifier(SystemVerilogParser::Bin_identifierContext *context) = 0;

    virtual std::any visitC_identifier(SystemVerilogParser::C_identifierContext *context) = 0;

    virtual std::any visitCell_identifier(SystemVerilogParser::Cell_identifierContext *context) = 0;

    virtual std::any visitChecker_identifier(SystemVerilogParser::Checker_identifierContext *context) = 0;

    virtual std::any visitClass_identifier(SystemVerilogParser::Class_identifierContext *context) = 0;

    virtual std::any visitClass_variable_identifier(SystemVerilogParser::Class_variable_identifierContext *context) = 0;

    virtual std::any visitClocking_identifier(SystemVerilogParser::Clocking_identifierContext *context) = 0;

    virtual std::any visitConfig_identifier(SystemVerilogParser::Config_identifierContext *context) = 0;

    virtual std::any visitConst_identifier(SystemVerilogParser::Const_identifierContext *context) = 0;

    virtual std::any visitConstraint_identifier(SystemVerilogParser::Constraint_identifierContext *context) = 0;

    virtual std::any visitCovergroup_identifier(SystemVerilogParser::Covergroup_identifierContext *context) = 0;

    virtual std::any visitCover_point_identifier(SystemVerilogParser::Cover_point_identifierContext *context) = 0;

    virtual std::any visitCross_identifier(SystemVerilogParser::Cross_identifierContext *context) = 0;

    virtual std::any visitDynamic_array_variable_identifier(SystemVerilogParser::Dynamic_array_variable_identifierContext *context) = 0;

    virtual std::any visitEnum_identifier(SystemVerilogParser::Enum_identifierContext *context) = 0;

    virtual std::any visitEscaped_identifier(SystemVerilogParser::Escaped_identifierContext *context) = 0;

    virtual std::any visitFormal_port_identifier(SystemVerilogParser::Formal_port_identifierContext *context) = 0;

    virtual std::any visitFunction_identifier(SystemVerilogParser::Function_identifierContext *context) = 0;

    virtual std::any visitGenerate_block_identifier(SystemVerilogParser::Generate_block_identifierContext *context) = 0;

    virtual std::any visitGenvar_identifier(SystemVerilogParser::Genvar_identifierContext *context) = 0;

    virtual std::any visitHierarchical_identifier(SystemVerilogParser::Hierarchical_identifierContext *context) = 0;

    virtual std::any visitHier_ref(SystemVerilogParser::Hier_refContext *context) = 0;

    virtual std::any visitIdentifier(SystemVerilogParser::IdentifierContext *context) = 0;

    virtual std::any visitIndex_variable_identifier(SystemVerilogParser::Index_variable_identifierContext *context) = 0;

    virtual std::any visitInterface_identifier(SystemVerilogParser::Interface_identifierContext *context) = 0;

    virtual std::any visitInterface_instance_identifier(SystemVerilogParser::Interface_instance_identifierContext *context) = 0;

    virtual std::any visitInput_port_identifier(SystemVerilogParser::Input_port_identifierContext *context) = 0;

    virtual std::any visitInstance_identifier(SystemVerilogParser::Instance_identifierContext *context) = 0;

    virtual std::any visitLibrary_identifier(SystemVerilogParser::Library_identifierContext *context) = 0;

    virtual std::any visitMember_identifier(SystemVerilogParser::Member_identifierContext *context) = 0;

    virtual std::any visitMethod_identifier(SystemVerilogParser::Method_identifierContext *context) = 0;

    virtual std::any visitModport_identifier(SystemVerilogParser::Modport_identifierContext *context) = 0;

    virtual std::any visitModule_identifier(SystemVerilogParser::Module_identifierContext *context) = 0;

    virtual std::any visitNet_identifier(SystemVerilogParser::Net_identifierContext *context) = 0;

    virtual std::any visitNet_type_identifier(SystemVerilogParser::Net_type_identifierContext *context) = 0;

    virtual std::any visitOutput_port_identifier(SystemVerilogParser::Output_port_identifierContext *context) = 0;

    virtual std::any visitPackage_identifier(SystemVerilogParser::Package_identifierContext *context) = 0;

    virtual std::any visitPackage_scope(SystemVerilogParser::Package_scopeContext *context) = 0;

    virtual std::any visitParameter_identifier(SystemVerilogParser::Parameter_identifierContext *context) = 0;

    virtual std::any visitPort_identifier(SystemVerilogParser::Port_identifierContext *context) = 0;

    virtual std::any visitProduction_identifier(SystemVerilogParser::Production_identifierContext *context) = 0;

    virtual std::any visitProgram_identifier(SystemVerilogParser::Program_identifierContext *context) = 0;

    virtual std::any visitProperty_identifier(SystemVerilogParser::Property_identifierContext *context) = 0;

    virtual std::any visitPs_identifier(SystemVerilogParser::Ps_identifierContext *context) = 0;

    virtual std::any visitPs_or_hierarchical_array_identifier(SystemVerilogParser::Ps_or_hierarchical_array_identifierContext *context) = 0;

    virtual std::any visitPs_or_hierarchical_identifier(SystemVerilogParser::Ps_or_hierarchical_identifierContext *context) = 0;

    virtual std::any visitPs_type_or_parameter_identifier(SystemVerilogParser::Ps_type_or_parameter_identifierContext *context) = 0;

    virtual std::any visitGen_ref(SystemVerilogParser::Gen_refContext *context) = 0;

    virtual std::any visitSequence_identifier(SystemVerilogParser::Sequence_identifierContext *context) = 0;

    virtual std::any visitSignal_identifier(SystemVerilogParser::Signal_identifierContext *context) = 0;

    virtual std::any visitSimple_identifier(SystemVerilogParser::Simple_identifierContext *context) = 0;

    virtual std::any visitSpecparam_identifier(SystemVerilogParser::Specparam_identifierContext *context) = 0;

    virtual std::any visitSystem_tf_identifier(SystemVerilogParser::System_tf_identifierContext *context) = 0;

    virtual std::any visitTask_identifier(SystemVerilogParser::Task_identifierContext *context) = 0;

    virtual std::any visitTf_identifier(SystemVerilogParser::Tf_identifierContext *context) = 0;

    virtual std::any visitTerminal_identifier(SystemVerilogParser::Terminal_identifierContext *context) = 0;

    virtual std::any visitTopmodule_identifier(SystemVerilogParser::Topmodule_identifierContext *context) = 0;

    virtual std::any visitType_identifier(SystemVerilogParser::Type_identifierContext *context) = 0;

    virtual std::any visitUdp_identifier(SystemVerilogParser::Udp_identifierContext *context) = 0;

    virtual std::any visitVariable_identifier(SystemVerilogParser::Variable_identifierContext *context) = 0;


};

