
// Generated from VerilogParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "VerilogParserListener.h"


/**
 * This class provides an empty implementation of VerilogParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  VerilogParserBaseListener : public VerilogParserListener {
public:

  virtual void enterLibrary_text(VerilogParser::Library_textContext * /*ctx*/) override { }
  virtual void exitLibrary_text(VerilogParser::Library_textContext * /*ctx*/) override { }

  virtual void enterLibrary_description(VerilogParser::Library_descriptionContext * /*ctx*/) override { }
  virtual void exitLibrary_description(VerilogParser::Library_descriptionContext * /*ctx*/) override { }

  virtual void enterLibrary_declaration(VerilogParser::Library_declarationContext * /*ctx*/) override { }
  virtual void exitLibrary_declaration(VerilogParser::Library_declarationContext * /*ctx*/) override { }

  virtual void enterLibrary_incdir(VerilogParser::Library_incdirContext * /*ctx*/) override { }
  virtual void exitLibrary_incdir(VerilogParser::Library_incdirContext * /*ctx*/) override { }

  virtual void enterInclude_statement(VerilogParser::Include_statementContext * /*ctx*/) override { }
  virtual void exitInclude_statement(VerilogParser::Include_statementContext * /*ctx*/) override { }

  virtual void enterFile_path_spec(VerilogParser::File_path_specContext * /*ctx*/) override { }
  virtual void exitFile_path_spec(VerilogParser::File_path_specContext * /*ctx*/) override { }

  virtual void enterSource_text(VerilogParser::Source_textContext * /*ctx*/) override { }
  virtual void exitSource_text(VerilogParser::Source_textContext * /*ctx*/) override { }

  virtual void enterDescription(VerilogParser::DescriptionContext * /*ctx*/) override { }
  virtual void exitDescription(VerilogParser::DescriptionContext * /*ctx*/) override { }

  virtual void enterModule_declaration(VerilogParser::Module_declarationContext * /*ctx*/) override { }
  virtual void exitModule_declaration(VerilogParser::Module_declarationContext * /*ctx*/) override { }

  virtual void enterModule_keyword(VerilogParser::Module_keywordContext * /*ctx*/) override { }
  virtual void exitModule_keyword(VerilogParser::Module_keywordContext * /*ctx*/) override { }

  virtual void enterModule_parameter_port_list(VerilogParser::Module_parameter_port_listContext * /*ctx*/) override { }
  virtual void exitModule_parameter_port_list(VerilogParser::Module_parameter_port_listContext * /*ctx*/) override { }

  virtual void enterList_of_port_declarations(VerilogParser::List_of_port_declarationsContext * /*ctx*/) override { }
  virtual void exitList_of_port_declarations(VerilogParser::List_of_port_declarationsContext * /*ctx*/) override { }

  virtual void enterPort(VerilogParser::PortContext * /*ctx*/) override { }
  virtual void exitPort(VerilogParser::PortContext * /*ctx*/) override { }

  virtual void enterPort_implicit(VerilogParser::Port_implicitContext * /*ctx*/) override { }
  virtual void exitPort_implicit(VerilogParser::Port_implicitContext * /*ctx*/) override { }

  virtual void enterPort_explicit(VerilogParser::Port_explicitContext * /*ctx*/) override { }
  virtual void exitPort_explicit(VerilogParser::Port_explicitContext * /*ctx*/) override { }

  virtual void enterPort_expression(VerilogParser::Port_expressionContext * /*ctx*/) override { }
  virtual void exitPort_expression(VerilogParser::Port_expressionContext * /*ctx*/) override { }

  virtual void enterPort_reference(VerilogParser::Port_referenceContext * /*ctx*/) override { }
  virtual void exitPort_reference(VerilogParser::Port_referenceContext * /*ctx*/) override { }

  virtual void enterPort_declaration(VerilogParser::Port_declarationContext * /*ctx*/) override { }
  virtual void exitPort_declaration(VerilogParser::Port_declarationContext * /*ctx*/) override { }

  virtual void enterModule_item(VerilogParser::Module_itemContext * /*ctx*/) override { }
  virtual void exitModule_item(VerilogParser::Module_itemContext * /*ctx*/) override { }

  virtual void enterModule_or_generate_item(VerilogParser::Module_or_generate_itemContext * /*ctx*/) override { }
  virtual void exitModule_or_generate_item(VerilogParser::Module_or_generate_itemContext * /*ctx*/) override { }

  virtual void enterModule_or_generate_item_declaration(VerilogParser::Module_or_generate_item_declarationContext * /*ctx*/) override { }
  virtual void exitModule_or_generate_item_declaration(VerilogParser::Module_or_generate_item_declarationContext * /*ctx*/) override { }

  virtual void enterParameter_override(VerilogParser::Parameter_overrideContext * /*ctx*/) override { }
  virtual void exitParameter_override(VerilogParser::Parameter_overrideContext * /*ctx*/) override { }

  virtual void enterConfig_declaration(VerilogParser::Config_declarationContext * /*ctx*/) override { }
  virtual void exitConfig_declaration(VerilogParser::Config_declarationContext * /*ctx*/) override { }

  virtual void enterDesign_statement(VerilogParser::Design_statementContext * /*ctx*/) override { }
  virtual void exitDesign_statement(VerilogParser::Design_statementContext * /*ctx*/) override { }

  virtual void enterDesign_statement_item(VerilogParser::Design_statement_itemContext * /*ctx*/) override { }
  virtual void exitDesign_statement_item(VerilogParser::Design_statement_itemContext * /*ctx*/) override { }

  virtual void enterConfig_rule_statement(VerilogParser::Config_rule_statementContext * /*ctx*/) override { }
  virtual void exitConfig_rule_statement(VerilogParser::Config_rule_statementContext * /*ctx*/) override { }

  virtual void enterDefault_clause(VerilogParser::Default_clauseContext * /*ctx*/) override { }
  virtual void exitDefault_clause(VerilogParser::Default_clauseContext * /*ctx*/) override { }

  virtual void enterInst_clause(VerilogParser::Inst_clauseContext * /*ctx*/) override { }
  virtual void exitInst_clause(VerilogParser::Inst_clauseContext * /*ctx*/) override { }

  virtual void enterInst_name(VerilogParser::Inst_nameContext * /*ctx*/) override { }
  virtual void exitInst_name(VerilogParser::Inst_nameContext * /*ctx*/) override { }

  virtual void enterCell_clause(VerilogParser::Cell_clauseContext * /*ctx*/) override { }
  virtual void exitCell_clause(VerilogParser::Cell_clauseContext * /*ctx*/) override { }

  virtual void enterLiblist_clause(VerilogParser::Liblist_clauseContext * /*ctx*/) override { }
  virtual void exitLiblist_clause(VerilogParser::Liblist_clauseContext * /*ctx*/) override { }

  virtual void enterUse_clause(VerilogParser::Use_clauseContext * /*ctx*/) override { }
  virtual void exitUse_clause(VerilogParser::Use_clauseContext * /*ctx*/) override { }

  virtual void enterLocal_parameter_declaration(VerilogParser::Local_parameter_declarationContext * /*ctx*/) override { }
  virtual void exitLocal_parameter_declaration(VerilogParser::Local_parameter_declarationContext * /*ctx*/) override { }

  virtual void enterParameter_declaration(VerilogParser::Parameter_declarationContext * /*ctx*/) override { }
  virtual void exitParameter_declaration(VerilogParser::Parameter_declarationContext * /*ctx*/) override { }

  virtual void enterSpecparam_declaration(VerilogParser::Specparam_declarationContext * /*ctx*/) override { }
  virtual void exitSpecparam_declaration(VerilogParser::Specparam_declarationContext * /*ctx*/) override { }

  virtual void enterParameter_type(VerilogParser::Parameter_typeContext * /*ctx*/) override { }
  virtual void exitParameter_type(VerilogParser::Parameter_typeContext * /*ctx*/) override { }

  virtual void enterInout_declaration(VerilogParser::Inout_declarationContext * /*ctx*/) override { }
  virtual void exitInout_declaration(VerilogParser::Inout_declarationContext * /*ctx*/) override { }

  virtual void enterInput_declaration(VerilogParser::Input_declarationContext * /*ctx*/) override { }
  virtual void exitInput_declaration(VerilogParser::Input_declarationContext * /*ctx*/) override { }

  virtual void enterOutput_declaration(VerilogParser::Output_declarationContext * /*ctx*/) override { }
  virtual void exitOutput_declaration(VerilogParser::Output_declarationContext * /*ctx*/) override { }

  virtual void enterEvent_declaration(VerilogParser::Event_declarationContext * /*ctx*/) override { }
  virtual void exitEvent_declaration(VerilogParser::Event_declarationContext * /*ctx*/) override { }

  virtual void enterInteger_declaration(VerilogParser::Integer_declarationContext * /*ctx*/) override { }
  virtual void exitInteger_declaration(VerilogParser::Integer_declarationContext * /*ctx*/) override { }

  virtual void enterNet_declaration(VerilogParser::Net_declarationContext * /*ctx*/) override { }
  virtual void exitNet_declaration(VerilogParser::Net_declarationContext * /*ctx*/) override { }

  virtual void enterReal_declaration(VerilogParser::Real_declarationContext * /*ctx*/) override { }
  virtual void exitReal_declaration(VerilogParser::Real_declarationContext * /*ctx*/) override { }

  virtual void enterRealtime_declaration(VerilogParser::Realtime_declarationContext * /*ctx*/) override { }
  virtual void exitRealtime_declaration(VerilogParser::Realtime_declarationContext * /*ctx*/) override { }

  virtual void enterReg_declaration(VerilogParser::Reg_declarationContext * /*ctx*/) override { }
  virtual void exitReg_declaration(VerilogParser::Reg_declarationContext * /*ctx*/) override { }

  virtual void enterTime_declaration(VerilogParser::Time_declarationContext * /*ctx*/) override { }
  virtual void exitTime_declaration(VerilogParser::Time_declarationContext * /*ctx*/) override { }

  virtual void enterNet_type(VerilogParser::Net_typeContext * /*ctx*/) override { }
  virtual void exitNet_type(VerilogParser::Net_typeContext * /*ctx*/) override { }

  virtual void enterOutput_variable_type(VerilogParser::Output_variable_typeContext * /*ctx*/) override { }
  virtual void exitOutput_variable_type(VerilogParser::Output_variable_typeContext * /*ctx*/) override { }

  virtual void enterReal_type(VerilogParser::Real_typeContext * /*ctx*/) override { }
  virtual void exitReal_type(VerilogParser::Real_typeContext * /*ctx*/) override { }

  virtual void enterVariable_type(VerilogParser::Variable_typeContext * /*ctx*/) override { }
  virtual void exitVariable_type(VerilogParser::Variable_typeContext * /*ctx*/) override { }

  virtual void enterDrive_strength(VerilogParser::Drive_strengthContext * /*ctx*/) override { }
  virtual void exitDrive_strength(VerilogParser::Drive_strengthContext * /*ctx*/) override { }

  virtual void enterStrength0(VerilogParser::Strength0Context * /*ctx*/) override { }
  virtual void exitStrength0(VerilogParser::Strength0Context * /*ctx*/) override { }

  virtual void enterStrength1(VerilogParser::Strength1Context * /*ctx*/) override { }
  virtual void exitStrength1(VerilogParser::Strength1Context * /*ctx*/) override { }

  virtual void enterCharge_strength(VerilogParser::Charge_strengthContext * /*ctx*/) override { }
  virtual void exitCharge_strength(VerilogParser::Charge_strengthContext * /*ctx*/) override { }

  virtual void enterDelay3(VerilogParser::Delay3Context * /*ctx*/) override { }
  virtual void exitDelay3(VerilogParser::Delay3Context * /*ctx*/) override { }

  virtual void enterDelay2(VerilogParser::Delay2Context * /*ctx*/) override { }
  virtual void exitDelay2(VerilogParser::Delay2Context * /*ctx*/) override { }

  virtual void enterDelay_value(VerilogParser::Delay_valueContext * /*ctx*/) override { }
  virtual void exitDelay_value(VerilogParser::Delay_valueContext * /*ctx*/) override { }

  virtual void enterList_of_defparam_assignments(VerilogParser::List_of_defparam_assignmentsContext * /*ctx*/) override { }
  virtual void exitList_of_defparam_assignments(VerilogParser::List_of_defparam_assignmentsContext * /*ctx*/) override { }

  virtual void enterList_of_event_identifiers(VerilogParser::List_of_event_identifiersContext * /*ctx*/) override { }
  virtual void exitList_of_event_identifiers(VerilogParser::List_of_event_identifiersContext * /*ctx*/) override { }

  virtual void enterEvent_id(VerilogParser::Event_idContext * /*ctx*/) override { }
  virtual void exitEvent_id(VerilogParser::Event_idContext * /*ctx*/) override { }

  virtual void enterList_of_net_decl_assignments(VerilogParser::List_of_net_decl_assignmentsContext * /*ctx*/) override { }
  virtual void exitList_of_net_decl_assignments(VerilogParser::List_of_net_decl_assignmentsContext * /*ctx*/) override { }

  virtual void enterList_of_net_identifiers(VerilogParser::List_of_net_identifiersContext * /*ctx*/) override { }
  virtual void exitList_of_net_identifiers(VerilogParser::List_of_net_identifiersContext * /*ctx*/) override { }

  virtual void enterNet_id(VerilogParser::Net_idContext * /*ctx*/) override { }
  virtual void exitNet_id(VerilogParser::Net_idContext * /*ctx*/) override { }

  virtual void enterList_of_param_assignments(VerilogParser::List_of_param_assignmentsContext * /*ctx*/) override { }
  virtual void exitList_of_param_assignments(VerilogParser::List_of_param_assignmentsContext * /*ctx*/) override { }

  virtual void enterList_of_port_identifiers(VerilogParser::List_of_port_identifiersContext * /*ctx*/) override { }
  virtual void exitList_of_port_identifiers(VerilogParser::List_of_port_identifiersContext * /*ctx*/) override { }

  virtual void enterList_of_real_identifiers(VerilogParser::List_of_real_identifiersContext * /*ctx*/) override { }
  virtual void exitList_of_real_identifiers(VerilogParser::List_of_real_identifiersContext * /*ctx*/) override { }

  virtual void enterList_of_specparam_assignments(VerilogParser::List_of_specparam_assignmentsContext * /*ctx*/) override { }
  virtual void exitList_of_specparam_assignments(VerilogParser::List_of_specparam_assignmentsContext * /*ctx*/) override { }

  virtual void enterList_of_variable_identifiers(VerilogParser::List_of_variable_identifiersContext * /*ctx*/) override { }
  virtual void exitList_of_variable_identifiers(VerilogParser::List_of_variable_identifiersContext * /*ctx*/) override { }

  virtual void enterList_of_variable_port_identifiers(VerilogParser::List_of_variable_port_identifiersContext * /*ctx*/) override { }
  virtual void exitList_of_variable_port_identifiers(VerilogParser::List_of_variable_port_identifiersContext * /*ctx*/) override { }

  virtual void enterVar_port_id(VerilogParser::Var_port_idContext * /*ctx*/) override { }
  virtual void exitVar_port_id(VerilogParser::Var_port_idContext * /*ctx*/) override { }

  virtual void enterDefparam_assignment(VerilogParser::Defparam_assignmentContext * /*ctx*/) override { }
  virtual void exitDefparam_assignment(VerilogParser::Defparam_assignmentContext * /*ctx*/) override { }

  virtual void enterNet_decl_assignment(VerilogParser::Net_decl_assignmentContext * /*ctx*/) override { }
  virtual void exitNet_decl_assignment(VerilogParser::Net_decl_assignmentContext * /*ctx*/) override { }

  virtual void enterParam_assignment(VerilogParser::Param_assignmentContext * /*ctx*/) override { }
  virtual void exitParam_assignment(VerilogParser::Param_assignmentContext * /*ctx*/) override { }

  virtual void enterSpecparam_assignment(VerilogParser::Specparam_assignmentContext * /*ctx*/) override { }
  virtual void exitSpecparam_assignment(VerilogParser::Specparam_assignmentContext * /*ctx*/) override { }

  virtual void enterPulse_control_specparam(VerilogParser::Pulse_control_specparamContext * /*ctx*/) override { }
  virtual void exitPulse_control_specparam(VerilogParser::Pulse_control_specparamContext * /*ctx*/) override { }

  virtual void enterError_limit_value(VerilogParser::Error_limit_valueContext * /*ctx*/) override { }
  virtual void exitError_limit_value(VerilogParser::Error_limit_valueContext * /*ctx*/) override { }

  virtual void enterReject_limit_value(VerilogParser::Reject_limit_valueContext * /*ctx*/) override { }
  virtual void exitReject_limit_value(VerilogParser::Reject_limit_valueContext * /*ctx*/) override { }

  virtual void enterLimit_value(VerilogParser::Limit_valueContext * /*ctx*/) override { }
  virtual void exitLimit_value(VerilogParser::Limit_valueContext * /*ctx*/) override { }

  virtual void enterDimension(VerilogParser::DimensionContext * /*ctx*/) override { }
  virtual void exitDimension(VerilogParser::DimensionContext * /*ctx*/) override { }

  virtual void enterRange_(VerilogParser::Range_Context * /*ctx*/) override { }
  virtual void exitRange_(VerilogParser::Range_Context * /*ctx*/) override { }

  virtual void enterFunction_declaration(VerilogParser::Function_declarationContext * /*ctx*/) override { }
  virtual void exitFunction_declaration(VerilogParser::Function_declarationContext * /*ctx*/) override { }

  virtual void enterFunction_item_declaration(VerilogParser::Function_item_declarationContext * /*ctx*/) override { }
  virtual void exitFunction_item_declaration(VerilogParser::Function_item_declarationContext * /*ctx*/) override { }

  virtual void enterFunction_port_list(VerilogParser::Function_port_listContext * /*ctx*/) override { }
  virtual void exitFunction_port_list(VerilogParser::Function_port_listContext * /*ctx*/) override { }

  virtual void enterFunc_port_item(VerilogParser::Func_port_itemContext * /*ctx*/) override { }
  virtual void exitFunc_port_item(VerilogParser::Func_port_itemContext * /*ctx*/) override { }

  virtual void enterFunction_range_or_type(VerilogParser::Function_range_or_typeContext * /*ctx*/) override { }
  virtual void exitFunction_range_or_type(VerilogParser::Function_range_or_typeContext * /*ctx*/) override { }

  virtual void enterTask_declaration(VerilogParser::Task_declarationContext * /*ctx*/) override { }
  virtual void exitTask_declaration(VerilogParser::Task_declarationContext * /*ctx*/) override { }

  virtual void enterTask_item_declaration(VerilogParser::Task_item_declarationContext * /*ctx*/) override { }
  virtual void exitTask_item_declaration(VerilogParser::Task_item_declarationContext * /*ctx*/) override { }

  virtual void enterTask_port_list(VerilogParser::Task_port_listContext * /*ctx*/) override { }
  virtual void exitTask_port_list(VerilogParser::Task_port_listContext * /*ctx*/) override { }

  virtual void enterTask_port_item(VerilogParser::Task_port_itemContext * /*ctx*/) override { }
  virtual void exitTask_port_item(VerilogParser::Task_port_itemContext * /*ctx*/) override { }

  virtual void enterTf_input_declaration(VerilogParser::Tf_input_declarationContext * /*ctx*/) override { }
  virtual void exitTf_input_declaration(VerilogParser::Tf_input_declarationContext * /*ctx*/) override { }

  virtual void enterTf_output_declaration(VerilogParser::Tf_output_declarationContext * /*ctx*/) override { }
  virtual void exitTf_output_declaration(VerilogParser::Tf_output_declarationContext * /*ctx*/) override { }

  virtual void enterTf_inout_declaration(VerilogParser::Tf_inout_declarationContext * /*ctx*/) override { }
  virtual void exitTf_inout_declaration(VerilogParser::Tf_inout_declarationContext * /*ctx*/) override { }

  virtual void enterTask_port_type(VerilogParser::Task_port_typeContext * /*ctx*/) override { }
  virtual void exitTask_port_type(VerilogParser::Task_port_typeContext * /*ctx*/) override { }

  virtual void enterBlock_item_declaration(VerilogParser::Block_item_declarationContext * /*ctx*/) override { }
  virtual void exitBlock_item_declaration(VerilogParser::Block_item_declarationContext * /*ctx*/) override { }

  virtual void enterList_of_block_variable_identifiers(VerilogParser::List_of_block_variable_identifiersContext * /*ctx*/) override { }
  virtual void exitList_of_block_variable_identifiers(VerilogParser::List_of_block_variable_identifiersContext * /*ctx*/) override { }

  virtual void enterList_of_block_real_identifiers(VerilogParser::List_of_block_real_identifiersContext * /*ctx*/) override { }
  virtual void exitList_of_block_real_identifiers(VerilogParser::List_of_block_real_identifiersContext * /*ctx*/) override { }

  virtual void enterBlock_variable_type(VerilogParser::Block_variable_typeContext * /*ctx*/) override { }
  virtual void exitBlock_variable_type(VerilogParser::Block_variable_typeContext * /*ctx*/) override { }

  virtual void enterBlock_real_type(VerilogParser::Block_real_typeContext * /*ctx*/) override { }
  virtual void exitBlock_real_type(VerilogParser::Block_real_typeContext * /*ctx*/) override { }

  virtual void enterGate_instantiation(VerilogParser::Gate_instantiationContext * /*ctx*/) override { }
  virtual void exitGate_instantiation(VerilogParser::Gate_instantiationContext * /*ctx*/) override { }

  virtual void enterCmos_switch_instance(VerilogParser::Cmos_switch_instanceContext * /*ctx*/) override { }
  virtual void exitCmos_switch_instance(VerilogParser::Cmos_switch_instanceContext * /*ctx*/) override { }

  virtual void enterEnable_gate_instance(VerilogParser::Enable_gate_instanceContext * /*ctx*/) override { }
  virtual void exitEnable_gate_instance(VerilogParser::Enable_gate_instanceContext * /*ctx*/) override { }

  virtual void enterMos_switch_instance(VerilogParser::Mos_switch_instanceContext * /*ctx*/) override { }
  virtual void exitMos_switch_instance(VerilogParser::Mos_switch_instanceContext * /*ctx*/) override { }

  virtual void enterN_input_gate_instance(VerilogParser::N_input_gate_instanceContext * /*ctx*/) override { }
  virtual void exitN_input_gate_instance(VerilogParser::N_input_gate_instanceContext * /*ctx*/) override { }

  virtual void enterN_output_gate_instance(VerilogParser::N_output_gate_instanceContext * /*ctx*/) override { }
  virtual void exitN_output_gate_instance(VerilogParser::N_output_gate_instanceContext * /*ctx*/) override { }

  virtual void enterPass_switch_instance(VerilogParser::Pass_switch_instanceContext * /*ctx*/) override { }
  virtual void exitPass_switch_instance(VerilogParser::Pass_switch_instanceContext * /*ctx*/) override { }

  virtual void enterPass_enable_switch_instance(VerilogParser::Pass_enable_switch_instanceContext * /*ctx*/) override { }
  virtual void exitPass_enable_switch_instance(VerilogParser::Pass_enable_switch_instanceContext * /*ctx*/) override { }

  virtual void enterPull_gate_instance(VerilogParser::Pull_gate_instanceContext * /*ctx*/) override { }
  virtual void exitPull_gate_instance(VerilogParser::Pull_gate_instanceContext * /*ctx*/) override { }

  virtual void enterName_of_gate_instance(VerilogParser::Name_of_gate_instanceContext * /*ctx*/) override { }
  virtual void exitName_of_gate_instance(VerilogParser::Name_of_gate_instanceContext * /*ctx*/) override { }

  virtual void enterPulldown_strength(VerilogParser::Pulldown_strengthContext * /*ctx*/) override { }
  virtual void exitPulldown_strength(VerilogParser::Pulldown_strengthContext * /*ctx*/) override { }

  virtual void enterPullup_strength(VerilogParser::Pullup_strengthContext * /*ctx*/) override { }
  virtual void exitPullup_strength(VerilogParser::Pullup_strengthContext * /*ctx*/) override { }

  virtual void enterEnable_terminal(VerilogParser::Enable_terminalContext * /*ctx*/) override { }
  virtual void exitEnable_terminal(VerilogParser::Enable_terminalContext * /*ctx*/) override { }

  virtual void enterInout_terminal(VerilogParser::Inout_terminalContext * /*ctx*/) override { }
  virtual void exitInout_terminal(VerilogParser::Inout_terminalContext * /*ctx*/) override { }

  virtual void enterInput_terminal(VerilogParser::Input_terminalContext * /*ctx*/) override { }
  virtual void exitInput_terminal(VerilogParser::Input_terminalContext * /*ctx*/) override { }

  virtual void enterNcontrol_terminal(VerilogParser::Ncontrol_terminalContext * /*ctx*/) override { }
  virtual void exitNcontrol_terminal(VerilogParser::Ncontrol_terminalContext * /*ctx*/) override { }

  virtual void enterOutput_terminal(VerilogParser::Output_terminalContext * /*ctx*/) override { }
  virtual void exitOutput_terminal(VerilogParser::Output_terminalContext * /*ctx*/) override { }

  virtual void enterPcontrol_terminal(VerilogParser::Pcontrol_terminalContext * /*ctx*/) override { }
  virtual void exitPcontrol_terminal(VerilogParser::Pcontrol_terminalContext * /*ctx*/) override { }

  virtual void enterCmos_switchtype(VerilogParser::Cmos_switchtypeContext * /*ctx*/) override { }
  virtual void exitCmos_switchtype(VerilogParser::Cmos_switchtypeContext * /*ctx*/) override { }

  virtual void enterEnable_gatetype(VerilogParser::Enable_gatetypeContext * /*ctx*/) override { }
  virtual void exitEnable_gatetype(VerilogParser::Enable_gatetypeContext * /*ctx*/) override { }

  virtual void enterMos_switchtype(VerilogParser::Mos_switchtypeContext * /*ctx*/) override { }
  virtual void exitMos_switchtype(VerilogParser::Mos_switchtypeContext * /*ctx*/) override { }

  virtual void enterN_input_gatetype(VerilogParser::N_input_gatetypeContext * /*ctx*/) override { }
  virtual void exitN_input_gatetype(VerilogParser::N_input_gatetypeContext * /*ctx*/) override { }

  virtual void enterN_output_gatetype(VerilogParser::N_output_gatetypeContext * /*ctx*/) override { }
  virtual void exitN_output_gatetype(VerilogParser::N_output_gatetypeContext * /*ctx*/) override { }

  virtual void enterPass_en_switchtype(VerilogParser::Pass_en_switchtypeContext * /*ctx*/) override { }
  virtual void exitPass_en_switchtype(VerilogParser::Pass_en_switchtypeContext * /*ctx*/) override { }

  virtual void enterPass_switchtype(VerilogParser::Pass_switchtypeContext * /*ctx*/) override { }
  virtual void exitPass_switchtype(VerilogParser::Pass_switchtypeContext * /*ctx*/) override { }

  virtual void enterModule_instantiation(VerilogParser::Module_instantiationContext * /*ctx*/) override { }
  virtual void exitModule_instantiation(VerilogParser::Module_instantiationContext * /*ctx*/) override { }

  virtual void enterParameter_value_assignment(VerilogParser::Parameter_value_assignmentContext * /*ctx*/) override { }
  virtual void exitParameter_value_assignment(VerilogParser::Parameter_value_assignmentContext * /*ctx*/) override { }

  virtual void enterList_of_parameter_assignments(VerilogParser::List_of_parameter_assignmentsContext * /*ctx*/) override { }
  virtual void exitList_of_parameter_assignments(VerilogParser::List_of_parameter_assignmentsContext * /*ctx*/) override { }

  virtual void enterOrdered_parameter_assignment(VerilogParser::Ordered_parameter_assignmentContext * /*ctx*/) override { }
  virtual void exitOrdered_parameter_assignment(VerilogParser::Ordered_parameter_assignmentContext * /*ctx*/) override { }

  virtual void enterNamed_parameter_assignment(VerilogParser::Named_parameter_assignmentContext * /*ctx*/) override { }
  virtual void exitNamed_parameter_assignment(VerilogParser::Named_parameter_assignmentContext * /*ctx*/) override { }

  virtual void enterModule_instance(VerilogParser::Module_instanceContext * /*ctx*/) override { }
  virtual void exitModule_instance(VerilogParser::Module_instanceContext * /*ctx*/) override { }

  virtual void enterName_of_module_instance(VerilogParser::Name_of_module_instanceContext * /*ctx*/) override { }
  virtual void exitName_of_module_instance(VerilogParser::Name_of_module_instanceContext * /*ctx*/) override { }

  virtual void enterList_of_port_connections(VerilogParser::List_of_port_connectionsContext * /*ctx*/) override { }
  virtual void exitList_of_port_connections(VerilogParser::List_of_port_connectionsContext * /*ctx*/) override { }

  virtual void enterOrdered_port_connection(VerilogParser::Ordered_port_connectionContext * /*ctx*/) override { }
  virtual void exitOrdered_port_connection(VerilogParser::Ordered_port_connectionContext * /*ctx*/) override { }

  virtual void enterNamed_port_connection(VerilogParser::Named_port_connectionContext * /*ctx*/) override { }
  virtual void exitNamed_port_connection(VerilogParser::Named_port_connectionContext * /*ctx*/) override { }

  virtual void enterGenerate_region(VerilogParser::Generate_regionContext * /*ctx*/) override { }
  virtual void exitGenerate_region(VerilogParser::Generate_regionContext * /*ctx*/) override { }

  virtual void enterGenvar_declaration(VerilogParser::Genvar_declarationContext * /*ctx*/) override { }
  virtual void exitGenvar_declaration(VerilogParser::Genvar_declarationContext * /*ctx*/) override { }

  virtual void enterList_of_genvar_identifiers(VerilogParser::List_of_genvar_identifiersContext * /*ctx*/) override { }
  virtual void exitList_of_genvar_identifiers(VerilogParser::List_of_genvar_identifiersContext * /*ctx*/) override { }

  virtual void enterLoop_generate_construct(VerilogParser::Loop_generate_constructContext * /*ctx*/) override { }
  virtual void exitLoop_generate_construct(VerilogParser::Loop_generate_constructContext * /*ctx*/) override { }

  virtual void enterGenvar_initialization(VerilogParser::Genvar_initializationContext * /*ctx*/) override { }
  virtual void exitGenvar_initialization(VerilogParser::Genvar_initializationContext * /*ctx*/) override { }

  virtual void enterGenvar_expression(VerilogParser::Genvar_expressionContext * /*ctx*/) override { }
  virtual void exitGenvar_expression(VerilogParser::Genvar_expressionContext * /*ctx*/) override { }

  virtual void enterGenvar_iteration(VerilogParser::Genvar_iterationContext * /*ctx*/) override { }
  virtual void exitGenvar_iteration(VerilogParser::Genvar_iterationContext * /*ctx*/) override { }

  virtual void enterConditional_generate_construct(VerilogParser::Conditional_generate_constructContext * /*ctx*/) override { }
  virtual void exitConditional_generate_construct(VerilogParser::Conditional_generate_constructContext * /*ctx*/) override { }

  virtual void enterIf_generate_construct(VerilogParser::If_generate_constructContext * /*ctx*/) override { }
  virtual void exitIf_generate_construct(VerilogParser::If_generate_constructContext * /*ctx*/) override { }

  virtual void enterCase_generate_construct(VerilogParser::Case_generate_constructContext * /*ctx*/) override { }
  virtual void exitCase_generate_construct(VerilogParser::Case_generate_constructContext * /*ctx*/) override { }

  virtual void enterCase_generate_item(VerilogParser::Case_generate_itemContext * /*ctx*/) override { }
  virtual void exitCase_generate_item(VerilogParser::Case_generate_itemContext * /*ctx*/) override { }

  virtual void enterGenerate_block(VerilogParser::Generate_blockContext * /*ctx*/) override { }
  virtual void exitGenerate_block(VerilogParser::Generate_blockContext * /*ctx*/) override { }

  virtual void enterGenerate_block_name(VerilogParser::Generate_block_nameContext * /*ctx*/) override { }
  virtual void exitGenerate_block_name(VerilogParser::Generate_block_nameContext * /*ctx*/) override { }

  virtual void enterGenerate_block_or_null(VerilogParser::Generate_block_or_nullContext * /*ctx*/) override { }
  virtual void exitGenerate_block_or_null(VerilogParser::Generate_block_or_nullContext * /*ctx*/) override { }

  virtual void enterUdp_declaration(VerilogParser::Udp_declarationContext * /*ctx*/) override { }
  virtual void exitUdp_declaration(VerilogParser::Udp_declarationContext * /*ctx*/) override { }

  virtual void enterUdp_port_list(VerilogParser::Udp_port_listContext * /*ctx*/) override { }
  virtual void exitUdp_port_list(VerilogParser::Udp_port_listContext * /*ctx*/) override { }

  virtual void enterUdp_declaration_port_list(VerilogParser::Udp_declaration_port_listContext * /*ctx*/) override { }
  virtual void exitUdp_declaration_port_list(VerilogParser::Udp_declaration_port_listContext * /*ctx*/) override { }

  virtual void enterUdp_port_declaration(VerilogParser::Udp_port_declarationContext * /*ctx*/) override { }
  virtual void exitUdp_port_declaration(VerilogParser::Udp_port_declarationContext * /*ctx*/) override { }

  virtual void enterUdp_output_declaration(VerilogParser::Udp_output_declarationContext * /*ctx*/) override { }
  virtual void exitUdp_output_declaration(VerilogParser::Udp_output_declarationContext * /*ctx*/) override { }

  virtual void enterUdp_input_declaration(VerilogParser::Udp_input_declarationContext * /*ctx*/) override { }
  virtual void exitUdp_input_declaration(VerilogParser::Udp_input_declarationContext * /*ctx*/) override { }

  virtual void enterUdp_reg_declaration(VerilogParser::Udp_reg_declarationContext * /*ctx*/) override { }
  virtual void exitUdp_reg_declaration(VerilogParser::Udp_reg_declarationContext * /*ctx*/) override { }

  virtual void enterUdp_body(VerilogParser::Udp_bodyContext * /*ctx*/) override { }
  virtual void exitUdp_body(VerilogParser::Udp_bodyContext * /*ctx*/) override { }

  virtual void enterCombinational_body(VerilogParser::Combinational_bodyContext * /*ctx*/) override { }
  virtual void exitCombinational_body(VerilogParser::Combinational_bodyContext * /*ctx*/) override { }

  virtual void enterCombinational_entry(VerilogParser::Combinational_entryContext * /*ctx*/) override { }
  virtual void exitCombinational_entry(VerilogParser::Combinational_entryContext * /*ctx*/) override { }

  virtual void enterSequential_body(VerilogParser::Sequential_bodyContext * /*ctx*/) override { }
  virtual void exitSequential_body(VerilogParser::Sequential_bodyContext * /*ctx*/) override { }

  virtual void enterUdp_initial_statement(VerilogParser::Udp_initial_statementContext * /*ctx*/) override { }
  virtual void exitUdp_initial_statement(VerilogParser::Udp_initial_statementContext * /*ctx*/) override { }

  virtual void enterInit_val(VerilogParser::Init_valContext * /*ctx*/) override { }
  virtual void exitInit_val(VerilogParser::Init_valContext * /*ctx*/) override { }

  virtual void enterSequential_entry(VerilogParser::Sequential_entryContext * /*ctx*/) override { }
  virtual void exitSequential_entry(VerilogParser::Sequential_entryContext * /*ctx*/) override { }

  virtual void enterSeq_input_list(VerilogParser::Seq_input_listContext * /*ctx*/) override { }
  virtual void exitSeq_input_list(VerilogParser::Seq_input_listContext * /*ctx*/) override { }

  virtual void enterLevel_input_list(VerilogParser::Level_input_listContext * /*ctx*/) override { }
  virtual void exitLevel_input_list(VerilogParser::Level_input_listContext * /*ctx*/) override { }

  virtual void enterEdge_input_list(VerilogParser::Edge_input_listContext * /*ctx*/) override { }
  virtual void exitEdge_input_list(VerilogParser::Edge_input_listContext * /*ctx*/) override { }

  virtual void enterEdge_indicator(VerilogParser::Edge_indicatorContext * /*ctx*/) override { }
  virtual void exitEdge_indicator(VerilogParser::Edge_indicatorContext * /*ctx*/) override { }

  virtual void enterCurrent_state(VerilogParser::Current_stateContext * /*ctx*/) override { }
  virtual void exitCurrent_state(VerilogParser::Current_stateContext * /*ctx*/) override { }

  virtual void enterNext_state(VerilogParser::Next_stateContext * /*ctx*/) override { }
  virtual void exitNext_state(VerilogParser::Next_stateContext * /*ctx*/) override { }

  virtual void enterOutput_symbol(VerilogParser::Output_symbolContext * /*ctx*/) override { }
  virtual void exitOutput_symbol(VerilogParser::Output_symbolContext * /*ctx*/) override { }

  virtual void enterLevel_symbol(VerilogParser::Level_symbolContext * /*ctx*/) override { }
  virtual void exitLevel_symbol(VerilogParser::Level_symbolContext * /*ctx*/) override { }

  virtual void enterEdge_symbol(VerilogParser::Edge_symbolContext * /*ctx*/) override { }
  virtual void exitEdge_symbol(VerilogParser::Edge_symbolContext * /*ctx*/) override { }

  virtual void enterUdp_instantiation(VerilogParser::Udp_instantiationContext * /*ctx*/) override { }
  virtual void exitUdp_instantiation(VerilogParser::Udp_instantiationContext * /*ctx*/) override { }

  virtual void enterUdp_instance(VerilogParser::Udp_instanceContext * /*ctx*/) override { }
  virtual void exitUdp_instance(VerilogParser::Udp_instanceContext * /*ctx*/) override { }

  virtual void enterName_of_udp_instance(VerilogParser::Name_of_udp_instanceContext * /*ctx*/) override { }
  virtual void exitName_of_udp_instance(VerilogParser::Name_of_udp_instanceContext * /*ctx*/) override { }

  virtual void enterContinuous_assign(VerilogParser::Continuous_assignContext * /*ctx*/) override { }
  virtual void exitContinuous_assign(VerilogParser::Continuous_assignContext * /*ctx*/) override { }

  virtual void enterList_of_net_assignments(VerilogParser::List_of_net_assignmentsContext * /*ctx*/) override { }
  virtual void exitList_of_net_assignments(VerilogParser::List_of_net_assignmentsContext * /*ctx*/) override { }

  virtual void enterNet_assignment(VerilogParser::Net_assignmentContext * /*ctx*/) override { }
  virtual void exitNet_assignment(VerilogParser::Net_assignmentContext * /*ctx*/) override { }

  virtual void enterInitial_construct(VerilogParser::Initial_constructContext * /*ctx*/) override { }
  virtual void exitInitial_construct(VerilogParser::Initial_constructContext * /*ctx*/) override { }

  virtual void enterAlways_construct(VerilogParser::Always_constructContext * /*ctx*/) override { }
  virtual void exitAlways_construct(VerilogParser::Always_constructContext * /*ctx*/) override { }

  virtual void enterBlocking_assignment(VerilogParser::Blocking_assignmentContext * /*ctx*/) override { }
  virtual void exitBlocking_assignment(VerilogParser::Blocking_assignmentContext * /*ctx*/) override { }

  virtual void enterNonblocking_assignment(VerilogParser::Nonblocking_assignmentContext * /*ctx*/) override { }
  virtual void exitNonblocking_assignment(VerilogParser::Nonblocking_assignmentContext * /*ctx*/) override { }

  virtual void enterProcedural_continuous_assignments(VerilogParser::Procedural_continuous_assignmentsContext * /*ctx*/) override { }
  virtual void exitProcedural_continuous_assignments(VerilogParser::Procedural_continuous_assignmentsContext * /*ctx*/) override { }

  virtual void enterVariable_assignment(VerilogParser::Variable_assignmentContext * /*ctx*/) override { }
  virtual void exitVariable_assignment(VerilogParser::Variable_assignmentContext * /*ctx*/) override { }

  virtual void enterPar_block(VerilogParser::Par_blockContext * /*ctx*/) override { }
  virtual void exitPar_block(VerilogParser::Par_blockContext * /*ctx*/) override { }

  virtual void enterBlock_name(VerilogParser::Block_nameContext * /*ctx*/) override { }
  virtual void exitBlock_name(VerilogParser::Block_nameContext * /*ctx*/) override { }

  virtual void enterSeq_block(VerilogParser::Seq_blockContext * /*ctx*/) override { }
  virtual void exitSeq_block(VerilogParser::Seq_blockContext * /*ctx*/) override { }

  virtual void enterStatement(VerilogParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(VerilogParser::StatementContext * /*ctx*/) override { }

  virtual void enterStatement_or_null(VerilogParser::Statement_or_nullContext * /*ctx*/) override { }
  virtual void exitStatement_or_null(VerilogParser::Statement_or_nullContext * /*ctx*/) override { }

  virtual void enterFunction_statement(VerilogParser::Function_statementContext * /*ctx*/) override { }
  virtual void exitFunction_statement(VerilogParser::Function_statementContext * /*ctx*/) override { }

  virtual void enterDelay_control(VerilogParser::Delay_controlContext * /*ctx*/) override { }
  virtual void exitDelay_control(VerilogParser::Delay_controlContext * /*ctx*/) override { }

  virtual void enterDelay_or_event_control(VerilogParser::Delay_or_event_controlContext * /*ctx*/) override { }
  virtual void exitDelay_or_event_control(VerilogParser::Delay_or_event_controlContext * /*ctx*/) override { }

  virtual void enterDisable_statement(VerilogParser::Disable_statementContext * /*ctx*/) override { }
  virtual void exitDisable_statement(VerilogParser::Disable_statementContext * /*ctx*/) override { }

  virtual void enterEvent_control(VerilogParser::Event_controlContext * /*ctx*/) override { }
  virtual void exitEvent_control(VerilogParser::Event_controlContext * /*ctx*/) override { }

  virtual void enterEvent_trigger(VerilogParser::Event_triggerContext * /*ctx*/) override { }
  virtual void exitEvent_trigger(VerilogParser::Event_triggerContext * /*ctx*/) override { }

  virtual void enterEvent_expression(VerilogParser::Event_expressionContext * /*ctx*/) override { }
  virtual void exitEvent_expression(VerilogParser::Event_expressionContext * /*ctx*/) override { }

  virtual void enterProcedural_timing_control(VerilogParser::Procedural_timing_controlContext * /*ctx*/) override { }
  virtual void exitProcedural_timing_control(VerilogParser::Procedural_timing_controlContext * /*ctx*/) override { }

  virtual void enterProcedural_timing_control_statement(VerilogParser::Procedural_timing_control_statementContext * /*ctx*/) override { }
  virtual void exitProcedural_timing_control_statement(VerilogParser::Procedural_timing_control_statementContext * /*ctx*/) override { }

  virtual void enterWait_statement(VerilogParser::Wait_statementContext * /*ctx*/) override { }
  virtual void exitWait_statement(VerilogParser::Wait_statementContext * /*ctx*/) override { }

  virtual void enterConditional_statement(VerilogParser::Conditional_statementContext * /*ctx*/) override { }
  virtual void exitConditional_statement(VerilogParser::Conditional_statementContext * /*ctx*/) override { }

  virtual void enterCase_statement(VerilogParser::Case_statementContext * /*ctx*/) override { }
  virtual void exitCase_statement(VerilogParser::Case_statementContext * /*ctx*/) override { }

  virtual void enterCase_item(VerilogParser::Case_itemContext * /*ctx*/) override { }
  virtual void exitCase_item(VerilogParser::Case_itemContext * /*ctx*/) override { }

  virtual void enterLoop_statement(VerilogParser::Loop_statementContext * /*ctx*/) override { }
  virtual void exitLoop_statement(VerilogParser::Loop_statementContext * /*ctx*/) override { }

  virtual void enterSystem_task_enable(VerilogParser::System_task_enableContext * /*ctx*/) override { }
  virtual void exitSystem_task_enable(VerilogParser::System_task_enableContext * /*ctx*/) override { }

  virtual void enterSys_task_en_port_list(VerilogParser::Sys_task_en_port_listContext * /*ctx*/) override { }
  virtual void exitSys_task_en_port_list(VerilogParser::Sys_task_en_port_listContext * /*ctx*/) override { }

  virtual void enterSys_task_en_port_item(VerilogParser::Sys_task_en_port_itemContext * /*ctx*/) override { }
  virtual void exitSys_task_en_port_item(VerilogParser::Sys_task_en_port_itemContext * /*ctx*/) override { }

  virtual void enterTask_enable(VerilogParser::Task_enableContext * /*ctx*/) override { }
  virtual void exitTask_enable(VerilogParser::Task_enableContext * /*ctx*/) override { }

  virtual void enterTask_en_port_list(VerilogParser::Task_en_port_listContext * /*ctx*/) override { }
  virtual void exitTask_en_port_list(VerilogParser::Task_en_port_listContext * /*ctx*/) override { }

  virtual void enterSpecify_block(VerilogParser::Specify_blockContext * /*ctx*/) override { }
  virtual void exitSpecify_block(VerilogParser::Specify_blockContext * /*ctx*/) override { }

  virtual void enterSpecify_item(VerilogParser::Specify_itemContext * /*ctx*/) override { }
  virtual void exitSpecify_item(VerilogParser::Specify_itemContext * /*ctx*/) override { }

  virtual void enterPulsestyle_declaration(VerilogParser::Pulsestyle_declarationContext * /*ctx*/) override { }
  virtual void exitPulsestyle_declaration(VerilogParser::Pulsestyle_declarationContext * /*ctx*/) override { }

  virtual void enterShowcancelled_declaration(VerilogParser::Showcancelled_declarationContext * /*ctx*/) override { }
  virtual void exitShowcancelled_declaration(VerilogParser::Showcancelled_declarationContext * /*ctx*/) override { }

  virtual void enterPath_declaration(VerilogParser::Path_declarationContext * /*ctx*/) override { }
  virtual void exitPath_declaration(VerilogParser::Path_declarationContext * /*ctx*/) override { }

  virtual void enterSimple_path_declaration(VerilogParser::Simple_path_declarationContext * /*ctx*/) override { }
  virtual void exitSimple_path_declaration(VerilogParser::Simple_path_declarationContext * /*ctx*/) override { }

  virtual void enterParallel_path_description(VerilogParser::Parallel_path_descriptionContext * /*ctx*/) override { }
  virtual void exitParallel_path_description(VerilogParser::Parallel_path_descriptionContext * /*ctx*/) override { }

  virtual void enterFull_path_description(VerilogParser::Full_path_descriptionContext * /*ctx*/) override { }
  virtual void exitFull_path_description(VerilogParser::Full_path_descriptionContext * /*ctx*/) override { }

  virtual void enterList_of_path_inputs(VerilogParser::List_of_path_inputsContext * /*ctx*/) override { }
  virtual void exitList_of_path_inputs(VerilogParser::List_of_path_inputsContext * /*ctx*/) override { }

  virtual void enterList_of_path_outputs(VerilogParser::List_of_path_outputsContext * /*ctx*/) override { }
  virtual void exitList_of_path_outputs(VerilogParser::List_of_path_outputsContext * /*ctx*/) override { }

  virtual void enterSpecify_input_terminal_descriptor(VerilogParser::Specify_input_terminal_descriptorContext * /*ctx*/) override { }
  virtual void exitSpecify_input_terminal_descriptor(VerilogParser::Specify_input_terminal_descriptorContext * /*ctx*/) override { }

  virtual void enterSpecify_output_terminal_descriptor(VerilogParser::Specify_output_terminal_descriptorContext * /*ctx*/) override { }
  virtual void exitSpecify_output_terminal_descriptor(VerilogParser::Specify_output_terminal_descriptorContext * /*ctx*/) override { }

  virtual void enterInput_identifier(VerilogParser::Input_identifierContext * /*ctx*/) override { }
  virtual void exitInput_identifier(VerilogParser::Input_identifierContext * /*ctx*/) override { }

  virtual void enterOutput_identifier(VerilogParser::Output_identifierContext * /*ctx*/) override { }
  virtual void exitOutput_identifier(VerilogParser::Output_identifierContext * /*ctx*/) override { }

  virtual void enterPath_delay_value(VerilogParser::Path_delay_valueContext * /*ctx*/) override { }
  virtual void exitPath_delay_value(VerilogParser::Path_delay_valueContext * /*ctx*/) override { }

  virtual void enterList_of_path_delay_expressions(VerilogParser::List_of_path_delay_expressionsContext * /*ctx*/) override { }
  virtual void exitList_of_path_delay_expressions(VerilogParser::List_of_path_delay_expressionsContext * /*ctx*/) override { }

  virtual void enterT_path_delay_expression(VerilogParser::T_path_delay_expressionContext * /*ctx*/) override { }
  virtual void exitT_path_delay_expression(VerilogParser::T_path_delay_expressionContext * /*ctx*/) override { }

  virtual void enterTrise_path_delay_expression(VerilogParser::Trise_path_delay_expressionContext * /*ctx*/) override { }
  virtual void exitTrise_path_delay_expression(VerilogParser::Trise_path_delay_expressionContext * /*ctx*/) override { }

  virtual void enterTfall_path_delay_expression(VerilogParser::Tfall_path_delay_expressionContext * /*ctx*/) override { }
  virtual void exitTfall_path_delay_expression(VerilogParser::Tfall_path_delay_expressionContext * /*ctx*/) override { }

  virtual void enterTz_path_delay_expression(VerilogParser::Tz_path_delay_expressionContext * /*ctx*/) override { }
  virtual void exitTz_path_delay_expression(VerilogParser::Tz_path_delay_expressionContext * /*ctx*/) override { }

  virtual void enterT01_path_delay_expression(VerilogParser::T01_path_delay_expressionContext * /*ctx*/) override { }
  virtual void exitT01_path_delay_expression(VerilogParser::T01_path_delay_expressionContext * /*ctx*/) override { }

  virtual void enterT10_path_delay_expression(VerilogParser::T10_path_delay_expressionContext * /*ctx*/) override { }
  virtual void exitT10_path_delay_expression(VerilogParser::T10_path_delay_expressionContext * /*ctx*/) override { }

  virtual void enterT0z_path_delay_expression(VerilogParser::T0z_path_delay_expressionContext * /*ctx*/) override { }
  virtual void exitT0z_path_delay_expression(VerilogParser::T0z_path_delay_expressionContext * /*ctx*/) override { }

  virtual void enterTz1_path_delay_expression(VerilogParser::Tz1_path_delay_expressionContext * /*ctx*/) override { }
  virtual void exitTz1_path_delay_expression(VerilogParser::Tz1_path_delay_expressionContext * /*ctx*/) override { }

  virtual void enterT1z_path_delay_expression(VerilogParser::T1z_path_delay_expressionContext * /*ctx*/) override { }
  virtual void exitT1z_path_delay_expression(VerilogParser::T1z_path_delay_expressionContext * /*ctx*/) override { }

  virtual void enterTz0_path_delay_expression(VerilogParser::Tz0_path_delay_expressionContext * /*ctx*/) override { }
  virtual void exitTz0_path_delay_expression(VerilogParser::Tz0_path_delay_expressionContext * /*ctx*/) override { }

  virtual void enterT0x_path_delay_expression(VerilogParser::T0x_path_delay_expressionContext * /*ctx*/) override { }
  virtual void exitT0x_path_delay_expression(VerilogParser::T0x_path_delay_expressionContext * /*ctx*/) override { }

  virtual void enterTx1_path_delay_expression(VerilogParser::Tx1_path_delay_expressionContext * /*ctx*/) override { }
  virtual void exitTx1_path_delay_expression(VerilogParser::Tx1_path_delay_expressionContext * /*ctx*/) override { }

  virtual void enterT1x_path_delay_expression(VerilogParser::T1x_path_delay_expressionContext * /*ctx*/) override { }
  virtual void exitT1x_path_delay_expression(VerilogParser::T1x_path_delay_expressionContext * /*ctx*/) override { }

  virtual void enterTx0_path_delay_expression(VerilogParser::Tx0_path_delay_expressionContext * /*ctx*/) override { }
  virtual void exitTx0_path_delay_expression(VerilogParser::Tx0_path_delay_expressionContext * /*ctx*/) override { }

  virtual void enterTxz_path_delay_expression(VerilogParser::Txz_path_delay_expressionContext * /*ctx*/) override { }
  virtual void exitTxz_path_delay_expression(VerilogParser::Txz_path_delay_expressionContext * /*ctx*/) override { }

  virtual void enterTzx_path_delay_expression(VerilogParser::Tzx_path_delay_expressionContext * /*ctx*/) override { }
  virtual void exitTzx_path_delay_expression(VerilogParser::Tzx_path_delay_expressionContext * /*ctx*/) override { }

  virtual void enterPath_delay_expression(VerilogParser::Path_delay_expressionContext * /*ctx*/) override { }
  virtual void exitPath_delay_expression(VerilogParser::Path_delay_expressionContext * /*ctx*/) override { }

  virtual void enterEdge_sensitive_path_declaration(VerilogParser::Edge_sensitive_path_declarationContext * /*ctx*/) override { }
  virtual void exitEdge_sensitive_path_declaration(VerilogParser::Edge_sensitive_path_declarationContext * /*ctx*/) override { }

  virtual void enterParallel_edge_sensitive_path_description(VerilogParser::Parallel_edge_sensitive_path_descriptionContext * /*ctx*/) override { }
  virtual void exitParallel_edge_sensitive_path_description(VerilogParser::Parallel_edge_sensitive_path_descriptionContext * /*ctx*/) override { }

  virtual void enterFull_edge_sensitive_path_description(VerilogParser::Full_edge_sensitive_path_descriptionContext * /*ctx*/) override { }
  virtual void exitFull_edge_sensitive_path_description(VerilogParser::Full_edge_sensitive_path_descriptionContext * /*ctx*/) override { }

  virtual void enterData_source_expression(VerilogParser::Data_source_expressionContext * /*ctx*/) override { }
  virtual void exitData_source_expression(VerilogParser::Data_source_expressionContext * /*ctx*/) override { }

  virtual void enterEdge_identifier(VerilogParser::Edge_identifierContext * /*ctx*/) override { }
  virtual void exitEdge_identifier(VerilogParser::Edge_identifierContext * /*ctx*/) override { }

  virtual void enterState_dependent_path_declaration(VerilogParser::State_dependent_path_declarationContext * /*ctx*/) override { }
  virtual void exitState_dependent_path_declaration(VerilogParser::State_dependent_path_declarationContext * /*ctx*/) override { }

  virtual void enterPolarity_operator(VerilogParser::Polarity_operatorContext * /*ctx*/) override { }
  virtual void exitPolarity_operator(VerilogParser::Polarity_operatorContext * /*ctx*/) override { }

  virtual void enterSystem_timing_check(VerilogParser::System_timing_checkContext * /*ctx*/) override { }
  virtual void exitSystem_timing_check(VerilogParser::System_timing_checkContext * /*ctx*/) override { }

  virtual void enterSetup_timing_check(VerilogParser::Setup_timing_checkContext * /*ctx*/) override { }
  virtual void exitSetup_timing_check(VerilogParser::Setup_timing_checkContext * /*ctx*/) override { }

  virtual void enterNotifier_opt(VerilogParser::Notifier_optContext * /*ctx*/) override { }
  virtual void exitNotifier_opt(VerilogParser::Notifier_optContext * /*ctx*/) override { }

  virtual void enterHold_timing_check(VerilogParser::Hold_timing_checkContext * /*ctx*/) override { }
  virtual void exitHold_timing_check(VerilogParser::Hold_timing_checkContext * /*ctx*/) override { }

  virtual void enterSetuphold_timing_check(VerilogParser::Setuphold_timing_checkContext * /*ctx*/) override { }
  virtual void exitSetuphold_timing_check(VerilogParser::Setuphold_timing_checkContext * /*ctx*/) override { }

  virtual void enterTiming_check_opt(VerilogParser::Timing_check_optContext * /*ctx*/) override { }
  virtual void exitTiming_check_opt(VerilogParser::Timing_check_optContext * /*ctx*/) override { }

  virtual void enterStamptime_cond_opt(VerilogParser::Stamptime_cond_optContext * /*ctx*/) override { }
  virtual void exitStamptime_cond_opt(VerilogParser::Stamptime_cond_optContext * /*ctx*/) override { }

  virtual void enterChecktime_cond_opt(VerilogParser::Checktime_cond_optContext * /*ctx*/) override { }
  virtual void exitChecktime_cond_opt(VerilogParser::Checktime_cond_optContext * /*ctx*/) override { }

  virtual void enterDelayed_ref_opt(VerilogParser::Delayed_ref_optContext * /*ctx*/) override { }
  virtual void exitDelayed_ref_opt(VerilogParser::Delayed_ref_optContext * /*ctx*/) override { }

  virtual void enterDelayed_data_opt(VerilogParser::Delayed_data_optContext * /*ctx*/) override { }
  virtual void exitDelayed_data_opt(VerilogParser::Delayed_data_optContext * /*ctx*/) override { }

  virtual void enterRecovery_timing_check(VerilogParser::Recovery_timing_checkContext * /*ctx*/) override { }
  virtual void exitRecovery_timing_check(VerilogParser::Recovery_timing_checkContext * /*ctx*/) override { }

  virtual void enterRemoval_timing_check(VerilogParser::Removal_timing_checkContext * /*ctx*/) override { }
  virtual void exitRemoval_timing_check(VerilogParser::Removal_timing_checkContext * /*ctx*/) override { }

  virtual void enterRecrem_timing_check(VerilogParser::Recrem_timing_checkContext * /*ctx*/) override { }
  virtual void exitRecrem_timing_check(VerilogParser::Recrem_timing_checkContext * /*ctx*/) override { }

  virtual void enterSkew_timing_check(VerilogParser::Skew_timing_checkContext * /*ctx*/) override { }
  virtual void exitSkew_timing_check(VerilogParser::Skew_timing_checkContext * /*ctx*/) override { }

  virtual void enterTimeskew_timing_check(VerilogParser::Timeskew_timing_checkContext * /*ctx*/) override { }
  virtual void exitTimeskew_timing_check(VerilogParser::Timeskew_timing_checkContext * /*ctx*/) override { }

  virtual void enterSkew_timing_check_opt(VerilogParser::Skew_timing_check_optContext * /*ctx*/) override { }
  virtual void exitSkew_timing_check_opt(VerilogParser::Skew_timing_check_optContext * /*ctx*/) override { }

  virtual void enterEvent_based_flag_opt(VerilogParser::Event_based_flag_optContext * /*ctx*/) override { }
  virtual void exitEvent_based_flag_opt(VerilogParser::Event_based_flag_optContext * /*ctx*/) override { }

  virtual void enterRemain_active_flag_opt(VerilogParser::Remain_active_flag_optContext * /*ctx*/) override { }
  virtual void exitRemain_active_flag_opt(VerilogParser::Remain_active_flag_optContext * /*ctx*/) override { }

  virtual void enterFullskew_timing_check(VerilogParser::Fullskew_timing_checkContext * /*ctx*/) override { }
  virtual void exitFullskew_timing_check(VerilogParser::Fullskew_timing_checkContext * /*ctx*/) override { }

  virtual void enterPeriod_timing_check(VerilogParser::Period_timing_checkContext * /*ctx*/) override { }
  virtual void exitPeriod_timing_check(VerilogParser::Period_timing_checkContext * /*ctx*/) override { }

  virtual void enterWidth_timing_check(VerilogParser::Width_timing_checkContext * /*ctx*/) override { }
  virtual void exitWidth_timing_check(VerilogParser::Width_timing_checkContext * /*ctx*/) override { }

  virtual void enterThreshold_opt(VerilogParser::Threshold_optContext * /*ctx*/) override { }
  virtual void exitThreshold_opt(VerilogParser::Threshold_optContext * /*ctx*/) override { }

  virtual void enterNochange_timing_check(VerilogParser::Nochange_timing_checkContext * /*ctx*/) override { }
  virtual void exitNochange_timing_check(VerilogParser::Nochange_timing_checkContext * /*ctx*/) override { }

  virtual void enterChecktime_condition(VerilogParser::Checktime_conditionContext * /*ctx*/) override { }
  virtual void exitChecktime_condition(VerilogParser::Checktime_conditionContext * /*ctx*/) override { }

  virtual void enterControlled_reference_event(VerilogParser::Controlled_reference_eventContext * /*ctx*/) override { }
  virtual void exitControlled_reference_event(VerilogParser::Controlled_reference_eventContext * /*ctx*/) override { }

  virtual void enterData_event(VerilogParser::Data_eventContext * /*ctx*/) override { }
  virtual void exitData_event(VerilogParser::Data_eventContext * /*ctx*/) override { }

  virtual void enterDelayed_data(VerilogParser::Delayed_dataContext * /*ctx*/) override { }
  virtual void exitDelayed_data(VerilogParser::Delayed_dataContext * /*ctx*/) override { }

  virtual void enterDelayed_reference(VerilogParser::Delayed_referenceContext * /*ctx*/) override { }
  virtual void exitDelayed_reference(VerilogParser::Delayed_referenceContext * /*ctx*/) override { }

  virtual void enterEnd_edge_offset(VerilogParser::End_edge_offsetContext * /*ctx*/) override { }
  virtual void exitEnd_edge_offset(VerilogParser::End_edge_offsetContext * /*ctx*/) override { }

  virtual void enterEvent_based_flag(VerilogParser::Event_based_flagContext * /*ctx*/) override { }
  virtual void exitEvent_based_flag(VerilogParser::Event_based_flagContext * /*ctx*/) override { }

  virtual void enterNotifier(VerilogParser::NotifierContext * /*ctx*/) override { }
  virtual void exitNotifier(VerilogParser::NotifierContext * /*ctx*/) override { }

  virtual void enterReference_event(VerilogParser::Reference_eventContext * /*ctx*/) override { }
  virtual void exitReference_event(VerilogParser::Reference_eventContext * /*ctx*/) override { }

  virtual void enterRemain_active_flag(VerilogParser::Remain_active_flagContext * /*ctx*/) override { }
  virtual void exitRemain_active_flag(VerilogParser::Remain_active_flagContext * /*ctx*/) override { }

  virtual void enterStamptime_condition(VerilogParser::Stamptime_conditionContext * /*ctx*/) override { }
  virtual void exitStamptime_condition(VerilogParser::Stamptime_conditionContext * /*ctx*/) override { }

  virtual void enterStart_edge_offset(VerilogParser::Start_edge_offsetContext * /*ctx*/) override { }
  virtual void exitStart_edge_offset(VerilogParser::Start_edge_offsetContext * /*ctx*/) override { }

  virtual void enterThreshold(VerilogParser::ThresholdContext * /*ctx*/) override { }
  virtual void exitThreshold(VerilogParser::ThresholdContext * /*ctx*/) override { }

  virtual void enterTiming_check_limit(VerilogParser::Timing_check_limitContext * /*ctx*/) override { }
  virtual void exitTiming_check_limit(VerilogParser::Timing_check_limitContext * /*ctx*/) override { }

  virtual void enterTiming_check_event(VerilogParser::Timing_check_eventContext * /*ctx*/) override { }
  virtual void exitTiming_check_event(VerilogParser::Timing_check_eventContext * /*ctx*/) override { }

  virtual void enterControlled_timing_check_event(VerilogParser::Controlled_timing_check_eventContext * /*ctx*/) override { }
  virtual void exitControlled_timing_check_event(VerilogParser::Controlled_timing_check_eventContext * /*ctx*/) override { }

  virtual void enterTiming_check_event_control(VerilogParser::Timing_check_event_controlContext * /*ctx*/) override { }
  virtual void exitTiming_check_event_control(VerilogParser::Timing_check_event_controlContext * /*ctx*/) override { }

  virtual void enterSpecify_terminal_descriptor(VerilogParser::Specify_terminal_descriptorContext * /*ctx*/) override { }
  virtual void exitSpecify_terminal_descriptor(VerilogParser::Specify_terminal_descriptorContext * /*ctx*/) override { }

  virtual void enterEdge_control_specifier(VerilogParser::Edge_control_specifierContext * /*ctx*/) override { }
  virtual void exitEdge_control_specifier(VerilogParser::Edge_control_specifierContext * /*ctx*/) override { }

  virtual void enterEdge_descriptor(VerilogParser::Edge_descriptorContext * /*ctx*/) override { }
  virtual void exitEdge_descriptor(VerilogParser::Edge_descriptorContext * /*ctx*/) override { }

  virtual void enterTiming_check_condition(VerilogParser::Timing_check_conditionContext * /*ctx*/) override { }
  virtual void exitTiming_check_condition(VerilogParser::Timing_check_conditionContext * /*ctx*/) override { }

  virtual void enterScalar_timing_check_condition(VerilogParser::Scalar_timing_check_conditionContext * /*ctx*/) override { }
  virtual void exitScalar_timing_check_condition(VerilogParser::Scalar_timing_check_conditionContext * /*ctx*/) override { }

  virtual void enterScalar_constant(VerilogParser::Scalar_constantContext * /*ctx*/) override { }
  virtual void exitScalar_constant(VerilogParser::Scalar_constantContext * /*ctx*/) override { }

  virtual void enterConcatenation(VerilogParser::ConcatenationContext * /*ctx*/) override { }
  virtual void exitConcatenation(VerilogParser::ConcatenationContext * /*ctx*/) override { }

  virtual void enterConstant_concatenation(VerilogParser::Constant_concatenationContext * /*ctx*/) override { }
  virtual void exitConstant_concatenation(VerilogParser::Constant_concatenationContext * /*ctx*/) override { }

  virtual void enterConstant_multiple_concatenation(VerilogParser::Constant_multiple_concatenationContext * /*ctx*/) override { }
  virtual void exitConstant_multiple_concatenation(VerilogParser::Constant_multiple_concatenationContext * /*ctx*/) override { }

  virtual void enterModule_path_concatenation(VerilogParser::Module_path_concatenationContext * /*ctx*/) override { }
  virtual void exitModule_path_concatenation(VerilogParser::Module_path_concatenationContext * /*ctx*/) override { }

  virtual void enterModule_path_multiple_concatenation(VerilogParser::Module_path_multiple_concatenationContext * /*ctx*/) override { }
  virtual void exitModule_path_multiple_concatenation(VerilogParser::Module_path_multiple_concatenationContext * /*ctx*/) override { }

  virtual void enterMultiple_concatenation(VerilogParser::Multiple_concatenationContext * /*ctx*/) override { }
  virtual void exitMultiple_concatenation(VerilogParser::Multiple_concatenationContext * /*ctx*/) override { }

  virtual void enterConstant_function_call(VerilogParser::Constant_function_callContext * /*ctx*/) override { }
  virtual void exitConstant_function_call(VerilogParser::Constant_function_callContext * /*ctx*/) override { }

  virtual void enterConstant_system_function_call(VerilogParser::Constant_system_function_callContext * /*ctx*/) override { }
  virtual void exitConstant_system_function_call(VerilogParser::Constant_system_function_callContext * /*ctx*/) override { }

  virtual void enterFunction_call(VerilogParser::Function_callContext * /*ctx*/) override { }
  virtual void exitFunction_call(VerilogParser::Function_callContext * /*ctx*/) override { }

  virtual void enterSystem_function_call(VerilogParser::System_function_callContext * /*ctx*/) override { }
  virtual void exitSystem_function_call(VerilogParser::System_function_callContext * /*ctx*/) override { }

  virtual void enterSys_func_call_port_list(VerilogParser::Sys_func_call_port_listContext * /*ctx*/) override { }
  virtual void exitSys_func_call_port_list(VerilogParser::Sys_func_call_port_listContext * /*ctx*/) override { }

  virtual void enterBase_expression(VerilogParser::Base_expressionContext * /*ctx*/) override { }
  virtual void exitBase_expression(VerilogParser::Base_expressionContext * /*ctx*/) override { }

  virtual void enterConstant_base_expression(VerilogParser::Constant_base_expressionContext * /*ctx*/) override { }
  virtual void exitConstant_base_expression(VerilogParser::Constant_base_expressionContext * /*ctx*/) override { }

  virtual void enterConstant_expression(VerilogParser::Constant_expressionContext * /*ctx*/) override { }
  virtual void exitConstant_expression(VerilogParser::Constant_expressionContext * /*ctx*/) override { }

  virtual void enterConstant_mintypmax_expression(VerilogParser::Constant_mintypmax_expressionContext * /*ctx*/) override { }
  virtual void exitConstant_mintypmax_expression(VerilogParser::Constant_mintypmax_expressionContext * /*ctx*/) override { }

  virtual void enterConstant_range_expression(VerilogParser::Constant_range_expressionContext * /*ctx*/) override { }
  virtual void exitConstant_range_expression(VerilogParser::Constant_range_expressionContext * /*ctx*/) override { }

  virtual void enterDimension_constant_expression(VerilogParser::Dimension_constant_expressionContext * /*ctx*/) override { }
  virtual void exitDimension_constant_expression(VerilogParser::Dimension_constant_expressionContext * /*ctx*/) override { }

  virtual void enterExpression(VerilogParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(VerilogParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterLsb_constant_expression(VerilogParser::Lsb_constant_expressionContext * /*ctx*/) override { }
  virtual void exitLsb_constant_expression(VerilogParser::Lsb_constant_expressionContext * /*ctx*/) override { }

  virtual void enterMintypmax_expression(VerilogParser::Mintypmax_expressionContext * /*ctx*/) override { }
  virtual void exitMintypmax_expression(VerilogParser::Mintypmax_expressionContext * /*ctx*/) override { }

  virtual void enterModule_path_expression(VerilogParser::Module_path_expressionContext * /*ctx*/) override { }
  virtual void exitModule_path_expression(VerilogParser::Module_path_expressionContext * /*ctx*/) override { }

  virtual void enterModule_path_mintypmax_expression(VerilogParser::Module_path_mintypmax_expressionContext * /*ctx*/) override { }
  virtual void exitModule_path_mintypmax_expression(VerilogParser::Module_path_mintypmax_expressionContext * /*ctx*/) override { }

  virtual void enterMsb_constant_expression(VerilogParser::Msb_constant_expressionContext * /*ctx*/) override { }
  virtual void exitMsb_constant_expression(VerilogParser::Msb_constant_expressionContext * /*ctx*/) override { }

  virtual void enterRange_expression(VerilogParser::Range_expressionContext * /*ctx*/) override { }
  virtual void exitRange_expression(VerilogParser::Range_expressionContext * /*ctx*/) override { }

  virtual void enterWidth_constant_expression(VerilogParser::Width_constant_expressionContext * /*ctx*/) override { }
  virtual void exitWidth_constant_expression(VerilogParser::Width_constant_expressionContext * /*ctx*/) override { }

  virtual void enterConstant_primary(VerilogParser::Constant_primaryContext * /*ctx*/) override { }
  virtual void exitConstant_primary(VerilogParser::Constant_primaryContext * /*ctx*/) override { }

  virtual void enterModule_path_primary(VerilogParser::Module_path_primaryContext * /*ctx*/) override { }
  virtual void exitModule_path_primary(VerilogParser::Module_path_primaryContext * /*ctx*/) override { }

  virtual void enterPrimary(VerilogParser::PrimaryContext * /*ctx*/) override { }
  virtual void exitPrimary(VerilogParser::PrimaryContext * /*ctx*/) override { }

  virtual void enterSelect_(VerilogParser::Select_Context * /*ctx*/) override { }
  virtual void exitSelect_(VerilogParser::Select_Context * /*ctx*/) override { }

  virtual void enterBit_select(VerilogParser::Bit_selectContext * /*ctx*/) override { }
  virtual void exitBit_select(VerilogParser::Bit_selectContext * /*ctx*/) override { }

  virtual void enterNet_lvalue(VerilogParser::Net_lvalueContext * /*ctx*/) override { }
  virtual void exitNet_lvalue(VerilogParser::Net_lvalueContext * /*ctx*/) override { }

  virtual void enterConst_select(VerilogParser::Const_selectContext * /*ctx*/) override { }
  virtual void exitConst_select(VerilogParser::Const_selectContext * /*ctx*/) override { }

  virtual void enterConst_bit_select(VerilogParser::Const_bit_selectContext * /*ctx*/) override { }
  virtual void exitConst_bit_select(VerilogParser::Const_bit_selectContext * /*ctx*/) override { }

  virtual void enterVariable_lvalue(VerilogParser::Variable_lvalueContext * /*ctx*/) override { }
  virtual void exitVariable_lvalue(VerilogParser::Variable_lvalueContext * /*ctx*/) override { }

  virtual void enterUnary_operator(VerilogParser::Unary_operatorContext * /*ctx*/) override { }
  virtual void exitUnary_operator(VerilogParser::Unary_operatorContext * /*ctx*/) override { }

  virtual void enterUnary_module_path_operator(VerilogParser::Unary_module_path_operatorContext * /*ctx*/) override { }
  virtual void exitUnary_module_path_operator(VerilogParser::Unary_module_path_operatorContext * /*ctx*/) override { }

  virtual void enterNumber(VerilogParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(VerilogParser::NumberContext * /*ctx*/) override { }

  virtual void enterReal_number(VerilogParser::Real_numberContext * /*ctx*/) override { }
  virtual void exitReal_number(VerilogParser::Real_numberContext * /*ctx*/) override { }

  virtual void enterDecimal_number(VerilogParser::Decimal_numberContext * /*ctx*/) override { }
  virtual void exitDecimal_number(VerilogParser::Decimal_numberContext * /*ctx*/) override { }

  virtual void enterBinary_number(VerilogParser::Binary_numberContext * /*ctx*/) override { }
  virtual void exitBinary_number(VerilogParser::Binary_numberContext * /*ctx*/) override { }

  virtual void enterOctal_number(VerilogParser::Octal_numberContext * /*ctx*/) override { }
  virtual void exitOctal_number(VerilogParser::Octal_numberContext * /*ctx*/) override { }

  virtual void enterHex_number(VerilogParser::Hex_numberContext * /*ctx*/) override { }
  virtual void exitHex_number(VerilogParser::Hex_numberContext * /*ctx*/) override { }

  virtual void enterSize(VerilogParser::SizeContext * /*ctx*/) override { }
  virtual void exitSize(VerilogParser::SizeContext * /*ctx*/) override { }

  virtual void enterFixed_point_number(VerilogParser::Fixed_point_numberContext * /*ctx*/) override { }
  virtual void exitFixed_point_number(VerilogParser::Fixed_point_numberContext * /*ctx*/) override { }

  virtual void enterExponential_number(VerilogParser::Exponential_numberContext * /*ctx*/) override { }
  virtual void exitExponential_number(VerilogParser::Exponential_numberContext * /*ctx*/) override { }

  virtual void enterUnsigned_number(VerilogParser::Unsigned_numberContext * /*ctx*/) override { }
  virtual void exitUnsigned_number(VerilogParser::Unsigned_numberContext * /*ctx*/) override { }

  virtual void enterDecimal_value(VerilogParser::Decimal_valueContext * /*ctx*/) override { }
  virtual void exitDecimal_value(VerilogParser::Decimal_valueContext * /*ctx*/) override { }

  virtual void enterBinary_value(VerilogParser::Binary_valueContext * /*ctx*/) override { }
  virtual void exitBinary_value(VerilogParser::Binary_valueContext * /*ctx*/) override { }

  virtual void enterOctal_value(VerilogParser::Octal_valueContext * /*ctx*/) override { }
  virtual void exitOctal_value(VerilogParser::Octal_valueContext * /*ctx*/) override { }

  virtual void enterHex_value(VerilogParser::Hex_valueContext * /*ctx*/) override { }
  virtual void exitHex_value(VerilogParser::Hex_valueContext * /*ctx*/) override { }

  virtual void enterDecimal_base(VerilogParser::Decimal_baseContext * /*ctx*/) override { }
  virtual void exitDecimal_base(VerilogParser::Decimal_baseContext * /*ctx*/) override { }

  virtual void enterBinary_base(VerilogParser::Binary_baseContext * /*ctx*/) override { }
  virtual void exitBinary_base(VerilogParser::Binary_baseContext * /*ctx*/) override { }

  virtual void enterOctal_base(VerilogParser::Octal_baseContext * /*ctx*/) override { }
  virtual void exitOctal_base(VerilogParser::Octal_baseContext * /*ctx*/) override { }

  virtual void enterHex_base(VerilogParser::Hex_baseContext * /*ctx*/) override { }
  virtual void exitHex_base(VerilogParser::Hex_baseContext * /*ctx*/) override { }

  virtual void enterString_(VerilogParser::String_Context * /*ctx*/) override { }
  virtual void exitString_(VerilogParser::String_Context * /*ctx*/) override { }

  virtual void enterAttribute_instance(VerilogParser::Attribute_instanceContext * /*ctx*/) override { }
  virtual void exitAttribute_instance(VerilogParser::Attribute_instanceContext * /*ctx*/) override { }

  virtual void enterAttr_spec(VerilogParser::Attr_specContext * /*ctx*/) override { }
  virtual void exitAttr_spec(VerilogParser::Attr_specContext * /*ctx*/) override { }

  virtual void enterAttr_name(VerilogParser::Attr_nameContext * /*ctx*/) override { }
  virtual void exitAttr_name(VerilogParser::Attr_nameContext * /*ctx*/) override { }

  virtual void enterBlock_identifier(VerilogParser::Block_identifierContext * /*ctx*/) override { }
  virtual void exitBlock_identifier(VerilogParser::Block_identifierContext * /*ctx*/) override { }

  virtual void enterCell_identifier(VerilogParser::Cell_identifierContext * /*ctx*/) override { }
  virtual void exitCell_identifier(VerilogParser::Cell_identifierContext * /*ctx*/) override { }

  virtual void enterConfig_identifier(VerilogParser::Config_identifierContext * /*ctx*/) override { }
  virtual void exitConfig_identifier(VerilogParser::Config_identifierContext * /*ctx*/) override { }

  virtual void enterEscaped_identifier(VerilogParser::Escaped_identifierContext * /*ctx*/) override { }
  virtual void exitEscaped_identifier(VerilogParser::Escaped_identifierContext * /*ctx*/) override { }

  virtual void enterEvent_identifier(VerilogParser::Event_identifierContext * /*ctx*/) override { }
  virtual void exitEvent_identifier(VerilogParser::Event_identifierContext * /*ctx*/) override { }

  virtual void enterFunction_identifier(VerilogParser::Function_identifierContext * /*ctx*/) override { }
  virtual void exitFunction_identifier(VerilogParser::Function_identifierContext * /*ctx*/) override { }

  virtual void enterGate_instance_identifier(VerilogParser::Gate_instance_identifierContext * /*ctx*/) override { }
  virtual void exitGate_instance_identifier(VerilogParser::Gate_instance_identifierContext * /*ctx*/) override { }

  virtual void enterGenerate_block_identifier(VerilogParser::Generate_block_identifierContext * /*ctx*/) override { }
  virtual void exitGenerate_block_identifier(VerilogParser::Generate_block_identifierContext * /*ctx*/) override { }

  virtual void enterGenvar_identifier(VerilogParser::Genvar_identifierContext * /*ctx*/) override { }
  virtual void exitGenvar_identifier(VerilogParser::Genvar_identifierContext * /*ctx*/) override { }

  virtual void enterHierarchical_identifier(VerilogParser::Hierarchical_identifierContext * /*ctx*/) override { }
  virtual void exitHierarchical_identifier(VerilogParser::Hierarchical_identifierContext * /*ctx*/) override { }

  virtual void enterHier_ref(VerilogParser::Hier_refContext * /*ctx*/) override { }
  virtual void exitHier_ref(VerilogParser::Hier_refContext * /*ctx*/) override { }

  virtual void enterIdentifier(VerilogParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(VerilogParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterInput_port_identifier(VerilogParser::Input_port_identifierContext * /*ctx*/) override { }
  virtual void exitInput_port_identifier(VerilogParser::Input_port_identifierContext * /*ctx*/) override { }

  virtual void enterInstance_identifier(VerilogParser::Instance_identifierContext * /*ctx*/) override { }
  virtual void exitInstance_identifier(VerilogParser::Instance_identifierContext * /*ctx*/) override { }

  virtual void enterLibrary_identifier(VerilogParser::Library_identifierContext * /*ctx*/) override { }
  virtual void exitLibrary_identifier(VerilogParser::Library_identifierContext * /*ctx*/) override { }

  virtual void enterModule_identifier(VerilogParser::Module_identifierContext * /*ctx*/) override { }
  virtual void exitModule_identifier(VerilogParser::Module_identifierContext * /*ctx*/) override { }

  virtual void enterModule_instance_identifier(VerilogParser::Module_instance_identifierContext * /*ctx*/) override { }
  virtual void exitModule_instance_identifier(VerilogParser::Module_instance_identifierContext * /*ctx*/) override { }

  virtual void enterNet_identifier(VerilogParser::Net_identifierContext * /*ctx*/) override { }
  virtual void exitNet_identifier(VerilogParser::Net_identifierContext * /*ctx*/) override { }

  virtual void enterOutput_port_identifier(VerilogParser::Output_port_identifierContext * /*ctx*/) override { }
  virtual void exitOutput_port_identifier(VerilogParser::Output_port_identifierContext * /*ctx*/) override { }

  virtual void enterParameter_identifier(VerilogParser::Parameter_identifierContext * /*ctx*/) override { }
  virtual void exitParameter_identifier(VerilogParser::Parameter_identifierContext * /*ctx*/) override { }

  virtual void enterPort_identifier(VerilogParser::Port_identifierContext * /*ctx*/) override { }
  virtual void exitPort_identifier(VerilogParser::Port_identifierContext * /*ctx*/) override { }

  virtual void enterReal_identifier(VerilogParser::Real_identifierContext * /*ctx*/) override { }
  virtual void exitReal_identifier(VerilogParser::Real_identifierContext * /*ctx*/) override { }

  virtual void enterSimple_identifier(VerilogParser::Simple_identifierContext * /*ctx*/) override { }
  virtual void exitSimple_identifier(VerilogParser::Simple_identifierContext * /*ctx*/) override { }

  virtual void enterSpecparam_identifier(VerilogParser::Specparam_identifierContext * /*ctx*/) override { }
  virtual void exitSpecparam_identifier(VerilogParser::Specparam_identifierContext * /*ctx*/) override { }

  virtual void enterSystem_function_identifier(VerilogParser::System_function_identifierContext * /*ctx*/) override { }
  virtual void exitSystem_function_identifier(VerilogParser::System_function_identifierContext * /*ctx*/) override { }

  virtual void enterSystem_task_identifier(VerilogParser::System_task_identifierContext * /*ctx*/) override { }
  virtual void exitSystem_task_identifier(VerilogParser::System_task_identifierContext * /*ctx*/) override { }

  virtual void enterTask_identifier(VerilogParser::Task_identifierContext * /*ctx*/) override { }
  virtual void exitTask_identifier(VerilogParser::Task_identifierContext * /*ctx*/) override { }

  virtual void enterTerminal_identifier(VerilogParser::Terminal_identifierContext * /*ctx*/) override { }
  virtual void exitTerminal_identifier(VerilogParser::Terminal_identifierContext * /*ctx*/) override { }

  virtual void enterTopmodule_identifier(VerilogParser::Topmodule_identifierContext * /*ctx*/) override { }
  virtual void exitTopmodule_identifier(VerilogParser::Topmodule_identifierContext * /*ctx*/) override { }

  virtual void enterUdp_identifier(VerilogParser::Udp_identifierContext * /*ctx*/) override { }
  virtual void exitUdp_identifier(VerilogParser::Udp_identifierContext * /*ctx*/) override { }

  virtual void enterUdp_instance_identifier(VerilogParser::Udp_instance_identifierContext * /*ctx*/) override { }
  virtual void exitUdp_instance_identifier(VerilogParser::Udp_instance_identifierContext * /*ctx*/) override { }

  virtual void enterVariable_identifier(VerilogParser::Variable_identifierContext * /*ctx*/) override { }
  virtual void exitVariable_identifier(VerilogParser::Variable_identifierContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

