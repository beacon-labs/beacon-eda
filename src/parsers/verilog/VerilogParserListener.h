
// Generated from VerilogParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "VerilogParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by VerilogParser.
 */
class  VerilogParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterLibrary_text(VerilogParser::Library_textContext *ctx) = 0;
  virtual void exitLibrary_text(VerilogParser::Library_textContext *ctx) = 0;

  virtual void enterLibrary_description(VerilogParser::Library_descriptionContext *ctx) = 0;
  virtual void exitLibrary_description(VerilogParser::Library_descriptionContext *ctx) = 0;

  virtual void enterLibrary_declaration(VerilogParser::Library_declarationContext *ctx) = 0;
  virtual void exitLibrary_declaration(VerilogParser::Library_declarationContext *ctx) = 0;

  virtual void enterLibrary_incdir(VerilogParser::Library_incdirContext *ctx) = 0;
  virtual void exitLibrary_incdir(VerilogParser::Library_incdirContext *ctx) = 0;

  virtual void enterInclude_statement(VerilogParser::Include_statementContext *ctx) = 0;
  virtual void exitInclude_statement(VerilogParser::Include_statementContext *ctx) = 0;

  virtual void enterFile_path_spec(VerilogParser::File_path_specContext *ctx) = 0;
  virtual void exitFile_path_spec(VerilogParser::File_path_specContext *ctx) = 0;

  virtual void enterSource_text(VerilogParser::Source_textContext *ctx) = 0;
  virtual void exitSource_text(VerilogParser::Source_textContext *ctx) = 0;

  virtual void enterDescription(VerilogParser::DescriptionContext *ctx) = 0;
  virtual void exitDescription(VerilogParser::DescriptionContext *ctx) = 0;

  virtual void enterModule_declaration(VerilogParser::Module_declarationContext *ctx) = 0;
  virtual void exitModule_declaration(VerilogParser::Module_declarationContext *ctx) = 0;

  virtual void enterModule_keyword(VerilogParser::Module_keywordContext *ctx) = 0;
  virtual void exitModule_keyword(VerilogParser::Module_keywordContext *ctx) = 0;

  virtual void enterModule_parameter_port_list(VerilogParser::Module_parameter_port_listContext *ctx) = 0;
  virtual void exitModule_parameter_port_list(VerilogParser::Module_parameter_port_listContext *ctx) = 0;

  virtual void enterList_of_port_declarations(VerilogParser::List_of_port_declarationsContext *ctx) = 0;
  virtual void exitList_of_port_declarations(VerilogParser::List_of_port_declarationsContext *ctx) = 0;

  virtual void enterPort(VerilogParser::PortContext *ctx) = 0;
  virtual void exitPort(VerilogParser::PortContext *ctx) = 0;

  virtual void enterPort_implicit(VerilogParser::Port_implicitContext *ctx) = 0;
  virtual void exitPort_implicit(VerilogParser::Port_implicitContext *ctx) = 0;

  virtual void enterPort_explicit(VerilogParser::Port_explicitContext *ctx) = 0;
  virtual void exitPort_explicit(VerilogParser::Port_explicitContext *ctx) = 0;

  virtual void enterPort_expression(VerilogParser::Port_expressionContext *ctx) = 0;
  virtual void exitPort_expression(VerilogParser::Port_expressionContext *ctx) = 0;

  virtual void enterPort_reference(VerilogParser::Port_referenceContext *ctx) = 0;
  virtual void exitPort_reference(VerilogParser::Port_referenceContext *ctx) = 0;

  virtual void enterPort_declaration(VerilogParser::Port_declarationContext *ctx) = 0;
  virtual void exitPort_declaration(VerilogParser::Port_declarationContext *ctx) = 0;

  virtual void enterModule_item(VerilogParser::Module_itemContext *ctx) = 0;
  virtual void exitModule_item(VerilogParser::Module_itemContext *ctx) = 0;

  virtual void enterModule_or_generate_item(VerilogParser::Module_or_generate_itemContext *ctx) = 0;
  virtual void exitModule_or_generate_item(VerilogParser::Module_or_generate_itemContext *ctx) = 0;

  virtual void enterModule_or_generate_item_declaration(VerilogParser::Module_or_generate_item_declarationContext *ctx) = 0;
  virtual void exitModule_or_generate_item_declaration(VerilogParser::Module_or_generate_item_declarationContext *ctx) = 0;

  virtual void enterParameter_override(VerilogParser::Parameter_overrideContext *ctx) = 0;
  virtual void exitParameter_override(VerilogParser::Parameter_overrideContext *ctx) = 0;

  virtual void enterConfig_declaration(VerilogParser::Config_declarationContext *ctx) = 0;
  virtual void exitConfig_declaration(VerilogParser::Config_declarationContext *ctx) = 0;

  virtual void enterDesign_statement(VerilogParser::Design_statementContext *ctx) = 0;
  virtual void exitDesign_statement(VerilogParser::Design_statementContext *ctx) = 0;

  virtual void enterDesign_statement_item(VerilogParser::Design_statement_itemContext *ctx) = 0;
  virtual void exitDesign_statement_item(VerilogParser::Design_statement_itemContext *ctx) = 0;

  virtual void enterConfig_rule_statement(VerilogParser::Config_rule_statementContext *ctx) = 0;
  virtual void exitConfig_rule_statement(VerilogParser::Config_rule_statementContext *ctx) = 0;

  virtual void enterDefault_clause(VerilogParser::Default_clauseContext *ctx) = 0;
  virtual void exitDefault_clause(VerilogParser::Default_clauseContext *ctx) = 0;

  virtual void enterInst_clause(VerilogParser::Inst_clauseContext *ctx) = 0;
  virtual void exitInst_clause(VerilogParser::Inst_clauseContext *ctx) = 0;

  virtual void enterInst_name(VerilogParser::Inst_nameContext *ctx) = 0;
  virtual void exitInst_name(VerilogParser::Inst_nameContext *ctx) = 0;

  virtual void enterCell_clause(VerilogParser::Cell_clauseContext *ctx) = 0;
  virtual void exitCell_clause(VerilogParser::Cell_clauseContext *ctx) = 0;

  virtual void enterLiblist_clause(VerilogParser::Liblist_clauseContext *ctx) = 0;
  virtual void exitLiblist_clause(VerilogParser::Liblist_clauseContext *ctx) = 0;

  virtual void enterUse_clause(VerilogParser::Use_clauseContext *ctx) = 0;
  virtual void exitUse_clause(VerilogParser::Use_clauseContext *ctx) = 0;

  virtual void enterLocal_parameter_declaration(VerilogParser::Local_parameter_declarationContext *ctx) = 0;
  virtual void exitLocal_parameter_declaration(VerilogParser::Local_parameter_declarationContext *ctx) = 0;

  virtual void enterParameter_declaration(VerilogParser::Parameter_declarationContext *ctx) = 0;
  virtual void exitParameter_declaration(VerilogParser::Parameter_declarationContext *ctx) = 0;

  virtual void enterSpecparam_declaration(VerilogParser::Specparam_declarationContext *ctx) = 0;
  virtual void exitSpecparam_declaration(VerilogParser::Specparam_declarationContext *ctx) = 0;

  virtual void enterParameter_type(VerilogParser::Parameter_typeContext *ctx) = 0;
  virtual void exitParameter_type(VerilogParser::Parameter_typeContext *ctx) = 0;

  virtual void enterInout_declaration(VerilogParser::Inout_declarationContext *ctx) = 0;
  virtual void exitInout_declaration(VerilogParser::Inout_declarationContext *ctx) = 0;

  virtual void enterInput_declaration(VerilogParser::Input_declarationContext *ctx) = 0;
  virtual void exitInput_declaration(VerilogParser::Input_declarationContext *ctx) = 0;

  virtual void enterOutput_declaration(VerilogParser::Output_declarationContext *ctx) = 0;
  virtual void exitOutput_declaration(VerilogParser::Output_declarationContext *ctx) = 0;

  virtual void enterEvent_declaration(VerilogParser::Event_declarationContext *ctx) = 0;
  virtual void exitEvent_declaration(VerilogParser::Event_declarationContext *ctx) = 0;

  virtual void enterInteger_declaration(VerilogParser::Integer_declarationContext *ctx) = 0;
  virtual void exitInteger_declaration(VerilogParser::Integer_declarationContext *ctx) = 0;

  virtual void enterNet_declaration(VerilogParser::Net_declarationContext *ctx) = 0;
  virtual void exitNet_declaration(VerilogParser::Net_declarationContext *ctx) = 0;

  virtual void enterReal_declaration(VerilogParser::Real_declarationContext *ctx) = 0;
  virtual void exitReal_declaration(VerilogParser::Real_declarationContext *ctx) = 0;

  virtual void enterRealtime_declaration(VerilogParser::Realtime_declarationContext *ctx) = 0;
  virtual void exitRealtime_declaration(VerilogParser::Realtime_declarationContext *ctx) = 0;

  virtual void enterReg_declaration(VerilogParser::Reg_declarationContext *ctx) = 0;
  virtual void exitReg_declaration(VerilogParser::Reg_declarationContext *ctx) = 0;

  virtual void enterTime_declaration(VerilogParser::Time_declarationContext *ctx) = 0;
  virtual void exitTime_declaration(VerilogParser::Time_declarationContext *ctx) = 0;

  virtual void enterNet_type(VerilogParser::Net_typeContext *ctx) = 0;
  virtual void exitNet_type(VerilogParser::Net_typeContext *ctx) = 0;

  virtual void enterOutput_variable_type(VerilogParser::Output_variable_typeContext *ctx) = 0;
  virtual void exitOutput_variable_type(VerilogParser::Output_variable_typeContext *ctx) = 0;

  virtual void enterReal_type(VerilogParser::Real_typeContext *ctx) = 0;
  virtual void exitReal_type(VerilogParser::Real_typeContext *ctx) = 0;

  virtual void enterVariable_type(VerilogParser::Variable_typeContext *ctx) = 0;
  virtual void exitVariable_type(VerilogParser::Variable_typeContext *ctx) = 0;

  virtual void enterDrive_strength(VerilogParser::Drive_strengthContext *ctx) = 0;
  virtual void exitDrive_strength(VerilogParser::Drive_strengthContext *ctx) = 0;

  virtual void enterStrength0(VerilogParser::Strength0Context *ctx) = 0;
  virtual void exitStrength0(VerilogParser::Strength0Context *ctx) = 0;

  virtual void enterStrength1(VerilogParser::Strength1Context *ctx) = 0;
  virtual void exitStrength1(VerilogParser::Strength1Context *ctx) = 0;

  virtual void enterCharge_strength(VerilogParser::Charge_strengthContext *ctx) = 0;
  virtual void exitCharge_strength(VerilogParser::Charge_strengthContext *ctx) = 0;

  virtual void enterDelay3(VerilogParser::Delay3Context *ctx) = 0;
  virtual void exitDelay3(VerilogParser::Delay3Context *ctx) = 0;

  virtual void enterDelay2(VerilogParser::Delay2Context *ctx) = 0;
  virtual void exitDelay2(VerilogParser::Delay2Context *ctx) = 0;

  virtual void enterDelay_value(VerilogParser::Delay_valueContext *ctx) = 0;
  virtual void exitDelay_value(VerilogParser::Delay_valueContext *ctx) = 0;

  virtual void enterList_of_defparam_assignments(VerilogParser::List_of_defparam_assignmentsContext *ctx) = 0;
  virtual void exitList_of_defparam_assignments(VerilogParser::List_of_defparam_assignmentsContext *ctx) = 0;

  virtual void enterList_of_event_identifiers(VerilogParser::List_of_event_identifiersContext *ctx) = 0;
  virtual void exitList_of_event_identifiers(VerilogParser::List_of_event_identifiersContext *ctx) = 0;

  virtual void enterEvent_id(VerilogParser::Event_idContext *ctx) = 0;
  virtual void exitEvent_id(VerilogParser::Event_idContext *ctx) = 0;

  virtual void enterList_of_net_decl_assignments(VerilogParser::List_of_net_decl_assignmentsContext *ctx) = 0;
  virtual void exitList_of_net_decl_assignments(VerilogParser::List_of_net_decl_assignmentsContext *ctx) = 0;

  virtual void enterList_of_net_identifiers(VerilogParser::List_of_net_identifiersContext *ctx) = 0;
  virtual void exitList_of_net_identifiers(VerilogParser::List_of_net_identifiersContext *ctx) = 0;

  virtual void enterNet_id(VerilogParser::Net_idContext *ctx) = 0;
  virtual void exitNet_id(VerilogParser::Net_idContext *ctx) = 0;

  virtual void enterList_of_param_assignments(VerilogParser::List_of_param_assignmentsContext *ctx) = 0;
  virtual void exitList_of_param_assignments(VerilogParser::List_of_param_assignmentsContext *ctx) = 0;

  virtual void enterList_of_port_identifiers(VerilogParser::List_of_port_identifiersContext *ctx) = 0;
  virtual void exitList_of_port_identifiers(VerilogParser::List_of_port_identifiersContext *ctx) = 0;

  virtual void enterList_of_real_identifiers(VerilogParser::List_of_real_identifiersContext *ctx) = 0;
  virtual void exitList_of_real_identifiers(VerilogParser::List_of_real_identifiersContext *ctx) = 0;

  virtual void enterList_of_specparam_assignments(VerilogParser::List_of_specparam_assignmentsContext *ctx) = 0;
  virtual void exitList_of_specparam_assignments(VerilogParser::List_of_specparam_assignmentsContext *ctx) = 0;

  virtual void enterList_of_variable_identifiers(VerilogParser::List_of_variable_identifiersContext *ctx) = 0;
  virtual void exitList_of_variable_identifiers(VerilogParser::List_of_variable_identifiersContext *ctx) = 0;

  virtual void enterList_of_variable_port_identifiers(VerilogParser::List_of_variable_port_identifiersContext *ctx) = 0;
  virtual void exitList_of_variable_port_identifiers(VerilogParser::List_of_variable_port_identifiersContext *ctx) = 0;

  virtual void enterVar_port_id(VerilogParser::Var_port_idContext *ctx) = 0;
  virtual void exitVar_port_id(VerilogParser::Var_port_idContext *ctx) = 0;

  virtual void enterDefparam_assignment(VerilogParser::Defparam_assignmentContext *ctx) = 0;
  virtual void exitDefparam_assignment(VerilogParser::Defparam_assignmentContext *ctx) = 0;

  virtual void enterNet_decl_assignment(VerilogParser::Net_decl_assignmentContext *ctx) = 0;
  virtual void exitNet_decl_assignment(VerilogParser::Net_decl_assignmentContext *ctx) = 0;

  virtual void enterParam_assignment(VerilogParser::Param_assignmentContext *ctx) = 0;
  virtual void exitParam_assignment(VerilogParser::Param_assignmentContext *ctx) = 0;

  virtual void enterSpecparam_assignment(VerilogParser::Specparam_assignmentContext *ctx) = 0;
  virtual void exitSpecparam_assignment(VerilogParser::Specparam_assignmentContext *ctx) = 0;

  virtual void enterPulse_control_specparam(VerilogParser::Pulse_control_specparamContext *ctx) = 0;
  virtual void exitPulse_control_specparam(VerilogParser::Pulse_control_specparamContext *ctx) = 0;

  virtual void enterError_limit_value(VerilogParser::Error_limit_valueContext *ctx) = 0;
  virtual void exitError_limit_value(VerilogParser::Error_limit_valueContext *ctx) = 0;

  virtual void enterReject_limit_value(VerilogParser::Reject_limit_valueContext *ctx) = 0;
  virtual void exitReject_limit_value(VerilogParser::Reject_limit_valueContext *ctx) = 0;

  virtual void enterLimit_value(VerilogParser::Limit_valueContext *ctx) = 0;
  virtual void exitLimit_value(VerilogParser::Limit_valueContext *ctx) = 0;

  virtual void enterDimension(VerilogParser::DimensionContext *ctx) = 0;
  virtual void exitDimension(VerilogParser::DimensionContext *ctx) = 0;

  virtual void enterRange_(VerilogParser::Range_Context *ctx) = 0;
  virtual void exitRange_(VerilogParser::Range_Context *ctx) = 0;

  virtual void enterFunction_declaration(VerilogParser::Function_declarationContext *ctx) = 0;
  virtual void exitFunction_declaration(VerilogParser::Function_declarationContext *ctx) = 0;

  virtual void enterFunction_item_declaration(VerilogParser::Function_item_declarationContext *ctx) = 0;
  virtual void exitFunction_item_declaration(VerilogParser::Function_item_declarationContext *ctx) = 0;

  virtual void enterFunction_port_list(VerilogParser::Function_port_listContext *ctx) = 0;
  virtual void exitFunction_port_list(VerilogParser::Function_port_listContext *ctx) = 0;

  virtual void enterFunc_port_item(VerilogParser::Func_port_itemContext *ctx) = 0;
  virtual void exitFunc_port_item(VerilogParser::Func_port_itemContext *ctx) = 0;

  virtual void enterFunction_range_or_type(VerilogParser::Function_range_or_typeContext *ctx) = 0;
  virtual void exitFunction_range_or_type(VerilogParser::Function_range_or_typeContext *ctx) = 0;

  virtual void enterTask_declaration(VerilogParser::Task_declarationContext *ctx) = 0;
  virtual void exitTask_declaration(VerilogParser::Task_declarationContext *ctx) = 0;

  virtual void enterTask_item_declaration(VerilogParser::Task_item_declarationContext *ctx) = 0;
  virtual void exitTask_item_declaration(VerilogParser::Task_item_declarationContext *ctx) = 0;

  virtual void enterTask_port_list(VerilogParser::Task_port_listContext *ctx) = 0;
  virtual void exitTask_port_list(VerilogParser::Task_port_listContext *ctx) = 0;

  virtual void enterTask_port_item(VerilogParser::Task_port_itemContext *ctx) = 0;
  virtual void exitTask_port_item(VerilogParser::Task_port_itemContext *ctx) = 0;

  virtual void enterTf_input_declaration(VerilogParser::Tf_input_declarationContext *ctx) = 0;
  virtual void exitTf_input_declaration(VerilogParser::Tf_input_declarationContext *ctx) = 0;

  virtual void enterTf_output_declaration(VerilogParser::Tf_output_declarationContext *ctx) = 0;
  virtual void exitTf_output_declaration(VerilogParser::Tf_output_declarationContext *ctx) = 0;

  virtual void enterTf_inout_declaration(VerilogParser::Tf_inout_declarationContext *ctx) = 0;
  virtual void exitTf_inout_declaration(VerilogParser::Tf_inout_declarationContext *ctx) = 0;

  virtual void enterTask_port_type(VerilogParser::Task_port_typeContext *ctx) = 0;
  virtual void exitTask_port_type(VerilogParser::Task_port_typeContext *ctx) = 0;

  virtual void enterBlock_item_declaration(VerilogParser::Block_item_declarationContext *ctx) = 0;
  virtual void exitBlock_item_declaration(VerilogParser::Block_item_declarationContext *ctx) = 0;

  virtual void enterList_of_block_variable_identifiers(VerilogParser::List_of_block_variable_identifiersContext *ctx) = 0;
  virtual void exitList_of_block_variable_identifiers(VerilogParser::List_of_block_variable_identifiersContext *ctx) = 0;

  virtual void enterList_of_block_real_identifiers(VerilogParser::List_of_block_real_identifiersContext *ctx) = 0;
  virtual void exitList_of_block_real_identifiers(VerilogParser::List_of_block_real_identifiersContext *ctx) = 0;

  virtual void enterBlock_variable_type(VerilogParser::Block_variable_typeContext *ctx) = 0;
  virtual void exitBlock_variable_type(VerilogParser::Block_variable_typeContext *ctx) = 0;

  virtual void enterBlock_real_type(VerilogParser::Block_real_typeContext *ctx) = 0;
  virtual void exitBlock_real_type(VerilogParser::Block_real_typeContext *ctx) = 0;

  virtual void enterGate_instantiation(VerilogParser::Gate_instantiationContext *ctx) = 0;
  virtual void exitGate_instantiation(VerilogParser::Gate_instantiationContext *ctx) = 0;

  virtual void enterCmos_switch_instance(VerilogParser::Cmos_switch_instanceContext *ctx) = 0;
  virtual void exitCmos_switch_instance(VerilogParser::Cmos_switch_instanceContext *ctx) = 0;

  virtual void enterEnable_gate_instance(VerilogParser::Enable_gate_instanceContext *ctx) = 0;
  virtual void exitEnable_gate_instance(VerilogParser::Enable_gate_instanceContext *ctx) = 0;

  virtual void enterMos_switch_instance(VerilogParser::Mos_switch_instanceContext *ctx) = 0;
  virtual void exitMos_switch_instance(VerilogParser::Mos_switch_instanceContext *ctx) = 0;

  virtual void enterN_input_gate_instance(VerilogParser::N_input_gate_instanceContext *ctx) = 0;
  virtual void exitN_input_gate_instance(VerilogParser::N_input_gate_instanceContext *ctx) = 0;

  virtual void enterN_output_gate_instance(VerilogParser::N_output_gate_instanceContext *ctx) = 0;
  virtual void exitN_output_gate_instance(VerilogParser::N_output_gate_instanceContext *ctx) = 0;

  virtual void enterPass_switch_instance(VerilogParser::Pass_switch_instanceContext *ctx) = 0;
  virtual void exitPass_switch_instance(VerilogParser::Pass_switch_instanceContext *ctx) = 0;

  virtual void enterPass_enable_switch_instance(VerilogParser::Pass_enable_switch_instanceContext *ctx) = 0;
  virtual void exitPass_enable_switch_instance(VerilogParser::Pass_enable_switch_instanceContext *ctx) = 0;

  virtual void enterPull_gate_instance(VerilogParser::Pull_gate_instanceContext *ctx) = 0;
  virtual void exitPull_gate_instance(VerilogParser::Pull_gate_instanceContext *ctx) = 0;

  virtual void enterName_of_gate_instance(VerilogParser::Name_of_gate_instanceContext *ctx) = 0;
  virtual void exitName_of_gate_instance(VerilogParser::Name_of_gate_instanceContext *ctx) = 0;

  virtual void enterPulldown_strength(VerilogParser::Pulldown_strengthContext *ctx) = 0;
  virtual void exitPulldown_strength(VerilogParser::Pulldown_strengthContext *ctx) = 0;

  virtual void enterPullup_strength(VerilogParser::Pullup_strengthContext *ctx) = 0;
  virtual void exitPullup_strength(VerilogParser::Pullup_strengthContext *ctx) = 0;

  virtual void enterEnable_terminal(VerilogParser::Enable_terminalContext *ctx) = 0;
  virtual void exitEnable_terminal(VerilogParser::Enable_terminalContext *ctx) = 0;

  virtual void enterInout_terminal(VerilogParser::Inout_terminalContext *ctx) = 0;
  virtual void exitInout_terminal(VerilogParser::Inout_terminalContext *ctx) = 0;

  virtual void enterInput_terminal(VerilogParser::Input_terminalContext *ctx) = 0;
  virtual void exitInput_terminal(VerilogParser::Input_terminalContext *ctx) = 0;

  virtual void enterNcontrol_terminal(VerilogParser::Ncontrol_terminalContext *ctx) = 0;
  virtual void exitNcontrol_terminal(VerilogParser::Ncontrol_terminalContext *ctx) = 0;

  virtual void enterOutput_terminal(VerilogParser::Output_terminalContext *ctx) = 0;
  virtual void exitOutput_terminal(VerilogParser::Output_terminalContext *ctx) = 0;

  virtual void enterPcontrol_terminal(VerilogParser::Pcontrol_terminalContext *ctx) = 0;
  virtual void exitPcontrol_terminal(VerilogParser::Pcontrol_terminalContext *ctx) = 0;

  virtual void enterCmos_switchtype(VerilogParser::Cmos_switchtypeContext *ctx) = 0;
  virtual void exitCmos_switchtype(VerilogParser::Cmos_switchtypeContext *ctx) = 0;

  virtual void enterEnable_gatetype(VerilogParser::Enable_gatetypeContext *ctx) = 0;
  virtual void exitEnable_gatetype(VerilogParser::Enable_gatetypeContext *ctx) = 0;

  virtual void enterMos_switchtype(VerilogParser::Mos_switchtypeContext *ctx) = 0;
  virtual void exitMos_switchtype(VerilogParser::Mos_switchtypeContext *ctx) = 0;

  virtual void enterN_input_gatetype(VerilogParser::N_input_gatetypeContext *ctx) = 0;
  virtual void exitN_input_gatetype(VerilogParser::N_input_gatetypeContext *ctx) = 0;

  virtual void enterN_output_gatetype(VerilogParser::N_output_gatetypeContext *ctx) = 0;
  virtual void exitN_output_gatetype(VerilogParser::N_output_gatetypeContext *ctx) = 0;

  virtual void enterPass_en_switchtype(VerilogParser::Pass_en_switchtypeContext *ctx) = 0;
  virtual void exitPass_en_switchtype(VerilogParser::Pass_en_switchtypeContext *ctx) = 0;

  virtual void enterPass_switchtype(VerilogParser::Pass_switchtypeContext *ctx) = 0;
  virtual void exitPass_switchtype(VerilogParser::Pass_switchtypeContext *ctx) = 0;

  virtual void enterModule_instantiation(VerilogParser::Module_instantiationContext *ctx) = 0;
  virtual void exitModule_instantiation(VerilogParser::Module_instantiationContext *ctx) = 0;

  virtual void enterParameter_value_assignment(VerilogParser::Parameter_value_assignmentContext *ctx) = 0;
  virtual void exitParameter_value_assignment(VerilogParser::Parameter_value_assignmentContext *ctx) = 0;

  virtual void enterList_of_parameter_assignments(VerilogParser::List_of_parameter_assignmentsContext *ctx) = 0;
  virtual void exitList_of_parameter_assignments(VerilogParser::List_of_parameter_assignmentsContext *ctx) = 0;

  virtual void enterOrdered_parameter_assignment(VerilogParser::Ordered_parameter_assignmentContext *ctx) = 0;
  virtual void exitOrdered_parameter_assignment(VerilogParser::Ordered_parameter_assignmentContext *ctx) = 0;

  virtual void enterNamed_parameter_assignment(VerilogParser::Named_parameter_assignmentContext *ctx) = 0;
  virtual void exitNamed_parameter_assignment(VerilogParser::Named_parameter_assignmentContext *ctx) = 0;

  virtual void enterModule_instance(VerilogParser::Module_instanceContext *ctx) = 0;
  virtual void exitModule_instance(VerilogParser::Module_instanceContext *ctx) = 0;

  virtual void enterName_of_module_instance(VerilogParser::Name_of_module_instanceContext *ctx) = 0;
  virtual void exitName_of_module_instance(VerilogParser::Name_of_module_instanceContext *ctx) = 0;

  virtual void enterList_of_port_connections(VerilogParser::List_of_port_connectionsContext *ctx) = 0;
  virtual void exitList_of_port_connections(VerilogParser::List_of_port_connectionsContext *ctx) = 0;

  virtual void enterOrdered_port_connection(VerilogParser::Ordered_port_connectionContext *ctx) = 0;
  virtual void exitOrdered_port_connection(VerilogParser::Ordered_port_connectionContext *ctx) = 0;

  virtual void enterNamed_port_connection(VerilogParser::Named_port_connectionContext *ctx) = 0;
  virtual void exitNamed_port_connection(VerilogParser::Named_port_connectionContext *ctx) = 0;

  virtual void enterGenerate_region(VerilogParser::Generate_regionContext *ctx) = 0;
  virtual void exitGenerate_region(VerilogParser::Generate_regionContext *ctx) = 0;

  virtual void enterGenvar_declaration(VerilogParser::Genvar_declarationContext *ctx) = 0;
  virtual void exitGenvar_declaration(VerilogParser::Genvar_declarationContext *ctx) = 0;

  virtual void enterList_of_genvar_identifiers(VerilogParser::List_of_genvar_identifiersContext *ctx) = 0;
  virtual void exitList_of_genvar_identifiers(VerilogParser::List_of_genvar_identifiersContext *ctx) = 0;

  virtual void enterLoop_generate_construct(VerilogParser::Loop_generate_constructContext *ctx) = 0;
  virtual void exitLoop_generate_construct(VerilogParser::Loop_generate_constructContext *ctx) = 0;

  virtual void enterGenvar_initialization(VerilogParser::Genvar_initializationContext *ctx) = 0;
  virtual void exitGenvar_initialization(VerilogParser::Genvar_initializationContext *ctx) = 0;

  virtual void enterGenvar_expression(VerilogParser::Genvar_expressionContext *ctx) = 0;
  virtual void exitGenvar_expression(VerilogParser::Genvar_expressionContext *ctx) = 0;

  virtual void enterGenvar_iteration(VerilogParser::Genvar_iterationContext *ctx) = 0;
  virtual void exitGenvar_iteration(VerilogParser::Genvar_iterationContext *ctx) = 0;

  virtual void enterConditional_generate_construct(VerilogParser::Conditional_generate_constructContext *ctx) = 0;
  virtual void exitConditional_generate_construct(VerilogParser::Conditional_generate_constructContext *ctx) = 0;

  virtual void enterIf_generate_construct(VerilogParser::If_generate_constructContext *ctx) = 0;
  virtual void exitIf_generate_construct(VerilogParser::If_generate_constructContext *ctx) = 0;

  virtual void enterCase_generate_construct(VerilogParser::Case_generate_constructContext *ctx) = 0;
  virtual void exitCase_generate_construct(VerilogParser::Case_generate_constructContext *ctx) = 0;

  virtual void enterCase_generate_item(VerilogParser::Case_generate_itemContext *ctx) = 0;
  virtual void exitCase_generate_item(VerilogParser::Case_generate_itemContext *ctx) = 0;

  virtual void enterGenerate_block(VerilogParser::Generate_blockContext *ctx) = 0;
  virtual void exitGenerate_block(VerilogParser::Generate_blockContext *ctx) = 0;

  virtual void enterGenerate_block_name(VerilogParser::Generate_block_nameContext *ctx) = 0;
  virtual void exitGenerate_block_name(VerilogParser::Generate_block_nameContext *ctx) = 0;

  virtual void enterGenerate_block_or_null(VerilogParser::Generate_block_or_nullContext *ctx) = 0;
  virtual void exitGenerate_block_or_null(VerilogParser::Generate_block_or_nullContext *ctx) = 0;

  virtual void enterUdp_declaration(VerilogParser::Udp_declarationContext *ctx) = 0;
  virtual void exitUdp_declaration(VerilogParser::Udp_declarationContext *ctx) = 0;

  virtual void enterUdp_port_list(VerilogParser::Udp_port_listContext *ctx) = 0;
  virtual void exitUdp_port_list(VerilogParser::Udp_port_listContext *ctx) = 0;

  virtual void enterUdp_declaration_port_list(VerilogParser::Udp_declaration_port_listContext *ctx) = 0;
  virtual void exitUdp_declaration_port_list(VerilogParser::Udp_declaration_port_listContext *ctx) = 0;

  virtual void enterUdp_port_declaration(VerilogParser::Udp_port_declarationContext *ctx) = 0;
  virtual void exitUdp_port_declaration(VerilogParser::Udp_port_declarationContext *ctx) = 0;

  virtual void enterUdp_output_declaration(VerilogParser::Udp_output_declarationContext *ctx) = 0;
  virtual void exitUdp_output_declaration(VerilogParser::Udp_output_declarationContext *ctx) = 0;

  virtual void enterUdp_input_declaration(VerilogParser::Udp_input_declarationContext *ctx) = 0;
  virtual void exitUdp_input_declaration(VerilogParser::Udp_input_declarationContext *ctx) = 0;

  virtual void enterUdp_reg_declaration(VerilogParser::Udp_reg_declarationContext *ctx) = 0;
  virtual void exitUdp_reg_declaration(VerilogParser::Udp_reg_declarationContext *ctx) = 0;

  virtual void enterUdp_body(VerilogParser::Udp_bodyContext *ctx) = 0;
  virtual void exitUdp_body(VerilogParser::Udp_bodyContext *ctx) = 0;

  virtual void enterCombinational_body(VerilogParser::Combinational_bodyContext *ctx) = 0;
  virtual void exitCombinational_body(VerilogParser::Combinational_bodyContext *ctx) = 0;

  virtual void enterCombinational_entry(VerilogParser::Combinational_entryContext *ctx) = 0;
  virtual void exitCombinational_entry(VerilogParser::Combinational_entryContext *ctx) = 0;

  virtual void enterSequential_body(VerilogParser::Sequential_bodyContext *ctx) = 0;
  virtual void exitSequential_body(VerilogParser::Sequential_bodyContext *ctx) = 0;

  virtual void enterUdp_initial_statement(VerilogParser::Udp_initial_statementContext *ctx) = 0;
  virtual void exitUdp_initial_statement(VerilogParser::Udp_initial_statementContext *ctx) = 0;

  virtual void enterInit_val(VerilogParser::Init_valContext *ctx) = 0;
  virtual void exitInit_val(VerilogParser::Init_valContext *ctx) = 0;

  virtual void enterSequential_entry(VerilogParser::Sequential_entryContext *ctx) = 0;
  virtual void exitSequential_entry(VerilogParser::Sequential_entryContext *ctx) = 0;

  virtual void enterSeq_input_list(VerilogParser::Seq_input_listContext *ctx) = 0;
  virtual void exitSeq_input_list(VerilogParser::Seq_input_listContext *ctx) = 0;

  virtual void enterLevel_input_list(VerilogParser::Level_input_listContext *ctx) = 0;
  virtual void exitLevel_input_list(VerilogParser::Level_input_listContext *ctx) = 0;

  virtual void enterEdge_input_list(VerilogParser::Edge_input_listContext *ctx) = 0;
  virtual void exitEdge_input_list(VerilogParser::Edge_input_listContext *ctx) = 0;

  virtual void enterEdge_indicator(VerilogParser::Edge_indicatorContext *ctx) = 0;
  virtual void exitEdge_indicator(VerilogParser::Edge_indicatorContext *ctx) = 0;

  virtual void enterCurrent_state(VerilogParser::Current_stateContext *ctx) = 0;
  virtual void exitCurrent_state(VerilogParser::Current_stateContext *ctx) = 0;

  virtual void enterNext_state(VerilogParser::Next_stateContext *ctx) = 0;
  virtual void exitNext_state(VerilogParser::Next_stateContext *ctx) = 0;

  virtual void enterOutput_symbol(VerilogParser::Output_symbolContext *ctx) = 0;
  virtual void exitOutput_symbol(VerilogParser::Output_symbolContext *ctx) = 0;

  virtual void enterLevel_symbol(VerilogParser::Level_symbolContext *ctx) = 0;
  virtual void exitLevel_symbol(VerilogParser::Level_symbolContext *ctx) = 0;

  virtual void enterEdge_symbol(VerilogParser::Edge_symbolContext *ctx) = 0;
  virtual void exitEdge_symbol(VerilogParser::Edge_symbolContext *ctx) = 0;

  virtual void enterUdp_instantiation(VerilogParser::Udp_instantiationContext *ctx) = 0;
  virtual void exitUdp_instantiation(VerilogParser::Udp_instantiationContext *ctx) = 0;

  virtual void enterUdp_instance(VerilogParser::Udp_instanceContext *ctx) = 0;
  virtual void exitUdp_instance(VerilogParser::Udp_instanceContext *ctx) = 0;

  virtual void enterName_of_udp_instance(VerilogParser::Name_of_udp_instanceContext *ctx) = 0;
  virtual void exitName_of_udp_instance(VerilogParser::Name_of_udp_instanceContext *ctx) = 0;

  virtual void enterContinuous_assign(VerilogParser::Continuous_assignContext *ctx) = 0;
  virtual void exitContinuous_assign(VerilogParser::Continuous_assignContext *ctx) = 0;

  virtual void enterList_of_net_assignments(VerilogParser::List_of_net_assignmentsContext *ctx) = 0;
  virtual void exitList_of_net_assignments(VerilogParser::List_of_net_assignmentsContext *ctx) = 0;

  virtual void enterNet_assignment(VerilogParser::Net_assignmentContext *ctx) = 0;
  virtual void exitNet_assignment(VerilogParser::Net_assignmentContext *ctx) = 0;

  virtual void enterInitial_construct(VerilogParser::Initial_constructContext *ctx) = 0;
  virtual void exitInitial_construct(VerilogParser::Initial_constructContext *ctx) = 0;

  virtual void enterAlways_construct(VerilogParser::Always_constructContext *ctx) = 0;
  virtual void exitAlways_construct(VerilogParser::Always_constructContext *ctx) = 0;

  virtual void enterBlocking_assignment(VerilogParser::Blocking_assignmentContext *ctx) = 0;
  virtual void exitBlocking_assignment(VerilogParser::Blocking_assignmentContext *ctx) = 0;

  virtual void enterNonblocking_assignment(VerilogParser::Nonblocking_assignmentContext *ctx) = 0;
  virtual void exitNonblocking_assignment(VerilogParser::Nonblocking_assignmentContext *ctx) = 0;

  virtual void enterProcedural_continuous_assignments(VerilogParser::Procedural_continuous_assignmentsContext *ctx) = 0;
  virtual void exitProcedural_continuous_assignments(VerilogParser::Procedural_continuous_assignmentsContext *ctx) = 0;

  virtual void enterVariable_assignment(VerilogParser::Variable_assignmentContext *ctx) = 0;
  virtual void exitVariable_assignment(VerilogParser::Variable_assignmentContext *ctx) = 0;

  virtual void enterPar_block(VerilogParser::Par_blockContext *ctx) = 0;
  virtual void exitPar_block(VerilogParser::Par_blockContext *ctx) = 0;

  virtual void enterBlock_name(VerilogParser::Block_nameContext *ctx) = 0;
  virtual void exitBlock_name(VerilogParser::Block_nameContext *ctx) = 0;

  virtual void enterSeq_block(VerilogParser::Seq_blockContext *ctx) = 0;
  virtual void exitSeq_block(VerilogParser::Seq_blockContext *ctx) = 0;

  virtual void enterStatement(VerilogParser::StatementContext *ctx) = 0;
  virtual void exitStatement(VerilogParser::StatementContext *ctx) = 0;

  virtual void enterStatement_or_null(VerilogParser::Statement_or_nullContext *ctx) = 0;
  virtual void exitStatement_or_null(VerilogParser::Statement_or_nullContext *ctx) = 0;

  virtual void enterFunction_statement(VerilogParser::Function_statementContext *ctx) = 0;
  virtual void exitFunction_statement(VerilogParser::Function_statementContext *ctx) = 0;

  virtual void enterDelay_control(VerilogParser::Delay_controlContext *ctx) = 0;
  virtual void exitDelay_control(VerilogParser::Delay_controlContext *ctx) = 0;

  virtual void enterDelay_or_event_control(VerilogParser::Delay_or_event_controlContext *ctx) = 0;
  virtual void exitDelay_or_event_control(VerilogParser::Delay_or_event_controlContext *ctx) = 0;

  virtual void enterDisable_statement(VerilogParser::Disable_statementContext *ctx) = 0;
  virtual void exitDisable_statement(VerilogParser::Disable_statementContext *ctx) = 0;

  virtual void enterEvent_control(VerilogParser::Event_controlContext *ctx) = 0;
  virtual void exitEvent_control(VerilogParser::Event_controlContext *ctx) = 0;

  virtual void enterEvent_trigger(VerilogParser::Event_triggerContext *ctx) = 0;
  virtual void exitEvent_trigger(VerilogParser::Event_triggerContext *ctx) = 0;

  virtual void enterEvent_expression(VerilogParser::Event_expressionContext *ctx) = 0;
  virtual void exitEvent_expression(VerilogParser::Event_expressionContext *ctx) = 0;

  virtual void enterProcedural_timing_control(VerilogParser::Procedural_timing_controlContext *ctx) = 0;
  virtual void exitProcedural_timing_control(VerilogParser::Procedural_timing_controlContext *ctx) = 0;

  virtual void enterProcedural_timing_control_statement(VerilogParser::Procedural_timing_control_statementContext *ctx) = 0;
  virtual void exitProcedural_timing_control_statement(VerilogParser::Procedural_timing_control_statementContext *ctx) = 0;

  virtual void enterWait_statement(VerilogParser::Wait_statementContext *ctx) = 0;
  virtual void exitWait_statement(VerilogParser::Wait_statementContext *ctx) = 0;

  virtual void enterConditional_statement(VerilogParser::Conditional_statementContext *ctx) = 0;
  virtual void exitConditional_statement(VerilogParser::Conditional_statementContext *ctx) = 0;

  virtual void enterCase_statement(VerilogParser::Case_statementContext *ctx) = 0;
  virtual void exitCase_statement(VerilogParser::Case_statementContext *ctx) = 0;

  virtual void enterCase_item(VerilogParser::Case_itemContext *ctx) = 0;
  virtual void exitCase_item(VerilogParser::Case_itemContext *ctx) = 0;

  virtual void enterLoop_statement(VerilogParser::Loop_statementContext *ctx) = 0;
  virtual void exitLoop_statement(VerilogParser::Loop_statementContext *ctx) = 0;

  virtual void enterSystem_task_enable(VerilogParser::System_task_enableContext *ctx) = 0;
  virtual void exitSystem_task_enable(VerilogParser::System_task_enableContext *ctx) = 0;

  virtual void enterSys_task_en_port_list(VerilogParser::Sys_task_en_port_listContext *ctx) = 0;
  virtual void exitSys_task_en_port_list(VerilogParser::Sys_task_en_port_listContext *ctx) = 0;

  virtual void enterSys_task_en_port_item(VerilogParser::Sys_task_en_port_itemContext *ctx) = 0;
  virtual void exitSys_task_en_port_item(VerilogParser::Sys_task_en_port_itemContext *ctx) = 0;

  virtual void enterTask_enable(VerilogParser::Task_enableContext *ctx) = 0;
  virtual void exitTask_enable(VerilogParser::Task_enableContext *ctx) = 0;

  virtual void enterTask_en_port_list(VerilogParser::Task_en_port_listContext *ctx) = 0;
  virtual void exitTask_en_port_list(VerilogParser::Task_en_port_listContext *ctx) = 0;

  virtual void enterSpecify_block(VerilogParser::Specify_blockContext *ctx) = 0;
  virtual void exitSpecify_block(VerilogParser::Specify_blockContext *ctx) = 0;

  virtual void enterSpecify_item(VerilogParser::Specify_itemContext *ctx) = 0;
  virtual void exitSpecify_item(VerilogParser::Specify_itemContext *ctx) = 0;

  virtual void enterPulsestyle_declaration(VerilogParser::Pulsestyle_declarationContext *ctx) = 0;
  virtual void exitPulsestyle_declaration(VerilogParser::Pulsestyle_declarationContext *ctx) = 0;

  virtual void enterShowcancelled_declaration(VerilogParser::Showcancelled_declarationContext *ctx) = 0;
  virtual void exitShowcancelled_declaration(VerilogParser::Showcancelled_declarationContext *ctx) = 0;

  virtual void enterPath_declaration(VerilogParser::Path_declarationContext *ctx) = 0;
  virtual void exitPath_declaration(VerilogParser::Path_declarationContext *ctx) = 0;

  virtual void enterSimple_path_declaration(VerilogParser::Simple_path_declarationContext *ctx) = 0;
  virtual void exitSimple_path_declaration(VerilogParser::Simple_path_declarationContext *ctx) = 0;

  virtual void enterParallel_path_description(VerilogParser::Parallel_path_descriptionContext *ctx) = 0;
  virtual void exitParallel_path_description(VerilogParser::Parallel_path_descriptionContext *ctx) = 0;

  virtual void enterFull_path_description(VerilogParser::Full_path_descriptionContext *ctx) = 0;
  virtual void exitFull_path_description(VerilogParser::Full_path_descriptionContext *ctx) = 0;

  virtual void enterList_of_path_inputs(VerilogParser::List_of_path_inputsContext *ctx) = 0;
  virtual void exitList_of_path_inputs(VerilogParser::List_of_path_inputsContext *ctx) = 0;

  virtual void enterList_of_path_outputs(VerilogParser::List_of_path_outputsContext *ctx) = 0;
  virtual void exitList_of_path_outputs(VerilogParser::List_of_path_outputsContext *ctx) = 0;

  virtual void enterSpecify_input_terminal_descriptor(VerilogParser::Specify_input_terminal_descriptorContext *ctx) = 0;
  virtual void exitSpecify_input_terminal_descriptor(VerilogParser::Specify_input_terminal_descriptorContext *ctx) = 0;

  virtual void enterSpecify_output_terminal_descriptor(VerilogParser::Specify_output_terminal_descriptorContext *ctx) = 0;
  virtual void exitSpecify_output_terminal_descriptor(VerilogParser::Specify_output_terminal_descriptorContext *ctx) = 0;

  virtual void enterInput_identifier(VerilogParser::Input_identifierContext *ctx) = 0;
  virtual void exitInput_identifier(VerilogParser::Input_identifierContext *ctx) = 0;

  virtual void enterOutput_identifier(VerilogParser::Output_identifierContext *ctx) = 0;
  virtual void exitOutput_identifier(VerilogParser::Output_identifierContext *ctx) = 0;

  virtual void enterPath_delay_value(VerilogParser::Path_delay_valueContext *ctx) = 0;
  virtual void exitPath_delay_value(VerilogParser::Path_delay_valueContext *ctx) = 0;

  virtual void enterList_of_path_delay_expressions(VerilogParser::List_of_path_delay_expressionsContext *ctx) = 0;
  virtual void exitList_of_path_delay_expressions(VerilogParser::List_of_path_delay_expressionsContext *ctx) = 0;

  virtual void enterT_path_delay_expression(VerilogParser::T_path_delay_expressionContext *ctx) = 0;
  virtual void exitT_path_delay_expression(VerilogParser::T_path_delay_expressionContext *ctx) = 0;

  virtual void enterTrise_path_delay_expression(VerilogParser::Trise_path_delay_expressionContext *ctx) = 0;
  virtual void exitTrise_path_delay_expression(VerilogParser::Trise_path_delay_expressionContext *ctx) = 0;

  virtual void enterTfall_path_delay_expression(VerilogParser::Tfall_path_delay_expressionContext *ctx) = 0;
  virtual void exitTfall_path_delay_expression(VerilogParser::Tfall_path_delay_expressionContext *ctx) = 0;

  virtual void enterTz_path_delay_expression(VerilogParser::Tz_path_delay_expressionContext *ctx) = 0;
  virtual void exitTz_path_delay_expression(VerilogParser::Tz_path_delay_expressionContext *ctx) = 0;

  virtual void enterT01_path_delay_expression(VerilogParser::T01_path_delay_expressionContext *ctx) = 0;
  virtual void exitT01_path_delay_expression(VerilogParser::T01_path_delay_expressionContext *ctx) = 0;

  virtual void enterT10_path_delay_expression(VerilogParser::T10_path_delay_expressionContext *ctx) = 0;
  virtual void exitT10_path_delay_expression(VerilogParser::T10_path_delay_expressionContext *ctx) = 0;

  virtual void enterT0z_path_delay_expression(VerilogParser::T0z_path_delay_expressionContext *ctx) = 0;
  virtual void exitT0z_path_delay_expression(VerilogParser::T0z_path_delay_expressionContext *ctx) = 0;

  virtual void enterTz1_path_delay_expression(VerilogParser::Tz1_path_delay_expressionContext *ctx) = 0;
  virtual void exitTz1_path_delay_expression(VerilogParser::Tz1_path_delay_expressionContext *ctx) = 0;

  virtual void enterT1z_path_delay_expression(VerilogParser::T1z_path_delay_expressionContext *ctx) = 0;
  virtual void exitT1z_path_delay_expression(VerilogParser::T1z_path_delay_expressionContext *ctx) = 0;

  virtual void enterTz0_path_delay_expression(VerilogParser::Tz0_path_delay_expressionContext *ctx) = 0;
  virtual void exitTz0_path_delay_expression(VerilogParser::Tz0_path_delay_expressionContext *ctx) = 0;

  virtual void enterT0x_path_delay_expression(VerilogParser::T0x_path_delay_expressionContext *ctx) = 0;
  virtual void exitT0x_path_delay_expression(VerilogParser::T0x_path_delay_expressionContext *ctx) = 0;

  virtual void enterTx1_path_delay_expression(VerilogParser::Tx1_path_delay_expressionContext *ctx) = 0;
  virtual void exitTx1_path_delay_expression(VerilogParser::Tx1_path_delay_expressionContext *ctx) = 0;

  virtual void enterT1x_path_delay_expression(VerilogParser::T1x_path_delay_expressionContext *ctx) = 0;
  virtual void exitT1x_path_delay_expression(VerilogParser::T1x_path_delay_expressionContext *ctx) = 0;

  virtual void enterTx0_path_delay_expression(VerilogParser::Tx0_path_delay_expressionContext *ctx) = 0;
  virtual void exitTx0_path_delay_expression(VerilogParser::Tx0_path_delay_expressionContext *ctx) = 0;

  virtual void enterTxz_path_delay_expression(VerilogParser::Txz_path_delay_expressionContext *ctx) = 0;
  virtual void exitTxz_path_delay_expression(VerilogParser::Txz_path_delay_expressionContext *ctx) = 0;

  virtual void enterTzx_path_delay_expression(VerilogParser::Tzx_path_delay_expressionContext *ctx) = 0;
  virtual void exitTzx_path_delay_expression(VerilogParser::Tzx_path_delay_expressionContext *ctx) = 0;

  virtual void enterPath_delay_expression(VerilogParser::Path_delay_expressionContext *ctx) = 0;
  virtual void exitPath_delay_expression(VerilogParser::Path_delay_expressionContext *ctx) = 0;

  virtual void enterEdge_sensitive_path_declaration(VerilogParser::Edge_sensitive_path_declarationContext *ctx) = 0;
  virtual void exitEdge_sensitive_path_declaration(VerilogParser::Edge_sensitive_path_declarationContext *ctx) = 0;

  virtual void enterParallel_edge_sensitive_path_description(VerilogParser::Parallel_edge_sensitive_path_descriptionContext *ctx) = 0;
  virtual void exitParallel_edge_sensitive_path_description(VerilogParser::Parallel_edge_sensitive_path_descriptionContext *ctx) = 0;

  virtual void enterFull_edge_sensitive_path_description(VerilogParser::Full_edge_sensitive_path_descriptionContext *ctx) = 0;
  virtual void exitFull_edge_sensitive_path_description(VerilogParser::Full_edge_sensitive_path_descriptionContext *ctx) = 0;

  virtual void enterData_source_expression(VerilogParser::Data_source_expressionContext *ctx) = 0;
  virtual void exitData_source_expression(VerilogParser::Data_source_expressionContext *ctx) = 0;

  virtual void enterEdge_identifier(VerilogParser::Edge_identifierContext *ctx) = 0;
  virtual void exitEdge_identifier(VerilogParser::Edge_identifierContext *ctx) = 0;

  virtual void enterState_dependent_path_declaration(VerilogParser::State_dependent_path_declarationContext *ctx) = 0;
  virtual void exitState_dependent_path_declaration(VerilogParser::State_dependent_path_declarationContext *ctx) = 0;

  virtual void enterPolarity_operator(VerilogParser::Polarity_operatorContext *ctx) = 0;
  virtual void exitPolarity_operator(VerilogParser::Polarity_operatorContext *ctx) = 0;

  virtual void enterSystem_timing_check(VerilogParser::System_timing_checkContext *ctx) = 0;
  virtual void exitSystem_timing_check(VerilogParser::System_timing_checkContext *ctx) = 0;

  virtual void enterSetup_timing_check(VerilogParser::Setup_timing_checkContext *ctx) = 0;
  virtual void exitSetup_timing_check(VerilogParser::Setup_timing_checkContext *ctx) = 0;

  virtual void enterNotifier_opt(VerilogParser::Notifier_optContext *ctx) = 0;
  virtual void exitNotifier_opt(VerilogParser::Notifier_optContext *ctx) = 0;

  virtual void enterHold_timing_check(VerilogParser::Hold_timing_checkContext *ctx) = 0;
  virtual void exitHold_timing_check(VerilogParser::Hold_timing_checkContext *ctx) = 0;

  virtual void enterSetuphold_timing_check(VerilogParser::Setuphold_timing_checkContext *ctx) = 0;
  virtual void exitSetuphold_timing_check(VerilogParser::Setuphold_timing_checkContext *ctx) = 0;

  virtual void enterTiming_check_opt(VerilogParser::Timing_check_optContext *ctx) = 0;
  virtual void exitTiming_check_opt(VerilogParser::Timing_check_optContext *ctx) = 0;

  virtual void enterStamptime_cond_opt(VerilogParser::Stamptime_cond_optContext *ctx) = 0;
  virtual void exitStamptime_cond_opt(VerilogParser::Stamptime_cond_optContext *ctx) = 0;

  virtual void enterChecktime_cond_opt(VerilogParser::Checktime_cond_optContext *ctx) = 0;
  virtual void exitChecktime_cond_opt(VerilogParser::Checktime_cond_optContext *ctx) = 0;

  virtual void enterDelayed_ref_opt(VerilogParser::Delayed_ref_optContext *ctx) = 0;
  virtual void exitDelayed_ref_opt(VerilogParser::Delayed_ref_optContext *ctx) = 0;

  virtual void enterDelayed_data_opt(VerilogParser::Delayed_data_optContext *ctx) = 0;
  virtual void exitDelayed_data_opt(VerilogParser::Delayed_data_optContext *ctx) = 0;

  virtual void enterRecovery_timing_check(VerilogParser::Recovery_timing_checkContext *ctx) = 0;
  virtual void exitRecovery_timing_check(VerilogParser::Recovery_timing_checkContext *ctx) = 0;

  virtual void enterRemoval_timing_check(VerilogParser::Removal_timing_checkContext *ctx) = 0;
  virtual void exitRemoval_timing_check(VerilogParser::Removal_timing_checkContext *ctx) = 0;

  virtual void enterRecrem_timing_check(VerilogParser::Recrem_timing_checkContext *ctx) = 0;
  virtual void exitRecrem_timing_check(VerilogParser::Recrem_timing_checkContext *ctx) = 0;

  virtual void enterSkew_timing_check(VerilogParser::Skew_timing_checkContext *ctx) = 0;
  virtual void exitSkew_timing_check(VerilogParser::Skew_timing_checkContext *ctx) = 0;

  virtual void enterTimeskew_timing_check(VerilogParser::Timeskew_timing_checkContext *ctx) = 0;
  virtual void exitTimeskew_timing_check(VerilogParser::Timeskew_timing_checkContext *ctx) = 0;

  virtual void enterSkew_timing_check_opt(VerilogParser::Skew_timing_check_optContext *ctx) = 0;
  virtual void exitSkew_timing_check_opt(VerilogParser::Skew_timing_check_optContext *ctx) = 0;

  virtual void enterEvent_based_flag_opt(VerilogParser::Event_based_flag_optContext *ctx) = 0;
  virtual void exitEvent_based_flag_opt(VerilogParser::Event_based_flag_optContext *ctx) = 0;

  virtual void enterRemain_active_flag_opt(VerilogParser::Remain_active_flag_optContext *ctx) = 0;
  virtual void exitRemain_active_flag_opt(VerilogParser::Remain_active_flag_optContext *ctx) = 0;

  virtual void enterFullskew_timing_check(VerilogParser::Fullskew_timing_checkContext *ctx) = 0;
  virtual void exitFullskew_timing_check(VerilogParser::Fullskew_timing_checkContext *ctx) = 0;

  virtual void enterPeriod_timing_check(VerilogParser::Period_timing_checkContext *ctx) = 0;
  virtual void exitPeriod_timing_check(VerilogParser::Period_timing_checkContext *ctx) = 0;

  virtual void enterWidth_timing_check(VerilogParser::Width_timing_checkContext *ctx) = 0;
  virtual void exitWidth_timing_check(VerilogParser::Width_timing_checkContext *ctx) = 0;

  virtual void enterThreshold_opt(VerilogParser::Threshold_optContext *ctx) = 0;
  virtual void exitThreshold_opt(VerilogParser::Threshold_optContext *ctx) = 0;

  virtual void enterNochange_timing_check(VerilogParser::Nochange_timing_checkContext *ctx) = 0;
  virtual void exitNochange_timing_check(VerilogParser::Nochange_timing_checkContext *ctx) = 0;

  virtual void enterChecktime_condition(VerilogParser::Checktime_conditionContext *ctx) = 0;
  virtual void exitChecktime_condition(VerilogParser::Checktime_conditionContext *ctx) = 0;

  virtual void enterControlled_reference_event(VerilogParser::Controlled_reference_eventContext *ctx) = 0;
  virtual void exitControlled_reference_event(VerilogParser::Controlled_reference_eventContext *ctx) = 0;

  virtual void enterData_event(VerilogParser::Data_eventContext *ctx) = 0;
  virtual void exitData_event(VerilogParser::Data_eventContext *ctx) = 0;

  virtual void enterDelayed_data(VerilogParser::Delayed_dataContext *ctx) = 0;
  virtual void exitDelayed_data(VerilogParser::Delayed_dataContext *ctx) = 0;

  virtual void enterDelayed_reference(VerilogParser::Delayed_referenceContext *ctx) = 0;
  virtual void exitDelayed_reference(VerilogParser::Delayed_referenceContext *ctx) = 0;

  virtual void enterEnd_edge_offset(VerilogParser::End_edge_offsetContext *ctx) = 0;
  virtual void exitEnd_edge_offset(VerilogParser::End_edge_offsetContext *ctx) = 0;

  virtual void enterEvent_based_flag(VerilogParser::Event_based_flagContext *ctx) = 0;
  virtual void exitEvent_based_flag(VerilogParser::Event_based_flagContext *ctx) = 0;

  virtual void enterNotifier(VerilogParser::NotifierContext *ctx) = 0;
  virtual void exitNotifier(VerilogParser::NotifierContext *ctx) = 0;

  virtual void enterReference_event(VerilogParser::Reference_eventContext *ctx) = 0;
  virtual void exitReference_event(VerilogParser::Reference_eventContext *ctx) = 0;

  virtual void enterRemain_active_flag(VerilogParser::Remain_active_flagContext *ctx) = 0;
  virtual void exitRemain_active_flag(VerilogParser::Remain_active_flagContext *ctx) = 0;

  virtual void enterStamptime_condition(VerilogParser::Stamptime_conditionContext *ctx) = 0;
  virtual void exitStamptime_condition(VerilogParser::Stamptime_conditionContext *ctx) = 0;

  virtual void enterStart_edge_offset(VerilogParser::Start_edge_offsetContext *ctx) = 0;
  virtual void exitStart_edge_offset(VerilogParser::Start_edge_offsetContext *ctx) = 0;

  virtual void enterThreshold(VerilogParser::ThresholdContext *ctx) = 0;
  virtual void exitThreshold(VerilogParser::ThresholdContext *ctx) = 0;

  virtual void enterTiming_check_limit(VerilogParser::Timing_check_limitContext *ctx) = 0;
  virtual void exitTiming_check_limit(VerilogParser::Timing_check_limitContext *ctx) = 0;

  virtual void enterTiming_check_event(VerilogParser::Timing_check_eventContext *ctx) = 0;
  virtual void exitTiming_check_event(VerilogParser::Timing_check_eventContext *ctx) = 0;

  virtual void enterControlled_timing_check_event(VerilogParser::Controlled_timing_check_eventContext *ctx) = 0;
  virtual void exitControlled_timing_check_event(VerilogParser::Controlled_timing_check_eventContext *ctx) = 0;

  virtual void enterTiming_check_event_control(VerilogParser::Timing_check_event_controlContext *ctx) = 0;
  virtual void exitTiming_check_event_control(VerilogParser::Timing_check_event_controlContext *ctx) = 0;

  virtual void enterSpecify_terminal_descriptor(VerilogParser::Specify_terminal_descriptorContext *ctx) = 0;
  virtual void exitSpecify_terminal_descriptor(VerilogParser::Specify_terminal_descriptorContext *ctx) = 0;

  virtual void enterEdge_control_specifier(VerilogParser::Edge_control_specifierContext *ctx) = 0;
  virtual void exitEdge_control_specifier(VerilogParser::Edge_control_specifierContext *ctx) = 0;

  virtual void enterEdge_descriptor(VerilogParser::Edge_descriptorContext *ctx) = 0;
  virtual void exitEdge_descriptor(VerilogParser::Edge_descriptorContext *ctx) = 0;

  virtual void enterTiming_check_condition(VerilogParser::Timing_check_conditionContext *ctx) = 0;
  virtual void exitTiming_check_condition(VerilogParser::Timing_check_conditionContext *ctx) = 0;

  virtual void enterScalar_timing_check_condition(VerilogParser::Scalar_timing_check_conditionContext *ctx) = 0;
  virtual void exitScalar_timing_check_condition(VerilogParser::Scalar_timing_check_conditionContext *ctx) = 0;

  virtual void enterScalar_constant(VerilogParser::Scalar_constantContext *ctx) = 0;
  virtual void exitScalar_constant(VerilogParser::Scalar_constantContext *ctx) = 0;

  virtual void enterConcatenation(VerilogParser::ConcatenationContext *ctx) = 0;
  virtual void exitConcatenation(VerilogParser::ConcatenationContext *ctx) = 0;

  virtual void enterConstant_concatenation(VerilogParser::Constant_concatenationContext *ctx) = 0;
  virtual void exitConstant_concatenation(VerilogParser::Constant_concatenationContext *ctx) = 0;

  virtual void enterConstant_multiple_concatenation(VerilogParser::Constant_multiple_concatenationContext *ctx) = 0;
  virtual void exitConstant_multiple_concatenation(VerilogParser::Constant_multiple_concatenationContext *ctx) = 0;

  virtual void enterModule_path_concatenation(VerilogParser::Module_path_concatenationContext *ctx) = 0;
  virtual void exitModule_path_concatenation(VerilogParser::Module_path_concatenationContext *ctx) = 0;

  virtual void enterModule_path_multiple_concatenation(VerilogParser::Module_path_multiple_concatenationContext *ctx) = 0;
  virtual void exitModule_path_multiple_concatenation(VerilogParser::Module_path_multiple_concatenationContext *ctx) = 0;

  virtual void enterMultiple_concatenation(VerilogParser::Multiple_concatenationContext *ctx) = 0;
  virtual void exitMultiple_concatenation(VerilogParser::Multiple_concatenationContext *ctx) = 0;

  virtual void enterConstant_function_call(VerilogParser::Constant_function_callContext *ctx) = 0;
  virtual void exitConstant_function_call(VerilogParser::Constant_function_callContext *ctx) = 0;

  virtual void enterConstant_system_function_call(VerilogParser::Constant_system_function_callContext *ctx) = 0;
  virtual void exitConstant_system_function_call(VerilogParser::Constant_system_function_callContext *ctx) = 0;

  virtual void enterFunction_call(VerilogParser::Function_callContext *ctx) = 0;
  virtual void exitFunction_call(VerilogParser::Function_callContext *ctx) = 0;

  virtual void enterSystem_function_call(VerilogParser::System_function_callContext *ctx) = 0;
  virtual void exitSystem_function_call(VerilogParser::System_function_callContext *ctx) = 0;

  virtual void enterSys_func_call_port_list(VerilogParser::Sys_func_call_port_listContext *ctx) = 0;
  virtual void exitSys_func_call_port_list(VerilogParser::Sys_func_call_port_listContext *ctx) = 0;

  virtual void enterBase_expression(VerilogParser::Base_expressionContext *ctx) = 0;
  virtual void exitBase_expression(VerilogParser::Base_expressionContext *ctx) = 0;

  virtual void enterConstant_base_expression(VerilogParser::Constant_base_expressionContext *ctx) = 0;
  virtual void exitConstant_base_expression(VerilogParser::Constant_base_expressionContext *ctx) = 0;

  virtual void enterConstant_expression(VerilogParser::Constant_expressionContext *ctx) = 0;
  virtual void exitConstant_expression(VerilogParser::Constant_expressionContext *ctx) = 0;

  virtual void enterConstant_mintypmax_expression(VerilogParser::Constant_mintypmax_expressionContext *ctx) = 0;
  virtual void exitConstant_mintypmax_expression(VerilogParser::Constant_mintypmax_expressionContext *ctx) = 0;

  virtual void enterConstant_range_expression(VerilogParser::Constant_range_expressionContext *ctx) = 0;
  virtual void exitConstant_range_expression(VerilogParser::Constant_range_expressionContext *ctx) = 0;

  virtual void enterDimension_constant_expression(VerilogParser::Dimension_constant_expressionContext *ctx) = 0;
  virtual void exitDimension_constant_expression(VerilogParser::Dimension_constant_expressionContext *ctx) = 0;

  virtual void enterExpression(VerilogParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(VerilogParser::ExpressionContext *ctx) = 0;

  virtual void enterLsb_constant_expression(VerilogParser::Lsb_constant_expressionContext *ctx) = 0;
  virtual void exitLsb_constant_expression(VerilogParser::Lsb_constant_expressionContext *ctx) = 0;

  virtual void enterMintypmax_expression(VerilogParser::Mintypmax_expressionContext *ctx) = 0;
  virtual void exitMintypmax_expression(VerilogParser::Mintypmax_expressionContext *ctx) = 0;

  virtual void enterModule_path_expression(VerilogParser::Module_path_expressionContext *ctx) = 0;
  virtual void exitModule_path_expression(VerilogParser::Module_path_expressionContext *ctx) = 0;

  virtual void enterModule_path_mintypmax_expression(VerilogParser::Module_path_mintypmax_expressionContext *ctx) = 0;
  virtual void exitModule_path_mintypmax_expression(VerilogParser::Module_path_mintypmax_expressionContext *ctx) = 0;

  virtual void enterMsb_constant_expression(VerilogParser::Msb_constant_expressionContext *ctx) = 0;
  virtual void exitMsb_constant_expression(VerilogParser::Msb_constant_expressionContext *ctx) = 0;

  virtual void enterRange_expression(VerilogParser::Range_expressionContext *ctx) = 0;
  virtual void exitRange_expression(VerilogParser::Range_expressionContext *ctx) = 0;

  virtual void enterWidth_constant_expression(VerilogParser::Width_constant_expressionContext *ctx) = 0;
  virtual void exitWidth_constant_expression(VerilogParser::Width_constant_expressionContext *ctx) = 0;

  virtual void enterConstant_primary(VerilogParser::Constant_primaryContext *ctx) = 0;
  virtual void exitConstant_primary(VerilogParser::Constant_primaryContext *ctx) = 0;

  virtual void enterModule_path_primary(VerilogParser::Module_path_primaryContext *ctx) = 0;
  virtual void exitModule_path_primary(VerilogParser::Module_path_primaryContext *ctx) = 0;

  virtual void enterPrimary(VerilogParser::PrimaryContext *ctx) = 0;
  virtual void exitPrimary(VerilogParser::PrimaryContext *ctx) = 0;

  virtual void enterSelect_(VerilogParser::Select_Context *ctx) = 0;
  virtual void exitSelect_(VerilogParser::Select_Context *ctx) = 0;

  virtual void enterBit_select(VerilogParser::Bit_selectContext *ctx) = 0;
  virtual void exitBit_select(VerilogParser::Bit_selectContext *ctx) = 0;

  virtual void enterNet_lvalue(VerilogParser::Net_lvalueContext *ctx) = 0;
  virtual void exitNet_lvalue(VerilogParser::Net_lvalueContext *ctx) = 0;

  virtual void enterConst_select(VerilogParser::Const_selectContext *ctx) = 0;
  virtual void exitConst_select(VerilogParser::Const_selectContext *ctx) = 0;

  virtual void enterConst_bit_select(VerilogParser::Const_bit_selectContext *ctx) = 0;
  virtual void exitConst_bit_select(VerilogParser::Const_bit_selectContext *ctx) = 0;

  virtual void enterVariable_lvalue(VerilogParser::Variable_lvalueContext *ctx) = 0;
  virtual void exitVariable_lvalue(VerilogParser::Variable_lvalueContext *ctx) = 0;

  virtual void enterUnary_operator(VerilogParser::Unary_operatorContext *ctx) = 0;
  virtual void exitUnary_operator(VerilogParser::Unary_operatorContext *ctx) = 0;

  virtual void enterUnary_module_path_operator(VerilogParser::Unary_module_path_operatorContext *ctx) = 0;
  virtual void exitUnary_module_path_operator(VerilogParser::Unary_module_path_operatorContext *ctx) = 0;

  virtual void enterNumber(VerilogParser::NumberContext *ctx) = 0;
  virtual void exitNumber(VerilogParser::NumberContext *ctx) = 0;

  virtual void enterReal_number(VerilogParser::Real_numberContext *ctx) = 0;
  virtual void exitReal_number(VerilogParser::Real_numberContext *ctx) = 0;

  virtual void enterDecimal_number(VerilogParser::Decimal_numberContext *ctx) = 0;
  virtual void exitDecimal_number(VerilogParser::Decimal_numberContext *ctx) = 0;

  virtual void enterBinary_number(VerilogParser::Binary_numberContext *ctx) = 0;
  virtual void exitBinary_number(VerilogParser::Binary_numberContext *ctx) = 0;

  virtual void enterOctal_number(VerilogParser::Octal_numberContext *ctx) = 0;
  virtual void exitOctal_number(VerilogParser::Octal_numberContext *ctx) = 0;

  virtual void enterHex_number(VerilogParser::Hex_numberContext *ctx) = 0;
  virtual void exitHex_number(VerilogParser::Hex_numberContext *ctx) = 0;

  virtual void enterSize(VerilogParser::SizeContext *ctx) = 0;
  virtual void exitSize(VerilogParser::SizeContext *ctx) = 0;

  virtual void enterFixed_point_number(VerilogParser::Fixed_point_numberContext *ctx) = 0;
  virtual void exitFixed_point_number(VerilogParser::Fixed_point_numberContext *ctx) = 0;

  virtual void enterExponential_number(VerilogParser::Exponential_numberContext *ctx) = 0;
  virtual void exitExponential_number(VerilogParser::Exponential_numberContext *ctx) = 0;

  virtual void enterUnsigned_number(VerilogParser::Unsigned_numberContext *ctx) = 0;
  virtual void exitUnsigned_number(VerilogParser::Unsigned_numberContext *ctx) = 0;

  virtual void enterDecimal_value(VerilogParser::Decimal_valueContext *ctx) = 0;
  virtual void exitDecimal_value(VerilogParser::Decimal_valueContext *ctx) = 0;

  virtual void enterBinary_value(VerilogParser::Binary_valueContext *ctx) = 0;
  virtual void exitBinary_value(VerilogParser::Binary_valueContext *ctx) = 0;

  virtual void enterOctal_value(VerilogParser::Octal_valueContext *ctx) = 0;
  virtual void exitOctal_value(VerilogParser::Octal_valueContext *ctx) = 0;

  virtual void enterHex_value(VerilogParser::Hex_valueContext *ctx) = 0;
  virtual void exitHex_value(VerilogParser::Hex_valueContext *ctx) = 0;

  virtual void enterDecimal_base(VerilogParser::Decimal_baseContext *ctx) = 0;
  virtual void exitDecimal_base(VerilogParser::Decimal_baseContext *ctx) = 0;

  virtual void enterBinary_base(VerilogParser::Binary_baseContext *ctx) = 0;
  virtual void exitBinary_base(VerilogParser::Binary_baseContext *ctx) = 0;

  virtual void enterOctal_base(VerilogParser::Octal_baseContext *ctx) = 0;
  virtual void exitOctal_base(VerilogParser::Octal_baseContext *ctx) = 0;

  virtual void enterHex_base(VerilogParser::Hex_baseContext *ctx) = 0;
  virtual void exitHex_base(VerilogParser::Hex_baseContext *ctx) = 0;

  virtual void enterString_(VerilogParser::String_Context *ctx) = 0;
  virtual void exitString_(VerilogParser::String_Context *ctx) = 0;

  virtual void enterAttribute_instance(VerilogParser::Attribute_instanceContext *ctx) = 0;
  virtual void exitAttribute_instance(VerilogParser::Attribute_instanceContext *ctx) = 0;

  virtual void enterAttr_spec(VerilogParser::Attr_specContext *ctx) = 0;
  virtual void exitAttr_spec(VerilogParser::Attr_specContext *ctx) = 0;

  virtual void enterAttr_name(VerilogParser::Attr_nameContext *ctx) = 0;
  virtual void exitAttr_name(VerilogParser::Attr_nameContext *ctx) = 0;

  virtual void enterBlock_identifier(VerilogParser::Block_identifierContext *ctx) = 0;
  virtual void exitBlock_identifier(VerilogParser::Block_identifierContext *ctx) = 0;

  virtual void enterCell_identifier(VerilogParser::Cell_identifierContext *ctx) = 0;
  virtual void exitCell_identifier(VerilogParser::Cell_identifierContext *ctx) = 0;

  virtual void enterConfig_identifier(VerilogParser::Config_identifierContext *ctx) = 0;
  virtual void exitConfig_identifier(VerilogParser::Config_identifierContext *ctx) = 0;

  virtual void enterEscaped_identifier(VerilogParser::Escaped_identifierContext *ctx) = 0;
  virtual void exitEscaped_identifier(VerilogParser::Escaped_identifierContext *ctx) = 0;

  virtual void enterEvent_identifier(VerilogParser::Event_identifierContext *ctx) = 0;
  virtual void exitEvent_identifier(VerilogParser::Event_identifierContext *ctx) = 0;

  virtual void enterFunction_identifier(VerilogParser::Function_identifierContext *ctx) = 0;
  virtual void exitFunction_identifier(VerilogParser::Function_identifierContext *ctx) = 0;

  virtual void enterGate_instance_identifier(VerilogParser::Gate_instance_identifierContext *ctx) = 0;
  virtual void exitGate_instance_identifier(VerilogParser::Gate_instance_identifierContext *ctx) = 0;

  virtual void enterGenerate_block_identifier(VerilogParser::Generate_block_identifierContext *ctx) = 0;
  virtual void exitGenerate_block_identifier(VerilogParser::Generate_block_identifierContext *ctx) = 0;

  virtual void enterGenvar_identifier(VerilogParser::Genvar_identifierContext *ctx) = 0;
  virtual void exitGenvar_identifier(VerilogParser::Genvar_identifierContext *ctx) = 0;

  virtual void enterHierarchical_identifier(VerilogParser::Hierarchical_identifierContext *ctx) = 0;
  virtual void exitHierarchical_identifier(VerilogParser::Hierarchical_identifierContext *ctx) = 0;

  virtual void enterHier_ref(VerilogParser::Hier_refContext *ctx) = 0;
  virtual void exitHier_ref(VerilogParser::Hier_refContext *ctx) = 0;

  virtual void enterIdentifier(VerilogParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(VerilogParser::IdentifierContext *ctx) = 0;

  virtual void enterInput_port_identifier(VerilogParser::Input_port_identifierContext *ctx) = 0;
  virtual void exitInput_port_identifier(VerilogParser::Input_port_identifierContext *ctx) = 0;

  virtual void enterInstance_identifier(VerilogParser::Instance_identifierContext *ctx) = 0;
  virtual void exitInstance_identifier(VerilogParser::Instance_identifierContext *ctx) = 0;

  virtual void enterLibrary_identifier(VerilogParser::Library_identifierContext *ctx) = 0;
  virtual void exitLibrary_identifier(VerilogParser::Library_identifierContext *ctx) = 0;

  virtual void enterModule_identifier(VerilogParser::Module_identifierContext *ctx) = 0;
  virtual void exitModule_identifier(VerilogParser::Module_identifierContext *ctx) = 0;

  virtual void enterModule_instance_identifier(VerilogParser::Module_instance_identifierContext *ctx) = 0;
  virtual void exitModule_instance_identifier(VerilogParser::Module_instance_identifierContext *ctx) = 0;

  virtual void enterNet_identifier(VerilogParser::Net_identifierContext *ctx) = 0;
  virtual void exitNet_identifier(VerilogParser::Net_identifierContext *ctx) = 0;

  virtual void enterOutput_port_identifier(VerilogParser::Output_port_identifierContext *ctx) = 0;
  virtual void exitOutput_port_identifier(VerilogParser::Output_port_identifierContext *ctx) = 0;

  virtual void enterParameter_identifier(VerilogParser::Parameter_identifierContext *ctx) = 0;
  virtual void exitParameter_identifier(VerilogParser::Parameter_identifierContext *ctx) = 0;

  virtual void enterPort_identifier(VerilogParser::Port_identifierContext *ctx) = 0;
  virtual void exitPort_identifier(VerilogParser::Port_identifierContext *ctx) = 0;

  virtual void enterReal_identifier(VerilogParser::Real_identifierContext *ctx) = 0;
  virtual void exitReal_identifier(VerilogParser::Real_identifierContext *ctx) = 0;

  virtual void enterSimple_identifier(VerilogParser::Simple_identifierContext *ctx) = 0;
  virtual void exitSimple_identifier(VerilogParser::Simple_identifierContext *ctx) = 0;

  virtual void enterSpecparam_identifier(VerilogParser::Specparam_identifierContext *ctx) = 0;
  virtual void exitSpecparam_identifier(VerilogParser::Specparam_identifierContext *ctx) = 0;

  virtual void enterSystem_function_identifier(VerilogParser::System_function_identifierContext *ctx) = 0;
  virtual void exitSystem_function_identifier(VerilogParser::System_function_identifierContext *ctx) = 0;

  virtual void enterSystem_task_identifier(VerilogParser::System_task_identifierContext *ctx) = 0;
  virtual void exitSystem_task_identifier(VerilogParser::System_task_identifierContext *ctx) = 0;

  virtual void enterTask_identifier(VerilogParser::Task_identifierContext *ctx) = 0;
  virtual void exitTask_identifier(VerilogParser::Task_identifierContext *ctx) = 0;

  virtual void enterTerminal_identifier(VerilogParser::Terminal_identifierContext *ctx) = 0;
  virtual void exitTerminal_identifier(VerilogParser::Terminal_identifierContext *ctx) = 0;

  virtual void enterTopmodule_identifier(VerilogParser::Topmodule_identifierContext *ctx) = 0;
  virtual void exitTopmodule_identifier(VerilogParser::Topmodule_identifierContext *ctx) = 0;

  virtual void enterUdp_identifier(VerilogParser::Udp_identifierContext *ctx) = 0;
  virtual void exitUdp_identifier(VerilogParser::Udp_identifierContext *ctx) = 0;

  virtual void enterUdp_instance_identifier(VerilogParser::Udp_instance_identifierContext *ctx) = 0;
  virtual void exitUdp_instance_identifier(VerilogParser::Udp_instance_identifierContext *ctx) = 0;

  virtual void enterVariable_identifier(VerilogParser::Variable_identifierContext *ctx) = 0;
  virtual void exitVariable_identifier(VerilogParser::Variable_identifierContext *ctx) = 0;


};

