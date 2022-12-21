
// Generated from VerilogParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  VerilogParser : public antlr4::Parser {
public:
  enum {
    ALWAYS = 1, AM = 2, AMAM = 3, AMAMAM = 4, AND = 5, AS = 6, ASAS = 7, 
    ASGT = 8, ASSIGN = 9, AT = 10, AUTOMATIC = 11, BEGIN = 12, BUF = 13, 
    BUFIFONE = 14, BUFIFZERO = 15, CA = 16, CASE = 17, CASEX = 18, CASEZ = 19, 
    CATI = 20, CELL = 21, CL = 22, CMOS = 23, CO = 24, CONFIG = 25, DEASSIGN = 26, 
    DEFAULT = 27, DEFPARAM = 28, DESIGN = 29, DISABLE = 30, DL = 31, DLFULLSKEW = 32, 
    DLHOLD = 33, DLNOCHANGE = 34, DLPERIOD = 35, DLRECOVERY = 36, DLRECREM = 37, 
    DLREMOVAL = 38, DLSETUP = 39, DLSETUPHOLD = 40, DLSKEW = 41, DLTIMESKEW = 42, 
    DLWIDTH = 43, DQ = 44, DT = 45, EDGE = 46, ELSE = 47, EM = 48, EMEQ = 49, 
    EMEQEQ = 50, END = 51, ENDCASE = 52, ENDCONFIG = 53, ENDFUNCTION = 54, 
    ENDGENERATE = 55, ENDMODULE = 56, ENDPRIMITIVE = 57, ENDSPECIFY = 58, 
    ENDTABLE = 59, ENDTASK = 60, EQ = 61, EQEQ = 62, EQEQEQ = 63, EQGT = 64, 
    EVENT = 65, FOR = 66, FORCE = 67, FOREVER = 68, FORK = 69, FUNCTION = 70, 
    GA = 71, GENERATE = 72, GENVAR = 73, GT = 74, GTEQ = 75, GTGT = 76, 
    GTGTGT = 77, HA = 78, HIGHZONE = 79, HIGHZZERO = 80, IF = 81, IFNONE = 82, 
    INCLUDE = 83, INITIAL = 84, INOUT = 85, INPUT = 86, INSTANCE = 87, INTEGER = 88, 
    JOIN = 89, LARGE = 90, LB = 91, LC = 92, LIBLIST = 93, LIBRARY = 94, 
    LOCALPARAM = 95, LP = 96, LT = 97, LTEQ = 98, LTLT = 99, LTLTLT = 100, 
    MACROMODULE = 101, MEDIUM = 102, MI = 103, MICL = 104, MIGT = 105, MIINCDIR = 106, 
    MO = 107, MODULE = 108, NAND = 109, NEGEDGE = 110, NMOS = 111, NOR = 112, 
    NOSHOWCANCELLED = 113, NOT = 114, NOTIFONE = 115, NOTIFZERO = 116, OR = 117, 
    OUTPUT = 118, PARAMETER = 119, PATHPULSEDL = 120, PL = 121, PLCL = 122, 
    PMOS = 123, POSEDGE = 124, PRIMITIVE = 125, PULLDOWN = 126, PULLONE = 127, 
    PULLUP = 128, PULLZERO = 129, PULSESTYLE_ONDETECT = 130, PULSESTYLE_ONEVENT = 131, 
    QM = 132, RB = 133, RC = 134, RCMOS = 135, REAL = 136, REALTIME = 137, 
    REG = 138, RELEASE = 139, REPEAT = 140, RNMOS = 141, RP = 142, RPMOS = 143, 
    RTRAN = 144, RTRANIFONE = 145, RTRANIFZERO = 146, SC = 147, SCALARED = 148, 
    SHOWCANCELLED = 149, SIGNED = 150, SL = 151, SMALL = 152, SPECIFY = 153, 
    SPECPARAM = 154, STRONGONE = 155, STRONGZERO = 156, SUPPLYONE = 157, 
    SUPPLYZERO = 158, TABLE = 159, TASK = 160, TI = 161, TIAM = 162, TICA = 163, 
    TIME = 164, TIVL = 165, TRAN = 166, TRANIFONE = 167, TRANIFZERO = 168, 
    TRI = 169, TRIAND = 170, TRIONE = 171, TRIOR = 172, TRIREG = 173, TRIZERO = 174, 
    USE = 175, UWIRE = 176, VECTORED = 177, VL = 178, VLVL = 179, WAIT = 180, 
    WAND = 181, WEAKONE = 182, WEAKZERO = 183, WHILE = 184, WIRE = 185, 
    WOR = 186, XNOR = 187, XOR = 188, BINARY_BASE = 189, COMMENT = 190, 
    DECIMAL_BASE = 191, ESCAPED_IDENTIFIER = 192, EXPONENTIAL_NUMBER = 193, 
    FIXED_POINT_NUMBER = 194, HEX_BASE = 195, OCTAL_BASE = 196, SIMPLE_IDENTIFIER = 197, 
    STRING = 198, SYSTEM_TF_IDENTIFIER = 199, UNSIGNED_NUMBER = 200, WHITE_SPACE = 201, 
    BINARY_VALUE = 202, X_OR_Z_UNDERSCORE = 203, EDGE_DESCRIPTOR = 204, 
    HEX_VALUE = 205, FILE_PATH_SPEC = 206, OCTAL_VALUE = 207, EDGE_SYMBOL = 208, 
    LEVEL_ONLY_SYMBOL = 209, OUTPUT_OR_LEVEL_SYMBOL = 210, BEGIN_KEYWORDS_DIRECTIVE = 211, 
    CELLDEFINE_DIRECTIVE = 212, DEFAULT_NETTYPE_DIRECTIVE = 213, DEFINE_DIRECTIVE = 214, 
    ELSE_DIRECTIVE = 215, ELSIF_DIRECTIVE = 216, END_KEYWORDS_DIRECTIVE = 217, 
    ENDCELLDEFINE_DIRECTIVE = 218, ENDIF_DIRECTIVE = 219, IFDEF_DIRECTIVE = 220, 
    IFNDEF_DIRECTIVE = 221, INCLUDE_DIRECTIVE = 222, LINE_DIRECTIVE = 223, 
    NOUNCONNECTED_DRIVE_DIRECTIVE = 224, PRAGMA_DIRECTIVE = 225, RESETALL_DIRECTIVE = 226, 
    TIMESCALE_DIRECTIVE = 227, UNCONNECTED_DRIVE_DIRECTIVE = 228, UNDEF_DIRECTIVE = 229, 
    MACRO_USAGE = 230, VERSION_SPECIFIER = 231, DEFAULT_NETTYPE_VALUE = 232, 
    COMMENT_5 = 233, MACRO_NAME = 234, WHITE_SPACE_7 = 235, FILENAME = 236, 
    MACRO_DELIMITER = 237, MACRO_ESC_NEWLINE = 238, MACRO_ESC_QUOTE = 239, 
    MACRO_QUOTE = 240, MACRO_TEXT = 241, SOURCE_TEXT = 242, TIME_UNIT = 243, 
    TIME_VALUE = 244, UNCONNECTED_DRIVE_VALUE = 245, MACRO_IDENTIFIER = 246
  };

  enum {
    RuleLibrary_text = 0, RuleLibrary_description = 1, RuleLibrary_declaration = 2, 
    RuleLibrary_incdir = 3, RuleInclude_statement = 4, RuleFile_path_spec = 5, 
    RuleSource_text = 6, RuleDescription = 7, RuleModule_declaration = 8, 
    RuleModule_keyword = 9, RuleModule_parameter_port_list = 10, RuleList_of_port_declarations = 11, 
    RulePort = 12, RulePort_implicit = 13, RulePort_explicit = 14, RulePort_expression = 15, 
    RulePort_reference = 16, RulePort_declaration = 17, RuleModule_item = 18, 
    RuleModule_or_generate_item = 19, RuleModule_or_generate_item_declaration = 20, 
    RuleParameter_override = 21, RuleConfig_declaration = 22, RuleDesign_statement = 23, 
    RuleDesign_statement_item = 24, RuleConfig_rule_statement = 25, RuleDefault_clause = 26, 
    RuleInst_clause = 27, RuleInst_name = 28, RuleCell_clause = 29, RuleLiblist_clause = 30, 
    RuleUse_clause = 31, RuleLocal_parameter_declaration = 32, RuleParameter_declaration = 33, 
    RuleSpecparam_declaration = 34, RuleParameter_type = 35, RuleInout_declaration = 36, 
    RuleInput_declaration = 37, RuleOutput_declaration = 38, RuleEvent_declaration = 39, 
    RuleInteger_declaration = 40, RuleNet_declaration = 41, RuleReal_declaration = 42, 
    RuleRealtime_declaration = 43, RuleReg_declaration = 44, RuleTime_declaration = 45, 
    RuleNet_type = 46, RuleOutput_variable_type = 47, RuleReal_type = 48, 
    RuleVariable_type = 49, RuleDrive_strength = 50, RuleStrength0 = 51, 
    RuleStrength1 = 52, RuleCharge_strength = 53, RuleDelay3 = 54, RuleDelay2 = 55, 
    RuleDelay_value = 56, RuleList_of_defparam_assignments = 57, RuleList_of_event_identifiers = 58, 
    RuleEvent_id = 59, RuleList_of_net_decl_assignments = 60, RuleList_of_net_identifiers = 61, 
    RuleNet_id = 62, RuleList_of_param_assignments = 63, RuleList_of_port_identifiers = 64, 
    RuleList_of_real_identifiers = 65, RuleList_of_specparam_assignments = 66, 
    RuleList_of_variable_identifiers = 67, RuleList_of_variable_port_identifiers = 68, 
    RuleVar_port_id = 69, RuleDefparam_assignment = 70, RuleNet_decl_assignment = 71, 
    RuleParam_assignment = 72, RuleSpecparam_assignment = 73, RulePulse_control_specparam = 74, 
    RuleError_limit_value = 75, RuleReject_limit_value = 76, RuleLimit_value = 77, 
    RuleDimension = 78, RuleRange_ = 79, RuleFunction_declaration = 80, 
    RuleFunction_item_declaration = 81, RuleFunction_port_list = 82, RuleFunc_port_item = 83, 
    RuleFunction_range_or_type = 84, RuleTask_declaration = 85, RuleTask_item_declaration = 86, 
    RuleTask_port_list = 87, RuleTask_port_item = 88, RuleTf_input_declaration = 89, 
    RuleTf_output_declaration = 90, RuleTf_inout_declaration = 91, RuleTask_port_type = 92, 
    RuleBlock_item_declaration = 93, RuleList_of_block_variable_identifiers = 94, 
    RuleList_of_block_real_identifiers = 95, RuleBlock_variable_type = 96, 
    RuleBlock_real_type = 97, RuleGate_instantiation = 98, RuleCmos_switch_instance = 99, 
    RuleEnable_gate_instance = 100, RuleMos_switch_instance = 101, RuleN_input_gate_instance = 102, 
    RuleN_output_gate_instance = 103, RulePass_switch_instance = 104, RulePass_enable_switch_instance = 105, 
    RulePull_gate_instance = 106, RuleName_of_gate_instance = 107, RulePulldown_strength = 108, 
    RulePullup_strength = 109, RuleEnable_terminal = 110, RuleInout_terminal = 111, 
    RuleInput_terminal = 112, RuleNcontrol_terminal = 113, RuleOutput_terminal = 114, 
    RulePcontrol_terminal = 115, RuleCmos_switchtype = 116, RuleEnable_gatetype = 117, 
    RuleMos_switchtype = 118, RuleN_input_gatetype = 119, RuleN_output_gatetype = 120, 
    RulePass_en_switchtype = 121, RulePass_switchtype = 122, RuleModule_instantiation = 123, 
    RuleParameter_value_assignment = 124, RuleList_of_parameter_assignments = 125, 
    RuleOrdered_parameter_assignment = 126, RuleNamed_parameter_assignment = 127, 
    RuleModule_instance = 128, RuleName_of_module_instance = 129, RuleList_of_port_connections = 130, 
    RuleOrdered_port_connection = 131, RuleNamed_port_connection = 132, 
    RuleGenerate_region = 133, RuleGenvar_declaration = 134, RuleList_of_genvar_identifiers = 135, 
    RuleLoop_generate_construct = 136, RuleGenvar_initialization = 137, 
    RuleGenvar_expression = 138, RuleGenvar_iteration = 139, RuleConditional_generate_construct = 140, 
    RuleIf_generate_construct = 141, RuleCase_generate_construct = 142, 
    RuleCase_generate_item = 143, RuleGenerate_block = 144, RuleGenerate_block_name = 145, 
    RuleGenerate_block_or_null = 146, RuleUdp_declaration = 147, RuleUdp_port_list = 148, 
    RuleUdp_declaration_port_list = 149, RuleUdp_port_declaration = 150, 
    RuleUdp_output_declaration = 151, RuleUdp_input_declaration = 152, RuleUdp_reg_declaration = 153, 
    RuleUdp_body = 154, RuleCombinational_body = 155, RuleCombinational_entry = 156, 
    RuleSequential_body = 157, RuleUdp_initial_statement = 158, RuleInit_val = 159, 
    RuleSequential_entry = 160, RuleSeq_input_list = 161, RuleLevel_input_list = 162, 
    RuleEdge_input_list = 163, RuleEdge_indicator = 164, RuleCurrent_state = 165, 
    RuleNext_state = 166, RuleOutput_symbol = 167, RuleLevel_symbol = 168, 
    RuleEdge_symbol = 169, RuleUdp_instantiation = 170, RuleUdp_instance = 171, 
    RuleName_of_udp_instance = 172, RuleContinuous_assign = 173, RuleList_of_net_assignments = 174, 
    RuleNet_assignment = 175, RuleInitial_construct = 176, RuleAlways_construct = 177, 
    RuleBlocking_assignment = 178, RuleNonblocking_assignment = 179, RuleProcedural_continuous_assignments = 180, 
    RuleVariable_assignment = 181, RulePar_block = 182, RuleBlock_name = 183, 
    RuleSeq_block = 184, RuleStatement = 185, RuleStatement_or_null = 186, 
    RuleFunction_statement = 187, RuleDelay_control = 188, RuleDelay_or_event_control = 189, 
    RuleDisable_statement = 190, RuleEvent_control = 191, RuleEvent_trigger = 192, 
    RuleEvent_expression = 193, RuleProcedural_timing_control = 194, RuleProcedural_timing_control_statement = 195, 
    RuleWait_statement = 196, RuleConditional_statement = 197, RuleCase_statement = 198, 
    RuleCase_item = 199, RuleLoop_statement = 200, RuleSystem_task_enable = 201, 
    RuleSys_task_en_port_list = 202, RuleSys_task_en_port_item = 203, RuleTask_enable = 204, 
    RuleTask_en_port_list = 205, RuleSpecify_block = 206, RuleSpecify_item = 207, 
    RulePulsestyle_declaration = 208, RuleShowcancelled_declaration = 209, 
    RulePath_declaration = 210, RuleSimple_path_declaration = 211, RuleParallel_path_description = 212, 
    RuleFull_path_description = 213, RuleList_of_path_inputs = 214, RuleList_of_path_outputs = 215, 
    RuleSpecify_input_terminal_descriptor = 216, RuleSpecify_output_terminal_descriptor = 217, 
    RuleInput_identifier = 218, RuleOutput_identifier = 219, RulePath_delay_value = 220, 
    RuleList_of_path_delay_expressions = 221, RuleT_path_delay_expression = 222, 
    RuleTrise_path_delay_expression = 223, RuleTfall_path_delay_expression = 224, 
    RuleTz_path_delay_expression = 225, RuleT01_path_delay_expression = 226, 
    RuleT10_path_delay_expression = 227, RuleT0z_path_delay_expression = 228, 
    RuleTz1_path_delay_expression = 229, RuleT1z_path_delay_expression = 230, 
    RuleTz0_path_delay_expression = 231, RuleT0x_path_delay_expression = 232, 
    RuleTx1_path_delay_expression = 233, RuleT1x_path_delay_expression = 234, 
    RuleTx0_path_delay_expression = 235, RuleTxz_path_delay_expression = 236, 
    RuleTzx_path_delay_expression = 237, RulePath_delay_expression = 238, 
    RuleEdge_sensitive_path_declaration = 239, RuleParallel_edge_sensitive_path_description = 240, 
    RuleFull_edge_sensitive_path_description = 241, RuleData_source_expression = 242, 
    RuleEdge_identifier = 243, RuleState_dependent_path_declaration = 244, 
    RulePolarity_operator = 245, RuleSystem_timing_check = 246, RuleSetup_timing_check = 247, 
    RuleNotifier_opt = 248, RuleHold_timing_check = 249, RuleSetuphold_timing_check = 250, 
    RuleTiming_check_opt = 251, RuleStamptime_cond_opt = 252, RuleChecktime_cond_opt = 253, 
    RuleDelayed_ref_opt = 254, RuleDelayed_data_opt = 255, RuleRecovery_timing_check = 256, 
    RuleRemoval_timing_check = 257, RuleRecrem_timing_check = 258, RuleSkew_timing_check = 259, 
    RuleTimeskew_timing_check = 260, RuleSkew_timing_check_opt = 261, RuleEvent_based_flag_opt = 262, 
    RuleRemain_active_flag_opt = 263, RuleFullskew_timing_check = 264, RulePeriod_timing_check = 265, 
    RuleWidth_timing_check = 266, RuleThreshold_opt = 267, RuleNochange_timing_check = 268, 
    RuleChecktime_condition = 269, RuleControlled_reference_event = 270, 
    RuleData_event = 271, RuleDelayed_data = 272, RuleDelayed_reference = 273, 
    RuleEnd_edge_offset = 274, RuleEvent_based_flag = 275, RuleNotifier = 276, 
    RuleReference_event = 277, RuleRemain_active_flag = 278, RuleStamptime_condition = 279, 
    RuleStart_edge_offset = 280, RuleThreshold = 281, RuleTiming_check_limit = 282, 
    RuleTiming_check_event = 283, RuleControlled_timing_check_event = 284, 
    RuleTiming_check_event_control = 285, RuleSpecify_terminal_descriptor = 286, 
    RuleEdge_control_specifier = 287, RuleEdge_descriptor = 288, RuleTiming_check_condition = 289, 
    RuleScalar_timing_check_condition = 290, RuleScalar_constant = 291, 
    RuleConcatenation = 292, RuleConstant_concatenation = 293, RuleConstant_multiple_concatenation = 294, 
    RuleModule_path_concatenation = 295, RuleModule_path_multiple_concatenation = 296, 
    RuleMultiple_concatenation = 297, RuleConstant_function_call = 298, 
    RuleConstant_system_function_call = 299, RuleFunction_call = 300, RuleSystem_function_call = 301, 
    RuleSys_func_call_port_list = 302, RuleBase_expression = 303, RuleConstant_base_expression = 304, 
    RuleConstant_expression = 305, RuleConstant_mintypmax_expression = 306, 
    RuleConstant_range_expression = 307, RuleDimension_constant_expression = 308, 
    RuleExpression = 309, RuleLsb_constant_expression = 310, RuleMintypmax_expression = 311, 
    RuleModule_path_expression = 312, RuleModule_path_mintypmax_expression = 313, 
    RuleMsb_constant_expression = 314, RuleRange_expression = 315, RuleWidth_constant_expression = 316, 
    RuleConstant_primary = 317, RuleModule_path_primary = 318, RulePrimary = 319, 
    RuleSelect_ = 320, RuleBit_select = 321, RuleNet_lvalue = 322, RuleConst_select = 323, 
    RuleConst_bit_select = 324, RuleVariable_lvalue = 325, RuleUnary_operator = 326, 
    RuleUnary_module_path_operator = 327, RuleNumber = 328, RuleReal_number = 329, 
    RuleDecimal_number = 330, RuleBinary_number = 331, RuleOctal_number = 332, 
    RuleHex_number = 333, RuleSize = 334, RuleFixed_point_number = 335, 
    RuleExponential_number = 336, RuleUnsigned_number = 337, RuleDecimal_value = 338, 
    RuleBinary_value = 339, RuleOctal_value = 340, RuleHex_value = 341, 
    RuleDecimal_base = 342, RuleBinary_base = 343, RuleOctal_base = 344, 
    RuleHex_base = 345, RuleString_ = 346, RuleAttribute_instance = 347, 
    RuleAttr_spec = 348, RuleAttr_name = 349, RuleBlock_identifier = 350, 
    RuleCell_identifier = 351, RuleConfig_identifier = 352, RuleEscaped_identifier = 353, 
    RuleEvent_identifier = 354, RuleFunction_identifier = 355, RuleGate_instance_identifier = 356, 
    RuleGenerate_block_identifier = 357, RuleGenvar_identifier = 358, RuleHierarchical_identifier = 359, 
    RuleHier_ref = 360, RuleIdentifier = 361, RuleInput_port_identifier = 362, 
    RuleInstance_identifier = 363, RuleLibrary_identifier = 364, RuleModule_identifier = 365, 
    RuleModule_instance_identifier = 366, RuleNet_identifier = 367, RuleOutput_port_identifier = 368, 
    RuleParameter_identifier = 369, RulePort_identifier = 370, RuleReal_identifier = 371, 
    RuleSimple_identifier = 372, RuleSpecparam_identifier = 373, RuleSystem_function_identifier = 374, 
    RuleSystem_task_identifier = 375, RuleTask_identifier = 376, RuleTerminal_identifier = 377, 
    RuleTopmodule_identifier = 378, RuleUdp_identifier = 379, RuleUdp_instance_identifier = 380, 
    RuleVariable_identifier = 381
  };

  explicit VerilogParser(antlr4::TokenStream *input);

  VerilogParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~VerilogParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class Library_textContext;
  class Library_descriptionContext;
  class Library_declarationContext;
  class Library_incdirContext;
  class Include_statementContext;
  class File_path_specContext;
  class Source_textContext;
  class DescriptionContext;
  class Module_declarationContext;
  class Module_keywordContext;
  class Module_parameter_port_listContext;
  class List_of_port_declarationsContext;
  class PortContext;
  class Port_implicitContext;
  class Port_explicitContext;
  class Port_expressionContext;
  class Port_referenceContext;
  class Port_declarationContext;
  class Module_itemContext;
  class Module_or_generate_itemContext;
  class Module_or_generate_item_declarationContext;
  class Parameter_overrideContext;
  class Config_declarationContext;
  class Design_statementContext;
  class Design_statement_itemContext;
  class Config_rule_statementContext;
  class Default_clauseContext;
  class Inst_clauseContext;
  class Inst_nameContext;
  class Cell_clauseContext;
  class Liblist_clauseContext;
  class Use_clauseContext;
  class Local_parameter_declarationContext;
  class Parameter_declarationContext;
  class Specparam_declarationContext;
  class Parameter_typeContext;
  class Inout_declarationContext;
  class Input_declarationContext;
  class Output_declarationContext;
  class Event_declarationContext;
  class Integer_declarationContext;
  class Net_declarationContext;
  class Real_declarationContext;
  class Realtime_declarationContext;
  class Reg_declarationContext;
  class Time_declarationContext;
  class Net_typeContext;
  class Output_variable_typeContext;
  class Real_typeContext;
  class Variable_typeContext;
  class Drive_strengthContext;
  class Strength0Context;
  class Strength1Context;
  class Charge_strengthContext;
  class Delay3Context;
  class Delay2Context;
  class Delay_valueContext;
  class List_of_defparam_assignmentsContext;
  class List_of_event_identifiersContext;
  class Event_idContext;
  class List_of_net_decl_assignmentsContext;
  class List_of_net_identifiersContext;
  class Net_idContext;
  class List_of_param_assignmentsContext;
  class List_of_port_identifiersContext;
  class List_of_real_identifiersContext;
  class List_of_specparam_assignmentsContext;
  class List_of_variable_identifiersContext;
  class List_of_variable_port_identifiersContext;
  class Var_port_idContext;
  class Defparam_assignmentContext;
  class Net_decl_assignmentContext;
  class Param_assignmentContext;
  class Specparam_assignmentContext;
  class Pulse_control_specparamContext;
  class Error_limit_valueContext;
  class Reject_limit_valueContext;
  class Limit_valueContext;
  class DimensionContext;
  class Range_Context;
  class Function_declarationContext;
  class Function_item_declarationContext;
  class Function_port_listContext;
  class Func_port_itemContext;
  class Function_range_or_typeContext;
  class Task_declarationContext;
  class Task_item_declarationContext;
  class Task_port_listContext;
  class Task_port_itemContext;
  class Tf_input_declarationContext;
  class Tf_output_declarationContext;
  class Tf_inout_declarationContext;
  class Task_port_typeContext;
  class Block_item_declarationContext;
  class List_of_block_variable_identifiersContext;
  class List_of_block_real_identifiersContext;
  class Block_variable_typeContext;
  class Block_real_typeContext;
  class Gate_instantiationContext;
  class Cmos_switch_instanceContext;
  class Enable_gate_instanceContext;
  class Mos_switch_instanceContext;
  class N_input_gate_instanceContext;
  class N_output_gate_instanceContext;
  class Pass_switch_instanceContext;
  class Pass_enable_switch_instanceContext;
  class Pull_gate_instanceContext;
  class Name_of_gate_instanceContext;
  class Pulldown_strengthContext;
  class Pullup_strengthContext;
  class Enable_terminalContext;
  class Inout_terminalContext;
  class Input_terminalContext;
  class Ncontrol_terminalContext;
  class Output_terminalContext;
  class Pcontrol_terminalContext;
  class Cmos_switchtypeContext;
  class Enable_gatetypeContext;
  class Mos_switchtypeContext;
  class N_input_gatetypeContext;
  class N_output_gatetypeContext;
  class Pass_en_switchtypeContext;
  class Pass_switchtypeContext;
  class Module_instantiationContext;
  class Parameter_value_assignmentContext;
  class List_of_parameter_assignmentsContext;
  class Ordered_parameter_assignmentContext;
  class Named_parameter_assignmentContext;
  class Module_instanceContext;
  class Name_of_module_instanceContext;
  class List_of_port_connectionsContext;
  class Ordered_port_connectionContext;
  class Named_port_connectionContext;
  class Generate_regionContext;
  class Genvar_declarationContext;
  class List_of_genvar_identifiersContext;
  class Loop_generate_constructContext;
  class Genvar_initializationContext;
  class Genvar_expressionContext;
  class Genvar_iterationContext;
  class Conditional_generate_constructContext;
  class If_generate_constructContext;
  class Case_generate_constructContext;
  class Case_generate_itemContext;
  class Generate_blockContext;
  class Generate_block_nameContext;
  class Generate_block_or_nullContext;
  class Udp_declarationContext;
  class Udp_port_listContext;
  class Udp_declaration_port_listContext;
  class Udp_port_declarationContext;
  class Udp_output_declarationContext;
  class Udp_input_declarationContext;
  class Udp_reg_declarationContext;
  class Udp_bodyContext;
  class Combinational_bodyContext;
  class Combinational_entryContext;
  class Sequential_bodyContext;
  class Udp_initial_statementContext;
  class Init_valContext;
  class Sequential_entryContext;
  class Seq_input_listContext;
  class Level_input_listContext;
  class Edge_input_listContext;
  class Edge_indicatorContext;
  class Current_stateContext;
  class Next_stateContext;
  class Output_symbolContext;
  class Level_symbolContext;
  class Edge_symbolContext;
  class Udp_instantiationContext;
  class Udp_instanceContext;
  class Name_of_udp_instanceContext;
  class Continuous_assignContext;
  class List_of_net_assignmentsContext;
  class Net_assignmentContext;
  class Initial_constructContext;
  class Always_constructContext;
  class Blocking_assignmentContext;
  class Nonblocking_assignmentContext;
  class Procedural_continuous_assignmentsContext;
  class Variable_assignmentContext;
  class Par_blockContext;
  class Block_nameContext;
  class Seq_blockContext;
  class StatementContext;
  class Statement_or_nullContext;
  class Function_statementContext;
  class Delay_controlContext;
  class Delay_or_event_controlContext;
  class Disable_statementContext;
  class Event_controlContext;
  class Event_triggerContext;
  class Event_expressionContext;
  class Procedural_timing_controlContext;
  class Procedural_timing_control_statementContext;
  class Wait_statementContext;
  class Conditional_statementContext;
  class Case_statementContext;
  class Case_itemContext;
  class Loop_statementContext;
  class System_task_enableContext;
  class Sys_task_en_port_listContext;
  class Sys_task_en_port_itemContext;
  class Task_enableContext;
  class Task_en_port_listContext;
  class Specify_blockContext;
  class Specify_itemContext;
  class Pulsestyle_declarationContext;
  class Showcancelled_declarationContext;
  class Path_declarationContext;
  class Simple_path_declarationContext;
  class Parallel_path_descriptionContext;
  class Full_path_descriptionContext;
  class List_of_path_inputsContext;
  class List_of_path_outputsContext;
  class Specify_input_terminal_descriptorContext;
  class Specify_output_terminal_descriptorContext;
  class Input_identifierContext;
  class Output_identifierContext;
  class Path_delay_valueContext;
  class List_of_path_delay_expressionsContext;
  class T_path_delay_expressionContext;
  class Trise_path_delay_expressionContext;
  class Tfall_path_delay_expressionContext;
  class Tz_path_delay_expressionContext;
  class T01_path_delay_expressionContext;
  class T10_path_delay_expressionContext;
  class T0z_path_delay_expressionContext;
  class Tz1_path_delay_expressionContext;
  class T1z_path_delay_expressionContext;
  class Tz0_path_delay_expressionContext;
  class T0x_path_delay_expressionContext;
  class Tx1_path_delay_expressionContext;
  class T1x_path_delay_expressionContext;
  class Tx0_path_delay_expressionContext;
  class Txz_path_delay_expressionContext;
  class Tzx_path_delay_expressionContext;
  class Path_delay_expressionContext;
  class Edge_sensitive_path_declarationContext;
  class Parallel_edge_sensitive_path_descriptionContext;
  class Full_edge_sensitive_path_descriptionContext;
  class Data_source_expressionContext;
  class Edge_identifierContext;
  class State_dependent_path_declarationContext;
  class Polarity_operatorContext;
  class System_timing_checkContext;
  class Setup_timing_checkContext;
  class Notifier_optContext;
  class Hold_timing_checkContext;
  class Setuphold_timing_checkContext;
  class Timing_check_optContext;
  class Stamptime_cond_optContext;
  class Checktime_cond_optContext;
  class Delayed_ref_optContext;
  class Delayed_data_optContext;
  class Recovery_timing_checkContext;
  class Removal_timing_checkContext;
  class Recrem_timing_checkContext;
  class Skew_timing_checkContext;
  class Timeskew_timing_checkContext;
  class Skew_timing_check_optContext;
  class Event_based_flag_optContext;
  class Remain_active_flag_optContext;
  class Fullskew_timing_checkContext;
  class Period_timing_checkContext;
  class Width_timing_checkContext;
  class Threshold_optContext;
  class Nochange_timing_checkContext;
  class Checktime_conditionContext;
  class Controlled_reference_eventContext;
  class Data_eventContext;
  class Delayed_dataContext;
  class Delayed_referenceContext;
  class End_edge_offsetContext;
  class Event_based_flagContext;
  class NotifierContext;
  class Reference_eventContext;
  class Remain_active_flagContext;
  class Stamptime_conditionContext;
  class Start_edge_offsetContext;
  class ThresholdContext;
  class Timing_check_limitContext;
  class Timing_check_eventContext;
  class Controlled_timing_check_eventContext;
  class Timing_check_event_controlContext;
  class Specify_terminal_descriptorContext;
  class Edge_control_specifierContext;
  class Edge_descriptorContext;
  class Timing_check_conditionContext;
  class Scalar_timing_check_conditionContext;
  class Scalar_constantContext;
  class ConcatenationContext;
  class Constant_concatenationContext;
  class Constant_multiple_concatenationContext;
  class Module_path_concatenationContext;
  class Module_path_multiple_concatenationContext;
  class Multiple_concatenationContext;
  class Constant_function_callContext;
  class Constant_system_function_callContext;
  class Function_callContext;
  class System_function_callContext;
  class Sys_func_call_port_listContext;
  class Base_expressionContext;
  class Constant_base_expressionContext;
  class Constant_expressionContext;
  class Constant_mintypmax_expressionContext;
  class Constant_range_expressionContext;
  class Dimension_constant_expressionContext;
  class ExpressionContext;
  class Lsb_constant_expressionContext;
  class Mintypmax_expressionContext;
  class Module_path_expressionContext;
  class Module_path_mintypmax_expressionContext;
  class Msb_constant_expressionContext;
  class Range_expressionContext;
  class Width_constant_expressionContext;
  class Constant_primaryContext;
  class Module_path_primaryContext;
  class PrimaryContext;
  class Select_Context;
  class Bit_selectContext;
  class Net_lvalueContext;
  class Const_selectContext;
  class Const_bit_selectContext;
  class Variable_lvalueContext;
  class Unary_operatorContext;
  class Unary_module_path_operatorContext;
  class NumberContext;
  class Real_numberContext;
  class Decimal_numberContext;
  class Binary_numberContext;
  class Octal_numberContext;
  class Hex_numberContext;
  class SizeContext;
  class Fixed_point_numberContext;
  class Exponential_numberContext;
  class Unsigned_numberContext;
  class Decimal_valueContext;
  class Binary_valueContext;
  class Octal_valueContext;
  class Hex_valueContext;
  class Decimal_baseContext;
  class Binary_baseContext;
  class Octal_baseContext;
  class Hex_baseContext;
  class String_Context;
  class Attribute_instanceContext;
  class Attr_specContext;
  class Attr_nameContext;
  class Block_identifierContext;
  class Cell_identifierContext;
  class Config_identifierContext;
  class Escaped_identifierContext;
  class Event_identifierContext;
  class Function_identifierContext;
  class Gate_instance_identifierContext;
  class Generate_block_identifierContext;
  class Genvar_identifierContext;
  class Hierarchical_identifierContext;
  class Hier_refContext;
  class IdentifierContext;
  class Input_port_identifierContext;
  class Instance_identifierContext;
  class Library_identifierContext;
  class Module_identifierContext;
  class Module_instance_identifierContext;
  class Net_identifierContext;
  class Output_port_identifierContext;
  class Parameter_identifierContext;
  class Port_identifierContext;
  class Real_identifierContext;
  class Simple_identifierContext;
  class Specparam_identifierContext;
  class System_function_identifierContext;
  class System_task_identifierContext;
  class Task_identifierContext;
  class Terminal_identifierContext;
  class Topmodule_identifierContext;
  class Udp_identifierContext;
  class Udp_instance_identifierContext;
  class Variable_identifierContext; 

  class  Library_textContext : public antlr4::ParserRuleContext {
  public:
    Library_textContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<Library_descriptionContext *> library_description();
    Library_descriptionContext* library_description(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Library_textContext* library_text();

  class  Library_descriptionContext : public antlr4::ParserRuleContext {
  public:
    Library_descriptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Library_declarationContext *library_declaration();
    Include_statementContext *include_statement();
    Config_declarationContext *config_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Library_descriptionContext* library_description();

  class  Library_declarationContext : public antlr4::ParserRuleContext {
  public:
    Library_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIBRARY();
    Library_identifierContext *library_identifier();
    std::vector<File_path_specContext *> file_path_spec();
    File_path_specContext* file_path_spec(size_t i);
    antlr4::tree::TerminalNode *SC();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Library_incdirContext *library_incdir();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Library_declarationContext* library_declaration();

  class  Library_incdirContext : public antlr4::ParserRuleContext {
  public:
    Library_incdirContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MIINCDIR();
    std::vector<File_path_specContext *> file_path_spec();
    File_path_specContext* file_path_spec(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Library_incdirContext* library_incdir();

  class  Include_statementContext : public antlr4::ParserRuleContext {
  public:
    Include_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INCLUDE();
    File_path_specContext *file_path_spec();
    antlr4::tree::TerminalNode *SC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Include_statementContext* include_statement();

  class  File_path_specContext : public antlr4::ParserRuleContext {
  public:
    File_path_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILE_PATH_SPEC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  File_path_specContext* file_path_spec();

  class  Source_textContext : public antlr4::ParserRuleContext {
  public:
    Source_textContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<DescriptionContext *> description();
    DescriptionContext* description(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Source_textContext* source_text();

  class  DescriptionContext : public antlr4::ParserRuleContext {
  public:
    DescriptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_declarationContext *module_declaration();
    Udp_declarationContext *udp_declaration();
    Config_declarationContext *config_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DescriptionContext* description();

  class  Module_declarationContext : public antlr4::ParserRuleContext {
  public:
    Module_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_keywordContext *module_keyword();
    Module_identifierContext *module_identifier();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *ENDMODULE();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Module_parameter_port_listContext *module_parameter_port_list();
    List_of_port_declarationsContext *list_of_port_declarations();
    std::vector<Module_itemContext *> module_item();
    Module_itemContext* module_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_declarationContext* module_declaration();

  class  Module_keywordContext : public antlr4::ParserRuleContext {
  public:
    Module_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MODULE();
    antlr4::tree::TerminalNode *MACROMODULE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_keywordContext* module_keyword();

  class  Module_parameter_port_listContext : public antlr4::ParserRuleContext {
  public:
    Module_parameter_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HA();
    antlr4::tree::TerminalNode *LP();
    std::vector<Parameter_declarationContext *> parameter_declaration();
    Parameter_declarationContext* parameter_declaration(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_parameter_port_listContext* module_parameter_port_list();

  class  List_of_port_declarationsContext : public antlr4::ParserRuleContext {
  public:
    List_of_port_declarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<Port_declarationContext *> port_declaration();
    Port_declarationContext* port_declaration(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    std::vector<PortContext *> port();
    PortContext* port(size_t i);
    Port_implicitContext *port_implicit();
    Port_explicitContext *port_explicit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_port_declarationsContext* list_of_port_declarations();

  class  PortContext : public antlr4::ParserRuleContext {
  public:
    PortContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_implicitContext *port_implicit();
    Port_explicitContext *port_explicit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PortContext* port();

  class  Port_implicitContext : public antlr4::ParserRuleContext {
  public:
    Port_implicitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_expressionContext *port_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Port_implicitContext* port_implicit();

  class  Port_explicitContext : public antlr4::ParserRuleContext {
  public:
    Port_explicitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DT();
    Port_identifierContext *port_identifier();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    Port_expressionContext *port_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Port_explicitContext* port_explicit();

  class  Port_expressionContext : public antlr4::ParserRuleContext {
  public:
    Port_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Port_referenceContext *> port_reference();
    Port_referenceContext* port_reference(size_t i);
    antlr4::tree::TerminalNode *LC();
    antlr4::tree::TerminalNode *RC();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Port_expressionContext* port_expression();

  class  Port_referenceContext : public antlr4::ParserRuleContext {
  public:
    Port_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_identifierContext *port_identifier();
    antlr4::tree::TerminalNode *LB();
    Constant_range_expressionContext *constant_range_expression();
    antlr4::tree::TerminalNode *RB();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Port_referenceContext* port_reference();

  class  Port_declarationContext : public antlr4::ParserRuleContext {
  public:
    Port_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Inout_declarationContext *inout_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Input_declarationContext *input_declaration();
    Output_declarationContext *output_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Port_declarationContext* port_declaration();

  class  Module_itemContext : public antlr4::ParserRuleContext {
  public:
    Module_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_declarationContext *port_declaration();
    antlr4::tree::TerminalNode *SC();
    Module_or_generate_itemContext *module_or_generate_item();
    Generate_regionContext *generate_region();
    Specify_blockContext *specify_block();
    Parameter_declarationContext *parameter_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Specparam_declarationContext *specparam_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_itemContext* module_item();

  class  Module_or_generate_itemContext : public antlr4::ParserRuleContext {
  public:
    Module_or_generate_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_or_generate_item_declarationContext *module_or_generate_item_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Local_parameter_declarationContext *local_parameter_declaration();
    antlr4::tree::TerminalNode *SC();
    Parameter_overrideContext *parameter_override();
    Continuous_assignContext *continuous_assign();
    Gate_instantiationContext *gate_instantiation();
    Module_instantiationContext *module_instantiation();
    Udp_instantiationContext *udp_instantiation();
    Initial_constructContext *initial_construct();
    Always_constructContext *always_construct();
    Loop_generate_constructContext *loop_generate_construct();
    Conditional_generate_constructContext *conditional_generate_construct();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_or_generate_itemContext* module_or_generate_item();

  class  Module_or_generate_item_declarationContext : public antlr4::ParserRuleContext {
  public:
    Module_or_generate_item_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_declarationContext *net_declaration();
    Reg_declarationContext *reg_declaration();
    Integer_declarationContext *integer_declaration();
    Real_declarationContext *real_declaration();
    Time_declarationContext *time_declaration();
    Realtime_declarationContext *realtime_declaration();
    Event_declarationContext *event_declaration();
    Genvar_declarationContext *genvar_declaration();
    Task_declarationContext *task_declaration();
    Function_declarationContext *function_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_or_generate_item_declarationContext* module_or_generate_item_declaration();

  class  Parameter_overrideContext : public antlr4::ParserRuleContext {
  public:
    Parameter_overrideContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFPARAM();
    List_of_defparam_assignmentsContext *list_of_defparam_assignments();
    antlr4::tree::TerminalNode *SC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Parameter_overrideContext* parameter_override();

  class  Config_declarationContext : public antlr4::ParserRuleContext {
  public:
    Config_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONFIG();
    Config_identifierContext *config_identifier();
    antlr4::tree::TerminalNode *SC();
    Design_statementContext *design_statement();
    antlr4::tree::TerminalNode *ENDCONFIG();
    std::vector<Config_rule_statementContext *> config_rule_statement();
    Config_rule_statementContext* config_rule_statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Config_declarationContext* config_declaration();

  class  Design_statementContext : public antlr4::ParserRuleContext {
  public:
    Design_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DESIGN();
    antlr4::tree::TerminalNode *SC();
    std::vector<Design_statement_itemContext *> design_statement_item();
    Design_statement_itemContext* design_statement_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Design_statementContext* design_statement();

  class  Design_statement_itemContext : public antlr4::ParserRuleContext {
  public:
    Design_statement_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cell_identifierContext *cell_identifier();
    Library_identifierContext *library_identifier();
    antlr4::tree::TerminalNode *DT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Design_statement_itemContext* design_statement_item();

  class  Config_rule_statementContext : public antlr4::ParserRuleContext {
  public:
    Config_rule_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Default_clauseContext *default_clause();
    Liblist_clauseContext *liblist_clause();
    antlr4::tree::TerminalNode *SC();
    Inst_clauseContext *inst_clause();
    Use_clauseContext *use_clause();
    Cell_clauseContext *cell_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Config_rule_statementContext* config_rule_statement();

  class  Default_clauseContext : public antlr4::ParserRuleContext {
  public:
    Default_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Default_clauseContext* default_clause();

  class  Inst_clauseContext : public antlr4::ParserRuleContext {
  public:
    Inst_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSTANCE();
    Inst_nameContext *inst_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Inst_clauseContext* inst_clause();

  class  Inst_nameContext : public antlr4::ParserRuleContext {
  public:
    Inst_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Topmodule_identifierContext *topmodule_identifier();
    std::vector<antlr4::tree::TerminalNode *> DT();
    antlr4::tree::TerminalNode* DT(size_t i);
    std::vector<Instance_identifierContext *> instance_identifier();
    Instance_identifierContext* instance_identifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Inst_nameContext* inst_name();

  class  Cell_clauseContext : public antlr4::ParserRuleContext {
  public:
    Cell_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CELL();
    Cell_identifierContext *cell_identifier();
    Library_identifierContext *library_identifier();
    antlr4::tree::TerminalNode *DT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cell_clauseContext* cell_clause();

  class  Liblist_clauseContext : public antlr4::ParserRuleContext {
  public:
    Liblist_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIBLIST();
    std::vector<Library_identifierContext *> library_identifier();
    Library_identifierContext* library_identifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Liblist_clauseContext* liblist_clause();

  class  Use_clauseContext : public antlr4::ParserRuleContext {
  public:
    Use_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USE();
    Cell_identifierContext *cell_identifier();
    Library_identifierContext *library_identifier();
    antlr4::tree::TerminalNode *DT();
    antlr4::tree::TerminalNode *CL();
    antlr4::tree::TerminalNode *CONFIG();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Use_clauseContext* use_clause();

  class  Local_parameter_declarationContext : public antlr4::ParserRuleContext {
  public:
    Local_parameter_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCALPARAM();
    List_of_param_assignmentsContext *list_of_param_assignments();
    antlr4::tree::TerminalNode *SIGNED();
    Range_Context *range_();
    Parameter_typeContext *parameter_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Local_parameter_declarationContext* local_parameter_declaration();

  class  Parameter_declarationContext : public antlr4::ParserRuleContext {
  public:
    Parameter_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARAMETER();
    List_of_param_assignmentsContext *list_of_param_assignments();
    antlr4::tree::TerminalNode *SIGNED();
    Range_Context *range_();
    Parameter_typeContext *parameter_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Parameter_declarationContext* parameter_declaration();

  class  Specparam_declarationContext : public antlr4::ParserRuleContext {
  public:
    Specparam_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SPECPARAM();
    List_of_specparam_assignmentsContext *list_of_specparam_assignments();
    antlr4::tree::TerminalNode *SC();
    Range_Context *range_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Specparam_declarationContext* specparam_declaration();

  class  Parameter_typeContext : public antlr4::ParserRuleContext {
  public:
    Parameter_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *REALTIME();
    antlr4::tree::TerminalNode *TIME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Parameter_typeContext* parameter_type();

  class  Inout_declarationContext : public antlr4::ParserRuleContext {
  public:
    Inout_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INOUT();
    List_of_port_identifiersContext *list_of_port_identifiers();
    Net_typeContext *net_type();
    antlr4::tree::TerminalNode *SIGNED();
    Range_Context *range_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Inout_declarationContext* inout_declaration();

  class  Input_declarationContext : public antlr4::ParserRuleContext {
  public:
    Input_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INPUT();
    List_of_port_identifiersContext *list_of_port_identifiers();
    Net_typeContext *net_type();
    antlr4::tree::TerminalNode *SIGNED();
    Range_Context *range_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Input_declarationContext* input_declaration();

  class  Output_declarationContext : public antlr4::ParserRuleContext {
  public:
    Output_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OUTPUT();
    List_of_port_identifiersContext *list_of_port_identifiers();
    Net_typeContext *net_type();
    antlr4::tree::TerminalNode *SIGNED();
    Range_Context *range_();
    antlr4::tree::TerminalNode *REG();
    List_of_variable_port_identifiersContext *list_of_variable_port_identifiers();
    Output_variable_typeContext *output_variable_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Output_declarationContext* output_declaration();

  class  Event_declarationContext : public antlr4::ParserRuleContext {
  public:
    Event_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EVENT();
    List_of_event_identifiersContext *list_of_event_identifiers();
    antlr4::tree::TerminalNode *SC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Event_declarationContext* event_declaration();

  class  Integer_declarationContext : public antlr4::ParserRuleContext {
  public:
    Integer_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    List_of_variable_identifiersContext *list_of_variable_identifiers();
    antlr4::tree::TerminalNode *SC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Integer_declarationContext* integer_declaration();

  class  Net_declarationContext : public antlr4::ParserRuleContext {
  public:
    Net_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_typeContext *net_type();
    List_of_net_identifiersContext *list_of_net_identifiers();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *SIGNED();
    Delay3Context *delay3();
    List_of_net_decl_assignmentsContext *list_of_net_decl_assignments();
    Drive_strengthContext *drive_strength();
    Range_Context *range_();
    antlr4::tree::TerminalNode *VECTORED();
    antlr4::tree::TerminalNode *SCALARED();
    antlr4::tree::TerminalNode *TRIREG();
    Charge_strengthContext *charge_strength();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Net_declarationContext* net_declaration();

  class  Real_declarationContext : public antlr4::ParserRuleContext {
  public:
    Real_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REAL();
    List_of_real_identifiersContext *list_of_real_identifiers();
    antlr4::tree::TerminalNode *SC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Real_declarationContext* real_declaration();

  class  Realtime_declarationContext : public antlr4::ParserRuleContext {
  public:
    Realtime_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REALTIME();
    List_of_real_identifiersContext *list_of_real_identifiers();
    antlr4::tree::TerminalNode *SC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Realtime_declarationContext* realtime_declaration();

  class  Reg_declarationContext : public antlr4::ParserRuleContext {
  public:
    Reg_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REG();
    List_of_variable_identifiersContext *list_of_variable_identifiers();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *SIGNED();
    Range_Context *range_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Reg_declarationContext* reg_declaration();

  class  Time_declarationContext : public antlr4::ParserRuleContext {
  public:
    Time_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TIME();
    List_of_variable_identifiersContext *list_of_variable_identifiers();
    antlr4::tree::TerminalNode *SC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Time_declarationContext* time_declaration();

  class  Net_typeContext : public antlr4::ParserRuleContext {
  public:
    Net_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUPPLYZERO();
    antlr4::tree::TerminalNode *SUPPLYONE();
    antlr4::tree::TerminalNode *TRI();
    antlr4::tree::TerminalNode *TRIAND();
    antlr4::tree::TerminalNode *TRIOR();
    antlr4::tree::TerminalNode *TRIZERO();
    antlr4::tree::TerminalNode *TRIONE();
    antlr4::tree::TerminalNode *UWIRE();
    antlr4::tree::TerminalNode *WIRE();
    antlr4::tree::TerminalNode *WAND();
    antlr4::tree::TerminalNode *WOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Net_typeContext* net_type();

  class  Output_variable_typeContext : public antlr4::ParserRuleContext {
  public:
    Output_variable_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *TIME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Output_variable_typeContext* output_variable_type();

  class  Real_typeContext : public antlr4::ParserRuleContext {
  public:
    Real_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Real_identifierContext *real_identifier();
    std::vector<DimensionContext *> dimension();
    DimensionContext* dimension(size_t i);
    antlr4::tree::TerminalNode *EQ();
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Real_typeContext* real_type();

  class  Variable_typeContext : public antlr4::ParserRuleContext {
  public:
    Variable_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_identifierContext *variable_identifier();
    std::vector<DimensionContext *> dimension();
    DimensionContext* dimension(size_t i);
    antlr4::tree::TerminalNode *EQ();
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Variable_typeContext* variable_type();

  class  Drive_strengthContext : public antlr4::ParserRuleContext {
  public:
    Drive_strengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    Strength0Context *strength0();
    antlr4::tree::TerminalNode *CO();
    Strength1Context *strength1();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *HIGHZONE();
    antlr4::tree::TerminalNode *HIGHZZERO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Drive_strengthContext* drive_strength();

  class  Strength0Context : public antlr4::ParserRuleContext {
  public:
    Strength0Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUPPLYZERO();
    antlr4::tree::TerminalNode *STRONGZERO();
    antlr4::tree::TerminalNode *PULLZERO();
    antlr4::tree::TerminalNode *WEAKZERO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Strength0Context* strength0();

  class  Strength1Context : public antlr4::ParserRuleContext {
  public:
    Strength1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUPPLYONE();
    antlr4::tree::TerminalNode *STRONGONE();
    antlr4::tree::TerminalNode *PULLONE();
    antlr4::tree::TerminalNode *WEAKONE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Strength1Context* strength1();

  class  Charge_strengthContext : public antlr4::ParserRuleContext {
  public:
    Charge_strengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *SMALL();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *MEDIUM();
    antlr4::tree::TerminalNode *LARGE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Charge_strengthContext* charge_strength();

  class  Delay3Context : public antlr4::ParserRuleContext {
  public:
    Delay3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HA();
    Delay_valueContext *delay_value();
    antlr4::tree::TerminalNode *LP();
    std::vector<Mintypmax_expressionContext *> mintypmax_expression();
    Mintypmax_expressionContext* mintypmax_expression(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Delay3Context* delay3();

  class  Delay2Context : public antlr4::ParserRuleContext {
  public:
    Delay2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HA();
    Delay_valueContext *delay_value();
    antlr4::tree::TerminalNode *LP();
    std::vector<Mintypmax_expressionContext *> mintypmax_expression();
    Mintypmax_expressionContext* mintypmax_expression(size_t i);
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *CO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Delay2Context* delay2();

  class  Delay_valueContext : public antlr4::ParserRuleContext {
  public:
    Delay_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unsigned_numberContext *unsigned_number();
    Real_numberContext *real_number();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Delay_valueContext* delay_value();

  class  List_of_defparam_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_defparam_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Defparam_assignmentContext *> defparam_assignment();
    Defparam_assignmentContext* defparam_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_defparam_assignmentsContext* list_of_defparam_assignments();

  class  List_of_event_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_event_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Event_idContext *> event_id();
    Event_idContext* event_id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_event_identifiersContext* list_of_event_identifiers();

  class  Event_idContext : public antlr4::ParserRuleContext {
  public:
    Event_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Event_identifierContext *event_identifier();
    std::vector<DimensionContext *> dimension();
    DimensionContext* dimension(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Event_idContext* event_id();

  class  List_of_net_decl_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_net_decl_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Net_decl_assignmentContext *> net_decl_assignment();
    Net_decl_assignmentContext* net_decl_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_net_decl_assignmentsContext* list_of_net_decl_assignments();

  class  List_of_net_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_net_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Net_idContext *> net_id();
    Net_idContext* net_id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_net_identifiersContext* list_of_net_identifiers();

  class  Net_idContext : public antlr4::ParserRuleContext {
  public:
    Net_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_identifierContext *net_identifier();
    std::vector<DimensionContext *> dimension();
    DimensionContext* dimension(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Net_idContext* net_id();

  class  List_of_param_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_param_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Param_assignmentContext *> param_assignment();
    Param_assignmentContext* param_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_param_assignmentsContext* list_of_param_assignments();

  class  List_of_port_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_port_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Port_identifierContext *> port_identifier();
    Port_identifierContext* port_identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_port_identifiersContext* list_of_port_identifiers();

  class  List_of_real_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_real_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Real_typeContext *> real_type();
    Real_typeContext* real_type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_real_identifiersContext* list_of_real_identifiers();

  class  List_of_specparam_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_specparam_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Specparam_assignmentContext *> specparam_assignment();
    Specparam_assignmentContext* specparam_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_specparam_assignmentsContext* list_of_specparam_assignments();

  class  List_of_variable_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_variable_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Variable_typeContext *> variable_type();
    Variable_typeContext* variable_type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_variable_identifiersContext* list_of_variable_identifiers();

  class  List_of_variable_port_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_variable_port_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Var_port_idContext *> var_port_id();
    Var_port_idContext* var_port_id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_variable_port_identifiersContext* list_of_variable_port_identifiers();

  class  Var_port_idContext : public antlr4::ParserRuleContext {
  public:
    Var_port_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_identifierContext *port_identifier();
    antlr4::tree::TerminalNode *EQ();
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Var_port_idContext* var_port_id();

  class  Defparam_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Defparam_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();
    antlr4::tree::TerminalNode *EQ();
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Defparam_assignmentContext* defparam_assignment();

  class  Net_decl_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Net_decl_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_identifierContext *net_identifier();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Net_decl_assignmentContext* net_decl_assignment();

  class  Param_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Param_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parameter_identifierContext *parameter_identifier();
    antlr4::tree::TerminalNode *EQ();
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Param_assignmentContext* param_assignment();

  class  Specparam_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Specparam_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Specparam_identifierContext *specparam_identifier();
    antlr4::tree::TerminalNode *EQ();
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();
    Pulse_control_specparamContext *pulse_control_specparam();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Specparam_assignmentContext* specparam_assignment();

  class  Pulse_control_specparamContext : public antlr4::ParserRuleContext {
  public:
    Pulse_control_specparamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PATHPULSEDL();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *LP();
    Reject_limit_valueContext *reject_limit_value();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *CO();
    Error_limit_valueContext *error_limit_value();
    Specify_input_terminal_descriptorContext *specify_input_terminal_descriptor();
    antlr4::tree::TerminalNode *DL();
    Specify_output_terminal_descriptorContext *specify_output_terminal_descriptor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pulse_control_specparamContext* pulse_control_specparam();

  class  Error_limit_valueContext : public antlr4::ParserRuleContext {
  public:
    Error_limit_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Limit_valueContext *limit_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Error_limit_valueContext* error_limit_value();

  class  Reject_limit_valueContext : public antlr4::ParserRuleContext {
  public:
    Reject_limit_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Limit_valueContext *limit_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Reject_limit_valueContext* reject_limit_value();

  class  Limit_valueContext : public antlr4::ParserRuleContext {
  public:
    Limit_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Limit_valueContext* limit_value();

  class  DimensionContext : public antlr4::ParserRuleContext {
  public:
    DimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LB();
    std::vector<Dimension_constant_expressionContext *> dimension_constant_expression();
    Dimension_constant_expressionContext* dimension_constant_expression(size_t i);
    antlr4::tree::TerminalNode *CL();
    antlr4::tree::TerminalNode *RB();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DimensionContext* dimension();

  class  Range_Context : public antlr4::ParserRuleContext {
  public:
    Range_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LB();
    Msb_constant_expressionContext *msb_constant_expression();
    antlr4::tree::TerminalNode *CL();
    Lsb_constant_expressionContext *lsb_constant_expression();
    antlr4::tree::TerminalNode *RB();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Range_Context* range_();

  class  Function_declarationContext : public antlr4::ParserRuleContext {
  public:
    Function_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    Function_identifierContext *function_identifier();
    antlr4::tree::TerminalNode *SC();
    Function_statementContext *function_statement();
    antlr4::tree::TerminalNode *ENDFUNCTION();
    antlr4::tree::TerminalNode *AUTOMATIC();
    Function_range_or_typeContext *function_range_or_type();
    std::vector<Function_item_declarationContext *> function_item_declaration();
    Function_item_declarationContext* function_item_declaration(size_t i);
    antlr4::tree::TerminalNode *LP();
    Function_port_listContext *function_port_list();
    antlr4::tree::TerminalNode *RP();
    std::vector<Block_item_declarationContext *> block_item_declaration();
    Block_item_declarationContext* block_item_declaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_declarationContext* function_declaration();

  class  Function_item_declarationContext : public antlr4::ParserRuleContext {
  public:
    Function_item_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Block_item_declarationContext *block_item_declaration();
    Tf_input_declarationContext *tf_input_declaration();
    antlr4::tree::TerminalNode *SC();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_item_declarationContext* function_item_declaration();

  class  Function_port_listContext : public antlr4::ParserRuleContext {
  public:
    Function_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Func_port_itemContext *> func_port_item();
    Func_port_itemContext* func_port_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_port_listContext* function_port_list();

  class  Func_port_itemContext : public antlr4::ParserRuleContext {
  public:
    Func_port_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tf_input_declarationContext *tf_input_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Func_port_itemContext* func_port_item();

  class  Function_range_or_typeContext : public antlr4::ParserRuleContext {
  public:
    Function_range_or_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Range_Context *range_();
    antlr4::tree::TerminalNode *SIGNED();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *REALTIME();
    antlr4::tree::TerminalNode *TIME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_range_or_typeContext* function_range_or_type();

  class  Task_declarationContext : public antlr4::ParserRuleContext {
  public:
    Task_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TASK();
    Task_identifierContext *task_identifier();
    antlr4::tree::TerminalNode *SC();
    Statement_or_nullContext *statement_or_null();
    antlr4::tree::TerminalNode *ENDTASK();
    antlr4::tree::TerminalNode *AUTOMATIC();
    std::vector<Task_item_declarationContext *> task_item_declaration();
    Task_item_declarationContext* task_item_declaration(size_t i);
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    Task_port_listContext *task_port_list();
    std::vector<Block_item_declarationContext *> block_item_declaration();
    Block_item_declarationContext* block_item_declaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Task_declarationContext* task_declaration();

  class  Task_item_declarationContext : public antlr4::ParserRuleContext {
  public:
    Task_item_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Block_item_declarationContext *block_item_declaration();
    Tf_input_declarationContext *tf_input_declaration();
    antlr4::tree::TerminalNode *SC();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Tf_output_declarationContext *tf_output_declaration();
    Tf_inout_declarationContext *tf_inout_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Task_item_declarationContext* task_item_declaration();

  class  Task_port_listContext : public antlr4::ParserRuleContext {
  public:
    Task_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Task_port_itemContext *> task_port_item();
    Task_port_itemContext* task_port_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Task_port_listContext* task_port_list();

  class  Task_port_itemContext : public antlr4::ParserRuleContext {
  public:
    Task_port_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tf_input_declarationContext *tf_input_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Tf_output_declarationContext *tf_output_declaration();
    Tf_inout_declarationContext *tf_inout_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Task_port_itemContext* task_port_item();

  class  Tf_input_declarationContext : public antlr4::ParserRuleContext {
  public:
    Tf_input_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INPUT();
    List_of_port_identifiersContext *list_of_port_identifiers();
    antlr4::tree::TerminalNode *REG();
    antlr4::tree::TerminalNode *SIGNED();
    Range_Context *range_();
    Task_port_typeContext *task_port_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tf_input_declarationContext* tf_input_declaration();

  class  Tf_output_declarationContext : public antlr4::ParserRuleContext {
  public:
    Tf_output_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OUTPUT();
    List_of_port_identifiersContext *list_of_port_identifiers();
    antlr4::tree::TerminalNode *REG();
    antlr4::tree::TerminalNode *SIGNED();
    Range_Context *range_();
    Task_port_typeContext *task_port_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tf_output_declarationContext* tf_output_declaration();

  class  Tf_inout_declarationContext : public antlr4::ParserRuleContext {
  public:
    Tf_inout_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INOUT();
    List_of_port_identifiersContext *list_of_port_identifiers();
    antlr4::tree::TerminalNode *REG();
    antlr4::tree::TerminalNode *SIGNED();
    Range_Context *range_();
    Task_port_typeContext *task_port_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tf_inout_declarationContext* tf_inout_declaration();

  class  Task_port_typeContext : public antlr4::ParserRuleContext {
  public:
    Task_port_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *REALTIME();
    antlr4::tree::TerminalNode *TIME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Task_port_typeContext* task_port_type();

  class  Block_item_declarationContext : public antlr4::ParserRuleContext {
  public:
    Block_item_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REG();
    List_of_block_variable_identifiersContext *list_of_block_variable_identifiers();
    antlr4::tree::TerminalNode *SC();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    antlr4::tree::TerminalNode *SIGNED();
    Range_Context *range_();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *REAL();
    List_of_block_real_identifiersContext *list_of_block_real_identifiers();
    antlr4::tree::TerminalNode *REALTIME();
    Event_declarationContext *event_declaration();
    Local_parameter_declarationContext *local_parameter_declaration();
    Parameter_declarationContext *parameter_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Block_item_declarationContext* block_item_declaration();

  class  List_of_block_variable_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_block_variable_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Block_variable_typeContext *> block_variable_type();
    Block_variable_typeContext* block_variable_type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_block_variable_identifiersContext* list_of_block_variable_identifiers();

  class  List_of_block_real_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_block_real_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Block_real_typeContext *> block_real_type();
    Block_real_typeContext* block_real_type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_block_real_identifiersContext* list_of_block_real_identifiers();

  class  Block_variable_typeContext : public antlr4::ParserRuleContext {
  public:
    Block_variable_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_identifierContext *variable_identifier();
    std::vector<DimensionContext *> dimension();
    DimensionContext* dimension(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Block_variable_typeContext* block_variable_type();

  class  Block_real_typeContext : public antlr4::ParserRuleContext {
  public:
    Block_real_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Real_identifierContext *real_identifier();
    std::vector<DimensionContext *> dimension();
    DimensionContext* dimension(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Block_real_typeContext* block_real_type();

  class  Gate_instantiationContext : public antlr4::ParserRuleContext {
  public:
    Gate_instantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cmos_switchtypeContext *cmos_switchtype();
    std::vector<Cmos_switch_instanceContext *> cmos_switch_instance();
    Cmos_switch_instanceContext* cmos_switch_instance(size_t i);
    antlr4::tree::TerminalNode *SC();
    Delay3Context *delay3();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Enable_gatetypeContext *enable_gatetype();
    std::vector<Enable_gate_instanceContext *> enable_gate_instance();
    Enable_gate_instanceContext* enable_gate_instance(size_t i);
    Drive_strengthContext *drive_strength();
    Mos_switchtypeContext *mos_switchtype();
    std::vector<Mos_switch_instanceContext *> mos_switch_instance();
    Mos_switch_instanceContext* mos_switch_instance(size_t i);
    N_input_gatetypeContext *n_input_gatetype();
    std::vector<N_input_gate_instanceContext *> n_input_gate_instance();
    N_input_gate_instanceContext* n_input_gate_instance(size_t i);
    Delay2Context *delay2();
    N_output_gatetypeContext *n_output_gatetype();
    std::vector<N_output_gate_instanceContext *> n_output_gate_instance();
    N_output_gate_instanceContext* n_output_gate_instance(size_t i);
    Pass_en_switchtypeContext *pass_en_switchtype();
    std::vector<Pass_enable_switch_instanceContext *> pass_enable_switch_instance();
    Pass_enable_switch_instanceContext* pass_enable_switch_instance(size_t i);
    Pass_switchtypeContext *pass_switchtype();
    std::vector<Pass_switch_instanceContext *> pass_switch_instance();
    Pass_switch_instanceContext* pass_switch_instance(size_t i);
    antlr4::tree::TerminalNode *PULLDOWN();
    std::vector<Pull_gate_instanceContext *> pull_gate_instance();
    Pull_gate_instanceContext* pull_gate_instance(size_t i);
    Pulldown_strengthContext *pulldown_strength();
    antlr4::tree::TerminalNode *PULLUP();
    Pullup_strengthContext *pullup_strength();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Gate_instantiationContext* gate_instantiation();

  class  Cmos_switch_instanceContext : public antlr4::ParserRuleContext {
  public:
    Cmos_switch_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    Output_terminalContext *output_terminal();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Input_terminalContext *input_terminal();
    Ncontrol_terminalContext *ncontrol_terminal();
    Pcontrol_terminalContext *pcontrol_terminal();
    antlr4::tree::TerminalNode *RP();
    Name_of_gate_instanceContext *name_of_gate_instance();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cmos_switch_instanceContext* cmos_switch_instance();

  class  Enable_gate_instanceContext : public antlr4::ParserRuleContext {
  public:
    Enable_gate_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    Output_terminalContext *output_terminal();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Input_terminalContext *input_terminal();
    Enable_terminalContext *enable_terminal();
    antlr4::tree::TerminalNode *RP();
    Name_of_gate_instanceContext *name_of_gate_instance();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Enable_gate_instanceContext* enable_gate_instance();

  class  Mos_switch_instanceContext : public antlr4::ParserRuleContext {
  public:
    Mos_switch_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    Output_terminalContext *output_terminal();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Input_terminalContext *input_terminal();
    Enable_terminalContext *enable_terminal();
    antlr4::tree::TerminalNode *RP();
    Name_of_gate_instanceContext *name_of_gate_instance();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Mos_switch_instanceContext* mos_switch_instance();

  class  N_input_gate_instanceContext : public antlr4::ParserRuleContext {
  public:
    N_input_gate_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    Output_terminalContext *output_terminal();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    std::vector<Input_terminalContext *> input_terminal();
    Input_terminalContext* input_terminal(size_t i);
    antlr4::tree::TerminalNode *RP();
    Name_of_gate_instanceContext *name_of_gate_instance();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  N_input_gate_instanceContext* n_input_gate_instance();

  class  N_output_gate_instanceContext : public antlr4::ParserRuleContext {
  public:
    N_output_gate_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<Output_terminalContext *> output_terminal();
    Output_terminalContext* output_terminal(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Input_terminalContext *input_terminal();
    antlr4::tree::TerminalNode *RP();
    Name_of_gate_instanceContext *name_of_gate_instance();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  N_output_gate_instanceContext* n_output_gate_instance();

  class  Pass_switch_instanceContext : public antlr4::ParserRuleContext {
  public:
    Pass_switch_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<Inout_terminalContext *> inout_terminal();
    Inout_terminalContext* inout_terminal(size_t i);
    antlr4::tree::TerminalNode *CO();
    antlr4::tree::TerminalNode *RP();
    Name_of_gate_instanceContext *name_of_gate_instance();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pass_switch_instanceContext* pass_switch_instance();

  class  Pass_enable_switch_instanceContext : public antlr4::ParserRuleContext {
  public:
    Pass_enable_switch_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<Inout_terminalContext *> inout_terminal();
    Inout_terminalContext* inout_terminal(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Enable_terminalContext *enable_terminal();
    antlr4::tree::TerminalNode *RP();
    Name_of_gate_instanceContext *name_of_gate_instance();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pass_enable_switch_instanceContext* pass_enable_switch_instance();

  class  Pull_gate_instanceContext : public antlr4::ParserRuleContext {
  public:
    Pull_gate_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    Output_terminalContext *output_terminal();
    antlr4::tree::TerminalNode *RP();
    Name_of_gate_instanceContext *name_of_gate_instance();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pull_gate_instanceContext* pull_gate_instance();

  class  Name_of_gate_instanceContext : public antlr4::ParserRuleContext {
  public:
    Name_of_gate_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Gate_instance_identifierContext *gate_instance_identifier();
    Range_Context *range_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Name_of_gate_instanceContext* name_of_gate_instance();

  class  Pulldown_strengthContext : public antlr4::ParserRuleContext {
  public:
    Pulldown_strengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    Strength0Context *strength0();
    antlr4::tree::TerminalNode *CO();
    Strength1Context *strength1();
    antlr4::tree::TerminalNode *RP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pulldown_strengthContext* pulldown_strength();

  class  Pullup_strengthContext : public antlr4::ParserRuleContext {
  public:
    Pullup_strengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    Strength0Context *strength0();
    antlr4::tree::TerminalNode *CO();
    Strength1Context *strength1();
    antlr4::tree::TerminalNode *RP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pullup_strengthContext* pullup_strength();

  class  Enable_terminalContext : public antlr4::ParserRuleContext {
  public:
    Enable_terminalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Enable_terminalContext* enable_terminal();

  class  Inout_terminalContext : public antlr4::ParserRuleContext {
  public:
    Inout_terminalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_lvalueContext *net_lvalue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Inout_terminalContext* inout_terminal();

  class  Input_terminalContext : public antlr4::ParserRuleContext {
  public:
    Input_terminalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Input_terminalContext* input_terminal();

  class  Ncontrol_terminalContext : public antlr4::ParserRuleContext {
  public:
    Ncontrol_terminalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ncontrol_terminalContext* ncontrol_terminal();

  class  Output_terminalContext : public antlr4::ParserRuleContext {
  public:
    Output_terminalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_lvalueContext *net_lvalue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Output_terminalContext* output_terminal();

  class  Pcontrol_terminalContext : public antlr4::ParserRuleContext {
  public:
    Pcontrol_terminalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pcontrol_terminalContext* pcontrol_terminal();

  class  Cmos_switchtypeContext : public antlr4::ParserRuleContext {
  public:
    Cmos_switchtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CMOS();
    antlr4::tree::TerminalNode *RCMOS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cmos_switchtypeContext* cmos_switchtype();

  class  Enable_gatetypeContext : public antlr4::ParserRuleContext {
  public:
    Enable_gatetypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BUFIFZERO();
    antlr4::tree::TerminalNode *BUFIFONE();
    antlr4::tree::TerminalNode *NOTIFZERO();
    antlr4::tree::TerminalNode *NOTIFONE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Enable_gatetypeContext* enable_gatetype();

  class  Mos_switchtypeContext : public antlr4::ParserRuleContext {
  public:
    Mos_switchtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NMOS();
    antlr4::tree::TerminalNode *PMOS();
    antlr4::tree::TerminalNode *RNMOS();
    antlr4::tree::TerminalNode *RPMOS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Mos_switchtypeContext* mos_switchtype();

  class  N_input_gatetypeContext : public antlr4::ParserRuleContext {
  public:
    N_input_gatetypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *NAND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *NOR();
    antlr4::tree::TerminalNode *XOR();
    antlr4::tree::TerminalNode *XNOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  N_input_gatetypeContext* n_input_gatetype();

  class  N_output_gatetypeContext : public antlr4::ParserRuleContext {
  public:
    N_output_gatetypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BUF();
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  N_output_gatetypeContext* n_output_gatetype();

  class  Pass_en_switchtypeContext : public antlr4::ParserRuleContext {
  public:
    Pass_en_switchtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRANIFZERO();
    antlr4::tree::TerminalNode *TRANIFONE();
    antlr4::tree::TerminalNode *RTRANIFONE();
    antlr4::tree::TerminalNode *RTRANIFZERO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pass_en_switchtypeContext* pass_en_switchtype();

  class  Pass_switchtypeContext : public antlr4::ParserRuleContext {
  public:
    Pass_switchtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRAN();
    antlr4::tree::TerminalNode *RTRAN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pass_switchtypeContext* pass_switchtype();

  class  Module_instantiationContext : public antlr4::ParserRuleContext {
  public:
    Module_instantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_identifierContext *module_identifier();
    std::vector<Module_instanceContext *> module_instance();
    Module_instanceContext* module_instance(size_t i);
    antlr4::tree::TerminalNode *SC();
    Parameter_value_assignmentContext *parameter_value_assignment();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_instantiationContext* module_instantiation();

  class  Parameter_value_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Parameter_value_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HA();
    antlr4::tree::TerminalNode *LP();
    List_of_parameter_assignmentsContext *list_of_parameter_assignments();
    antlr4::tree::TerminalNode *RP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Parameter_value_assignmentContext* parameter_value_assignment();

  class  List_of_parameter_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_parameter_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Ordered_parameter_assignmentContext *> ordered_parameter_assignment();
    Ordered_parameter_assignmentContext* ordered_parameter_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    std::vector<Named_parameter_assignmentContext *> named_parameter_assignment();
    Named_parameter_assignmentContext* named_parameter_assignment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_parameter_assignmentsContext* list_of_parameter_assignments();

  class  Ordered_parameter_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Ordered_parameter_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ordered_parameter_assignmentContext* ordered_parameter_assignment();

  class  Named_parameter_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Named_parameter_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DT();
    Parameter_identifierContext *parameter_identifier();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    Mintypmax_expressionContext *mintypmax_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Named_parameter_assignmentContext* named_parameter_assignment();

  class  Module_instanceContext : public antlr4::ParserRuleContext {
  public:
    Module_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Name_of_module_instanceContext *name_of_module_instance();
    antlr4::tree::TerminalNode *LP();
    List_of_port_connectionsContext *list_of_port_connections();
    antlr4::tree::TerminalNode *RP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_instanceContext* module_instance();

  class  Name_of_module_instanceContext : public antlr4::ParserRuleContext {
  public:
    Name_of_module_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_instance_identifierContext *module_instance_identifier();
    Range_Context *range_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Name_of_module_instanceContext* name_of_module_instance();

  class  List_of_port_connectionsContext : public antlr4::ParserRuleContext {
  public:
    List_of_port_connectionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Ordered_port_connectionContext *> ordered_port_connection();
    Ordered_port_connectionContext* ordered_port_connection(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    std::vector<Named_port_connectionContext *> named_port_connection();
    Named_port_connectionContext* named_port_connection(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_port_connectionsContext* list_of_port_connections();

  class  Ordered_port_connectionContext : public antlr4::ParserRuleContext {
  public:
    Ordered_port_connectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ordered_port_connectionContext* ordered_port_connection();

  class  Named_port_connectionContext : public antlr4::ParserRuleContext {
  public:
    Named_port_connectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DT();
    Port_identifierContext *port_identifier();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Named_port_connectionContext* named_port_connection();

  class  Generate_regionContext : public antlr4::ParserRuleContext {
  public:
    Generate_regionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GENERATE();
    antlr4::tree::TerminalNode *ENDGENERATE();
    std::vector<Module_or_generate_itemContext *> module_or_generate_item();
    Module_or_generate_itemContext* module_or_generate_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Generate_regionContext* generate_region();

  class  Genvar_declarationContext : public antlr4::ParserRuleContext {
  public:
    Genvar_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GENVAR();
    List_of_genvar_identifiersContext *list_of_genvar_identifiers();
    antlr4::tree::TerminalNode *SC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Genvar_declarationContext* genvar_declaration();

  class  List_of_genvar_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_genvar_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Genvar_identifierContext *> genvar_identifier();
    Genvar_identifierContext* genvar_identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_genvar_identifiersContext* list_of_genvar_identifiers();

  class  Loop_generate_constructContext : public antlr4::ParserRuleContext {
  public:
    Loop_generate_constructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *LP();
    Genvar_initializationContext *genvar_initialization();
    std::vector<antlr4::tree::TerminalNode *> SC();
    antlr4::tree::TerminalNode* SC(size_t i);
    Genvar_expressionContext *genvar_expression();
    Genvar_iterationContext *genvar_iteration();
    antlr4::tree::TerminalNode *RP();
    Generate_blockContext *generate_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Loop_generate_constructContext* loop_generate_construct();

  class  Genvar_initializationContext : public antlr4::ParserRuleContext {
  public:
    Genvar_initializationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Genvar_identifierContext *genvar_identifier();
    antlr4::tree::TerminalNode *EQ();
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Genvar_initializationContext* genvar_initialization();

  class  Genvar_expressionContext : public antlr4::ParserRuleContext {
  public:
    Genvar_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Genvar_expressionContext* genvar_expression();

  class  Genvar_iterationContext : public antlr4::ParserRuleContext {
  public:
    Genvar_iterationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Genvar_identifierContext *genvar_identifier();
    antlr4::tree::TerminalNode *EQ();
    Genvar_expressionContext *genvar_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Genvar_iterationContext* genvar_iteration();

  class  Conditional_generate_constructContext : public antlr4::ParserRuleContext {
  public:
    Conditional_generate_constructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    If_generate_constructContext *if_generate_construct();
    Case_generate_constructContext *case_generate_construct();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Conditional_generate_constructContext* conditional_generate_construct();

  class  If_generate_constructContext : public antlr4::ParserRuleContext {
  public:
    If_generate_constructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LP();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *RP();
    std::vector<Generate_block_or_nullContext *> generate_block_or_null();
    Generate_block_or_nullContext* generate_block_or_null(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  If_generate_constructContext* if_generate_construct();

  class  Case_generate_constructContext : public antlr4::ParserRuleContext {
  public:
    Case_generate_constructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *LP();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *ENDCASE();
    std::vector<Case_generate_itemContext *> case_generate_item();
    Case_generate_itemContext* case_generate_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Case_generate_constructContext* case_generate_construct();

  class  Case_generate_itemContext : public antlr4::ParserRuleContext {
  public:
    Case_generate_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    antlr4::tree::TerminalNode *CL();
    Generate_block_or_nullContext *generate_block_or_null();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Case_generate_itemContext* case_generate_item();

  class  Generate_blockContext : public antlr4::ParserRuleContext {
  public:
    Generate_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Module_or_generate_itemContext *> module_or_generate_item();
    Module_or_generate_itemContext* module_or_generate_item(size_t i);
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    Generate_block_nameContext *generate_block_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Generate_blockContext* generate_block();

  class  Generate_block_nameContext : public antlr4::ParserRuleContext {
  public:
    Generate_block_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CL();
    Generate_block_identifierContext *generate_block_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Generate_block_nameContext* generate_block_name();

  class  Generate_block_or_nullContext : public antlr4::ParserRuleContext {
  public:
    Generate_block_or_nullContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Generate_blockContext *generate_block();
    antlr4::tree::TerminalNode *SC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Generate_block_or_nullContext* generate_block_or_null();

  class  Udp_declarationContext : public antlr4::ParserRuleContext {
  public:
    Udp_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRIMITIVE();
    Udp_identifierContext *udp_identifier();
    antlr4::tree::TerminalNode *LP();
    Udp_port_listContext *udp_port_list();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    Udp_bodyContext *udp_body();
    antlr4::tree::TerminalNode *ENDPRIMITIVE();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    std::vector<Udp_port_declarationContext *> udp_port_declaration();
    Udp_port_declarationContext* udp_port_declaration(size_t i);
    Udp_declaration_port_listContext *udp_declaration_port_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Udp_declarationContext* udp_declaration();

  class  Udp_port_listContext : public antlr4::ParserRuleContext {
  public:
    Udp_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Output_port_identifierContext *output_port_identifier();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    std::vector<Input_port_identifierContext *> input_port_identifier();
    Input_port_identifierContext* input_port_identifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Udp_port_listContext* udp_port_list();

  class  Udp_declaration_port_listContext : public antlr4::ParserRuleContext {
  public:
    Udp_declaration_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Udp_output_declarationContext *udp_output_declaration();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    std::vector<Udp_input_declarationContext *> udp_input_declaration();
    Udp_input_declarationContext* udp_input_declaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Udp_declaration_port_listContext* udp_declaration_port_list();

  class  Udp_port_declarationContext : public antlr4::ParserRuleContext {
  public:
    Udp_port_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Udp_output_declarationContext *udp_output_declaration();
    antlr4::tree::TerminalNode *SC();
    Udp_input_declarationContext *udp_input_declaration();
    Udp_reg_declarationContext *udp_reg_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Udp_port_declarationContext* udp_port_declaration();

  class  Udp_output_declarationContext : public antlr4::ParserRuleContext {
  public:
    Udp_output_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OUTPUT();
    Port_identifierContext *port_identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    antlr4::tree::TerminalNode *REG();
    antlr4::tree::TerminalNode *EQ();
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Udp_output_declarationContext* udp_output_declaration();

  class  Udp_input_declarationContext : public antlr4::ParserRuleContext {
  public:
    Udp_input_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INPUT();
    List_of_port_identifiersContext *list_of_port_identifiers();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Udp_input_declarationContext* udp_input_declaration();

  class  Udp_reg_declarationContext : public antlr4::ParserRuleContext {
  public:
    Udp_reg_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REG();
    Variable_identifierContext *variable_identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Udp_reg_declarationContext* udp_reg_declaration();

  class  Udp_bodyContext : public antlr4::ParserRuleContext {
  public:
    Udp_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Combinational_bodyContext *combinational_body();
    Sequential_bodyContext *sequential_body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Udp_bodyContext* udp_body();

  class  Combinational_bodyContext : public antlr4::ParserRuleContext {
  public:
    Combinational_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *ENDTABLE();
    std::vector<Combinational_entryContext *> combinational_entry();
    Combinational_entryContext* combinational_entry(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Combinational_bodyContext* combinational_body();

  class  Combinational_entryContext : public antlr4::ParserRuleContext {
  public:
    Combinational_entryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Level_input_listContext *level_input_list();
    antlr4::tree::TerminalNode *CL();
    Output_symbolContext *output_symbol();
    antlr4::tree::TerminalNode *SC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Combinational_entryContext* combinational_entry();

  class  Sequential_bodyContext : public antlr4::ParserRuleContext {
  public:
    Sequential_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *ENDTABLE();
    Udp_initial_statementContext *udp_initial_statement();
    std::vector<Sequential_entryContext *> sequential_entry();
    Sequential_entryContext* sequential_entry(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Sequential_bodyContext* sequential_body();

  class  Udp_initial_statementContext : public antlr4::ParserRuleContext {
  public:
    Udp_initial_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INITIAL();
    Output_port_identifierContext *output_port_identifier();
    antlr4::tree::TerminalNode *EQ();
    Init_valContext *init_val();
    antlr4::tree::TerminalNode *SC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Udp_initial_statementContext* udp_initial_statement();

  class  Init_valContext : public antlr4::ParserRuleContext {
  public:
    Init_valContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Binary_numberContext *binary_number();
    Unsigned_numberContext *unsigned_number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Init_valContext* init_val();

  class  Sequential_entryContext : public antlr4::ParserRuleContext {
  public:
    Sequential_entryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Seq_input_listContext *seq_input_list();
    std::vector<antlr4::tree::TerminalNode *> CL();
    antlr4::tree::TerminalNode* CL(size_t i);
    Current_stateContext *current_state();
    Next_stateContext *next_state();
    antlr4::tree::TerminalNode *SC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Sequential_entryContext* sequential_entry();

  class  Seq_input_listContext : public antlr4::ParserRuleContext {
  public:
    Seq_input_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Level_input_listContext *level_input_list();
    Edge_input_listContext *edge_input_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_input_listContext* seq_input_list();

  class  Level_input_listContext : public antlr4::ParserRuleContext {
  public:
    Level_input_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Level_symbolContext *> level_symbol();
    Level_symbolContext* level_symbol(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Level_input_listContext* level_input_list();

  class  Edge_input_listContext : public antlr4::ParserRuleContext {
  public:
    Edge_input_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Edge_indicatorContext *edge_indicator();
    std::vector<Level_symbolContext *> level_symbol();
    Level_symbolContext* level_symbol(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Edge_input_listContext* edge_input_list();

  class  Edge_indicatorContext : public antlr4::ParserRuleContext {
  public:
    Edge_indicatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<Level_symbolContext *> level_symbol();
    Level_symbolContext* level_symbol(size_t i);
    antlr4::tree::TerminalNode *RP();
    Edge_symbolContext *edge_symbol();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Edge_indicatorContext* edge_indicator();

  class  Current_stateContext : public antlr4::ParserRuleContext {
  public:
    Current_stateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Level_symbolContext *level_symbol();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Current_stateContext* current_state();

  class  Next_stateContext : public antlr4::ParserRuleContext {
  public:
    Next_stateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Output_symbolContext *output_symbol();
    antlr4::tree::TerminalNode *MI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Next_stateContext* next_state();

  class  Output_symbolContext : public antlr4::ParserRuleContext {
  public:
    Output_symbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OUTPUT_OR_LEVEL_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Output_symbolContext* output_symbol();

  class  Level_symbolContext : public antlr4::ParserRuleContext {
  public:
    Level_symbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEVEL_ONLY_SYMBOL();
    antlr4::tree::TerminalNode *OUTPUT_OR_LEVEL_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Level_symbolContext* level_symbol();

  class  Edge_symbolContext : public antlr4::ParserRuleContext {
  public:
    Edge_symbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EDGE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Edge_symbolContext* edge_symbol();

  class  Udp_instantiationContext : public antlr4::ParserRuleContext {
  public:
    Udp_instantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Udp_identifierContext *udp_identifier();
    std::vector<Udp_instanceContext *> udp_instance();
    Udp_instanceContext* udp_instance(size_t i);
    antlr4::tree::TerminalNode *SC();
    Drive_strengthContext *drive_strength();
    Delay2Context *delay2();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Udp_instantiationContext* udp_instantiation();

  class  Udp_instanceContext : public antlr4::ParserRuleContext {
  public:
    Udp_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    Output_terminalContext *output_terminal();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    std::vector<Input_terminalContext *> input_terminal();
    Input_terminalContext* input_terminal(size_t i);
    antlr4::tree::TerminalNode *RP();
    Name_of_udp_instanceContext *name_of_udp_instance();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Udp_instanceContext* udp_instance();

  class  Name_of_udp_instanceContext : public antlr4::ParserRuleContext {
  public:
    Name_of_udp_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Udp_instance_identifierContext *udp_instance_identifier();
    Range_Context *range_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Name_of_udp_instanceContext* name_of_udp_instance();

  class  Continuous_assignContext : public antlr4::ParserRuleContext {
  public:
    Continuous_assignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();
    List_of_net_assignmentsContext *list_of_net_assignments();
    antlr4::tree::TerminalNode *SC();
    Drive_strengthContext *drive_strength();
    Delay3Context *delay3();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Continuous_assignContext* continuous_assign();

  class  List_of_net_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_net_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Net_assignmentContext *> net_assignment();
    Net_assignmentContext* net_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_net_assignmentsContext* list_of_net_assignments();

  class  Net_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Net_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_lvalueContext *net_lvalue();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Net_assignmentContext* net_assignment();

  class  Initial_constructContext : public antlr4::ParserRuleContext {
  public:
    Initial_constructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INITIAL();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Initial_constructContext* initial_construct();

  class  Always_constructContext : public antlr4::ParserRuleContext {
  public:
    Always_constructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALWAYS();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Always_constructContext* always_construct();

  class  Blocking_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Blocking_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_lvalueContext *variable_lvalue();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();
    Delay_or_event_controlContext *delay_or_event_control();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Blocking_assignmentContext* blocking_assignment();

  class  Nonblocking_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Nonblocking_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_lvalueContext *variable_lvalue();
    antlr4::tree::TerminalNode *LTEQ();
    ExpressionContext *expression();
    Delay_or_event_controlContext *delay_or_event_control();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Nonblocking_assignmentContext* nonblocking_assignment();

  class  Procedural_continuous_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    Procedural_continuous_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();
    Variable_assignmentContext *variable_assignment();
    antlr4::tree::TerminalNode *DEASSIGN();
    Variable_lvalueContext *variable_lvalue();
    antlr4::tree::TerminalNode *FORCE();
    antlr4::tree::TerminalNode *RELEASE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Procedural_continuous_assignmentsContext* procedural_continuous_assignments();

  class  Variable_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Variable_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_lvalueContext *variable_lvalue();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Variable_assignmentContext* variable_assignment();

  class  Par_blockContext : public antlr4::ParserRuleContext {
  public:
    Par_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FORK();
    antlr4::tree::TerminalNode *JOIN();
    Block_nameContext *block_name();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<Block_item_declarationContext *> block_item_declaration();
    Block_item_declarationContext* block_item_declaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Par_blockContext* par_block();

  class  Block_nameContext : public antlr4::ParserRuleContext {
  public:
    Block_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CL();
    Block_identifierContext *block_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Block_nameContext* block_name();

  class  Seq_blockContext : public antlr4::ParserRuleContext {
  public:
    Seq_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    Block_nameContext *block_name();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<Block_item_declarationContext *> block_item_declaration();
    Block_item_declarationContext* block_item_declaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_blockContext* seq_block();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Blocking_assignmentContext *blocking_assignment();
    antlr4::tree::TerminalNode *SC();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Case_statementContext *case_statement();
    Conditional_statementContext *conditional_statement();
    Disable_statementContext *disable_statement();
    Event_triggerContext *event_trigger();
    Loop_statementContext *loop_statement();
    Nonblocking_assignmentContext *nonblocking_assignment();
    Par_blockContext *par_block();
    Procedural_continuous_assignmentsContext *procedural_continuous_assignments();
    Procedural_timing_control_statementContext *procedural_timing_control_statement();
    Seq_blockContext *seq_block();
    System_task_enableContext *system_task_enable();
    Task_enableContext *task_enable();
    Wait_statementContext *wait_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  Statement_or_nullContext : public antlr4::ParserRuleContext {
  public:
    Statement_or_nullContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    antlr4::tree::TerminalNode *SC();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Statement_or_nullContext* statement_or_null();

  class  Function_statementContext : public antlr4::ParserRuleContext {
  public:
    Function_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_statementContext* function_statement();

  class  Delay_controlContext : public antlr4::ParserRuleContext {
  public:
    Delay_controlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HA();
    Delay_valueContext *delay_value();
    antlr4::tree::TerminalNode *LP();
    Mintypmax_expressionContext *mintypmax_expression();
    antlr4::tree::TerminalNode *RP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Delay_controlContext* delay_control();

  class  Delay_or_event_controlContext : public antlr4::ParserRuleContext {
  public:
    Delay_or_event_controlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Delay_controlContext *delay_control();
    Event_controlContext *event_control();
    antlr4::tree::TerminalNode *REPEAT();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Delay_or_event_controlContext* delay_or_event_control();

  class  Disable_statementContext : public antlr4::ParserRuleContext {
  public:
    Disable_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISABLE();
    Hierarchical_identifierContext *hierarchical_identifier();
    antlr4::tree::TerminalNode *SC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Disable_statementContext* disable_statement();

  class  Event_controlContext : public antlr4::ParserRuleContext {
  public:
    Event_controlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT();
    Hierarchical_identifierContext *hierarchical_identifier();
    antlr4::tree::TerminalNode *LP();
    Event_expressionContext *event_expression();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Event_controlContext* event_control();

  class  Event_triggerContext : public antlr4::ParserRuleContext {
  public:
    Event_triggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MIGT();
    Hierarchical_identifierContext *hierarchical_identifier();
    antlr4::tree::TerminalNode *SC();
    Bit_selectContext *bit_select();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Event_triggerContext* event_trigger();

  class  Event_expressionContext : public antlr4::ParserRuleContext {
  public:
    Event_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *POSEDGE();
    antlr4::tree::TerminalNode *NEGEDGE();
    std::vector<Event_expressionContext *> event_expression();
    Event_expressionContext* event_expression(size_t i);
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *CO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Event_expressionContext* event_expression();
  Event_expressionContext* event_expression(int precedence);
  class  Procedural_timing_controlContext : public antlr4::ParserRuleContext {
  public:
    Procedural_timing_controlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Delay_controlContext *delay_control();
    Event_controlContext *event_control();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Procedural_timing_controlContext* procedural_timing_control();

  class  Procedural_timing_control_statementContext : public antlr4::ParserRuleContext {
  public:
    Procedural_timing_control_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Procedural_timing_controlContext *procedural_timing_control();
    Statement_or_nullContext *statement_or_null();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Procedural_timing_control_statementContext* procedural_timing_control_statement();

  class  Wait_statementContext : public antlr4::ParserRuleContext {
  public:
    Wait_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    Statement_or_nullContext *statement_or_null();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Wait_statementContext* wait_statement();

  class  Conditional_statementContext : public antlr4::ParserRuleContext {
  public:
    Conditional_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    std::vector<Statement_or_nullContext *> statement_or_null();
    Statement_or_nullContext* statement_or_null(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Conditional_statementContext* conditional_statement();

  class  Case_statementContext : public antlr4::ParserRuleContext {
  public:
    Case_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *ENDCASE();
    std::vector<Case_itemContext *> case_item();
    Case_itemContext* case_item(size_t i);
    antlr4::tree::TerminalNode *CASEZ();
    antlr4::tree::TerminalNode *CASEX();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Case_statementContext* case_statement();

  class  Case_itemContext : public antlr4::ParserRuleContext {
  public:
    Case_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *CL();
    Statement_or_nullContext *statement_or_null();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Case_itemContext* case_item();

  class  Loop_statementContext : public antlr4::ParserRuleContext {
  public:
    Loop_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOREVER();
    StatementContext *statement();
    antlr4::tree::TerminalNode *REPEAT();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *FOR();
    std::vector<Variable_assignmentContext *> variable_assignment();
    Variable_assignmentContext* variable_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SC();
    antlr4::tree::TerminalNode* SC(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Loop_statementContext* loop_statement();

  class  System_task_enableContext : public antlr4::ParserRuleContext {
  public:
    System_task_enableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    System_task_identifierContext *system_task_identifier();
    antlr4::tree::TerminalNode *SC();
    Sys_task_en_port_listContext *sys_task_en_port_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  System_task_enableContext* system_task_enable();

  class  Sys_task_en_port_listContext : public antlr4::ParserRuleContext {
  public:
    Sys_task_en_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<Sys_task_en_port_itemContext *> sys_task_en_port_item();
    Sys_task_en_port_itemContext* sys_task_en_port_item(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Sys_task_en_port_listContext* sys_task_en_port_list();

  class  Sys_task_en_port_itemContext : public antlr4::ParserRuleContext {
  public:
    Sys_task_en_port_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Sys_task_en_port_itemContext* sys_task_en_port_item();

  class  Task_enableContext : public antlr4::ParserRuleContext {
  public:
    Task_enableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();
    antlr4::tree::TerminalNode *SC();
    Task_en_port_listContext *task_en_port_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Task_enableContext* task_enable();

  class  Task_en_port_listContext : public antlr4::ParserRuleContext {
  public:
    Task_en_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Task_en_port_listContext* task_en_port_list();

  class  Specify_blockContext : public antlr4::ParserRuleContext {
  public:
    Specify_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SPECIFY();
    antlr4::tree::TerminalNode *ENDSPECIFY();
    std::vector<Specify_itemContext *> specify_item();
    Specify_itemContext* specify_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Specify_blockContext* specify_block();

  class  Specify_itemContext : public antlr4::ParserRuleContext {
  public:
    Specify_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Specparam_declarationContext *specparam_declaration();
    Pulsestyle_declarationContext *pulsestyle_declaration();
    Showcancelled_declarationContext *showcancelled_declaration();
    Path_declarationContext *path_declaration();
    System_timing_checkContext *system_timing_check();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Specify_itemContext* specify_item();

  class  Pulsestyle_declarationContext : public antlr4::ParserRuleContext {
  public:
    Pulsestyle_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PULSESTYLE_ONEVENT();
    List_of_path_outputsContext *list_of_path_outputs();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *PULSESTYLE_ONDETECT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pulsestyle_declarationContext* pulsestyle_declaration();

  class  Showcancelled_declarationContext : public antlr4::ParserRuleContext {
  public:
    Showcancelled_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOWCANCELLED();
    List_of_path_outputsContext *list_of_path_outputs();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *NOSHOWCANCELLED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Showcancelled_declarationContext* showcancelled_declaration();

  class  Path_declarationContext : public antlr4::ParserRuleContext {
  public:
    Path_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_path_declarationContext *simple_path_declaration();
    antlr4::tree::TerminalNode *SC();
    Edge_sensitive_path_declarationContext *edge_sensitive_path_declaration();
    State_dependent_path_declarationContext *state_dependent_path_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Path_declarationContext* path_declaration();

  class  Simple_path_declarationContext : public antlr4::ParserRuleContext {
  public:
    Simple_path_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parallel_path_descriptionContext *parallel_path_description();
    antlr4::tree::TerminalNode *EQ();
    Path_delay_valueContext *path_delay_value();
    Full_path_descriptionContext *full_path_description();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Simple_path_declarationContext* simple_path_declaration();

  class  Parallel_path_descriptionContext : public antlr4::ParserRuleContext {
  public:
    Parallel_path_descriptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    Specify_input_terminal_descriptorContext *specify_input_terminal_descriptor();
    antlr4::tree::TerminalNode *EQGT();
    Specify_output_terminal_descriptorContext *specify_output_terminal_descriptor();
    antlr4::tree::TerminalNode *RP();
    Polarity_operatorContext *polarity_operator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Parallel_path_descriptionContext* parallel_path_description();

  class  Full_path_descriptionContext : public antlr4::ParserRuleContext {
  public:
    Full_path_descriptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    List_of_path_inputsContext *list_of_path_inputs();
    antlr4::tree::TerminalNode *ASGT();
    List_of_path_outputsContext *list_of_path_outputs();
    antlr4::tree::TerminalNode *RP();
    Polarity_operatorContext *polarity_operator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Full_path_descriptionContext* full_path_description();

  class  List_of_path_inputsContext : public antlr4::ParserRuleContext {
  public:
    List_of_path_inputsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Specify_input_terminal_descriptorContext *> specify_input_terminal_descriptor();
    Specify_input_terminal_descriptorContext* specify_input_terminal_descriptor(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_path_inputsContext* list_of_path_inputs();

  class  List_of_path_outputsContext : public antlr4::ParserRuleContext {
  public:
    List_of_path_outputsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Specify_output_terminal_descriptorContext *> specify_output_terminal_descriptor();
    Specify_output_terminal_descriptorContext* specify_output_terminal_descriptor(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_path_outputsContext* list_of_path_outputs();

  class  Specify_input_terminal_descriptorContext : public antlr4::ParserRuleContext {
  public:
    Specify_input_terminal_descriptorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Input_identifierContext *input_identifier();
    antlr4::tree::TerminalNode *LB();
    Constant_range_expressionContext *constant_range_expression();
    antlr4::tree::TerminalNode *RB();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Specify_input_terminal_descriptorContext* specify_input_terminal_descriptor();

  class  Specify_output_terminal_descriptorContext : public antlr4::ParserRuleContext {
  public:
    Specify_output_terminal_descriptorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Output_identifierContext *output_identifier();
    antlr4::tree::TerminalNode *LB();
    Constant_range_expressionContext *constant_range_expression();
    antlr4::tree::TerminalNode *RB();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Specify_output_terminal_descriptorContext* specify_output_terminal_descriptor();

  class  Input_identifierContext : public antlr4::ParserRuleContext {
  public:
    Input_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_identifierContext *port_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Input_identifierContext* input_identifier();

  class  Output_identifierContext : public antlr4::ParserRuleContext {
  public:
    Output_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_identifierContext *port_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Output_identifierContext* output_identifier();

  class  Path_delay_valueContext : public antlr4::ParserRuleContext {
  public:
    Path_delay_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_path_delay_expressionsContext *list_of_path_delay_expressions();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Path_delay_valueContext* path_delay_value();

  class  List_of_path_delay_expressionsContext : public antlr4::ParserRuleContext {
  public:
    List_of_path_delay_expressionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    T_path_delay_expressionContext *t_path_delay_expression();
    Trise_path_delay_expressionContext *trise_path_delay_expression();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Tfall_path_delay_expressionContext *tfall_path_delay_expression();
    Tz_path_delay_expressionContext *tz_path_delay_expression();
    T01_path_delay_expressionContext *t01_path_delay_expression();
    T10_path_delay_expressionContext *t10_path_delay_expression();
    T0z_path_delay_expressionContext *t0z_path_delay_expression();
    Tz1_path_delay_expressionContext *tz1_path_delay_expression();
    T1z_path_delay_expressionContext *t1z_path_delay_expression();
    Tz0_path_delay_expressionContext *tz0_path_delay_expression();
    T0x_path_delay_expressionContext *t0x_path_delay_expression();
    Tx1_path_delay_expressionContext *tx1_path_delay_expression();
    T1x_path_delay_expressionContext *t1x_path_delay_expression();
    Tx0_path_delay_expressionContext *tx0_path_delay_expression();
    Txz_path_delay_expressionContext *txz_path_delay_expression();
    Tzx_path_delay_expressionContext *tzx_path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_path_delay_expressionsContext* list_of_path_delay_expressions();

  class  T_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    T_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  T_path_delay_expressionContext* t_path_delay_expression();

  class  Trise_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Trise_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Trise_path_delay_expressionContext* trise_path_delay_expression();

  class  Tfall_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Tfall_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tfall_path_delay_expressionContext* tfall_path_delay_expression();

  class  Tz_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Tz_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tz_path_delay_expressionContext* tz_path_delay_expression();

  class  T01_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    T01_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  T01_path_delay_expressionContext* t01_path_delay_expression();

  class  T10_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    T10_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  T10_path_delay_expressionContext* t10_path_delay_expression();

  class  T0z_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    T0z_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  T0z_path_delay_expressionContext* t0z_path_delay_expression();

  class  Tz1_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Tz1_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tz1_path_delay_expressionContext* tz1_path_delay_expression();

  class  T1z_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    T1z_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  T1z_path_delay_expressionContext* t1z_path_delay_expression();

  class  Tz0_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Tz0_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tz0_path_delay_expressionContext* tz0_path_delay_expression();

  class  T0x_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    T0x_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  T0x_path_delay_expressionContext* t0x_path_delay_expression();

  class  Tx1_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Tx1_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tx1_path_delay_expressionContext* tx1_path_delay_expression();

  class  T1x_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    T1x_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  T1x_path_delay_expressionContext* t1x_path_delay_expression();

  class  Tx0_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Tx0_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tx0_path_delay_expressionContext* tx0_path_delay_expression();

  class  Txz_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Txz_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Txz_path_delay_expressionContext* txz_path_delay_expression();

  class  Tzx_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Tzx_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tzx_path_delay_expressionContext* tzx_path_delay_expression();

  class  Path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Path_delay_expressionContext* path_delay_expression();

  class  Edge_sensitive_path_declarationContext : public antlr4::ParserRuleContext {
  public:
    Edge_sensitive_path_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parallel_edge_sensitive_path_descriptionContext *parallel_edge_sensitive_path_description();
    antlr4::tree::TerminalNode *EQ();
    Path_delay_valueContext *path_delay_value();
    Full_edge_sensitive_path_descriptionContext *full_edge_sensitive_path_description();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Edge_sensitive_path_declarationContext* edge_sensitive_path_declaration();

  class  Parallel_edge_sensitive_path_descriptionContext : public antlr4::ParserRuleContext {
  public:
    Parallel_edge_sensitive_path_descriptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LP();
    antlr4::tree::TerminalNode* LP(size_t i);
    Specify_input_terminal_descriptorContext *specify_input_terminal_descriptor();
    antlr4::tree::TerminalNode *EQGT();
    Specify_output_terminal_descriptorContext *specify_output_terminal_descriptor();
    antlr4::tree::TerminalNode *CL();
    Data_source_expressionContext *data_source_expression();
    std::vector<antlr4::tree::TerminalNode *> RP();
    antlr4::tree::TerminalNode* RP(size_t i);
    Edge_identifierContext *edge_identifier();
    Polarity_operatorContext *polarity_operator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Parallel_edge_sensitive_path_descriptionContext* parallel_edge_sensitive_path_description();

  class  Full_edge_sensitive_path_descriptionContext : public antlr4::ParserRuleContext {
  public:
    Full_edge_sensitive_path_descriptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LP();
    antlr4::tree::TerminalNode* LP(size_t i);
    List_of_path_inputsContext *list_of_path_inputs();
    antlr4::tree::TerminalNode *ASGT();
    List_of_path_outputsContext *list_of_path_outputs();
    antlr4::tree::TerminalNode *CL();
    Data_source_expressionContext *data_source_expression();
    std::vector<antlr4::tree::TerminalNode *> RP();
    antlr4::tree::TerminalNode* RP(size_t i);
    Edge_identifierContext *edge_identifier();
    Polarity_operatorContext *polarity_operator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Full_edge_sensitive_path_descriptionContext* full_edge_sensitive_path_description();

  class  Data_source_expressionContext : public antlr4::ParserRuleContext {
  public:
    Data_source_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Data_source_expressionContext* data_source_expression();

  class  Edge_identifierContext : public antlr4::ParserRuleContext {
  public:
    Edge_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POSEDGE();
    antlr4::tree::TerminalNode *NEGEDGE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Edge_identifierContext* edge_identifier();

  class  State_dependent_path_declarationContext : public antlr4::ParserRuleContext {
  public:
    State_dependent_path_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LP();
    Module_path_expressionContext *module_path_expression();
    antlr4::tree::TerminalNode *RP();
    Simple_path_declarationContext *simple_path_declaration();
    Edge_sensitive_path_declarationContext *edge_sensitive_path_declaration();
    antlr4::tree::TerminalNode *IFNONE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  State_dependent_path_declarationContext* state_dependent_path_declaration();

  class  Polarity_operatorContext : public antlr4::ParserRuleContext {
  public:
    Polarity_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PL();
    antlr4::tree::TerminalNode *MI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Polarity_operatorContext* polarity_operator();

  class  System_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    System_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Setup_timing_checkContext *setup_timing_check();
    Hold_timing_checkContext *hold_timing_check();
    Setuphold_timing_checkContext *setuphold_timing_check();
    Recovery_timing_checkContext *recovery_timing_check();
    Removal_timing_checkContext *removal_timing_check();
    Recrem_timing_checkContext *recrem_timing_check();
    Skew_timing_checkContext *skew_timing_check();
    Timeskew_timing_checkContext *timeskew_timing_check();
    Fullskew_timing_checkContext *fullskew_timing_check();
    Period_timing_checkContext *period_timing_check();
    Width_timing_checkContext *width_timing_check();
    Nochange_timing_checkContext *nochange_timing_check();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  System_timing_checkContext* system_timing_check();

  class  Setup_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Setup_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DLSETUP();
    antlr4::tree::TerminalNode *LP();
    Data_eventContext *data_event();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Reference_eventContext *reference_event();
    Timing_check_limitContext *timing_check_limit();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    Notifier_optContext *notifier_opt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Setup_timing_checkContext* setup_timing_check();

  class  Notifier_optContext : public antlr4::ParserRuleContext {
  public:
    Notifier_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CO();
    NotifierContext *notifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Notifier_optContext* notifier_opt();

  class  Hold_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Hold_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DLHOLD();
    antlr4::tree::TerminalNode *LP();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Data_eventContext *data_event();
    Timing_check_limitContext *timing_check_limit();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    Notifier_optContext *notifier_opt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Hold_timing_checkContext* hold_timing_check();

  class  Setuphold_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Setuphold_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DLSETUPHOLD();
    antlr4::tree::TerminalNode *LP();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Data_eventContext *data_event();
    std::vector<Timing_check_limitContext *> timing_check_limit();
    Timing_check_limitContext* timing_check_limit(size_t i);
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    Timing_check_optContext *timing_check_opt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Setuphold_timing_checkContext* setuphold_timing_check();

  class  Timing_check_optContext : public antlr4::ParserRuleContext {
  public:
    Timing_check_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CO();
    NotifierContext *notifier();
    Stamptime_cond_optContext *stamptime_cond_opt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Timing_check_optContext* timing_check_opt();

  class  Stamptime_cond_optContext : public antlr4::ParserRuleContext {
  public:
    Stamptime_cond_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CO();
    Stamptime_conditionContext *stamptime_condition();
    Checktime_cond_optContext *checktime_cond_opt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Stamptime_cond_optContext* stamptime_cond_opt();

  class  Checktime_cond_optContext : public antlr4::ParserRuleContext {
  public:
    Checktime_cond_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CO();
    Checktime_conditionContext *checktime_condition();
    Delayed_ref_optContext *delayed_ref_opt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Checktime_cond_optContext* checktime_cond_opt();

  class  Delayed_ref_optContext : public antlr4::ParserRuleContext {
  public:
    Delayed_ref_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CO();
    Delayed_referenceContext *delayed_reference();
    Delayed_data_optContext *delayed_data_opt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Delayed_ref_optContext* delayed_ref_opt();

  class  Delayed_data_optContext : public antlr4::ParserRuleContext {
  public:
    Delayed_data_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CO();
    Delayed_dataContext *delayed_data();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Delayed_data_optContext* delayed_data_opt();

  class  Recovery_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Recovery_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DLRECOVERY();
    antlr4::tree::TerminalNode *LP();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Data_eventContext *data_event();
    Timing_check_limitContext *timing_check_limit();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    Notifier_optContext *notifier_opt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Recovery_timing_checkContext* recovery_timing_check();

  class  Removal_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Removal_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DLREMOVAL();
    antlr4::tree::TerminalNode *LP();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Data_eventContext *data_event();
    Timing_check_limitContext *timing_check_limit();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    Notifier_optContext *notifier_opt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Removal_timing_checkContext* removal_timing_check();

  class  Recrem_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Recrem_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DLRECREM();
    antlr4::tree::TerminalNode *LP();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Data_eventContext *data_event();
    std::vector<Timing_check_limitContext *> timing_check_limit();
    Timing_check_limitContext* timing_check_limit(size_t i);
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    Timing_check_optContext *timing_check_opt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Recrem_timing_checkContext* recrem_timing_check();

  class  Skew_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Skew_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DLSKEW();
    antlr4::tree::TerminalNode *LP();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Data_eventContext *data_event();
    Timing_check_limitContext *timing_check_limit();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    Notifier_optContext *notifier_opt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Skew_timing_checkContext* skew_timing_check();

  class  Timeskew_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Timeskew_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DLTIMESKEW();
    antlr4::tree::TerminalNode *LP();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Data_eventContext *data_event();
    Timing_check_limitContext *timing_check_limit();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    Skew_timing_check_optContext *skew_timing_check_opt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Timeskew_timing_checkContext* timeskew_timing_check();

  class  Skew_timing_check_optContext : public antlr4::ParserRuleContext {
  public:
    Skew_timing_check_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CO();
    NotifierContext *notifier();
    Event_based_flag_optContext *event_based_flag_opt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Skew_timing_check_optContext* skew_timing_check_opt();

  class  Event_based_flag_optContext : public antlr4::ParserRuleContext {
  public:
    Event_based_flag_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CO();
    Event_based_flagContext *event_based_flag();
    Remain_active_flag_optContext *remain_active_flag_opt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Event_based_flag_optContext* event_based_flag_opt();

  class  Remain_active_flag_optContext : public antlr4::ParserRuleContext {
  public:
    Remain_active_flag_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CO();
    Remain_active_flagContext *remain_active_flag();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Remain_active_flag_optContext* remain_active_flag_opt();

  class  Fullskew_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Fullskew_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DLFULLSKEW();
    antlr4::tree::TerminalNode *LP();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Data_eventContext *data_event();
    std::vector<Timing_check_limitContext *> timing_check_limit();
    Timing_check_limitContext* timing_check_limit(size_t i);
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    Skew_timing_check_optContext *skew_timing_check_opt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fullskew_timing_checkContext* fullskew_timing_check();

  class  Period_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Period_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DLPERIOD();
    antlr4::tree::TerminalNode *LP();
    Controlled_reference_eventContext *controlled_reference_event();
    antlr4::tree::TerminalNode *CO();
    Timing_check_limitContext *timing_check_limit();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    Notifier_optContext *notifier_opt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Period_timing_checkContext* period_timing_check();

  class  Width_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Width_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DLWIDTH();
    antlr4::tree::TerminalNode *LP();
    Controlled_reference_eventContext *controlled_reference_event();
    antlr4::tree::TerminalNode *CO();
    Timing_check_limitContext *timing_check_limit();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    Threshold_optContext *threshold_opt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Width_timing_checkContext* width_timing_check();

  class  Threshold_optContext : public antlr4::ParserRuleContext {
  public:
    Threshold_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    ThresholdContext *threshold();
    NotifierContext *notifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Threshold_optContext* threshold_opt();

  class  Nochange_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Nochange_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DLNOCHANGE();
    antlr4::tree::TerminalNode *LP();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Data_eventContext *data_event();
    Start_edge_offsetContext *start_edge_offset();
    End_edge_offsetContext *end_edge_offset();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    Notifier_optContext *notifier_opt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Nochange_timing_checkContext* nochange_timing_check();

  class  Checktime_conditionContext : public antlr4::ParserRuleContext {
  public:
    Checktime_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mintypmax_expressionContext *mintypmax_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Checktime_conditionContext* checktime_condition();

  class  Controlled_reference_eventContext : public antlr4::ParserRuleContext {
  public:
    Controlled_reference_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Controlled_timing_check_eventContext *controlled_timing_check_event();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Controlled_reference_eventContext* controlled_reference_event();

  class  Data_eventContext : public antlr4::ParserRuleContext {
  public:
    Data_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Timing_check_eventContext *timing_check_event();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Data_eventContext* data_event();

  class  Delayed_dataContext : public antlr4::ParserRuleContext {
  public:
    Delayed_dataContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Terminal_identifierContext *terminal_identifier();
    antlr4::tree::TerminalNode *LB();
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();
    antlr4::tree::TerminalNode *RB();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Delayed_dataContext* delayed_data();

  class  Delayed_referenceContext : public antlr4::ParserRuleContext {
  public:
    Delayed_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Terminal_identifierContext *terminal_identifier();
    antlr4::tree::TerminalNode *LB();
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();
    antlr4::tree::TerminalNode *RB();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Delayed_referenceContext* delayed_reference();

  class  End_edge_offsetContext : public antlr4::ParserRuleContext {
  public:
    End_edge_offsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mintypmax_expressionContext *mintypmax_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  End_edge_offsetContext* end_edge_offset();

  class  Event_based_flagContext : public antlr4::ParserRuleContext {
  public:
    Event_based_flagContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Event_based_flagContext* event_based_flag();

  class  NotifierContext : public antlr4::ParserRuleContext {
  public:
    NotifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_identifierContext *variable_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NotifierContext* notifier();

  class  Reference_eventContext : public antlr4::ParserRuleContext {
  public:
    Reference_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Timing_check_eventContext *timing_check_event();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Reference_eventContext* reference_event();

  class  Remain_active_flagContext : public antlr4::ParserRuleContext {
  public:
    Remain_active_flagContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Remain_active_flagContext* remain_active_flag();

  class  Stamptime_conditionContext : public antlr4::ParserRuleContext {
  public:
    Stamptime_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mintypmax_expressionContext *mintypmax_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Stamptime_conditionContext* stamptime_condition();

  class  Start_edge_offsetContext : public antlr4::ParserRuleContext {
  public:
    Start_edge_offsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mintypmax_expressionContext *mintypmax_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Start_edge_offsetContext* start_edge_offset();

  class  ThresholdContext : public antlr4::ParserRuleContext {
  public:
    ThresholdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ThresholdContext* threshold();

  class  Timing_check_limitContext : public antlr4::ParserRuleContext {
  public:
    Timing_check_limitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Timing_check_limitContext* timing_check_limit();

  class  Timing_check_eventContext : public antlr4::ParserRuleContext {
  public:
    Timing_check_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Specify_terminal_descriptorContext *specify_terminal_descriptor();
    Timing_check_event_controlContext *timing_check_event_control();
    antlr4::tree::TerminalNode *AMAMAM();
    Timing_check_conditionContext *timing_check_condition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Timing_check_eventContext* timing_check_event();

  class  Controlled_timing_check_eventContext : public antlr4::ParserRuleContext {
  public:
    Controlled_timing_check_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Timing_check_event_controlContext *timing_check_event_control();
    Specify_terminal_descriptorContext *specify_terminal_descriptor();
    antlr4::tree::TerminalNode *AMAMAM();
    Timing_check_conditionContext *timing_check_condition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Controlled_timing_check_eventContext* controlled_timing_check_event();

  class  Timing_check_event_controlContext : public antlr4::ParserRuleContext {
  public:
    Timing_check_event_controlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POSEDGE();
    antlr4::tree::TerminalNode *NEGEDGE();
    Edge_control_specifierContext *edge_control_specifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Timing_check_event_controlContext* timing_check_event_control();

  class  Specify_terminal_descriptorContext : public antlr4::ParserRuleContext {
  public:
    Specify_terminal_descriptorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Specify_input_terminal_descriptorContext *specify_input_terminal_descriptor();
    Specify_output_terminal_descriptorContext *specify_output_terminal_descriptor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Specify_terminal_descriptorContext* specify_terminal_descriptor();

  class  Edge_control_specifierContext : public antlr4::ParserRuleContext {
  public:
    Edge_control_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EDGE();
    antlr4::tree::TerminalNode *LB();
    std::vector<Edge_descriptorContext *> edge_descriptor();
    Edge_descriptorContext* edge_descriptor(size_t i);
    antlr4::tree::TerminalNode *RB();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Edge_control_specifierContext* edge_control_specifier();

  class  Edge_descriptorContext : public antlr4::ParserRuleContext {
  public:
    Edge_descriptorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EDGE_DESCRIPTOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Edge_descriptorContext* edge_descriptor();

  class  Timing_check_conditionContext : public antlr4::ParserRuleContext {
  public:
    Timing_check_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Scalar_timing_check_conditionContext *scalar_timing_check_condition();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Timing_check_conditionContext* timing_check_condition();

  class  Scalar_timing_check_conditionContext : public antlr4::ParserRuleContext {
  public:
    Scalar_timing_check_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *TI();
    antlr4::tree::TerminalNode *EQEQ();
    Scalar_constantContext *scalar_constant();
    antlr4::tree::TerminalNode *EQEQEQ();
    antlr4::tree::TerminalNode *EMEQ();
    antlr4::tree::TerminalNode *EMEQEQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Scalar_timing_check_conditionContext* scalar_timing_check_condition();

  class  Scalar_constantContext : public antlr4::ParserRuleContext {
  public:
    Scalar_constantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Binary_numberContext *binary_number();
    Unsigned_numberContext *unsigned_number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Scalar_constantContext* scalar_constant();

  class  ConcatenationContext : public antlr4::ParserRuleContext {
  public:
    ConcatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LC();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RC();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConcatenationContext* concatenation();

  class  Constant_concatenationContext : public antlr4::ParserRuleContext {
  public:
    Constant_concatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LC();
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    antlr4::tree::TerminalNode *RC();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constant_concatenationContext* constant_concatenation();

  class  Constant_multiple_concatenationContext : public antlr4::ParserRuleContext {
  public:
    Constant_multiple_concatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LC();
    Constant_expressionContext *constant_expression();
    Constant_concatenationContext *constant_concatenation();
    antlr4::tree::TerminalNode *RC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constant_multiple_concatenationContext* constant_multiple_concatenation();

  class  Module_path_concatenationContext : public antlr4::ParserRuleContext {
  public:
    Module_path_concatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LC();
    std::vector<Module_path_expressionContext *> module_path_expression();
    Module_path_expressionContext* module_path_expression(size_t i);
    antlr4::tree::TerminalNode *RC();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_path_concatenationContext* module_path_concatenation();

  class  Module_path_multiple_concatenationContext : public antlr4::ParserRuleContext {
  public:
    Module_path_multiple_concatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LC();
    Constant_expressionContext *constant_expression();
    Module_path_concatenationContext *module_path_concatenation();
    antlr4::tree::TerminalNode *RC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_path_multiple_concatenationContext* module_path_multiple_concatenation();

  class  Multiple_concatenationContext : public antlr4::ParserRuleContext {
  public:
    Multiple_concatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LC();
    Constant_expressionContext *constant_expression();
    ConcatenationContext *concatenation();
    antlr4::tree::TerminalNode *RC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Multiple_concatenationContext* multiple_concatenation();

  class  Constant_function_callContext : public antlr4::ParserRuleContext {
  public:
    Constant_function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_identifierContext *function_identifier();
    antlr4::tree::TerminalNode *LP();
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constant_function_callContext* constant_function_call();

  class  Constant_system_function_callContext : public antlr4::ParserRuleContext {
  public:
    Constant_system_function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    System_function_identifierContext *system_function_identifier();
    antlr4::tree::TerminalNode *LP();
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constant_system_function_callContext* constant_system_function_call();

  class  Function_callContext : public antlr4::ParserRuleContext {
  public:
    Function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();
    antlr4::tree::TerminalNode *LP();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_callContext* function_call();

  class  System_function_callContext : public antlr4::ParserRuleContext {
  public:
    System_function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    System_function_identifierContext *system_function_identifier();
    Sys_func_call_port_listContext *sys_func_call_port_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  System_function_callContext* system_function_call();

  class  Sys_func_call_port_listContext : public antlr4::ParserRuleContext {
  public:
    Sys_func_call_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Sys_func_call_port_listContext* sys_func_call_port_list();

  class  Base_expressionContext : public antlr4::ParserRuleContext {
  public:
    Base_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Base_expressionContext* base_expression();

  class  Constant_base_expressionContext : public antlr4::ParserRuleContext {
  public:
    Constant_base_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constant_base_expressionContext* constant_base_expression();

  class  Constant_expressionContext : public antlr4::ParserRuleContext {
  public:
    Constant_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_primaryContext *constant_primary();
    Unary_operatorContext *unary_operator();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    antlr4::tree::TerminalNode *ASAS();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *SL();
    antlr4::tree::TerminalNode *MO();
    antlr4::tree::TerminalNode *PL();
    antlr4::tree::TerminalNode *MI();
    antlr4::tree::TerminalNode *GTGT();
    antlr4::tree::TerminalNode *LTLT();
    antlr4::tree::TerminalNode *GTGTGT();
    antlr4::tree::TerminalNode *LTLTLT();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LTEQ();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GTEQ();
    antlr4::tree::TerminalNode *EQEQ();
    antlr4::tree::TerminalNode *EMEQ();
    antlr4::tree::TerminalNode *EQEQEQ();
    antlr4::tree::TerminalNode *EMEQEQ();
    antlr4::tree::TerminalNode *AM();
    antlr4::tree::TerminalNode *CA();
    antlr4::tree::TerminalNode *CATI();
    antlr4::tree::TerminalNode *TICA();
    antlr4::tree::TerminalNode *VL();
    antlr4::tree::TerminalNode *AMAM();
    antlr4::tree::TerminalNode *VLVL();
    antlr4::tree::TerminalNode *QM();
    antlr4::tree::TerminalNode *CL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constant_expressionContext* constant_expression();
  Constant_expressionContext* constant_expression(int precedence);
  class  Constant_mintypmax_expressionContext : public antlr4::ParserRuleContext {
  public:
    Constant_mintypmax_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CL();
    antlr4::tree::TerminalNode* CL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constant_mintypmax_expressionContext* constant_mintypmax_expression();

  class  Constant_range_expressionContext : public antlr4::ParserRuleContext {
  public:
    Constant_range_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();
    Msb_constant_expressionContext *msb_constant_expression();
    antlr4::tree::TerminalNode *CL();
    Lsb_constant_expressionContext *lsb_constant_expression();
    Constant_base_expressionContext *constant_base_expression();
    antlr4::tree::TerminalNode *PLCL();
    Width_constant_expressionContext *width_constant_expression();
    antlr4::tree::TerminalNode *MICL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constant_range_expressionContext* constant_range_expression();

  class  Dimension_constant_expressionContext : public antlr4::ParserRuleContext {
  public:
    Dimension_constant_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Dimension_constant_expressionContext* dimension_constant_expression();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryContext *primary();
    Unary_operatorContext *unary_operator();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *ASAS();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *SL();
    antlr4::tree::TerminalNode *MO();
    antlr4::tree::TerminalNode *PL();
    antlr4::tree::TerminalNode *MI();
    antlr4::tree::TerminalNode *GTGT();
    antlr4::tree::TerminalNode *LTLT();
    antlr4::tree::TerminalNode *GTGTGT();
    antlr4::tree::TerminalNode *LTLTLT();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LTEQ();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GTEQ();
    antlr4::tree::TerminalNode *EQEQ();
    antlr4::tree::TerminalNode *EMEQ();
    antlr4::tree::TerminalNode *EQEQEQ();
    antlr4::tree::TerminalNode *EMEQEQ();
    antlr4::tree::TerminalNode *AM();
    antlr4::tree::TerminalNode *CA();
    antlr4::tree::TerminalNode *CATI();
    antlr4::tree::TerminalNode *TICA();
    antlr4::tree::TerminalNode *VL();
    antlr4::tree::TerminalNode *AMAM();
    antlr4::tree::TerminalNode *VLVL();
    antlr4::tree::TerminalNode *QM();
    antlr4::tree::TerminalNode *CL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  Lsb_constant_expressionContext : public antlr4::ParserRuleContext {
  public:
    Lsb_constant_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Lsb_constant_expressionContext* lsb_constant_expression();

  class  Mintypmax_expressionContext : public antlr4::ParserRuleContext {
  public:
    Mintypmax_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CL();
    antlr4::tree::TerminalNode* CL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Mintypmax_expressionContext* mintypmax_expression();

  class  Module_path_expressionContext : public antlr4::ParserRuleContext {
  public:
    Module_path_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_path_primaryContext *module_path_primary();
    Unary_module_path_operatorContext *unary_module_path_operator();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    std::vector<Module_path_expressionContext *> module_path_expression();
    Module_path_expressionContext* module_path_expression(size_t i);
    antlr4::tree::TerminalNode *EQEQ();
    antlr4::tree::TerminalNode *EMEQ();
    antlr4::tree::TerminalNode *AM();
    antlr4::tree::TerminalNode *CA();
    antlr4::tree::TerminalNode *CATI();
    antlr4::tree::TerminalNode *TICA();
    antlr4::tree::TerminalNode *VL();
    antlr4::tree::TerminalNode *AMAM();
    antlr4::tree::TerminalNode *VLVL();
    antlr4::tree::TerminalNode *QM();
    antlr4::tree::TerminalNode *CL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_path_expressionContext* module_path_expression();
  Module_path_expressionContext* module_path_expression(int precedence);
  class  Module_path_mintypmax_expressionContext : public antlr4::ParserRuleContext {
  public:
    Module_path_mintypmax_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Module_path_expressionContext *> module_path_expression();
    Module_path_expressionContext* module_path_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CL();
    antlr4::tree::TerminalNode* CL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_path_mintypmax_expressionContext* module_path_mintypmax_expression();

  class  Msb_constant_expressionContext : public antlr4::ParserRuleContext {
  public:
    Msb_constant_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Msb_constant_expressionContext* msb_constant_expression();

  class  Range_expressionContext : public antlr4::ParserRuleContext {
  public:
    Range_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Msb_constant_expressionContext *msb_constant_expression();
    antlr4::tree::TerminalNode *CL();
    Lsb_constant_expressionContext *lsb_constant_expression();
    Base_expressionContext *base_expression();
    antlr4::tree::TerminalNode *PLCL();
    Width_constant_expressionContext *width_constant_expression();
    antlr4::tree::TerminalNode *MICL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Range_expressionContext* range_expression();

  class  Width_constant_expressionContext : public antlr4::ParserRuleContext {
  public:
    Width_constant_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Width_constant_expressionContext* width_constant_expression();

  class  Constant_primaryContext : public antlr4::ParserRuleContext {
  public:
    Constant_primaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LB();
    Constant_range_expressionContext *constant_range_expression();
    antlr4::tree::TerminalNode *RB();
    Constant_concatenationContext *constant_concatenation();
    Constant_multiple_concatenationContext *constant_multiple_concatenation();
    Constant_function_callContext *constant_function_call();
    Constant_system_function_callContext *constant_system_function_call();
    antlr4::tree::TerminalNode *LP();
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();
    antlr4::tree::TerminalNode *RP();
    String_Context *string_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constant_primaryContext* constant_primary();

  class  Module_path_primaryContext : public antlr4::ParserRuleContext {
  public:
    Module_path_primaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    IdentifierContext *identifier();
    Module_path_concatenationContext *module_path_concatenation();
    Module_path_multiple_concatenationContext *module_path_multiple_concatenation();
    Function_callContext *function_call();
    System_function_callContext *system_function_call();
    antlr4::tree::TerminalNode *LP();
    Module_path_mintypmax_expressionContext *module_path_mintypmax_expression();
    antlr4::tree::TerminalNode *RP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_path_primaryContext* module_path_primary();

  class  PrimaryContext : public antlr4::ParserRuleContext {
  public:
    PrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    Hierarchical_identifierContext *hierarchical_identifier();
    Select_Context *select_();
    ConcatenationContext *concatenation();
    Multiple_concatenationContext *multiple_concatenation();
    Function_callContext *function_call();
    System_function_callContext *system_function_call();
    antlr4::tree::TerminalNode *LP();
    Mintypmax_expressionContext *mintypmax_expression();
    antlr4::tree::TerminalNode *RP();
    String_Context *string_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrimaryContext* primary();

  class  Select_Context : public antlr4::ParserRuleContext {
  public:
    Select_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LB();
    Range_expressionContext *range_expression();
    antlr4::tree::TerminalNode *RB();
    Bit_selectContext *bit_select();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Select_Context* select_();

  class  Bit_selectContext : public antlr4::ParserRuleContext {
  public:
    Bit_selectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LB();
    antlr4::tree::TerminalNode* LB(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RB();
    antlr4::tree::TerminalNode* RB(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bit_selectContext* bit_select();

  class  Net_lvalueContext : public antlr4::ParserRuleContext {
  public:
    Net_lvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();
    Const_selectContext *const_select();
    antlr4::tree::TerminalNode *LC();
    std::vector<Net_lvalueContext *> net_lvalue();
    Net_lvalueContext* net_lvalue(size_t i);
    antlr4::tree::TerminalNode *RC();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Net_lvalueContext* net_lvalue();

  class  Const_selectContext : public antlr4::ParserRuleContext {
  public:
    Const_selectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LB();
    Constant_range_expressionContext *constant_range_expression();
    antlr4::tree::TerminalNode *RB();
    Const_bit_selectContext *const_bit_select();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Const_selectContext* const_select();

  class  Const_bit_selectContext : public antlr4::ParserRuleContext {
  public:
    Const_bit_selectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LB();
    antlr4::tree::TerminalNode* LB(size_t i);
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RB();
    antlr4::tree::TerminalNode* RB(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Const_bit_selectContext* const_bit_select();

  class  Variable_lvalueContext : public antlr4::ParserRuleContext {
  public:
    Variable_lvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();
    Select_Context *select_();
    antlr4::tree::TerminalNode *LC();
    std::vector<Variable_lvalueContext *> variable_lvalue();
    Variable_lvalueContext* variable_lvalue(size_t i);
    antlr4::tree::TerminalNode *RC();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Variable_lvalueContext* variable_lvalue();

  class  Unary_operatorContext : public antlr4::ParserRuleContext {
  public:
    Unary_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PL();
    antlr4::tree::TerminalNode *MI();
    antlr4::tree::TerminalNode *EM();
    antlr4::tree::TerminalNode *TI();
    antlr4::tree::TerminalNode *AM();
    antlr4::tree::TerminalNode *TIAM();
    antlr4::tree::TerminalNode *VL();
    antlr4::tree::TerminalNode *TIVL();
    antlr4::tree::TerminalNode *CA();
    antlr4::tree::TerminalNode *TICA();
    antlr4::tree::TerminalNode *CATI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Unary_operatorContext* unary_operator();

  class  Unary_module_path_operatorContext : public antlr4::ParserRuleContext {
  public:
    Unary_module_path_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EM();
    antlr4::tree::TerminalNode *TI();
    antlr4::tree::TerminalNode *AM();
    antlr4::tree::TerminalNode *TIAM();
    antlr4::tree::TerminalNode *VL();
    antlr4::tree::TerminalNode *TIVL();
    antlr4::tree::TerminalNode *CA();
    antlr4::tree::TerminalNode *TICA();
    antlr4::tree::TerminalNode *CATI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Unary_module_path_operatorContext* unary_module_path_operator();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Decimal_numberContext *decimal_number();
    Octal_numberContext *octal_number();
    Binary_numberContext *binary_number();
    Hex_numberContext *hex_number();
    Real_numberContext *real_number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumberContext* number();

  class  Real_numberContext : public antlr4::ParserRuleContext {
  public:
    Real_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fixed_point_numberContext *fixed_point_number();
    Exponential_numberContext *exponential_number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Real_numberContext* real_number();

  class  Decimal_numberContext : public antlr4::ParserRuleContext {
  public:
    Decimal_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unsigned_numberContext *unsigned_number();
    Decimal_baseContext *decimal_base();
    Decimal_valueContext *decimal_value();
    SizeContext *size();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Decimal_numberContext* decimal_number();

  class  Binary_numberContext : public antlr4::ParserRuleContext {
  public:
    Binary_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Binary_baseContext *binary_base();
    Binary_valueContext *binary_value();
    SizeContext *size();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Binary_numberContext* binary_number();

  class  Octal_numberContext : public antlr4::ParserRuleContext {
  public:
    Octal_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Octal_baseContext *octal_base();
    Octal_valueContext *octal_value();
    SizeContext *size();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Octal_numberContext* octal_number();

  class  Hex_numberContext : public antlr4::ParserRuleContext {
  public:
    Hex_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hex_baseContext *hex_base();
    Hex_valueContext *hex_value();
    SizeContext *size();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Hex_numberContext* hex_number();

  class  SizeContext : public antlr4::ParserRuleContext {
  public:
    SizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNSIGNED_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SizeContext* size();

  class  Fixed_point_numberContext : public antlr4::ParserRuleContext {
  public:
    Fixed_point_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FIXED_POINT_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fixed_point_numberContext* fixed_point_number();

  class  Exponential_numberContext : public antlr4::ParserRuleContext {
  public:
    Exponential_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXPONENTIAL_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Exponential_numberContext* exponential_number();

  class  Unsigned_numberContext : public antlr4::ParserRuleContext {
  public:
    Unsigned_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNSIGNED_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Unsigned_numberContext* unsigned_number();

  class  Decimal_valueContext : public antlr4::ParserRuleContext {
  public:
    Decimal_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNSIGNED_NUMBER();
    antlr4::tree::TerminalNode *X_OR_Z_UNDERSCORE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Decimal_valueContext* decimal_value();

  class  Binary_valueContext : public antlr4::ParserRuleContext {
  public:
    Binary_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINARY_VALUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Binary_valueContext* binary_value();

  class  Octal_valueContext : public antlr4::ParserRuleContext {
  public:
    Octal_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OCTAL_VALUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Octal_valueContext* octal_value();

  class  Hex_valueContext : public antlr4::ParserRuleContext {
  public:
    Hex_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HEX_VALUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Hex_valueContext* hex_value();

  class  Decimal_baseContext : public antlr4::ParserRuleContext {
  public:
    Decimal_baseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL_BASE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Decimal_baseContext* decimal_base();

  class  Binary_baseContext : public antlr4::ParserRuleContext {
  public:
    Binary_baseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINARY_BASE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Binary_baseContext* binary_base();

  class  Octal_baseContext : public antlr4::ParserRuleContext {
  public:
    Octal_baseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OCTAL_BASE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Octal_baseContext* octal_base();

  class  Hex_baseContext : public antlr4::ParserRuleContext {
  public:
    Hex_baseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HEX_BASE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Hex_baseContext* hex_base();

  class  String_Context : public antlr4::ParserRuleContext {
  public:
    String_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  String_Context* string_();

  class  Attribute_instanceContext : public antlr4::ParserRuleContext {
  public:
    Attribute_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<antlr4::tree::TerminalNode *> AS();
    antlr4::tree::TerminalNode* AS(size_t i);
    std::vector<Attr_specContext *> attr_spec();
    Attr_specContext* attr_spec(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Attribute_instanceContext* attribute_instance();

  class  Attr_specContext : public antlr4::ParserRuleContext {
  public:
    Attr_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Attr_nameContext *attr_name();
    antlr4::tree::TerminalNode *EQ();
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Attr_specContext* attr_spec();

  class  Attr_nameContext : public antlr4::ParserRuleContext {
  public:
    Attr_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Attr_nameContext* attr_name();

  class  Block_identifierContext : public antlr4::ParserRuleContext {
  public:
    Block_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Block_identifierContext* block_identifier();

  class  Cell_identifierContext : public antlr4::ParserRuleContext {
  public:
    Cell_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cell_identifierContext* cell_identifier();

  class  Config_identifierContext : public antlr4::ParserRuleContext {
  public:
    Config_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Config_identifierContext* config_identifier();

  class  Escaped_identifierContext : public antlr4::ParserRuleContext {
  public:
    Escaped_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ESCAPED_IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Escaped_identifierContext* escaped_identifier();

  class  Event_identifierContext : public antlr4::ParserRuleContext {
  public:
    Event_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Event_identifierContext* event_identifier();

  class  Function_identifierContext : public antlr4::ParserRuleContext {
  public:
    Function_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_identifierContext* function_identifier();

  class  Gate_instance_identifierContext : public antlr4::ParserRuleContext {
  public:
    Gate_instance_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Gate_instance_identifierContext* gate_instance_identifier();

  class  Generate_block_identifierContext : public antlr4::ParserRuleContext {
  public:
    Generate_block_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Generate_block_identifierContext* generate_block_identifier();

  class  Genvar_identifierContext : public antlr4::ParserRuleContext {
  public:
    Genvar_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Genvar_identifierContext* genvar_identifier();

  class  Hierarchical_identifierContext : public antlr4::ParserRuleContext {
  public:
    Hierarchical_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<Hier_refContext *> hier_ref();
    Hier_refContext* hier_ref(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Hierarchical_identifierContext* hierarchical_identifier();

  class  Hier_refContext : public antlr4::ParserRuleContext {
  public:
    Hier_refContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *DT();
    Const_bit_selectContext *const_bit_select();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Hier_refContext* hier_ref();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Escaped_identifierContext *escaped_identifier();
    Simple_identifierContext *simple_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdentifierContext* identifier();

  class  Input_port_identifierContext : public antlr4::ParserRuleContext {
  public:
    Input_port_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Input_port_identifierContext* input_port_identifier();

  class  Instance_identifierContext : public antlr4::ParserRuleContext {
  public:
    Instance_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Instance_identifierContext* instance_identifier();

  class  Library_identifierContext : public antlr4::ParserRuleContext {
  public:
    Library_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Library_identifierContext* library_identifier();

  class  Module_identifierContext : public antlr4::ParserRuleContext {
  public:
    Module_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_identifierContext* module_identifier();

  class  Module_instance_identifierContext : public antlr4::ParserRuleContext {
  public:
    Module_instance_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_instance_identifierContext* module_instance_identifier();

  class  Net_identifierContext : public antlr4::ParserRuleContext {
  public:
    Net_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Net_identifierContext* net_identifier();

  class  Output_port_identifierContext : public antlr4::ParserRuleContext {
  public:
    Output_port_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Output_port_identifierContext* output_port_identifier();

  class  Parameter_identifierContext : public antlr4::ParserRuleContext {
  public:
    Parameter_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Parameter_identifierContext* parameter_identifier();

  class  Port_identifierContext : public antlr4::ParserRuleContext {
  public:
    Port_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Port_identifierContext* port_identifier();

  class  Real_identifierContext : public antlr4::ParserRuleContext {
  public:
    Real_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Real_identifierContext* real_identifier();

  class  Simple_identifierContext : public antlr4::ParserRuleContext {
  public:
    Simple_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIMPLE_IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Simple_identifierContext* simple_identifier();

  class  Specparam_identifierContext : public antlr4::ParserRuleContext {
  public:
    Specparam_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Specparam_identifierContext* specparam_identifier();

  class  System_function_identifierContext : public antlr4::ParserRuleContext {
  public:
    System_function_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SYSTEM_TF_IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  System_function_identifierContext* system_function_identifier();

  class  System_task_identifierContext : public antlr4::ParserRuleContext {
  public:
    System_task_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SYSTEM_TF_IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  System_task_identifierContext* system_task_identifier();

  class  Task_identifierContext : public antlr4::ParserRuleContext {
  public:
    Task_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Task_identifierContext* task_identifier();

  class  Terminal_identifierContext : public antlr4::ParserRuleContext {
  public:
    Terminal_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Terminal_identifierContext* terminal_identifier();

  class  Topmodule_identifierContext : public antlr4::ParserRuleContext {
  public:
    Topmodule_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Topmodule_identifierContext* topmodule_identifier();

  class  Udp_identifierContext : public antlr4::ParserRuleContext {
  public:
    Udp_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Udp_identifierContext* udp_identifier();

  class  Udp_instance_identifierContext : public antlr4::ParserRuleContext {
  public:
    Udp_instance_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Udp_instance_identifierContext* udp_instance_identifier();

  class  Variable_identifierContext : public antlr4::ParserRuleContext {
  public:
    Variable_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Variable_identifierContext* variable_identifier();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool event_expressionSempred(Event_expressionContext *_localctx, size_t predicateIndex);
  bool constant_expressionSempred(Constant_expressionContext *_localctx, size_t predicateIndex);
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool module_path_expressionSempred(Module_path_expressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

