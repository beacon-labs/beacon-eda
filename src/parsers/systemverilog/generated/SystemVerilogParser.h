
// Generated from SystemVerilogParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  SystemVerilogParser : public antlr4::Parser {
public:
  enum {
    ACCEPT_ON = 1, ALIAS = 2, ALWAYS = 3, ALWAYS_COMB = 4, ALWAYS_FF = 5, 
    ALWAYS_LATCH = 6, AM = 7, AMAM = 8, AMAMAM = 9, AMEQ = 10, AND = 11, 
    AP = 12, AS = 13, ASAS = 14, ASEQ = 15, ASGT = 16, ASSERT = 17, ASSIGN = 18, 
    ASSUME = 19, AT = 20, ATAT = 21, AUTOMATIC = 22, BEFORE = 23, BEGIN = 24, 
    BIND = 25, BINS = 26, BINSOF = 27, BIT = 28, BREAK = 29, BUF = 30, BUFIFONE = 31, 
    BUFIFZERO = 32, BYTE = 33, CA = 34, CAEQ = 35, CASE = 36, CASEX = 37, 
    CASEZ = 38, CATI = 39, CELL = 40, CHANDLE = 41, CHECKER = 42, CL = 43, 
    CLASS = 44, CLCL = 45, CLEQ = 46, CLOCKING = 47, CLSL = 48, CMOS = 49, 
    CO = 50, CONFIG = 51, CONST = 52, CONSTRAINT = 53, CONTEXT = 54, CONTINUE = 55, 
    COVER = 56, COVERGROUP = 57, COVERPOINT = 58, CROSS = 59, DEASSIGN = 60, 
    DEFAULT = 61, DEFPARAM = 62, DESIGN = 63, DISABLE = 64, DIST = 65, DL = 66, 
    DLERROR = 67, DLFATAL = 68, DLFULLSKEW = 69, DLHOLD = 70, DLINFO = 71, 
    DLNOCHANGE = 72, DLPERIOD = 73, DLRECOVERY = 74, DLRECREM = 75, DLREMOVAL = 76, 
    DLROOT = 77, DLSETUP = 78, DLSETUPHOLD = 79, DLSKEW = 80, DLTIMESKEW = 81, 
    DLUNIT = 82, DLWARNING = 83, DLWIDTH = 84, DO = 85, DQ = 86, DQDPIDQ = 87, 
    DQDPIMICDQ = 88, DT = 89, DTAS = 90, EDGE = 91, ELSE = 92, EM = 93, 
    EMEQ = 94, EMEQEQ = 95, EMEQQM = 96, END = 97, ENDCASE = 98, ENDCHECKER = 99, 
    ENDCLASS = 100, ENDCLOCKING = 101, ENDCONFIG = 102, ENDFUNCTION = 103, 
    ENDGENERATE = 104, ENDGROUP = 105, ENDINTERFACE = 106, ENDMODULE = 107, 
    ENDPACKAGE = 108, ENDPRIMITIVE = 109, ENDPROGRAM = 110, ENDPROPERTY = 111, 
    ENDSEQUENCE = 112, ENDSPECIFY = 113, ENDTABLE = 114, ENDTASK = 115, 
    ENUM = 116, EQ = 117, EQEQ = 118, EQEQEQ = 119, EQEQQM = 120, EQGT = 121, 
    EVENT = 122, EVENTUALLY = 123, EXPECT = 124, EXPORT = 125, EXTENDS = 126, 
    EXTERN = 127, FINAL = 128, FIRST_MATCH = 129, FOR = 130, FORCE = 131, 
    FOREACH = 132, FOREVER = 133, FORK = 134, FORKJOIN = 135, FUNCTION = 136, 
    GA = 137, GENERATE = 138, GENVAR = 139, GLOBAL = 140, GT = 141, GTEQ = 142, 
    GTGT = 143, GTGTEQ = 144, GTGTGT = 145, GTGTGTEQ = 146, HA = 147, HAEQHA = 148, 
    HAHA = 149, HAMIHA = 150, HIGHZONE = 151, HIGHZZERO = 152, IF = 153, 
    IFF = 154, IFNONE = 155, IGNORE_BINS = 156, ILLEGAL_BINS = 157, IMPLEMENTS = 158, 
    IMPLIES = 159, IMPORT = 160, INCLUDE = 161, INITIAL = 162, INOUT = 163, 
    INPUT = 164, INSIDE = 165, INSTANCE = 166, INT = 167, INTEGER = 168, 
    INTERCONNECT = 169, INTERFACE = 170, INTERSECT = 171, JOIN = 172, JOIN_ANY = 173, 
    JOIN_NONE = 174, LARGE = 175, LB = 176, LC = 177, LET = 178, LIBLIST = 179, 
    LIBRARY = 180, LOCAL = 181, LOCALPARAM = 182, LOGIC = 183, LONGINT = 184, 
    LP = 185, LT = 186, LTEQ = 187, LTLT = 188, LTLTEQ = 189, LTLTLT = 190, 
    LTLTLTEQ = 191, LTMIGT = 192, MACROMODULE = 193, MATCHES = 194, MEDIUM = 195, 
    MI = 196, MICL = 197, MIEQ = 198, MIGT = 199, MIGTGT = 200, MIINCDIR = 201, 
    MIMI = 202, MO = 203, MODPORT = 204, MODULE = 205, MOEQ = 206, NAND = 207, 
    NEGEDGE = 208, NETTYPE = 209, NEW = 210, NEXTTIME = 211, NMOS = 212, 
    NOR = 213, NOSHOWCANCELLED = 214, NOT = 215, NOTIFONE = 216, NOTIFZERO = 217, 
    NULL = 218, ONESTEP = 219, OPTION = 220, OR = 221, OUTPUT = 222, PACKAGE = 223, 
    PACKED = 224, PARAMETER = 225, PATHPULSEDL = 226, PL = 227, PLCL = 228, 
    PLEQ = 229, PLPL = 230, PMOS = 231, POSEDGE = 232, PRIMITIVE = 233, 
    PRIORITY = 234, PROGRAM = 235, PROPERTY = 236, PROTECTED = 237, PULLDOWN = 238, 
    PULLONE = 239, PULLUP = 240, PULLZERO = 241, PULSESTYLE_ONDETECT = 242, 
    PULSESTYLE_ONEVENT = 243, PURE = 244, QM = 245, RAND = 246, RANDC = 247, 
    RANDCASE = 248, RANDOMIZE = 249, RANDSEQUENCE = 250, RB = 251, RC = 252, 
    RCMOS = 253, REAL = 254, REALTIME = 255, REF = 256, REG = 257, REJECT_ON = 258, 
    RELEASE = 259, REPEAT = 260, RESTRICT = 261, RETURN = 262, RNMOS = 263, 
    RP = 264, RPMOS = 265, RTRAN = 266, RTRANIFONE = 267, RTRANIFZERO = 268, 
    S_ALWAYS = 269, S_EVENTUALLY = 270, S_NEXTTIME = 271, S_UNTIL = 272, 
    S_UNTIL_WITH = 273, SAMPLE = 274, SC = 275, SCALARED = 276, SEQUENCE = 277, 
    SHORTINT = 278, SHORTREAL = 279, SHOWCANCELLED = 280, SIGNED = 281, 
    SL = 282, SLEQ = 283, SMALL = 284, SOFT = 285, SOLVE = 286, SPECIFY = 287, 
    SPECPARAM = 288, STATIC = 289, STD = 290, STRING = 291, STRONG = 292, 
    STRONGONE = 293, STRONGZERO = 294, STRUCT = 295, SUPER = 296, SUPPLYONE = 297, 
    SUPPLYZERO = 298, SYNC_ACCEPT_ON = 299, SYNC_REJECT_ON = 300, TABLE = 301, 
    TAGGED = 302, TASK = 303, THIS = 304, THROUGHOUT = 305, TI = 306, TIAM = 307, 
    TICA = 308, TIME = 309, TIMEPRECISION = 310, TIMEUNIT = 311, TIVL = 312, 
    TRAN = 313, TRANIFONE = 314, TRANIFZERO = 315, TRI = 316, TRIAND = 317, 
    TRIONE = 318, TRIOR = 319, TRIREG = 320, TRIZERO = 321, TYPE = 322, 
    TYPE_OPTION = 323, TYPEDEF = 324, UNION = 325, UNIQUE = 326, UNIQUEZERO = 327, 
    UNSIGNED = 328, UNTIL = 329, UNTIL_WITH = 330, UNTYPED = 331, USE = 332, 
    UWIRE = 333, VAR = 334, VECTORED = 335, VIRTUAL = 336, VL = 337, VLEQ = 338, 
    VLEQGT = 339, VLMIGT = 340, VLVL = 341, VOID = 342, WAIT = 343, WAIT_ORDER = 344, 
    WAND = 345, WEAK = 346, WEAKONE = 347, WEAKZERO = 348, WHILE = 349, 
    WILDCARD = 350, WIRE = 351, WITH = 352, WITHIN = 353, WOR = 354, XNOR = 355, 
    XOR = 356, BINARY_BASE = 357, COMMENT = 358, DECIMAL_BASE = 359, ESCAPED_IDENTIFIER = 360, 
    EXPONENTIAL_NUMBER = 361, FIXED_POINT_NUMBER = 362, HEX_BASE = 363, 
    OCTAL_BASE = 364, SIMPLE_IDENTIFIER = 365, STRING_LITERAL = 366, SYSTEM_TF_IDENTIFIER = 367, 
    TIME_LITERAL = 368, UNBASED_UNSIZED_LITERAL = 369, UNSIGNED_NUMBER = 370, 
    WHITE_SPACE = 371, ZERO_OR_ONE_X_OR_Z = 372, BINARY_VALUE = 373, X_OR_Z_UNDERSCORE = 374, 
    HEX_VALUE = 375, FILE_PATH_SPEC = 376, OCTAL_VALUE = 377, EDGE_SYMBOL = 378, 
    LEVEL_ONLY_SYMBOL = 379, OUTPUT_OR_LEVEL_SYMBOL = 380, BEGIN_KEYWORDS_DIRECTIVE = 381, 
    CELLDEFINE_DIRECTIVE = 382, DEFAULT_NETTYPE_DIRECTIVE = 383, DEFINE_DIRECTIVE = 384, 
    ELSE_DIRECTIVE = 385, ELSIF_DIRECTIVE = 386, END_KEYWORDS_DIRECTIVE = 387, 
    ENDCELLDEFINE_DIRECTIVE = 388, ENDIF_DIRECTIVE = 389, FILE_DIRECTIVE = 390, 
    IFDEF_DIRECTIVE = 391, IFNDEF_DIRECTIVE = 392, INCLUDE_DIRECTIVE = 393, 
    LINE_DIRECTIVE = 394, LINE_DIRECTIVE_ = 395, NOUNCONNECTED_DRIVE_DIRECTIVE = 396, 
    PRAGMA_DIRECTIVE = 397, RESETALL_DIRECTIVE = 398, TIMESCALE_DIRECTIVE = 399, 
    UNCONNECTED_DRIVE_DIRECTIVE = 400, UNDEF_DIRECTIVE = 401, UNDEFINEALL_DIRECTIVE = 402, 
    MACRO_USAGE = 403, VERSION_SPECIFIER = 404, DEFAULT_NETTYPE_VALUE = 405, 
    COMMENT_4 = 406, MACRO_NAME = 407, WHITE_SPACE_6 = 408, FILENAME = 409, 
    MACRO_DELIMITER = 410, MACRO_ESC_NEWLINE = 411, MACRO_ESC_QUOTE = 412, 
    MACRO_QUOTE = 413, MACRO_TEXT = 414, SOURCE_TEXT = 415, TIME_UNIT = 416, 
    TIME_VALUE = 417, UNCONNECTED_DRIVE_VALUE = 418, MACRO_IDENTIFIER = 419
  };

  enum {
    RuleLibrary_text = 0, RuleLibrary_description = 1, RuleLibrary_declaration = 2, 
    RuleLibrary_incdir = 3, RuleInclude_statement = 4, RuleFile_path_spec = 5, 
    RuleSource_text = 6, RuleDescription = 7, RuleModule_header = 8, RuleModule_declaration = 9, 
    RuleModule_name = 10, RuleModule_keyword = 11, RuleInterface_declaration = 12, 
    RuleInterface_name = 13, RuleInterface_header = 14, RuleProgram_declaration = 15, 
    RuleProgram_name = 16, RuleProgram_header = 17, RuleChecker_declaration = 18, 
    RuleChecker_name = 19, RuleChecker_ports = 20, RuleChecker_decl_item = 21, 
    RuleClass_declaration = 22, RuleClass_name = 23, RuleClass_extension = 24, 
    RuleClass_implementation = 25, RuleInterface_class_type = 26, RuleInterface_class_declaration = 27, 
    RuleInterface_class_extension = 28, RuleInterface_class_item = 29, RuleInterface_class_method = 30, 
    RulePackage_declaration = 31, RulePackage_name = 32, RulePkg_decl_item = 33, 
    RuleTimeunits_declaration = 34, RuleParameter_port_list = 35, RuleParameter_port_declaration = 36, 
    RuleList_of_port_declarations = 37, RulePort_decl = 38, RulePort_declaration = 39, 
    RulePort = 40, RulePort_implicit = 41, RulePort_expression = 42, RulePort_reference = 43, 
    RulePort_direction = 44, RuleAnsi_port_declaration = 45, RuleElaboration_system_task = 46, 
    RuleFatal_arg_list = 47, RuleFinish_number = 48, RuleModule_common_item = 49, 
    RuleModule_item = 50, RuleModule_item_declaration = 51, RuleParameter_override = 52, 
    RuleBind_directive = 53, RuleBind_target_scope = 54, RuleBind_target_instance = 55, 
    RuleBind_target_instance_list = 56, RuleBind_instantiation = 57, RuleConfig_declaration = 58, 
    RuleConfig_name = 59, RuleDesign_statement = 60, RuleDesign_statement_item = 61, 
    RuleConfig_rule_statement = 62, RuleDefault_clause = 63, RuleInst_clause = 64, 
    RuleInst_name = 65, RuleCell_clause = 66, RuleLiblist_clause = 67, RuleUse_clause = 68, 
    RuleExtern_tf_declaration = 69, RuleInterface_item = 70, RuleProgram_item = 71, 
    RuleChecker_port_list = 72, RuleChecker_port_item = 73, RuleChecker_port_direction = 74, 
    RuleChecker_item = 75, RuleChecker_item_declaration = 76, RuleClass_item = 77, 
    RuleClass_property = 78, RuleClass_method = 79, RuleClass_constructor_prototype = 80, 
    RulePort_list = 81, RuleClass_constraint = 82, RuleClass_item_qualifier = 83, 
    RuleProperty_qualifier = 84, RuleRandom_qualifier = 85, RuleMethod_qualifier = 86, 
    RuleMethod_prototype = 87, RuleClass_constructor_declaration = 88, RuleSuper_class_constructor_call = 89, 
    RuleConstraint_declaration = 90, RuleConstraint_block = 91, RuleConstraint_block_item = 92, 
    RuleSolve_before_list = 93, RuleConstraint_primary = 94, RuleConstraint_expression = 95, 
    RuleUniqueness_constraint = 96, RuleConstraint_set = 97, RuleDist_list = 98, 
    RuleDist_item = 99, RuleDist_weight = 100, RuleConstraint_prototype = 101, 
    RuleConstraint_prototype_qualifier = 102, RuleExtern_constraint_declaration = 103, 
    RuleIdentifier_list = 104, RulePackage_item = 105, RulePackage_item_declaration = 106, 
    RuleAnonymous_program = 107, RuleAnonymous_program_item = 108, RuleLocal_parameter_declaration = 109, 
    RuleParameter_declaration = 110, RuleSpecparam_declaration = 111, RuleInout_declaration = 112, 
    RuleInput_declaration = 113, RuleOutput_declaration = 114, RuleInterface_port_declaration = 115, 
    RuleRef_declaration = 116, RuleData_declaration = 117, RulePackage_import_declaration = 118, 
    RulePackage_import_item = 119, RulePackage_export_declaration = 120, 
    RuleGenvar_declaration = 121, RuleNet_declaration = 122, RuleNet_id = 123, 
    RuleType_declaration = 124, RuleNet_type_declaration = 125, RuleNet_type_decl_with = 126, 
    RuleLifetime = 127, RuleData_type = 128, RuleData_type_or_implicit = 129, 
    RuleImplicit_data_type = 130, RuleEnum_base_type = 131, RuleEnum_name_declaration = 132, 
    RuleEnum_name_suffix_range = 133, RuleClass_scope = 134, RuleClass_type = 135, 
    RuleClass_ref = 136, RulePackage_or_class_scope = 137, RuleInteger_type = 138, 
    RuleInteger_atom_type = 139, RuleInteger_vector_type = 140, RuleNon_integer_type = 141, 
    RuleNet_type = 142, RuleNet_port_type = 143, RuleVariable_port_type = 144, 
    RuleVar_data_type = 145, RuleSigning = 146, RuleSimple_type = 147, RuleStruct_union_member = 148, 
    RuleData_type_or_void = 149, RuleStruct_union = 150, RuleType_reference = 151, 
    RuleDrive_strength = 152, RuleStrength0 = 153, RuleStrength1 = 154, 
    RuleCharge_strength = 155, RuleDelay3 = 156, RuleDelay2 = 157, RuleDelay_value = 158, 
    RuleList_of_defparam_assignments = 159, RuleList_of_genvar_identifiers = 160, 
    RuleList_of_interface_identifiers = 161, RuleInterface_id = 162, RuleList_of_net_decl_assignments = 163, 
    RuleList_of_param_assignments = 164, RuleList_of_port_identifiers = 165, 
    RulePort_id = 166, RuleList_of_udp_port_identifiers = 167, RuleList_of_specparam_assignments = 168, 
    RuleList_of_tf_variable_identifiers = 169, RuleTf_var_id = 170, RuleList_of_type_assignments = 171, 
    RuleList_of_variable_decl_assignments = 172, RuleList_of_variable_identifiers = 173, 
    RuleVar_id = 174, RuleList_of_variable_port_identifiers = 175, RuleVar_port_id = 176, 
    RuleDefparam_assignment = 177, RuleNet_decl_assignment = 178, RuleParam_assignment = 179, 
    RuleSpecparam_assignment = 180, RuleType_assignment = 181, RulePulse_control_specparam = 182, 
    RuleError_limit_value = 183, RuleReject_limit_value = 184, RuleLimit_value = 185, 
    RuleVariable_decl_assignment = 186, RuleClass_new = 187, RuleDynamic_array_new = 188, 
    RuleUnpacked_dimension = 189, RulePacked_dimension = 190, RuleAssociative_dimension = 191, 
    RuleVariable_dimension = 192, RuleQueue_dimension = 193, RuleUnsized_dimension = 194, 
    RuleFunction_data_type_or_implicit = 195, RuleFunction_declaration = 196, 
    RuleFunction_body_declaration = 197, RuleFunction_name = 198, RuleFunction_prototype = 199, 
    RuleDpi_import_export = 200, RuleDpi_spec_string = 201, RuleDpi_function_import_property = 202, 
    RuleDpi_task_import_property = 203, RuleDpi_function_proto = 204, RuleDpi_task_proto = 205, 
    RuleTask_declaration = 206, RuleTask_body_declaration = 207, RuleTask_name = 208, 
    RuleTf_item_declaration = 209, RuleTf_port_list = 210, RuleTf_port_item = 211, 
    RuleTf_port_id = 212, RuleTf_port_direction = 213, RuleTf_port_declaration = 214, 
    RuleTask_prototype = 215, RuleBlock_item_declaration = 216, RuleModport_declaration = 217, 
    RuleModport_item = 218, RuleModport_ports_declaration = 219, RuleModport_clocking_declaration = 220, 
    RuleModport_simple_ports_declaration = 221, RuleModport_simple_port = 222, 
    RuleModport_tf_ports_declaration = 223, RuleModport_tf_port = 224, RuleImport_export = 225, 
    RuleConcurrent_assertion_item = 226, RuleBlock_label = 227, RuleConcurrent_assertion_statement = 228, 
    RuleAssert_property_statement = 229, RuleAssume_property_statement = 230, 
    RuleCover_property_statement = 231, RuleExpect_property_statement = 232, 
    RuleCover_sequence_statement = 233, RuleRestrict_property_statement = 234, 
    RuleProperty_instance = 235, RuleProp_arg_list = 236, RuleProperty_list_of_arguments = 237, 
    RuleProp_ordered_arg = 238, RuleProp_named_arg = 239, RuleProperty_actual_arg = 240, 
    RuleAssertion_item_declaration = 241, RuleProperty_declaration = 242, 
    RuleProperty_name = 243, RuleProp_port_list = 244, RuleProperty_port_list = 245, 
    RuleProperty_port_item = 246, RuleProp_port_item_local = 247, RuleProperty_lvar_port_direction = 248, 
    RuleProperty_formal_type = 249, RuleProperty_spec = 250, RuleProperty_expr = 251, 
    RuleProperty_case_item = 252, RuleSequence_declaration = 253, RuleSequence_name = 254, 
    RuleSeq_port_list = 255, RuleSequence_port_list = 256, RuleSequence_port_item = 257, 
    RuleSeq_port_item_local = 258, RuleSequence_lvar_port_direction = 259, 
    RuleSequence_formal_type = 260, RuleSequence_expr = 261, RuleCycle_delay_range = 262, 
    RuleSequence_method_call = 263, RuleSequence_match_item = 264, RuleSequence_instance = 265, 
    RuleSeq_arg_list = 266, RuleSequence_list_of_arguments = 267, RuleSeq_ordered_arg = 268, 
    RuleSeq_named_arg = 269, RuleSequence_actual_arg = 270, RuleBoolean_abbrev = 271, 
    RuleSequence_abbrev = 272, RuleConsecutive_repetition = 273, RuleNon_consecutive_repetition = 274, 
    RuleGoto_repetition = 275, RuleConst_or_range_expression = 276, RuleCycle_delay_const_range_expression = 277, 
    RuleExpression_or_dist = 278, RuleAssertion_variable_declaration = 279, 
    RuleCovergroup_declaration = 280, RuleCovergroup_name = 281, RuleCoverage_spec_or_option = 282, 
    RuleCoverage_option = 283, RuleCoverage_spec = 284, RuleCoverage_event = 285, 
    RuleBlock_event_expression = 286, RuleHierarchical_btf_identifier = 287, 
    RuleCover_point = 288, RuleCover_point_label = 289, RuleBins_or_empty = 290, 
    RuleBins_or_options = 291, RuleBin_array_size = 292, RuleBins_keyword = 293, 
    RuleTrans_list = 294, RuleTrans_set = 295, RuleTrans_range_list = 296, 
    RuleTrans_item = 297, RuleRepeat_range = 298, RuleCover_cross = 299, 
    RuleCross_label = 300, RuleList_of_cross_items = 301, RuleCross_item = 302, 
    RuleCross_body = 303, RuleCross_body_item = 304, RuleBins_selection_or_option = 305, 
    RuleBins_selection = 306, RuleSelect_expression = 307, RuleSelect_condition = 308, 
    RuleBins_expression = 309, RuleCovergroup_range_list = 310, RuleCovergroup_value_range = 311, 
    RuleWith_covergroup_expression = 312, RuleSet_covergroup_expression = 313, 
    RuleInteger_covergroup_expression = 314, RuleCross_set_expression = 315, 
    RuleCovergroup_expression = 316, RuleLet_declaration = 317, RuleLet_ports = 318, 
    RuleLet_identifier = 319, RuleLet_port_list = 320, RuleLet_port_item = 321, 
    RuleLet_formal_type = 322, RuleGate_instantiation = 323, RuleCmos_switch_instance = 324, 
    RuleEnable_gate_instance = 325, RuleMos_switch_instance = 326, RuleN_input_gate_instance = 327, 
    RuleN_output_gate_instance = 328, RulePass_switch_instance = 329, RulePass_enable_switch_instance = 330, 
    RulePull_gate_instance = 331, RulePulldown_strength = 332, RulePullup_strength = 333, 
    RuleEnable_terminal = 334, RuleInout_terminal = 335, RuleInput_terminal = 336, 
    RuleNcontrol_terminal = 337, RuleOutput_terminal = 338, RulePcontrol_terminal = 339, 
    RuleCmos_switchtype = 340, RuleEnable_gatetype = 341, RuleMos_switchtype = 342, 
    RuleN_input_gatetype = 343, RuleN_output_gatetype = 344, RulePass_en_switchtype = 345, 
    RulePass_switchtype = 346, RuleModule_program_interface_instantiation = 347, 
    RuleParameter_value_assignment = 348, RuleList_of_parameter_assignments = 349, 
    RuleOrdered_parameter_assignment = 350, RuleNamed_parameter_assignment = 351, 
    RuleHierarchical_instance = 352, RuleName_of_instance = 353, RuleList_of_port_connections = 354, 
    RuleOrdered_port_connection = 355, RuleNamed_port_connection = 356, 
    RulePort_assign = 357, RuleChecker_instantiation = 358, RuleList_of_checker_port_connections = 359, 
    RuleOrdered_checker_port_connection = 360, RuleNamed_checker_port_connection = 361, 
    RuleChecker_port_assign = 362, RuleGenerate_region = 363, RuleLoop_generate_construct = 364, 
    RuleGenvar_initialization = 365, RuleGenvar_iteration = 366, RuleConditional_generate_construct = 367, 
    RuleIf_generate_construct = 368, RuleCase_generate_construct = 369, 
    RuleCase_generate_item = 370, RuleGenerate_block = 371, RuleGenerate_block_label = 372, 
    RuleGenerate_block_name = 373, RuleGenerate_item = 374, RuleUdp_nonansi_declaration = 375, 
    RuleUdp_ansi_declaration = 376, RuleUdp_declaration = 377, RuleUdp_name = 378, 
    RuleUdp_port_list = 379, RuleUdp_declaration_port_list = 380, RuleUdp_port_declaration = 381, 
    RuleUdp_output_declaration = 382, RuleUdp_input_declaration = 383, RuleUdp_reg_declaration = 384, 
    RuleUdp_body = 385, RuleCombinational_body = 386, RuleCombinational_entry = 387, 
    RuleSequential_body = 388, RuleUdp_initial_statement = 389, RuleInit_val = 390, 
    RuleSequential_entry = 391, RuleSeq_input_list = 392, RuleLevel_input_list = 393, 
    RuleEdge_input_list = 394, RuleEdge_indicator = 395, RuleCurrent_state = 396, 
    RuleNext_state = 397, RuleOutput_symbol = 398, RuleLevel_symbol = 399, 
    RuleEdge_symbol = 400, RuleUdp_instantiation = 401, RuleUdp_instance = 402, 
    RuleContinuous_assign = 403, RuleList_of_net_assignments = 404, RuleList_of_variable_assignments = 405, 
    RuleNet_alias = 406, RuleNet_assignment = 407, RuleInitial_construct = 408, 
    RuleAlways_construct = 409, RuleAlways_keyword = 410, RuleFinal_construct = 411, 
    RuleBlocking_assignment = 412, RuleOperator_assignment = 413, RuleAssignment_operator = 414, 
    RuleNonblocking_assignment = 415, RuleProcedural_continuous_assignment = 416, 
    RuleVariable_assignment = 417, RuleAction_block = 418, RuleSeq_block = 419, 
    RuleBlock_name = 420, RulePar_block = 421, RuleJoin_keyword = 422, RuleStatement_or_null = 423, 
    RuleStatement = 424, RuleStatement_item = 425, RuleFunction_statement = 426, 
    RuleFunction_statement_or_null = 427, RuleVariable_identifier_list = 428, 
    RuleProcedural_timing_control_statement = 429, RuleDelay_or_event_control = 430, 
    RuleDelay_control = 431, RuleEvent_control = 432, RuleEvent_expression = 433, 
    RuleProcedural_timing_control = 434, RuleJump_statement = 435, RuleWait_statement = 436, 
    RuleEvent_trigger = 437, RuleDisable_statement = 438, RuleConditional_statement = 439, 
    RuleUnique_priority = 440, RuleCond_predicate = 441, RuleExpression_or_cond_pattern = 442, 
    RuleCase_statement = 443, RuleCase_keyword = 444, RuleCase_expression = 445, 
    RuleCase_item = 446, RuleCase_pattern_item = 447, RuleCase_inside_item = 448, 
    RuleCase_item_expression = 449, RuleRandcase_statement = 450, RuleRandcase_item = 451, 
    RuleOpen_range_list = 452, RuleOpen_value_range = 453, RulePattern = 454, 
    RuleMember_pattern_pair = 455, RuleAssignment_pattern = 456, RuleArray_key_val_pair = 457, 
    RuleArray_pattern_key = 458, RuleAssignment_pattern_key = 459, RuleAssignment_pattern_expression = 460, 
    RuleAssignment_pattern_expression_type = 461, RuleConstant_assignment_pattern_expression = 462, 
    RuleAssignment_pattern_net_lvalue = 463, RuleAssignment_pattern_variable_lvalue = 464, 
    RuleLoop_statement = 465, RuleFor_initialization = 466, RuleFor_variable_declaration = 467, 
    RuleFor_variable_assign = 468, RuleFor_step = 469, RuleFor_step_assignment = 470, 
    RuleLoop_variables = 471, RuleLoop_var = 472, RuleSubroutine_call_statement = 473, 
    RuleAssertion_item = 474, RuleDeferred_immediate_assertion_item = 475, 
    RuleProcedural_assertion_statement = 476, RuleImmediate_assertion_statement = 477, 
    RuleSimple_immediate_assertion_statement = 478, RuleSimple_immediate_assert_statement = 479, 
    RuleSimple_immediate_assume_statement = 480, RuleSimple_immediate_cover_statement = 481, 
    RuleDeferred_immediate_assertion_statement = 482, RuleDeferred_immediate_assert_statement = 483, 
    RuleDeferred_immediate_assume_statement = 484, RuleDeferred_immediate_cover_statement = 485, 
    RuleClocking_declaration = 486, RuleClocking_name = 487, RuleClocking_event = 488, 
    RuleClocking_item = 489, RuleDefault_skew = 490, RuleClocking_direction = 491, 
    RuleList_of_clocking_decl_assign = 492, RuleClocking_decl_assign = 493, 
    RuleClocking_skew = 494, RuleClocking_drive = 495, RuleCycle_delay = 496, 
    RuleClockvar = 497, RuleClockvar_expression = 498, RuleRandsequence_statement = 499, 
    RuleProduction = 500, RuleRs_rule = 501, RuleWeight_spec = 502, RuleRs_production_list = 503, 
    RuleWeight_specification = 504, RuleRs_code_block = 505, RuleRs_prod = 506, 
    RuleProduction_item = 507, RuleRs_if_else = 508, RuleRs_repeat = 509, 
    RuleRs_case = 510, RuleRs_case_item = 511, RuleSpecify_block = 512, 
    RuleSpecify_item = 513, RulePulsestyle_declaration = 514, RuleShowcancelled_declaration = 515, 
    RulePath_declaration = 516, RuleSimple_path_declaration = 517, RuleParallel_path_description = 518, 
    RuleFull_path_description = 519, RuleList_of_path_inputs = 520, RuleList_of_path_outputs = 521, 
    RuleSpecify_input_terminal_descriptor = 522, RuleSpecify_output_terminal_descriptor = 523, 
    RuleInput_identifier = 524, RuleOutput_identifier = 525, RulePath_delay_value = 526, 
    RuleList_of_path_delay_expressions = 527, RuleT_path_delay_expression = 528, 
    RuleTrise_path_delay_expression = 529, RuleTfall_path_delay_expression = 530, 
    RuleTz_path_delay_expression = 531, RuleT01_path_delay_expression = 532, 
    RuleT10_path_delay_expression = 533, RuleT0z_path_delay_expression = 534, 
    RuleTz1_path_delay_expression = 535, RuleT1z_path_delay_expression = 536, 
    RuleTz0_path_delay_expression = 537, RuleT0x_path_delay_expression = 538, 
    RuleTx1_path_delay_expression = 539, RuleT1x_path_delay_expression = 540, 
    RuleTx0_path_delay_expression = 541, RuleTxz_path_delay_expression = 542, 
    RuleTzx_path_delay_expression = 543, RulePath_delay_expression = 544, 
    RuleEdge_sensitive_path_declaration = 545, RuleParallel_edge_sensitive_path_description = 546, 
    RuleFull_edge_sensitive_path_description = 547, RuleData_source_expression = 548, 
    RuleEdge_identifier = 549, RuleState_dependent_path_declaration = 550, 
    RulePolarity_operator = 551, RuleSystem_timing_check = 552, RuleSetup_timing_check = 553, 
    RuleNotifier_opt = 554, RuleHold_timing_check = 555, RuleSetuphold_timing_check = 556, 
    RuleTiming_check_opt = 557, RuleTimestamp_cond_opt = 558, RuleTimecheck_cond_opt = 559, 
    RuleDelayed_ref_opt = 560, RuleDelayed_data_opt = 561, RuleRecovery_timing_check = 562, 
    RuleRemoval_timing_check = 563, RuleRecrem_timing_check = 564, RuleSkew_timing_check = 565, 
    RuleTimeskew_timing_check = 566, RuleSkew_timing_check_opt = 567, RuleEvent_based_flag_opt = 568, 
    RuleRemain_active_flag_opt = 569, RuleFullskew_timing_check = 570, RulePeriod_timing_check = 571, 
    RuleWidth_timing_check = 572, RuleNochange_timing_check = 573, RuleTimecheck_condition = 574, 
    RuleControlled_reference_event = 575, RuleData_event = 576, RuleDelayed_data = 577, 
    RuleDelayed_reference = 578, RuleEnd_edge_offset = 579, RuleEvent_based_flag = 580, 
    RuleNotifier = 581, RuleReference_event = 582, RuleRemain_active_flag = 583, 
    RuleTimestamp_condition = 584, RuleStart_edge_offset = 585, RuleThreshold = 586, 
    RuleTiming_check_limit = 587, RuleTiming_check_event = 588, RuleControlled_timing_check_event = 589, 
    RuleTiming_check_event_control = 590, RuleSpecify_terminal_descriptor = 591, 
    RuleEdge_control_specifier = 592, RuleEdge_descriptor = 593, RuleTiming_check_condition = 594, 
    RuleScalar_timing_check_condition = 595, RuleScalar_constant = 596, 
    RuleConcatenation = 597, RuleConstant_concatenation = 598, RuleConstant_multiple_concatenation = 599, 
    RuleModule_path_concatenation = 600, RuleModule_path_multiple_concatenation = 601, 
    RuleMultiple_concatenation = 602, RuleStreaming_concatenation = 603, 
    RuleStream_operator = 604, RuleSlice_size = 605, RuleStream_concatenation = 606, 
    RuleStream_expression = 607, RuleArray_range_expression = 608, RuleEmpty_unpacked_array_concatenation = 609, 
    RuleSystem_tf_call = 610, RuleArg_list = 611, RuleSubroutine_call = 612, 
    RuleList_of_arguments = 613, RuleOrdered_arg = 614, RuleNamed_arg = 615, 
    RuleArray_manipulation_call = 616, RuleRandomize_call = 617, RuleRand_list = 618, 
    RuleRand_with = 619, RuleId_list = 620, RuleMethod_call_root = 621, 
    RuleArray_method_name = 622, RuleInc_or_dec_expression = 623, RuleConstant_expression = 624, 
    RuleConstant_mintypmax_expression = 625, RuleConstant_param_expression = 626, 
    RuleParam_expression = 627, RuleConstant_range_expression = 628, RuleConstant_part_select_range = 629, 
    RuleConstant_range = 630, RuleConstant_indexed_range = 631, RuleExpression = 632, 
    RuleTagged_union_expression = 633, RuleValue_range = 634, RuleMintypmax_expression = 635, 
    RuleModule_path_expression = 636, RuleModule_path_mintypmax_expression = 637, 
    RulePart_select_range = 638, RuleIndexed_range = 639, RuleGenvar_expression = 640, 
    RuleConstant_primary = 641, RuleModule_path_primary = 642, RulePrimary = 643, 
    RuleRange_expression = 644, RulePrimary_literal = 645, RuleTime_literal = 646, 
    RuleImplicit_class_handle = 647, RuleBit_select = 648, RuleSelect_ = 649, 
    RuleNonrange_select = 650, RuleMember_select = 651, RuleConstant_bit_select = 652, 
    RuleConstant_select = 653, RuleConst_member_select = 654, RuleNet_lvalue = 655, 
    RuleVariable_lvalue = 656, RuleNonrange_variable_lvalue = 657, RuleUnary_operator = 658, 
    RuleInc_or_dec_operator = 659, RuleUnary_module_path_operator = 660, 
    RuleNumber = 661, RuleIntegral_number = 662, RuleDecimal_number = 663, 
    RuleBinary_number = 664, RuleOctal_number = 665, RuleHex_number = 666, 
    RuleSize = 667, RuleReal_number = 668, RuleFixed_point_number = 669, 
    RuleExponential_number = 670, RuleUnsigned_number = 671, RuleDecimal_value = 672, 
    RuleBinary_value = 673, RuleOctal_value = 674, RuleHex_value = 675, 
    RuleDecimal_base = 676, RuleBinary_base = 677, RuleOctal_base = 678, 
    RuleHex_base = 679, RuleUnbased_unsized_literal = 680, RuleString_literal = 681, 
    RuleAttribute_instance = 682, RuleAttr_spec = 683, RuleAttr_name = 684, 
    RuleBlock_identifier = 685, RuleBin_identifier = 686, RuleC_identifier = 687, 
    RuleCell_identifier = 688, RuleChecker_identifier = 689, RuleClass_identifier = 690, 
    RuleClass_variable_identifier = 691, RuleClocking_identifier = 692, 
    RuleConfig_identifier = 693, RuleConst_identifier = 694, RuleConstraint_identifier = 695, 
    RuleCovergroup_identifier = 696, RuleCover_point_identifier = 697, RuleCross_identifier = 698, 
    RuleDynamic_array_variable_identifier = 699, RuleEnum_identifier = 700, 
    RuleEscaped_identifier = 701, RuleFormal_port_identifier = 702, RuleFunction_identifier = 703, 
    RuleGenerate_block_identifier = 704, RuleGenvar_identifier = 705, RuleHierarchical_identifier = 706, 
    RuleHier_ref = 707, RuleIdentifier = 708, RuleIndex_variable_identifier = 709, 
    RuleInterface_identifier = 710, RuleInterface_instance_identifier = 711, 
    RuleInput_port_identifier = 712, RuleInstance_identifier = 713, RuleLibrary_identifier = 714, 
    RuleMember_identifier = 715, RuleMethod_identifier = 716, RuleModport_identifier = 717, 
    RuleModule_identifier = 718, RuleNet_identifier = 719, RuleNet_type_identifier = 720, 
    RuleOutput_port_identifier = 721, RulePackage_identifier = 722, RulePackage_scope = 723, 
    RuleParameter_identifier = 724, RulePort_identifier = 725, RuleProduction_identifier = 726, 
    RuleProgram_identifier = 727, RuleProperty_identifier = 728, RulePs_identifier = 729, 
    RulePs_or_hierarchical_array_identifier = 730, RulePs_or_hierarchical_identifier = 731, 
    RulePs_type_or_parameter_identifier = 732, RuleGen_ref = 733, RuleSequence_identifier = 734, 
    RuleSignal_identifier = 735, RuleSimple_identifier = 736, RuleSpecparam_identifier = 737, 
    RuleSystem_tf_identifier = 738, RuleTask_identifier = 739, RuleTf_identifier = 740, 
    RuleTerminal_identifier = 741, RuleTopmodule_identifier = 742, RuleType_identifier = 743, 
    RuleUdp_identifier = 744, RuleVariable_identifier = 745
  };

  explicit SystemVerilogParser(antlr4::TokenStream *input);

  SystemVerilogParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~SystemVerilogParser() override;

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
  class Module_headerContext;
  class Module_declarationContext;
  class Module_nameContext;
  class Module_keywordContext;
  class Interface_declarationContext;
  class Interface_nameContext;
  class Interface_headerContext;
  class Program_declarationContext;
  class Program_nameContext;
  class Program_headerContext;
  class Checker_declarationContext;
  class Checker_nameContext;
  class Checker_portsContext;
  class Checker_decl_itemContext;
  class Class_declarationContext;
  class Class_nameContext;
  class Class_extensionContext;
  class Class_implementationContext;
  class Interface_class_typeContext;
  class Interface_class_declarationContext;
  class Interface_class_extensionContext;
  class Interface_class_itemContext;
  class Interface_class_methodContext;
  class Package_declarationContext;
  class Package_nameContext;
  class Pkg_decl_itemContext;
  class Timeunits_declarationContext;
  class Parameter_port_listContext;
  class Parameter_port_declarationContext;
  class List_of_port_declarationsContext;
  class Port_declContext;
  class Port_declarationContext;
  class PortContext;
  class Port_implicitContext;
  class Port_expressionContext;
  class Port_referenceContext;
  class Port_directionContext;
  class Ansi_port_declarationContext;
  class Elaboration_system_taskContext;
  class Fatal_arg_listContext;
  class Finish_numberContext;
  class Module_common_itemContext;
  class Module_itemContext;
  class Module_item_declarationContext;
  class Parameter_overrideContext;
  class Bind_directiveContext;
  class Bind_target_scopeContext;
  class Bind_target_instanceContext;
  class Bind_target_instance_listContext;
  class Bind_instantiationContext;
  class Config_declarationContext;
  class Config_nameContext;
  class Design_statementContext;
  class Design_statement_itemContext;
  class Config_rule_statementContext;
  class Default_clauseContext;
  class Inst_clauseContext;
  class Inst_nameContext;
  class Cell_clauseContext;
  class Liblist_clauseContext;
  class Use_clauseContext;
  class Extern_tf_declarationContext;
  class Interface_itemContext;
  class Program_itemContext;
  class Checker_port_listContext;
  class Checker_port_itemContext;
  class Checker_port_directionContext;
  class Checker_itemContext;
  class Checker_item_declarationContext;
  class Class_itemContext;
  class Class_propertyContext;
  class Class_methodContext;
  class Class_constructor_prototypeContext;
  class Port_listContext;
  class Class_constraintContext;
  class Class_item_qualifierContext;
  class Property_qualifierContext;
  class Random_qualifierContext;
  class Method_qualifierContext;
  class Method_prototypeContext;
  class Class_constructor_declarationContext;
  class Super_class_constructor_callContext;
  class Constraint_declarationContext;
  class Constraint_blockContext;
  class Constraint_block_itemContext;
  class Solve_before_listContext;
  class Constraint_primaryContext;
  class Constraint_expressionContext;
  class Uniqueness_constraintContext;
  class Constraint_setContext;
  class Dist_listContext;
  class Dist_itemContext;
  class Dist_weightContext;
  class Constraint_prototypeContext;
  class Constraint_prototype_qualifierContext;
  class Extern_constraint_declarationContext;
  class Identifier_listContext;
  class Package_itemContext;
  class Package_item_declarationContext;
  class Anonymous_programContext;
  class Anonymous_program_itemContext;
  class Local_parameter_declarationContext;
  class Parameter_declarationContext;
  class Specparam_declarationContext;
  class Inout_declarationContext;
  class Input_declarationContext;
  class Output_declarationContext;
  class Interface_port_declarationContext;
  class Ref_declarationContext;
  class Data_declarationContext;
  class Package_import_declarationContext;
  class Package_import_itemContext;
  class Package_export_declarationContext;
  class Genvar_declarationContext;
  class Net_declarationContext;
  class Net_idContext;
  class Type_declarationContext;
  class Net_type_declarationContext;
  class Net_type_decl_withContext;
  class LifetimeContext;
  class Data_typeContext;
  class Data_type_or_implicitContext;
  class Implicit_data_typeContext;
  class Enum_base_typeContext;
  class Enum_name_declarationContext;
  class Enum_name_suffix_rangeContext;
  class Class_scopeContext;
  class Class_typeContext;
  class Class_refContext;
  class Package_or_class_scopeContext;
  class Integer_typeContext;
  class Integer_atom_typeContext;
  class Integer_vector_typeContext;
  class Non_integer_typeContext;
  class Net_typeContext;
  class Net_port_typeContext;
  class Variable_port_typeContext;
  class Var_data_typeContext;
  class SigningContext;
  class Simple_typeContext;
  class Struct_union_memberContext;
  class Data_type_or_voidContext;
  class Struct_unionContext;
  class Type_referenceContext;
  class Drive_strengthContext;
  class Strength0Context;
  class Strength1Context;
  class Charge_strengthContext;
  class Delay3Context;
  class Delay2Context;
  class Delay_valueContext;
  class List_of_defparam_assignmentsContext;
  class List_of_genvar_identifiersContext;
  class List_of_interface_identifiersContext;
  class Interface_idContext;
  class List_of_net_decl_assignmentsContext;
  class List_of_param_assignmentsContext;
  class List_of_port_identifiersContext;
  class Port_idContext;
  class List_of_udp_port_identifiersContext;
  class List_of_specparam_assignmentsContext;
  class List_of_tf_variable_identifiersContext;
  class Tf_var_idContext;
  class List_of_type_assignmentsContext;
  class List_of_variable_decl_assignmentsContext;
  class List_of_variable_identifiersContext;
  class Var_idContext;
  class List_of_variable_port_identifiersContext;
  class Var_port_idContext;
  class Defparam_assignmentContext;
  class Net_decl_assignmentContext;
  class Param_assignmentContext;
  class Specparam_assignmentContext;
  class Type_assignmentContext;
  class Pulse_control_specparamContext;
  class Error_limit_valueContext;
  class Reject_limit_valueContext;
  class Limit_valueContext;
  class Variable_decl_assignmentContext;
  class Class_newContext;
  class Dynamic_array_newContext;
  class Unpacked_dimensionContext;
  class Packed_dimensionContext;
  class Associative_dimensionContext;
  class Variable_dimensionContext;
  class Queue_dimensionContext;
  class Unsized_dimensionContext;
  class Function_data_type_or_implicitContext;
  class Function_declarationContext;
  class Function_body_declarationContext;
  class Function_nameContext;
  class Function_prototypeContext;
  class Dpi_import_exportContext;
  class Dpi_spec_stringContext;
  class Dpi_function_import_propertyContext;
  class Dpi_task_import_propertyContext;
  class Dpi_function_protoContext;
  class Dpi_task_protoContext;
  class Task_declarationContext;
  class Task_body_declarationContext;
  class Task_nameContext;
  class Tf_item_declarationContext;
  class Tf_port_listContext;
  class Tf_port_itemContext;
  class Tf_port_idContext;
  class Tf_port_directionContext;
  class Tf_port_declarationContext;
  class Task_prototypeContext;
  class Block_item_declarationContext;
  class Modport_declarationContext;
  class Modport_itemContext;
  class Modport_ports_declarationContext;
  class Modport_clocking_declarationContext;
  class Modport_simple_ports_declarationContext;
  class Modport_simple_portContext;
  class Modport_tf_ports_declarationContext;
  class Modport_tf_portContext;
  class Import_exportContext;
  class Concurrent_assertion_itemContext;
  class Block_labelContext;
  class Concurrent_assertion_statementContext;
  class Assert_property_statementContext;
  class Assume_property_statementContext;
  class Cover_property_statementContext;
  class Expect_property_statementContext;
  class Cover_sequence_statementContext;
  class Restrict_property_statementContext;
  class Property_instanceContext;
  class Prop_arg_listContext;
  class Property_list_of_argumentsContext;
  class Prop_ordered_argContext;
  class Prop_named_argContext;
  class Property_actual_argContext;
  class Assertion_item_declarationContext;
  class Property_declarationContext;
  class Property_nameContext;
  class Prop_port_listContext;
  class Property_port_listContext;
  class Property_port_itemContext;
  class Prop_port_item_localContext;
  class Property_lvar_port_directionContext;
  class Property_formal_typeContext;
  class Property_specContext;
  class Property_exprContext;
  class Property_case_itemContext;
  class Sequence_declarationContext;
  class Sequence_nameContext;
  class Seq_port_listContext;
  class Sequence_port_listContext;
  class Sequence_port_itemContext;
  class Seq_port_item_localContext;
  class Sequence_lvar_port_directionContext;
  class Sequence_formal_typeContext;
  class Sequence_exprContext;
  class Cycle_delay_rangeContext;
  class Sequence_method_callContext;
  class Sequence_match_itemContext;
  class Sequence_instanceContext;
  class Seq_arg_listContext;
  class Sequence_list_of_argumentsContext;
  class Seq_ordered_argContext;
  class Seq_named_argContext;
  class Sequence_actual_argContext;
  class Boolean_abbrevContext;
  class Sequence_abbrevContext;
  class Consecutive_repetitionContext;
  class Non_consecutive_repetitionContext;
  class Goto_repetitionContext;
  class Const_or_range_expressionContext;
  class Cycle_delay_const_range_expressionContext;
  class Expression_or_distContext;
  class Assertion_variable_declarationContext;
  class Covergroup_declarationContext;
  class Covergroup_nameContext;
  class Coverage_spec_or_optionContext;
  class Coverage_optionContext;
  class Coverage_specContext;
  class Coverage_eventContext;
  class Block_event_expressionContext;
  class Hierarchical_btf_identifierContext;
  class Cover_pointContext;
  class Cover_point_labelContext;
  class Bins_or_emptyContext;
  class Bins_or_optionsContext;
  class Bin_array_sizeContext;
  class Bins_keywordContext;
  class Trans_listContext;
  class Trans_setContext;
  class Trans_range_listContext;
  class Trans_itemContext;
  class Repeat_rangeContext;
  class Cover_crossContext;
  class Cross_labelContext;
  class List_of_cross_itemsContext;
  class Cross_itemContext;
  class Cross_bodyContext;
  class Cross_body_itemContext;
  class Bins_selection_or_optionContext;
  class Bins_selectionContext;
  class Select_expressionContext;
  class Select_conditionContext;
  class Bins_expressionContext;
  class Covergroup_range_listContext;
  class Covergroup_value_rangeContext;
  class With_covergroup_expressionContext;
  class Set_covergroup_expressionContext;
  class Integer_covergroup_expressionContext;
  class Cross_set_expressionContext;
  class Covergroup_expressionContext;
  class Let_declarationContext;
  class Let_portsContext;
  class Let_identifierContext;
  class Let_port_listContext;
  class Let_port_itemContext;
  class Let_formal_typeContext;
  class Gate_instantiationContext;
  class Cmos_switch_instanceContext;
  class Enable_gate_instanceContext;
  class Mos_switch_instanceContext;
  class N_input_gate_instanceContext;
  class N_output_gate_instanceContext;
  class Pass_switch_instanceContext;
  class Pass_enable_switch_instanceContext;
  class Pull_gate_instanceContext;
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
  class Module_program_interface_instantiationContext;
  class Parameter_value_assignmentContext;
  class List_of_parameter_assignmentsContext;
  class Ordered_parameter_assignmentContext;
  class Named_parameter_assignmentContext;
  class Hierarchical_instanceContext;
  class Name_of_instanceContext;
  class List_of_port_connectionsContext;
  class Ordered_port_connectionContext;
  class Named_port_connectionContext;
  class Port_assignContext;
  class Checker_instantiationContext;
  class List_of_checker_port_connectionsContext;
  class Ordered_checker_port_connectionContext;
  class Named_checker_port_connectionContext;
  class Checker_port_assignContext;
  class Generate_regionContext;
  class Loop_generate_constructContext;
  class Genvar_initializationContext;
  class Genvar_iterationContext;
  class Conditional_generate_constructContext;
  class If_generate_constructContext;
  class Case_generate_constructContext;
  class Case_generate_itemContext;
  class Generate_blockContext;
  class Generate_block_labelContext;
  class Generate_block_nameContext;
  class Generate_itemContext;
  class Udp_nonansi_declarationContext;
  class Udp_ansi_declarationContext;
  class Udp_declarationContext;
  class Udp_nameContext;
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
  class Continuous_assignContext;
  class List_of_net_assignmentsContext;
  class List_of_variable_assignmentsContext;
  class Net_aliasContext;
  class Net_assignmentContext;
  class Initial_constructContext;
  class Always_constructContext;
  class Always_keywordContext;
  class Final_constructContext;
  class Blocking_assignmentContext;
  class Operator_assignmentContext;
  class Assignment_operatorContext;
  class Nonblocking_assignmentContext;
  class Procedural_continuous_assignmentContext;
  class Variable_assignmentContext;
  class Action_blockContext;
  class Seq_blockContext;
  class Block_nameContext;
  class Par_blockContext;
  class Join_keywordContext;
  class Statement_or_nullContext;
  class StatementContext;
  class Statement_itemContext;
  class Function_statementContext;
  class Function_statement_or_nullContext;
  class Variable_identifier_listContext;
  class Procedural_timing_control_statementContext;
  class Delay_or_event_controlContext;
  class Delay_controlContext;
  class Event_controlContext;
  class Event_expressionContext;
  class Procedural_timing_controlContext;
  class Jump_statementContext;
  class Wait_statementContext;
  class Event_triggerContext;
  class Disable_statementContext;
  class Conditional_statementContext;
  class Unique_priorityContext;
  class Cond_predicateContext;
  class Expression_or_cond_patternContext;
  class Case_statementContext;
  class Case_keywordContext;
  class Case_expressionContext;
  class Case_itemContext;
  class Case_pattern_itemContext;
  class Case_inside_itemContext;
  class Case_item_expressionContext;
  class Randcase_statementContext;
  class Randcase_itemContext;
  class Open_range_listContext;
  class Open_value_rangeContext;
  class PatternContext;
  class Member_pattern_pairContext;
  class Assignment_patternContext;
  class Array_key_val_pairContext;
  class Array_pattern_keyContext;
  class Assignment_pattern_keyContext;
  class Assignment_pattern_expressionContext;
  class Assignment_pattern_expression_typeContext;
  class Constant_assignment_pattern_expressionContext;
  class Assignment_pattern_net_lvalueContext;
  class Assignment_pattern_variable_lvalueContext;
  class Loop_statementContext;
  class For_initializationContext;
  class For_variable_declarationContext;
  class For_variable_assignContext;
  class For_stepContext;
  class For_step_assignmentContext;
  class Loop_variablesContext;
  class Loop_varContext;
  class Subroutine_call_statementContext;
  class Assertion_itemContext;
  class Deferred_immediate_assertion_itemContext;
  class Procedural_assertion_statementContext;
  class Immediate_assertion_statementContext;
  class Simple_immediate_assertion_statementContext;
  class Simple_immediate_assert_statementContext;
  class Simple_immediate_assume_statementContext;
  class Simple_immediate_cover_statementContext;
  class Deferred_immediate_assertion_statementContext;
  class Deferred_immediate_assert_statementContext;
  class Deferred_immediate_assume_statementContext;
  class Deferred_immediate_cover_statementContext;
  class Clocking_declarationContext;
  class Clocking_nameContext;
  class Clocking_eventContext;
  class Clocking_itemContext;
  class Default_skewContext;
  class Clocking_directionContext;
  class List_of_clocking_decl_assignContext;
  class Clocking_decl_assignContext;
  class Clocking_skewContext;
  class Clocking_driveContext;
  class Cycle_delayContext;
  class ClockvarContext;
  class Clockvar_expressionContext;
  class Randsequence_statementContext;
  class ProductionContext;
  class Rs_ruleContext;
  class Weight_specContext;
  class Rs_production_listContext;
  class Weight_specificationContext;
  class Rs_code_blockContext;
  class Rs_prodContext;
  class Production_itemContext;
  class Rs_if_elseContext;
  class Rs_repeatContext;
  class Rs_caseContext;
  class Rs_case_itemContext;
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
  class Timestamp_cond_optContext;
  class Timecheck_cond_optContext;
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
  class Nochange_timing_checkContext;
  class Timecheck_conditionContext;
  class Controlled_reference_eventContext;
  class Data_eventContext;
  class Delayed_dataContext;
  class Delayed_referenceContext;
  class End_edge_offsetContext;
  class Event_based_flagContext;
  class NotifierContext;
  class Reference_eventContext;
  class Remain_active_flagContext;
  class Timestamp_conditionContext;
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
  class Streaming_concatenationContext;
  class Stream_operatorContext;
  class Slice_sizeContext;
  class Stream_concatenationContext;
  class Stream_expressionContext;
  class Array_range_expressionContext;
  class Empty_unpacked_array_concatenationContext;
  class System_tf_callContext;
  class Arg_listContext;
  class Subroutine_callContext;
  class List_of_argumentsContext;
  class Ordered_argContext;
  class Named_argContext;
  class Array_manipulation_callContext;
  class Randomize_callContext;
  class Rand_listContext;
  class Rand_withContext;
  class Id_listContext;
  class Method_call_rootContext;
  class Array_method_nameContext;
  class Inc_or_dec_expressionContext;
  class Constant_expressionContext;
  class Constant_mintypmax_expressionContext;
  class Constant_param_expressionContext;
  class Param_expressionContext;
  class Constant_range_expressionContext;
  class Constant_part_select_rangeContext;
  class Constant_rangeContext;
  class Constant_indexed_rangeContext;
  class ExpressionContext;
  class Tagged_union_expressionContext;
  class Value_rangeContext;
  class Mintypmax_expressionContext;
  class Module_path_expressionContext;
  class Module_path_mintypmax_expressionContext;
  class Part_select_rangeContext;
  class Indexed_rangeContext;
  class Genvar_expressionContext;
  class Constant_primaryContext;
  class Module_path_primaryContext;
  class PrimaryContext;
  class Range_expressionContext;
  class Primary_literalContext;
  class Time_literalContext;
  class Implicit_class_handleContext;
  class Bit_selectContext;
  class Select_Context;
  class Nonrange_selectContext;
  class Member_selectContext;
  class Constant_bit_selectContext;
  class Constant_selectContext;
  class Const_member_selectContext;
  class Net_lvalueContext;
  class Variable_lvalueContext;
  class Nonrange_variable_lvalueContext;
  class Unary_operatorContext;
  class Inc_or_dec_operatorContext;
  class Unary_module_path_operatorContext;
  class NumberContext;
  class Integral_numberContext;
  class Decimal_numberContext;
  class Binary_numberContext;
  class Octal_numberContext;
  class Hex_numberContext;
  class SizeContext;
  class Real_numberContext;
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
  class Unbased_unsized_literalContext;
  class String_literalContext;
  class Attribute_instanceContext;
  class Attr_specContext;
  class Attr_nameContext;
  class Block_identifierContext;
  class Bin_identifierContext;
  class C_identifierContext;
  class Cell_identifierContext;
  class Checker_identifierContext;
  class Class_identifierContext;
  class Class_variable_identifierContext;
  class Clocking_identifierContext;
  class Config_identifierContext;
  class Const_identifierContext;
  class Constraint_identifierContext;
  class Covergroup_identifierContext;
  class Cover_point_identifierContext;
  class Cross_identifierContext;
  class Dynamic_array_variable_identifierContext;
  class Enum_identifierContext;
  class Escaped_identifierContext;
  class Formal_port_identifierContext;
  class Function_identifierContext;
  class Generate_block_identifierContext;
  class Genvar_identifierContext;
  class Hierarchical_identifierContext;
  class Hier_refContext;
  class IdentifierContext;
  class Index_variable_identifierContext;
  class Interface_identifierContext;
  class Interface_instance_identifierContext;
  class Input_port_identifierContext;
  class Instance_identifierContext;
  class Library_identifierContext;
  class Member_identifierContext;
  class Method_identifierContext;
  class Modport_identifierContext;
  class Module_identifierContext;
  class Net_identifierContext;
  class Net_type_identifierContext;
  class Output_port_identifierContext;
  class Package_identifierContext;
  class Package_scopeContext;
  class Parameter_identifierContext;
  class Port_identifierContext;
  class Production_identifierContext;
  class Program_identifierContext;
  class Property_identifierContext;
  class Ps_identifierContext;
  class Ps_or_hierarchical_array_identifierContext;
  class Ps_or_hierarchical_identifierContext;
  class Ps_type_or_parameter_identifierContext;
  class Gen_refContext;
  class Sequence_identifierContext;
  class Signal_identifierContext;
  class Simple_identifierContext;
  class Specparam_identifierContext;
  class System_tf_identifierContext;
  class Task_identifierContext;
  class Tf_identifierContext;
  class Terminal_identifierContext;
  class Topmodule_identifierContext;
  class Type_identifierContext;
  class Udp_identifierContext;
  class Variable_identifierContext; 

  class  Library_textContext : public antlr4::ParserRuleContext {
  public:
    Library_textContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<Library_descriptionContext *> library_description();
    Library_descriptionContext* library_description(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Library_textContext* library_text();

  class  Library_descriptionContext : public antlr4::ParserRuleContext {
  public:
    Library_descriptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Library_declarationContext *library_declaration();
    Include_statementContext *include_statement();
    Config_declarationContext *config_declaration();
    antlr4::tree::TerminalNode *SC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Library_incdirContext* library_incdir();

  class  Include_statementContext : public antlr4::ParserRuleContext {
  public:
    Include_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INCLUDE();
    File_path_specContext *file_path_spec();
    antlr4::tree::TerminalNode *SC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Include_statementContext* include_statement();

  class  File_path_specContext : public antlr4::ParserRuleContext {
  public:
    File_path_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILE_PATH_SPEC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_path_specContext* file_path_spec();

  class  Source_textContext : public antlr4::ParserRuleContext {
  public:
    Source_textContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    Timeunits_declarationContext *timeunits_declaration();
    std::vector<DescriptionContext *> description();
    DescriptionContext* description(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Source_textContext* source_text();

  class  DescriptionContext : public antlr4::ParserRuleContext {
  public:
    DescriptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_declarationContext *module_declaration();
    Udp_declarationContext *udp_declaration();
    Interface_declarationContext *interface_declaration();
    Program_declarationContext *program_declaration();
    Package_declarationContext *package_declaration();
    Package_itemContext *package_item();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Bind_directiveContext *bind_directive();
    Config_declarationContext *config_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DescriptionContext* description();

  class  Module_headerContext : public antlr4::ParserRuleContext {
  public:
    Module_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_keywordContext *module_keyword();
    Module_identifierContext *module_identifier();
    antlr4::tree::TerminalNode *SC();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    LifetimeContext *lifetime();
    std::vector<Package_import_declarationContext *> package_import_declaration();
    Package_import_declarationContext* package_import_declaration(size_t i);
    Parameter_port_listContext *parameter_port_list();
    List_of_port_declarationsContext *list_of_port_declarations();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_headerContext* module_header();

  class  Module_declarationContext : public antlr4::ParserRuleContext {
  public:
    Module_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_headerContext *module_header();
    antlr4::tree::TerminalNode *ENDMODULE();
    Timeunits_declarationContext *timeunits_declaration();
    std::vector<Module_itemContext *> module_item();
    Module_itemContext* module_item(size_t i);
    Module_nameContext *module_name();
    Module_keywordContext *module_keyword();
    Module_identifierContext *module_identifier();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *DTAS();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    LifetimeContext *lifetime();
    antlr4::tree::TerminalNode *EXTERN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_declarationContext* module_declaration();

  class  Module_nameContext : public antlr4::ParserRuleContext {
  public:
    Module_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CL();
    Module_identifierContext *module_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_nameContext* module_name();

  class  Module_keywordContext : public antlr4::ParserRuleContext {
  public:
    Module_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MODULE();
    antlr4::tree::TerminalNode *MACROMODULE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_keywordContext* module_keyword();

  class  Interface_declarationContext : public antlr4::ParserRuleContext {
  public:
    Interface_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Interface_headerContext *interface_header();
    antlr4::tree::TerminalNode *ENDINTERFACE();
    Timeunits_declarationContext *timeunits_declaration();
    std::vector<Interface_itemContext *> interface_item();
    Interface_itemContext* interface_item(size_t i);
    Interface_nameContext *interface_name();
    antlr4::tree::TerminalNode *INTERFACE();
    Interface_identifierContext *interface_identifier();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *DTAS();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    antlr4::tree::TerminalNode *EXTERN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_declarationContext* interface_declaration();

  class  Interface_nameContext : public antlr4::ParserRuleContext {
  public:
    Interface_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CL();
    Interface_identifierContext *interface_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_nameContext* interface_name();

  class  Interface_headerContext : public antlr4::ParserRuleContext {
  public:
    Interface_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTERFACE();
    Interface_identifierContext *interface_identifier();
    antlr4::tree::TerminalNode *SC();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    LifetimeContext *lifetime();
    std::vector<Package_import_declarationContext *> package_import_declaration();
    Package_import_declarationContext* package_import_declaration(size_t i);
    Parameter_port_listContext *parameter_port_list();
    List_of_port_declarationsContext *list_of_port_declarations();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_headerContext* interface_header();

  class  Program_declarationContext : public antlr4::ParserRuleContext {
  public:
    Program_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Program_headerContext *program_header();
    antlr4::tree::TerminalNode *ENDPROGRAM();
    Timeunits_declarationContext *timeunits_declaration();
    std::vector<Program_itemContext *> program_item();
    Program_itemContext* program_item(size_t i);
    Program_nameContext *program_name();
    antlr4::tree::TerminalNode *PROGRAM();
    Program_identifierContext *program_identifier();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *DTAS();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    antlr4::tree::TerminalNode *EXTERN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Program_declarationContext* program_declaration();

  class  Program_nameContext : public antlr4::ParserRuleContext {
  public:
    Program_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CL();
    Program_identifierContext *program_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Program_nameContext* program_name();

  class  Program_headerContext : public antlr4::ParserRuleContext {
  public:
    Program_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROGRAM();
    Program_identifierContext *program_identifier();
    antlr4::tree::TerminalNode *SC();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    LifetimeContext *lifetime();
    std::vector<Package_import_declarationContext *> package_import_declaration();
    Package_import_declarationContext* package_import_declaration(size_t i);
    Parameter_port_listContext *parameter_port_list();
    List_of_port_declarationsContext *list_of_port_declarations();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Program_headerContext* program_header();

  class  Checker_declarationContext : public antlr4::ParserRuleContext {
  public:
    Checker_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECKER();
    Checker_identifierContext *checker_identifier();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *ENDCHECKER();
    Checker_portsContext *checker_ports();
    std::vector<Checker_decl_itemContext *> checker_decl_item();
    Checker_decl_itemContext* checker_decl_item(size_t i);
    Checker_nameContext *checker_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Checker_declarationContext* checker_declaration();

  class  Checker_nameContext : public antlr4::ParserRuleContext {
  public:
    Checker_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CL();
    Checker_identifierContext *checker_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Checker_nameContext* checker_name();

  class  Checker_portsContext : public antlr4::ParserRuleContext {
  public:
    Checker_portsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    Checker_port_listContext *checker_port_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Checker_portsContext* checker_ports();

  class  Checker_decl_itemContext : public antlr4::ParserRuleContext {
  public:
    Checker_decl_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Checker_itemContext *checker_item();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Checker_decl_itemContext* checker_decl_item();

  class  Class_declarationContext : public antlr4::ParserRuleContext {
  public:
    Class_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS();
    Class_identifierContext *class_identifier();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *ENDCLASS();
    antlr4::tree::TerminalNode *VIRTUAL();
    LifetimeContext *lifetime();
    Parameter_port_listContext *parameter_port_list();
    Class_extensionContext *class_extension();
    Class_implementationContext *class_implementation();
    std::vector<Class_itemContext *> class_item();
    Class_itemContext* class_item(size_t i);
    Class_nameContext *class_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_declarationContext* class_declaration();

  class  Class_nameContext : public antlr4::ParserRuleContext {
  public:
    Class_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CL();
    Class_identifierContext *class_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_nameContext* class_name();

  class  Class_extensionContext : public antlr4::ParserRuleContext {
  public:
    Class_extensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTENDS();
    Class_typeContext *class_type();
    Arg_listContext *arg_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_extensionContext* class_extension();

  class  Class_implementationContext : public antlr4::ParserRuleContext {
  public:
    Class_implementationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPLEMENTS();
    std::vector<Interface_class_typeContext *> interface_class_type();
    Interface_class_typeContext* interface_class_type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_implementationContext* class_implementation();

  class  Interface_class_typeContext : public antlr4::ParserRuleContext {
  public:
    Interface_class_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ps_identifierContext *ps_identifier();
    Parameter_value_assignmentContext *parameter_value_assignment();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_class_typeContext* interface_class_type();

  class  Interface_class_declarationContext : public antlr4::ParserRuleContext {
  public:
    Interface_class_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTERFACE();
    antlr4::tree::TerminalNode *CLASS();
    Class_identifierContext *class_identifier();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *ENDCLASS();
    Parameter_port_listContext *parameter_port_list();
    Interface_class_extensionContext *interface_class_extension();
    std::vector<Interface_class_itemContext *> interface_class_item();
    Interface_class_itemContext* interface_class_item(size_t i);
    Class_nameContext *class_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_class_declarationContext* interface_class_declaration();

  class  Interface_class_extensionContext : public antlr4::ParserRuleContext {
  public:
    Interface_class_extensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTENDS();
    std::vector<Interface_class_typeContext *> interface_class_type();
    Interface_class_typeContext* interface_class_type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_class_extensionContext* interface_class_extension();

  class  Interface_class_itemContext : public antlr4::ParserRuleContext {
  public:
    Interface_class_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_declarationContext *type_declaration();
    Interface_class_methodContext *interface_class_method();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Local_parameter_declarationContext *local_parameter_declaration();
    antlr4::tree::TerminalNode *SC();
    Parameter_declarationContext *parameter_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_class_itemContext* interface_class_item();

  class  Interface_class_methodContext : public antlr4::ParserRuleContext {
  public:
    Interface_class_methodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PURE();
    antlr4::tree::TerminalNode *VIRTUAL();
    Method_prototypeContext *method_prototype();
    antlr4::tree::TerminalNode *SC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_class_methodContext* interface_class_method();

  class  Package_declarationContext : public antlr4::ParserRuleContext {
  public:
    Package_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PACKAGE();
    Package_identifierContext *package_identifier();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *ENDPACKAGE();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    LifetimeContext *lifetime();
    Timeunits_declarationContext *timeunits_declaration();
    std::vector<Pkg_decl_itemContext *> pkg_decl_item();
    Pkg_decl_itemContext* pkg_decl_item(size_t i);
    Package_nameContext *package_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_declarationContext* package_declaration();

  class  Package_nameContext : public antlr4::ParserRuleContext {
  public:
    Package_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CL();
    Package_identifierContext *package_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_nameContext* package_name();

  class  Pkg_decl_itemContext : public antlr4::ParserRuleContext {
  public:
    Pkg_decl_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Package_itemContext *package_item();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pkg_decl_itemContext* pkg_decl_item();

  class  Timeunits_declarationContext : public antlr4::ParserRuleContext {
  public:
    Timeunits_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TIMEUNIT();
    std::vector<Time_literalContext *> time_literal();
    Time_literalContext* time_literal(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SC();
    antlr4::tree::TerminalNode* SC(size_t i);
    antlr4::tree::TerminalNode *SL();
    antlr4::tree::TerminalNode *TIMEPRECISION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Timeunits_declarationContext* timeunits_declaration();

  class  Parameter_port_listContext : public antlr4::ParserRuleContext {
  public:
    Parameter_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HA();
    antlr4::tree::TerminalNode *LP();
    List_of_param_assignmentsContext *list_of_param_assignments();
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    std::vector<Parameter_port_declarationContext *> parameter_port_declaration();
    Parameter_port_declarationContext* parameter_port_declaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_port_listContext* parameter_port_list();

  class  Parameter_port_declarationContext : public antlr4::ParserRuleContext {
  public:
    Parameter_port_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parameter_declarationContext *parameter_declaration();
    Local_parameter_declarationContext *local_parameter_declaration();
    Data_typeContext *data_type();
    List_of_param_assignmentsContext *list_of_param_assignments();
    antlr4::tree::TerminalNode *TYPE();
    List_of_type_assignmentsContext *list_of_type_assignments();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_port_declarationContext* parameter_port_declaration();

  class  List_of_port_declarationsContext : public antlr4::ParserRuleContext {
  public:
    List_of_port_declarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<Port_declContext *> port_decl();
    Port_declContext* port_decl(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    std::vector<PortContext *> port();
    PortContext* port(size_t i);
    Port_implicitContext *port_implicit();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_port_declarationsContext* list_of_port_declarations();

  class  Port_declContext : public antlr4::ParserRuleContext {
  public:
    Port_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ansi_port_declarationContext *ansi_port_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Port_declContext* port_decl();

  class  Port_declarationContext : public antlr4::ParserRuleContext {
  public:
    Port_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Inout_declarationContext *inout_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Input_declarationContext *input_declaration();
    Output_declarationContext *output_declaration();
    Ref_declarationContext *ref_declaration();
    Interface_port_declarationContext *interface_port_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Port_declarationContext* port_declaration();

  class  PortContext : public antlr4::ParserRuleContext {
  public:
    PortContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_implicitContext *port_implicit();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PortContext* port();

  class  Port_implicitContext : public antlr4::ParserRuleContext {
  public:
    Port_implicitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_expressionContext *port_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Port_implicitContext* port_implicit();

  class  Port_expressionContext : public antlr4::ParserRuleContext {
  public:
    Port_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_identifierContext *port_identifier();
    antlr4::tree::TerminalNode *LB();
    Constant_indexed_rangeContext *constant_indexed_range();
    antlr4::tree::TerminalNode *RB();
    Constant_bit_selectContext *constant_bit_select();
    std::vector<Const_member_selectContext *> const_member_select();
    Const_member_selectContext* const_member_select(size_t i);
    Constant_part_select_rangeContext *constant_part_select_range();
    antlr4::tree::TerminalNode *LC();
    std::vector<Port_referenceContext *> port_reference();
    Port_referenceContext* port_reference(size_t i);
    antlr4::tree::TerminalNode *RC();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Port_expressionContext* port_expression();

  class  Port_referenceContext : public antlr4::ParserRuleContext {
  public:
    Port_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_identifierContext *port_identifier();
    Constant_selectContext *constant_select();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Port_referenceContext* port_reference();

  class  Port_directionContext : public antlr4::ParserRuleContext {
  public:
    Port_directionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *OUTPUT();
    antlr4::tree::TerminalNode *INOUT();
    antlr4::tree::TerminalNode *REF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Port_directionContext* port_direction();

  class  Ansi_port_declarationContext : public antlr4::ParserRuleContext {
  public:
    Ansi_port_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTERFACE();
    Port_identifierContext *port_identifier();
    antlr4::tree::TerminalNode *DT();
    Modport_identifierContext *modport_identifier();
    std::vector<Unpacked_dimensionContext *> unpacked_dimension();
    Unpacked_dimensionContext* unpacked_dimension(size_t i);
    antlr4::tree::TerminalNode *EQ();
    Constant_expressionContext *constant_expression();
    Interface_identifierContext *interface_identifier();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    Port_directionContext *port_direction();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *INTERCONNECT();
    Implicit_data_typeContext *implicit_data_type();
    antlr4::tree::TerminalNode *VAR();
    Data_type_or_implicitContext *data_type_or_implicit();
    std::vector<Variable_dimensionContext *> variable_dimension();
    Variable_dimensionContext* variable_dimension(size_t i);
    Data_typeContext *data_type();
    Net_typeContext *net_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ansi_port_declarationContext* ansi_port_declaration();

  class  Elaboration_system_taskContext : public antlr4::ParserRuleContext {
  public:
    Elaboration_system_taskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DLFATAL();
    antlr4::tree::TerminalNode *SC();
    Fatal_arg_listContext *fatal_arg_list();
    antlr4::tree::TerminalNode *DLERROR();
    Arg_listContext *arg_list();
    antlr4::tree::TerminalNode *DLWARNING();
    antlr4::tree::TerminalNode *DLINFO();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Elaboration_system_taskContext* elaboration_system_task();

  class  Fatal_arg_listContext : public antlr4::ParserRuleContext {
  public:
    Fatal_arg_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    Finish_numberContext *finish_number();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *CO();
    List_of_argumentsContext *list_of_arguments();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fatal_arg_listContext* fatal_arg_list();

  class  Finish_numberContext : public antlr4::ParserRuleContext {
  public:
    Finish_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unsigned_numberContext *unsigned_number();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Finish_numberContext* finish_number();

  class  Module_common_itemContext : public antlr4::ParserRuleContext {
  public:
    Module_common_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_item_declarationContext *module_item_declaration();
    Module_program_interface_instantiationContext *module_program_interface_instantiation();
    Assertion_itemContext *assertion_item();
    Bind_directiveContext *bind_directive();
    Continuous_assignContext *continuous_assign();
    Net_aliasContext *net_alias();
    Initial_constructContext *initial_construct();
    Final_constructContext *final_construct();
    Always_constructContext *always_construct();
    Loop_generate_constructContext *loop_generate_construct();
    Conditional_generate_constructContext *conditional_generate_construct();
    Elaboration_system_taskContext *elaboration_system_task();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_common_itemContext* module_common_item();

  class  Module_itemContext : public antlr4::ParserRuleContext {
  public:
    Module_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_declarationContext *port_declaration();
    antlr4::tree::TerminalNode *SC();
    Generate_regionContext *generate_region();
    Parameter_overrideContext *parameter_override();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Gate_instantiationContext *gate_instantiation();
    Module_common_itemContext *module_common_item();
    Udp_instantiationContext *udp_instantiation();
    Specify_blockContext *specify_block();
    Specparam_declarationContext *specparam_declaration();
    Program_declarationContext *program_declaration();
    Module_declarationContext *module_declaration();
    Interface_declarationContext *interface_declaration();
    Timeunits_declarationContext *timeunits_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_itemContext* module_item();

  class  Module_item_declarationContext : public antlr4::ParserRuleContext {
  public:
    Module_item_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Package_item_declarationContext *package_item_declaration();
    Genvar_declarationContext *genvar_declaration();
    Clocking_declarationContext *clocking_declaration();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *CLOCKING();
    Clocking_identifierContext *clocking_identifier();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *IFF();
    Expression_or_distContext *expression_or_dist();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_item_declarationContext* module_item_declaration();

  class  Parameter_overrideContext : public antlr4::ParserRuleContext {
  public:
    Parameter_overrideContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFPARAM();
    List_of_defparam_assignmentsContext *list_of_defparam_assignments();
    antlr4::tree::TerminalNode *SC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_overrideContext* parameter_override();

  class  Bind_directiveContext : public antlr4::ParserRuleContext {
  public:
    Bind_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIND();
    Bind_target_scopeContext *bind_target_scope();
    Bind_instantiationContext *bind_instantiation();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *CL();
    Bind_target_instance_listContext *bind_target_instance_list();
    Bind_target_instanceContext *bind_target_instance();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bind_directiveContext* bind_directive();

  class  Bind_target_scopeContext : public antlr4::ParserRuleContext {
  public:
    Bind_target_scopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_identifierContext *module_identifier();
    Interface_identifierContext *interface_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bind_target_scopeContext* bind_target_scope();

  class  Bind_target_instanceContext : public antlr4::ParserRuleContext {
  public:
    Bind_target_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();
    Constant_bit_selectContext *constant_bit_select();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bind_target_instanceContext* bind_target_instance();

  class  Bind_target_instance_listContext : public antlr4::ParserRuleContext {
  public:
    Bind_target_instance_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Bind_target_instanceContext *> bind_target_instance();
    Bind_target_instanceContext* bind_target_instance(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bind_target_instance_listContext* bind_target_instance_list();

  class  Bind_instantiationContext : public antlr4::ParserRuleContext {
  public:
    Bind_instantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_program_interface_instantiationContext *module_program_interface_instantiation();
    Checker_instantiationContext *checker_instantiation();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bind_instantiationContext* bind_instantiation();

  class  Config_declarationContext : public antlr4::ParserRuleContext {
  public:
    Config_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONFIG();
    Config_identifierContext *config_identifier();
    std::vector<antlr4::tree::TerminalNode *> SC();
    antlr4::tree::TerminalNode* SC(size_t i);
    Design_statementContext *design_statement();
    antlr4::tree::TerminalNode *ENDCONFIG();
    std::vector<Local_parameter_declarationContext *> local_parameter_declaration();
    Local_parameter_declarationContext* local_parameter_declaration(size_t i);
    std::vector<Config_rule_statementContext *> config_rule_statement();
    Config_rule_statementContext* config_rule_statement(size_t i);
    Config_nameContext *config_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Config_declarationContext* config_declaration();

  class  Config_nameContext : public antlr4::ParserRuleContext {
  public:
    Config_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CL();
    Config_identifierContext *config_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Config_nameContext* config_name();

  class  Design_statementContext : public antlr4::ParserRuleContext {
  public:
    Design_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DESIGN();
    antlr4::tree::TerminalNode *SC();
    std::vector<Design_statement_itemContext *> design_statement_item();
    Design_statement_itemContext* design_statement_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Design_statementContext* design_statement();

  class  Design_statement_itemContext : public antlr4::ParserRuleContext {
  public:
    Design_statement_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cell_identifierContext *cell_identifier();
    Library_identifierContext *library_identifier();
    antlr4::tree::TerminalNode *DT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Config_rule_statementContext* config_rule_statement();

  class  Default_clauseContext : public antlr4::ParserRuleContext {
  public:
    Default_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Default_clauseContext* default_clause();

  class  Inst_clauseContext : public antlr4::ParserRuleContext {
  public:
    Inst_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSTANCE();
    Inst_nameContext *inst_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cell_clauseContext* cell_clause();

  class  Liblist_clauseContext : public antlr4::ParserRuleContext {
  public:
    Liblist_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIBLIST();
    std::vector<Library_identifierContext *> library_identifier();
    Library_identifierContext* library_identifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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
    std::vector<Named_parameter_assignmentContext *> named_parameter_assignment();
    Named_parameter_assignmentContext* named_parameter_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Use_clauseContext* use_clause();

  class  Extern_tf_declarationContext : public antlr4::ParserRuleContext {
  public:
    Extern_tf_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTERN();
    Method_prototypeContext *method_prototype();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *FORKJOIN();
    Task_prototypeContext *task_prototype();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Extern_tf_declarationContext* extern_tf_declaration();

  class  Interface_itemContext : public antlr4::ParserRuleContext {
  public:
    Interface_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_declarationContext *port_declaration();
    antlr4::tree::TerminalNode *SC();
    Generate_regionContext *generate_region();
    Module_common_itemContext *module_common_item();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Extern_tf_declarationContext *extern_tf_declaration();
    Program_declarationContext *program_declaration();
    Modport_declarationContext *modport_declaration();
    Interface_declarationContext *interface_declaration();
    Timeunits_declarationContext *timeunits_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_itemContext* interface_item();

  class  Program_itemContext : public antlr4::ParserRuleContext {
  public:
    Program_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_declarationContext *port_declaration();
    antlr4::tree::TerminalNode *SC();
    Continuous_assignContext *continuous_assign();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Module_item_declarationContext *module_item_declaration();
    Initial_constructContext *initial_construct();
    Final_constructContext *final_construct();
    Concurrent_assertion_itemContext *concurrent_assertion_item();
    Timeunits_declarationContext *timeunits_declaration();
    Loop_generate_constructContext *loop_generate_construct();
    Conditional_generate_constructContext *conditional_generate_construct();
    Generate_regionContext *generate_region();
    Elaboration_system_taskContext *elaboration_system_task();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Program_itemContext* program_item();

  class  Checker_port_listContext : public antlr4::ParserRuleContext {
  public:
    Checker_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Checker_port_itemContext *> checker_port_item();
    Checker_port_itemContext* checker_port_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Checker_port_listContext* checker_port_list();

  class  Checker_port_itemContext : public antlr4::ParserRuleContext {
  public:
    Checker_port_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Formal_port_identifierContext *formal_port_identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Checker_port_directionContext *checker_port_direction();
    Property_formal_typeContext *property_formal_type();
    std::vector<Variable_dimensionContext *> variable_dimension();
    Variable_dimensionContext* variable_dimension(size_t i);
    antlr4::tree::TerminalNode *EQ();
    Property_actual_argContext *property_actual_arg();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Checker_port_itemContext* checker_port_item();

  class  Checker_port_directionContext : public antlr4::ParserRuleContext {
  public:
    Checker_port_directionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *OUTPUT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Checker_port_directionContext* checker_port_direction();

  class  Checker_itemContext : public antlr4::ParserRuleContext {
  public:
    Checker_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Checker_item_declarationContext *checker_item_declaration();
    Initial_constructContext *initial_construct();
    Always_constructContext *always_construct();
    Final_constructContext *final_construct();
    Assertion_itemContext *assertion_item();
    Continuous_assignContext *continuous_assign();
    Loop_generate_constructContext *loop_generate_construct();
    Conditional_generate_constructContext *conditional_generate_construct();
    Generate_regionContext *generate_region();
    Elaboration_system_taskContext *elaboration_system_task();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Checker_itemContext* checker_item();

  class  Checker_item_declarationContext : public antlr4::ParserRuleContext {
  public:
    Checker_item_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_declarationContext *data_declaration();
    antlr4::tree::TerminalNode *RAND();
    Function_declarationContext *function_declaration();
    Checker_declarationContext *checker_declaration();
    Assertion_item_declarationContext *assertion_item_declaration();
    Covergroup_declarationContext *covergroup_declaration();
    Genvar_declarationContext *genvar_declaration();
    Clocking_declarationContext *clocking_declaration();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *CLOCKING();
    Clocking_identifierContext *clocking_identifier();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *IFF();
    Expression_or_distContext *expression_or_dist();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Checker_item_declarationContext* checker_item_declaration();

  class  Class_itemContext : public antlr4::ParserRuleContext {
  public:
    Class_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Class_propertyContext *class_property();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Class_methodContext *class_method();
    Class_constraintContext *class_constraint();
    Class_declarationContext *class_declaration();
    Covergroup_declarationContext *covergroup_declaration();
    Local_parameter_declarationContext *local_parameter_declaration();
    antlr4::tree::TerminalNode *SC();
    Parameter_declarationContext *parameter_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_itemContext* class_item();

  class  Class_propertyContext : public antlr4::ParserRuleContext {
  public:
    Class_propertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST();
    Data_typeContext *data_type();
    Const_identifierContext *const_identifier();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *PROTECTED();
    antlr4::tree::TerminalNode *LOCAL();
    std::vector<Class_item_qualifierContext *> class_item_qualifier();
    Class_item_qualifierContext* class_item_qualifier(size_t i);
    antlr4::tree::TerminalNode *EQ();
    Constant_expressionContext *constant_expression();
    List_of_variable_decl_assignmentsContext *list_of_variable_decl_assignments();
    std::vector<Property_qualifierContext *> property_qualifier();
    Property_qualifierContext* property_qualifier(size_t i);
    antlr4::tree::TerminalNode *AUTOMATIC();
    LifetimeContext *lifetime();
    antlr4::tree::TerminalNode *VAR();
    Data_type_or_implicitContext *data_type_or_implicit();
    Net_type_declarationContext *net_type_declaration();
    Package_import_declarationContext *package_import_declaration();
    Type_declarationContext *type_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_propertyContext* class_property();

  class  Class_methodContext : public antlr4::ParserRuleContext {
  public:
    Class_methodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Task_declarationContext *task_declaration();
    std::vector<Method_qualifierContext *> method_qualifier();
    Method_qualifierContext* method_qualifier(size_t i);
    Function_declarationContext *function_declaration();
    antlr4::tree::TerminalNode *PURE();
    antlr4::tree::TerminalNode *VIRTUAL();
    Method_prototypeContext *method_prototype();
    antlr4::tree::TerminalNode *SC();
    std::vector<Class_item_qualifierContext *> class_item_qualifier();
    Class_item_qualifierContext* class_item_qualifier(size_t i);
    antlr4::tree::TerminalNode *EXTERN();
    Class_constructor_declarationContext *class_constructor_declaration();
    Class_constructor_prototypeContext *class_constructor_prototype();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_methodContext* class_method();

  class  Class_constructor_prototypeContext : public antlr4::ParserRuleContext {
  public:
    Class_constructor_prototypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *NEW();
    antlr4::tree::TerminalNode *SC();
    Port_listContext *port_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_constructor_prototypeContext* class_constructor_prototype();

  class  Port_listContext : public antlr4::ParserRuleContext {
  public:
    Port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    Tf_port_listContext *tf_port_list();
    antlr4::tree::TerminalNode *RP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Port_listContext* port_list();

  class  Class_constraintContext : public antlr4::ParserRuleContext {
  public:
    Class_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constraint_prototypeContext *constraint_prototype();
    Constraint_declarationContext *constraint_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_constraintContext* class_constraint();

  class  Class_item_qualifierContext : public antlr4::ParserRuleContext {
  public:
    Class_item_qualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *PROTECTED();
    antlr4::tree::TerminalNode *LOCAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_item_qualifierContext* class_item_qualifier();

  class  Property_qualifierContext : public antlr4::ParserRuleContext {
  public:
    Property_qualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Random_qualifierContext *random_qualifier();
    Class_item_qualifierContext *class_item_qualifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Property_qualifierContext* property_qualifier();

  class  Random_qualifierContext : public antlr4::ParserRuleContext {
  public:
    Random_qualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RAND();
    antlr4::tree::TerminalNode *RANDC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Random_qualifierContext* random_qualifier();

  class  Method_qualifierContext : public antlr4::ParserRuleContext {
  public:
    Method_qualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VIRTUAL();
    antlr4::tree::TerminalNode *PURE();
    Class_item_qualifierContext *class_item_qualifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Method_qualifierContext* method_qualifier();

  class  Method_prototypeContext : public antlr4::ParserRuleContext {
  public:
    Method_prototypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Task_prototypeContext *task_prototype();
    Function_prototypeContext *function_prototype();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Method_prototypeContext* method_prototype();

  class  Class_constructor_declarationContext : public antlr4::ParserRuleContext {
  public:
    Class_constructor_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    std::vector<antlr4::tree::TerminalNode *> NEW();
    antlr4::tree::TerminalNode* NEW(size_t i);
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *ENDFUNCTION();
    Class_scopeContext *class_scope();
    Port_listContext *port_list();
    std::vector<Block_item_declarationContext *> block_item_declaration();
    Block_item_declarationContext* block_item_declaration(size_t i);
    Super_class_constructor_callContext *super_class_constructor_call();
    std::vector<Function_statement_or_nullContext *> function_statement_or_null();
    Function_statement_or_nullContext* function_statement_or_null(size_t i);
    antlr4::tree::TerminalNode *CL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_constructor_declarationContext* class_constructor_declaration();

  class  Super_class_constructor_callContext : public antlr4::ParserRuleContext {
  public:
    Super_class_constructor_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUPER();
    antlr4::tree::TerminalNode *DT();
    antlr4::tree::TerminalNode *NEW();
    antlr4::tree::TerminalNode *SC();
    Arg_listContext *arg_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Super_class_constructor_callContext* super_class_constructor_call();

  class  Constraint_declarationContext : public antlr4::ParserRuleContext {
  public:
    Constraint_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONSTRAINT();
    Constraint_identifierContext *constraint_identifier();
    Constraint_blockContext *constraint_block();
    antlr4::tree::TerminalNode *STATIC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_declarationContext* constraint_declaration();

  class  Constraint_blockContext : public antlr4::ParserRuleContext {
  public:
    Constraint_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LC();
    antlr4::tree::TerminalNode *RC();
    std::vector<Constraint_block_itemContext *> constraint_block_item();
    Constraint_block_itemContext* constraint_block_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_blockContext* constraint_block();

  class  Constraint_block_itemContext : public antlr4::ParserRuleContext {
  public:
    Constraint_block_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SOLVE();
    std::vector<Solve_before_listContext *> solve_before_list();
    Solve_before_listContext* solve_before_list(size_t i);
    antlr4::tree::TerminalNode *BEFORE();
    antlr4::tree::TerminalNode *SC();
    Constraint_expressionContext *constraint_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_block_itemContext* constraint_block_item();

  class  Solve_before_listContext : public antlr4::ParserRuleContext {
  public:
    Solve_before_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constraint_primaryContext *> constraint_primary();
    Constraint_primaryContext* constraint_primary(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Solve_before_listContext* solve_before_list();

  class  Constraint_primaryContext : public antlr4::ParserRuleContext {
  public:
    Constraint_primaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();
    Implicit_class_handleContext *implicit_class_handle();
    antlr4::tree::TerminalNode *DT();
    Class_scopeContext *class_scope();
    Select_Context *select_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_primaryContext* constraint_primary();

  class  Constraint_expressionContext : public antlr4::ParserRuleContext {
  public:
    Constraint_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expression_or_distContext *expression_or_dist();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *SOFT();
    Uniqueness_constraintContext *uniqueness_constraint();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *MIGT();
    std::vector<Constraint_setContext *> constraint_set();
    Constraint_setContext* constraint_set(size_t i);
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *FOREACH();
    Ps_or_hierarchical_array_identifierContext *ps_or_hierarchical_array_identifier();
    antlr4::tree::TerminalNode *LB();
    Loop_variablesContext *loop_variables();
    antlr4::tree::TerminalNode *RB();
    antlr4::tree::TerminalNode *DISABLE();
    Constraint_primaryContext *constraint_primary();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_expressionContext* constraint_expression();

  class  Uniqueness_constraintContext : public antlr4::ParserRuleContext {
  public:
    Uniqueness_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *LC();
    Open_range_listContext *open_range_list();
    antlr4::tree::TerminalNode *RC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Uniqueness_constraintContext* uniqueness_constraint();

  class  Constraint_setContext : public antlr4::ParserRuleContext {
  public:
    Constraint_setContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constraint_expressionContext *> constraint_expression();
    Constraint_expressionContext* constraint_expression(size_t i);
    antlr4::tree::TerminalNode *LC();
    antlr4::tree::TerminalNode *RC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_setContext* constraint_set();

  class  Dist_listContext : public antlr4::ParserRuleContext {
  public:
    Dist_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Dist_itemContext *> dist_item();
    Dist_itemContext* dist_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dist_listContext* dist_list();

  class  Dist_itemContext : public antlr4::ParserRuleContext {
  public:
    Dist_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Value_rangeContext *value_range();
    Dist_weightContext *dist_weight();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dist_itemContext* dist_item();

  class  Dist_weightContext : public antlr4::ParserRuleContext {
  public:
    Dist_weightContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLEQ();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLSL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dist_weightContext* dist_weight();

  class  Constraint_prototypeContext : public antlr4::ParserRuleContext {
  public:
    Constraint_prototypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONSTRAINT();
    Constraint_identifierContext *constraint_identifier();
    antlr4::tree::TerminalNode *SC();
    Constraint_prototype_qualifierContext *constraint_prototype_qualifier();
    antlr4::tree::TerminalNode *STATIC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_prototypeContext* constraint_prototype();

  class  Constraint_prototype_qualifierContext : public antlr4::ParserRuleContext {
  public:
    Constraint_prototype_qualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTERN();
    antlr4::tree::TerminalNode *PURE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_prototype_qualifierContext* constraint_prototype_qualifier();

  class  Extern_constraint_declarationContext : public antlr4::ParserRuleContext {
  public:
    Extern_constraint_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONSTRAINT();
    Class_scopeContext *class_scope();
    Constraint_identifierContext *constraint_identifier();
    Constraint_blockContext *constraint_block();
    antlr4::tree::TerminalNode *STATIC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Extern_constraint_declarationContext* extern_constraint_declaration();

  class  Identifier_listContext : public antlr4::ParserRuleContext {
  public:
    Identifier_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Identifier_listContext* identifier_list();

  class  Package_itemContext : public antlr4::ParserRuleContext {
  public:
    Package_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Package_item_declarationContext *package_item_declaration();
    Anonymous_programContext *anonymous_program();
    Package_export_declarationContext *package_export_declaration();
    Timeunits_declarationContext *timeunits_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_itemContext* package_item();

  class  Package_item_declarationContext : public antlr4::ParserRuleContext {
  public:
    Package_item_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_declarationContext *net_declaration();
    Data_declarationContext *data_declaration();
    Task_declarationContext *task_declaration();
    Function_declarationContext *function_declaration();
    Checker_declarationContext *checker_declaration();
    Dpi_import_exportContext *dpi_import_export();
    Extern_constraint_declarationContext *extern_constraint_declaration();
    Class_declarationContext *class_declaration();
    Interface_class_declarationContext *interface_class_declaration();
    Class_constructor_declarationContext *class_constructor_declaration();
    Local_parameter_declarationContext *local_parameter_declaration();
    antlr4::tree::TerminalNode *SC();
    Parameter_declarationContext *parameter_declaration();
    Covergroup_declarationContext *covergroup_declaration();
    Assertion_item_declarationContext *assertion_item_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_item_declarationContext* package_item_declaration();

  class  Anonymous_programContext : public antlr4::ParserRuleContext {
  public:
    Anonymous_programContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROGRAM();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *ENDPROGRAM();
    std::vector<Anonymous_program_itemContext *> anonymous_program_item();
    Anonymous_program_itemContext* anonymous_program_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Anonymous_programContext* anonymous_program();

  class  Anonymous_program_itemContext : public antlr4::ParserRuleContext {
  public:
    Anonymous_program_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Task_declarationContext *task_declaration();
    Function_declarationContext *function_declaration();
    Class_declarationContext *class_declaration();
    Interface_class_declarationContext *interface_class_declaration();
    Covergroup_declarationContext *covergroup_declaration();
    Class_constructor_declarationContext *class_constructor_declaration();
    antlr4::tree::TerminalNode *SC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Anonymous_program_itemContext* anonymous_program_item();

  class  Local_parameter_declarationContext : public antlr4::ParserRuleContext {
  public:
    Local_parameter_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCALPARAM();
    List_of_param_assignmentsContext *list_of_param_assignments();
    Data_type_or_implicitContext *data_type_or_implicit();
    antlr4::tree::TerminalNode *TYPE();
    List_of_type_assignmentsContext *list_of_type_assignments();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Local_parameter_declarationContext* local_parameter_declaration();

  class  Parameter_declarationContext : public antlr4::ParserRuleContext {
  public:
    Parameter_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARAMETER();
    List_of_param_assignmentsContext *list_of_param_assignments();
    Data_type_or_implicitContext *data_type_or_implicit();
    antlr4::tree::TerminalNode *TYPE();
    List_of_type_assignmentsContext *list_of_type_assignments();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_declarationContext* parameter_declaration();

  class  Specparam_declarationContext : public antlr4::ParserRuleContext {
  public:
    Specparam_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SPECPARAM();
    List_of_specparam_assignmentsContext *list_of_specparam_assignments();
    antlr4::tree::TerminalNode *SC();
    Packed_dimensionContext *packed_dimension();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Specparam_declarationContext* specparam_declaration();

  class  Inout_declarationContext : public antlr4::ParserRuleContext {
  public:
    Inout_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INOUT();
    List_of_port_identifiersContext *list_of_port_identifiers();
    Net_port_typeContext *net_port_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Inout_declarationContext* inout_declaration();

  class  Input_declarationContext : public antlr4::ParserRuleContext {
  public:
    Input_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INPUT();
    List_of_port_identifiersContext *list_of_port_identifiers();
    antlr4::tree::TerminalNode *INTERCONNECT();
    Implicit_data_typeContext *implicit_data_type();
    Net_typeContext *net_type();
    Data_type_or_implicitContext *data_type_or_implicit();
    antlr4::tree::TerminalNode *VAR();
    List_of_variable_identifiersContext *list_of_variable_identifiers();
    Data_typeContext *data_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Input_declarationContext* input_declaration();

  class  Output_declarationContext : public antlr4::ParserRuleContext {
  public:
    Output_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OUTPUT();
    List_of_port_identifiersContext *list_of_port_identifiers();
    antlr4::tree::TerminalNode *INTERCONNECT();
    Implicit_data_typeContext *implicit_data_type();
    Net_typeContext *net_type();
    Data_type_or_implicitContext *data_type_or_implicit();
    antlr4::tree::TerminalNode *VAR();
    List_of_variable_port_identifiersContext *list_of_variable_port_identifiers();
    Data_typeContext *data_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Output_declarationContext* output_declaration();

  class  Interface_port_declarationContext : public antlr4::ParserRuleContext {
  public:
    Interface_port_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Interface_identifierContext *interface_identifier();
    List_of_interface_identifiersContext *list_of_interface_identifiers();
    antlr4::tree::TerminalNode *DT();
    Modport_identifierContext *modport_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_port_declarationContext* interface_port_declaration();

  class  Ref_declarationContext : public antlr4::ParserRuleContext {
  public:
    Ref_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REF();
    Variable_port_typeContext *variable_port_type();
    List_of_variable_identifiersContext *list_of_variable_identifiers();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ref_declarationContext* ref_declaration();

  class  Data_declarationContext : public antlr4::ParserRuleContext {
  public:
    Data_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_typeContext *data_type();
    List_of_variable_decl_assignmentsContext *list_of_variable_decl_assignments();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *CONST();
    LifetimeContext *lifetime();
    antlr4::tree::TerminalNode *VAR();
    Data_type_or_implicitContext *data_type_or_implicit();
    Type_declarationContext *type_declaration();
    Package_import_declarationContext *package_import_declaration();
    Net_type_declarationContext *net_type_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_declarationContext* data_declaration();

  class  Package_import_declarationContext : public antlr4::ParserRuleContext {
  public:
    Package_import_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT();
    std::vector<Package_import_itemContext *> package_import_item();
    Package_import_itemContext* package_import_item(size_t i);
    antlr4::tree::TerminalNode *SC();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_import_declarationContext* package_import_declaration();

  class  Package_import_itemContext : public antlr4::ParserRuleContext {
  public:
    Package_import_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Package_identifierContext *package_identifier();
    antlr4::tree::TerminalNode *CLCL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *AS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_import_itemContext* package_import_item();

  class  Package_export_declarationContext : public antlr4::ParserRuleContext {
  public:
    Package_export_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXPORT();
    std::vector<antlr4::tree::TerminalNode *> AS();
    antlr4::tree::TerminalNode* AS(size_t i);
    antlr4::tree::TerminalNode *CLCL();
    antlr4::tree::TerminalNode *SC();
    std::vector<Package_import_itemContext *> package_import_item();
    Package_import_itemContext* package_import_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_export_declarationContext* package_export_declaration();

  class  Genvar_declarationContext : public antlr4::ParserRuleContext {
  public:
    Genvar_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GENVAR();
    List_of_genvar_identifiersContext *list_of_genvar_identifiers();
    antlr4::tree::TerminalNode *SC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Genvar_declarationContext* genvar_declaration();

  class  Net_declarationContext : public antlr4::ParserRuleContext {
  public:
    Net_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_typeContext *net_type();
    List_of_net_decl_assignmentsContext *list_of_net_decl_assignments();
    antlr4::tree::TerminalNode *SC();
    Drive_strengthContext *drive_strength();
    Charge_strengthContext *charge_strength();
    Data_type_or_implicitContext *data_type_or_implicit();
    Delay3Context *delay3();
    antlr4::tree::TerminalNode *VECTORED();
    antlr4::tree::TerminalNode *SCALARED();
    Net_type_identifierContext *net_type_identifier();
    Delay_controlContext *delay_control();
    antlr4::tree::TerminalNode *INTERCONNECT();
    std::vector<Net_idContext *> net_id();
    Net_idContext* net_id(size_t i);
    Implicit_data_typeContext *implicit_data_type();
    antlr4::tree::TerminalNode *HA();
    Delay_valueContext *delay_value();
    antlr4::tree::TerminalNode *CO();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_declarationContext* net_declaration();

  class  Net_idContext : public antlr4::ParserRuleContext {
  public:
    Net_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_identifierContext *net_identifier();
    std::vector<Unpacked_dimensionContext *> unpacked_dimension();
    Unpacked_dimensionContext* unpacked_dimension(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_idContext* net_id();

  class  Type_declarationContext : public antlr4::ParserRuleContext {
  public:
    Type_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPEDEF();
    Data_typeContext *data_type();
    std::vector<Type_identifierContext *> type_identifier();
    Type_identifierContext* type_identifier(size_t i);
    antlr4::tree::TerminalNode *SC();
    std::vector<Variable_dimensionContext *> variable_dimension();
    Variable_dimensionContext* variable_dimension(size_t i);
    Interface_instance_identifierContext *interface_instance_identifier();
    antlr4::tree::TerminalNode *DT();
    Constant_bit_selectContext *constant_bit_select();
    antlr4::tree::TerminalNode *ENUM();
    antlr4::tree::TerminalNode *STRUCT();
    antlr4::tree::TerminalNode *UNION();
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *INTERFACE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_declarationContext* type_declaration();

  class  Net_type_declarationContext : public antlr4::ParserRuleContext {
  public:
    Net_type_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NETTYPE();
    Data_typeContext *data_type();
    std::vector<Net_type_identifierContext *> net_type_identifier();
    Net_type_identifierContext* net_type_identifier(size_t i);
    antlr4::tree::TerminalNode *SC();
    Net_type_decl_withContext *net_type_decl_with();
    Package_or_class_scopeContext *package_or_class_scope();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_type_declarationContext* net_type_declaration();

  class  Net_type_decl_withContext : public antlr4::ParserRuleContext {
  public:
    Net_type_decl_withContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    Tf_identifierContext *tf_identifier();
    Package_or_class_scopeContext *package_or_class_scope();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_type_decl_withContext* net_type_decl_with();

  class  LifetimeContext : public antlr4::ParserRuleContext {
  public:
    LifetimeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *AUTOMATIC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LifetimeContext* lifetime();

  class  Data_typeContext : public antlr4::ParserRuleContext {
  public:
    Data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_vector_typeContext *integer_vector_type();
    SigningContext *signing();
    std::vector<Packed_dimensionContext *> packed_dimension();
    Packed_dimensionContext* packed_dimension(size_t i);
    Integer_atom_typeContext *integer_atom_type();
    Non_integer_typeContext *non_integer_type();
    Struct_unionContext *struct_union();
    antlr4::tree::TerminalNode *LC();
    antlr4::tree::TerminalNode *RC();
    antlr4::tree::TerminalNode *PACKED();
    std::vector<Struct_union_memberContext *> struct_union_member();
    Struct_union_memberContext* struct_union_member(size_t i);
    antlr4::tree::TerminalNode *ENUM();
    std::vector<Enum_name_declarationContext *> enum_name_declaration();
    Enum_name_declarationContext* enum_name_declaration(size_t i);
    Enum_base_typeContext *enum_base_type();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *CHANDLE();
    antlr4::tree::TerminalNode *VIRTUAL();
    Interface_identifierContext *interface_identifier();
    antlr4::tree::TerminalNode *INTERFACE();
    Parameter_value_assignmentContext *parameter_value_assignment();
    antlr4::tree::TerminalNode *DT();
    Modport_identifierContext *modport_identifier();
    Type_identifierContext *type_identifier();
    antlr4::tree::TerminalNode *DLUNIT();
    antlr4::tree::TerminalNode *CLCL();
    Class_typeContext *class_type();
    antlr4::tree::TerminalNode *EVENT();
    Type_referenceContext *type_reference();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_typeContext* data_type();

  class  Data_type_or_implicitContext : public antlr4::ParserRuleContext {
  public:
    Data_type_or_implicitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_typeContext *data_type();
    Implicit_data_typeContext *implicit_data_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_type_or_implicitContext* data_type_or_implicit();

  class  Implicit_data_typeContext : public antlr4::ParserRuleContext {
  public:
    Implicit_data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Packed_dimensionContext *> packed_dimension();
    Packed_dimensionContext* packed_dimension(size_t i);
    SigningContext *signing();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Implicit_data_typeContext* implicit_data_type();

  class  Enum_base_typeContext : public antlr4::ParserRuleContext {
  public:
    Enum_base_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_atom_typeContext *integer_atom_type();
    SigningContext *signing();
    Integer_vector_typeContext *integer_vector_type();
    Packed_dimensionContext *packed_dimension();
    Type_identifierContext *type_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enum_base_typeContext* enum_base_type();

  class  Enum_name_declarationContext : public antlr4::ParserRuleContext {
  public:
    Enum_name_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Enum_identifierContext *enum_identifier();
    Enum_name_suffix_rangeContext *enum_name_suffix_range();
    antlr4::tree::TerminalNode *EQ();
    Constant_expressionContext *constant_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enum_name_declarationContext* enum_name_declaration();

  class  Enum_name_suffix_rangeContext : public antlr4::ParserRuleContext {
  public:
    Enum_name_suffix_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LB();
    std::vector<Integral_numberContext *> integral_number();
    Integral_numberContext* integral_number(size_t i);
    antlr4::tree::TerminalNode *RB();
    antlr4::tree::TerminalNode *CL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enum_name_suffix_rangeContext* enum_name_suffix_range();

  class  Class_scopeContext : public antlr4::ParserRuleContext {
  public:
    Class_scopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Class_typeContext *class_type();
    antlr4::tree::TerminalNode *CLCL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_scopeContext* class_scope();

  class  Class_typeContext : public antlr4::ParserRuleContext {
  public:
    Class_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Class_refContext *> class_ref();
    Class_refContext* class_ref(size_t i);
    antlr4::tree::TerminalNode *DLUNIT();
    std::vector<antlr4::tree::TerminalNode *> CLCL();
    antlr4::tree::TerminalNode* CLCL(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_typeContext* class_type();

  class  Class_refContext : public antlr4::ParserRuleContext {
  public:
    Class_refContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Class_identifierContext *class_identifier();
    Parameter_value_assignmentContext *parameter_value_assignment();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_refContext* class_ref();

  class  Package_or_class_scopeContext : public antlr4::ParserRuleContext {
  public:
    Package_or_class_scopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Class_typeContext *class_type();
    antlr4::tree::TerminalNode *CLCL();
    antlr4::tree::TerminalNode *DLUNIT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_or_class_scopeContext* package_or_class_scope();

  class  Integer_typeContext : public antlr4::ParserRuleContext {
  public:
    Integer_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_vector_typeContext *integer_vector_type();
    Integer_atom_typeContext *integer_atom_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Integer_typeContext* integer_type();

  class  Integer_atom_typeContext : public antlr4::ParserRuleContext {
  public:
    Integer_atom_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BYTE();
    antlr4::tree::TerminalNode *SHORTINT();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *LONGINT();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *TIME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Integer_atom_typeContext* integer_atom_type();

  class  Integer_vector_typeContext : public antlr4::ParserRuleContext {
  public:
    Integer_vector_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIT();
    antlr4::tree::TerminalNode *LOGIC();
    antlr4::tree::TerminalNode *REG();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Integer_vector_typeContext* integer_vector_type();

  class  Non_integer_typeContext : public antlr4::ParserRuleContext {
  public:
    Non_integer_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHORTREAL();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *REALTIME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Non_integer_typeContext* non_integer_type();

  class  Net_typeContext : public antlr4::ParserRuleContext {
  public:
    Net_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUPPLYZERO();
    antlr4::tree::TerminalNode *SUPPLYONE();
    antlr4::tree::TerminalNode *TRI();
    antlr4::tree::TerminalNode *TRIAND();
    antlr4::tree::TerminalNode *TRIOR();
    antlr4::tree::TerminalNode *TRIREG();
    antlr4::tree::TerminalNode *TRIZERO();
    antlr4::tree::TerminalNode *TRIONE();
    antlr4::tree::TerminalNode *UWIRE();
    antlr4::tree::TerminalNode *WIRE();
    antlr4::tree::TerminalNode *WAND();
    antlr4::tree::TerminalNode *WOR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_typeContext* net_type();

  class  Net_port_typeContext : public antlr4::ParserRuleContext {
  public:
    Net_port_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_type_or_implicitContext *data_type_or_implicit();
    Net_typeContext *net_type();
    antlr4::tree::TerminalNode *INTERCONNECT();
    Implicit_data_typeContext *implicit_data_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_port_typeContext* net_port_type();

  class  Variable_port_typeContext : public antlr4::ParserRuleContext {
  public:
    Variable_port_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_data_typeContext *var_data_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_port_typeContext* variable_port_type();

  class  Var_data_typeContext : public antlr4::ParserRuleContext {
  public:
    Var_data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *VAR();
    Data_type_or_implicitContext *data_type_or_implicit();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_data_typeContext* var_data_type();

  class  SigningContext : public antlr4::ParserRuleContext {
  public:
    SigningContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIGNED();
    antlr4::tree::TerminalNode *UNSIGNED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SigningContext* signing();

  class  Simple_typeContext : public antlr4::ParserRuleContext {
  public:
    Simple_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_typeContext *integer_type();
    Non_integer_typeContext *non_integer_type();
    Ps_type_or_parameter_identifierContext *ps_type_or_parameter_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_typeContext* simple_type();

  class  Struct_union_memberContext : public antlr4::ParserRuleContext {
  public:
    Struct_union_memberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_type_or_voidContext *data_type_or_void();
    List_of_variable_decl_assignmentsContext *list_of_variable_decl_assignments();
    antlr4::tree::TerminalNode *SC();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Random_qualifierContext *random_qualifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Struct_union_memberContext* struct_union_member();

  class  Data_type_or_voidContext : public antlr4::ParserRuleContext {
  public:
    Data_type_or_voidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *VOID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_type_or_voidContext* data_type_or_void();

  class  Struct_unionContext : public antlr4::ParserRuleContext {
  public:
    Struct_unionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRUCT();
    antlr4::tree::TerminalNode *UNION();
    antlr4::tree::TerminalNode *TAGGED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Struct_unionContext* struct_union();

  class  Type_referenceContext : public antlr4::ParserRuleContext {
  public:
    Type_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    Data_typeContext *data_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_referenceContext* type_reference();

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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delay2Context* delay2();

  class  Delay_valueContext : public antlr4::ParserRuleContext {
  public:
    Delay_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unsigned_numberContext *unsigned_number();
    Real_numberContext *real_number();
    Ps_identifierContext *ps_identifier();
    Time_literalContext *time_literal();
    antlr4::tree::TerminalNode *ONESTEP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_defparam_assignmentsContext* list_of_defparam_assignments();

  class  List_of_genvar_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_genvar_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Genvar_identifierContext *> genvar_identifier();
    Genvar_identifierContext* genvar_identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_genvar_identifiersContext* list_of_genvar_identifiers();

  class  List_of_interface_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_interface_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Interface_idContext *> interface_id();
    Interface_idContext* interface_id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_interface_identifiersContext* list_of_interface_identifiers();

  class  Interface_idContext : public antlr4::ParserRuleContext {
  public:
    Interface_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Interface_identifierContext *interface_identifier();
    std::vector<Unpacked_dimensionContext *> unpacked_dimension();
    Unpacked_dimensionContext* unpacked_dimension(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_idContext* interface_id();

  class  List_of_net_decl_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_net_decl_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Net_decl_assignmentContext *> net_decl_assignment();
    Net_decl_assignmentContext* net_decl_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_net_decl_assignmentsContext* list_of_net_decl_assignments();

  class  List_of_param_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_param_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Param_assignmentContext *> param_assignment();
    Param_assignmentContext* param_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_param_assignmentsContext* list_of_param_assignments();

  class  List_of_port_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_port_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Port_idContext *> port_id();
    Port_idContext* port_id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_port_identifiersContext* list_of_port_identifiers();

  class  Port_idContext : public antlr4::ParserRuleContext {
  public:
    Port_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_identifierContext *port_identifier();
    std::vector<Unpacked_dimensionContext *> unpacked_dimension();
    Unpacked_dimensionContext* unpacked_dimension(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Port_idContext* port_id();

  class  List_of_udp_port_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_udp_port_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Port_identifierContext *> port_identifier();
    Port_identifierContext* port_identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_udp_port_identifiersContext* list_of_udp_port_identifiers();

  class  List_of_specparam_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_specparam_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Specparam_assignmentContext *> specparam_assignment();
    Specparam_assignmentContext* specparam_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_specparam_assignmentsContext* list_of_specparam_assignments();

  class  List_of_tf_variable_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_tf_variable_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Tf_var_idContext *> tf_var_id();
    Tf_var_idContext* tf_var_id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_tf_variable_identifiersContext* list_of_tf_variable_identifiers();

  class  Tf_var_idContext : public antlr4::ParserRuleContext {
  public:
    Tf_var_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_identifierContext *port_identifier();
    std::vector<Variable_dimensionContext *> variable_dimension();
    Variable_dimensionContext* variable_dimension(size_t i);
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tf_var_idContext* tf_var_id();

  class  List_of_type_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_type_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Type_assignmentContext *> type_assignment();
    Type_assignmentContext* type_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_type_assignmentsContext* list_of_type_assignments();

  class  List_of_variable_decl_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_variable_decl_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Variable_decl_assignmentContext *> variable_decl_assignment();
    Variable_decl_assignmentContext* variable_decl_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_variable_decl_assignmentsContext* list_of_variable_decl_assignments();

  class  List_of_variable_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_variable_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Var_idContext *> var_id();
    Var_idContext* var_id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_variable_identifiersContext* list_of_variable_identifiers();

  class  Var_idContext : public antlr4::ParserRuleContext {
  public:
    Var_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_identifierContext *variable_identifier();
    std::vector<Variable_dimensionContext *> variable_dimension();
    Variable_dimensionContext* variable_dimension(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_idContext* var_id();

  class  List_of_variable_port_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_variable_port_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Var_port_idContext *> var_port_id();
    Var_port_idContext* var_port_id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_variable_port_identifiersContext* list_of_variable_port_identifiers();

  class  Var_port_idContext : public antlr4::ParserRuleContext {
  public:
    Var_port_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_identifierContext *port_identifier();
    std::vector<Variable_dimensionContext *> variable_dimension();
    Variable_dimensionContext* variable_dimension(size_t i);
    antlr4::tree::TerminalNode *EQ();
    Constant_expressionContext *constant_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_port_idContext* var_port_id();

  class  Defparam_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Defparam_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();
    antlr4::tree::TerminalNode *EQ();
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Defparam_assignmentContext* defparam_assignment();

  class  Net_decl_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Net_decl_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_identifierContext *net_identifier();
    std::vector<Unpacked_dimensionContext *> unpacked_dimension();
    Unpacked_dimensionContext* unpacked_dimension(size_t i);
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_decl_assignmentContext* net_decl_assignment();

  class  Param_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Param_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parameter_identifierContext *parameter_identifier();
    std::vector<Unpacked_dimensionContext *> unpacked_dimension();
    Unpacked_dimensionContext* unpacked_dimension(size_t i);
    antlr4::tree::TerminalNode *EQ();
    Constant_param_expressionContext *constant_param_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Specparam_assignmentContext* specparam_assignment();

  class  Type_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Type_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_identifierContext *type_identifier();
    antlr4::tree::TerminalNode *EQ();
    Data_typeContext *data_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_assignmentContext* type_assignment();

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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pulse_control_specparamContext* pulse_control_specparam();

  class  Error_limit_valueContext : public antlr4::ParserRuleContext {
  public:
    Error_limit_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Limit_valueContext *limit_value();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Error_limit_valueContext* error_limit_value();

  class  Reject_limit_valueContext : public antlr4::ParserRuleContext {
  public:
    Reject_limit_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Limit_valueContext *limit_value();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reject_limit_valueContext* reject_limit_value();

  class  Limit_valueContext : public antlr4::ParserRuleContext {
  public:
    Limit_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Limit_valueContext* limit_value();

  class  Variable_decl_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Variable_decl_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_identifierContext *variable_identifier();
    std::vector<Variable_dimensionContext *> variable_dimension();
    Variable_dimensionContext* variable_dimension(size_t i);
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();
    Dynamic_array_variable_identifierContext *dynamic_array_variable_identifier();
    Unsized_dimensionContext *unsized_dimension();
    Dynamic_array_newContext *dynamic_array_new();
    Class_variable_identifierContext *class_variable_identifier();
    Class_newContext *class_new();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_decl_assignmentContext* variable_decl_assignment();

  class  Class_newContext : public antlr4::ParserRuleContext {
  public:
    Class_newContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEW();
    Class_scopeContext *class_scope();
    Arg_listContext *arg_list();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_newContext* class_new();

  class  Dynamic_array_newContext : public antlr4::ParserRuleContext {
  public:
    Dynamic_array_newContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEW();
    antlr4::tree::TerminalNode *LB();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RB();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dynamic_array_newContext* dynamic_array_new();

  class  Unpacked_dimensionContext : public antlr4::ParserRuleContext {
  public:
    Unpacked_dimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LB();
    Constant_rangeContext *constant_range();
    antlr4::tree::TerminalNode *RB();
    Constant_expressionContext *constant_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unpacked_dimensionContext* unpacked_dimension();

  class  Packed_dimensionContext : public antlr4::ParserRuleContext {
  public:
    Packed_dimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LB();
    Constant_rangeContext *constant_range();
    antlr4::tree::TerminalNode *RB();
    Unsized_dimensionContext *unsized_dimension();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Packed_dimensionContext* packed_dimension();

  class  Associative_dimensionContext : public antlr4::ParserRuleContext {
  public:
    Associative_dimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LB();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *RB();
    antlr4::tree::TerminalNode *AS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Associative_dimensionContext* associative_dimension();

  class  Variable_dimensionContext : public antlr4::ParserRuleContext {
  public:
    Variable_dimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unsized_dimensionContext *unsized_dimension();
    Unpacked_dimensionContext *unpacked_dimension();
    Associative_dimensionContext *associative_dimension();
    Queue_dimensionContext *queue_dimension();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_dimensionContext* variable_dimension();

  class  Queue_dimensionContext : public antlr4::ParserRuleContext {
  public:
    Queue_dimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LB();
    antlr4::tree::TerminalNode *DL();
    antlr4::tree::TerminalNode *RB();
    antlr4::tree::TerminalNode *CL();
    Constant_expressionContext *constant_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Queue_dimensionContext* queue_dimension();

  class  Unsized_dimensionContext : public antlr4::ParserRuleContext {
  public:
    Unsized_dimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LB();
    antlr4::tree::TerminalNode *RB();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unsized_dimensionContext* unsized_dimension();

  class  Function_data_type_or_implicitContext : public antlr4::ParserRuleContext {
  public:
    Function_data_type_or_implicitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_type_or_voidContext *data_type_or_void();
    Implicit_data_typeContext *implicit_data_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_data_type_or_implicitContext* function_data_type_or_implicit();

  class  Function_declarationContext : public antlr4::ParserRuleContext {
  public:
    Function_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    Function_body_declarationContext *function_body_declaration();
    LifetimeContext *lifetime();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_declarationContext* function_declaration();

  class  Function_body_declarationContext : public antlr4::ParserRuleContext {
  public:
    Function_body_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_identifierContext *function_identifier();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *ENDFUNCTION();
    Function_data_type_or_implicitContext *function_data_type_or_implicit();
    Interface_identifierContext *interface_identifier();
    antlr4::tree::TerminalNode *DT();
    Class_scopeContext *class_scope();
    std::vector<Tf_item_declarationContext *> tf_item_declaration();
    Tf_item_declarationContext* tf_item_declaration(size_t i);
    std::vector<Function_statement_or_nullContext *> function_statement_or_null();
    Function_statement_or_nullContext* function_statement_or_null(size_t i);
    Function_nameContext *function_name();
    antlr4::tree::TerminalNode *LP();
    Tf_port_listContext *tf_port_list();
    antlr4::tree::TerminalNode *RP();
    std::vector<Block_item_declarationContext *> block_item_declaration();
    Block_item_declarationContext* block_item_declaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_body_declarationContext* function_body_declaration();

  class  Function_nameContext : public antlr4::ParserRuleContext {
  public:
    Function_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CL();
    Function_identifierContext *function_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_nameContext* function_name();

  class  Function_prototypeContext : public antlr4::ParserRuleContext {
  public:
    Function_prototypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    Data_type_or_voidContext *data_type_or_void();
    Function_identifierContext *function_identifier();
    Port_listContext *port_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_prototypeContext* function_prototype();

  class  Dpi_import_exportContext : public antlr4::ParserRuleContext {
  public:
    Dpi_import_exportContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT();
    Dpi_spec_stringContext *dpi_spec_string();
    Dpi_function_protoContext *dpi_function_proto();
    antlr4::tree::TerminalNode *SC();
    Dpi_function_import_propertyContext *dpi_function_import_property();
    C_identifierContext *c_identifier();
    antlr4::tree::TerminalNode *EQ();
    Dpi_task_protoContext *dpi_task_proto();
    Dpi_task_import_propertyContext *dpi_task_import_property();
    antlr4::tree::TerminalNode *EXPORT();
    antlr4::tree::TerminalNode *FUNCTION();
    Function_identifierContext *function_identifier();
    antlr4::tree::TerminalNode *TASK();
    Task_identifierContext *task_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dpi_import_exportContext* dpi_import_export();

  class  Dpi_spec_stringContext : public antlr4::ParserRuleContext {
  public:
    Dpi_spec_stringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DQDPIMICDQ();
    antlr4::tree::TerminalNode *DQDPIDQ();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dpi_spec_stringContext* dpi_spec_string();

  class  Dpi_function_import_propertyContext : public antlr4::ParserRuleContext {
  public:
    Dpi_function_import_propertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONTEXT();
    antlr4::tree::TerminalNode *PURE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dpi_function_import_propertyContext* dpi_function_import_property();

  class  Dpi_task_import_propertyContext : public antlr4::ParserRuleContext {
  public:
    Dpi_task_import_propertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONTEXT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dpi_task_import_propertyContext* dpi_task_import_property();

  class  Dpi_function_protoContext : public antlr4::ParserRuleContext {
  public:
    Dpi_function_protoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_prototypeContext *function_prototype();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dpi_function_protoContext* dpi_function_proto();

  class  Dpi_task_protoContext : public antlr4::ParserRuleContext {
  public:
    Dpi_task_protoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Task_prototypeContext *task_prototype();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dpi_task_protoContext* dpi_task_proto();

  class  Task_declarationContext : public antlr4::ParserRuleContext {
  public:
    Task_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TASK();
    Task_body_declarationContext *task_body_declaration();
    LifetimeContext *lifetime();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Task_declarationContext* task_declaration();

  class  Task_body_declarationContext : public antlr4::ParserRuleContext {
  public:
    Task_body_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Task_identifierContext *task_identifier();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *ENDTASK();
    Interface_identifierContext *interface_identifier();
    antlr4::tree::TerminalNode *DT();
    Class_scopeContext *class_scope();
    std::vector<Tf_item_declarationContext *> tf_item_declaration();
    Tf_item_declarationContext* tf_item_declaration(size_t i);
    std::vector<Statement_or_nullContext *> statement_or_null();
    Statement_or_nullContext* statement_or_null(size_t i);
    Task_nameContext *task_name();
    antlr4::tree::TerminalNode *LP();
    Tf_port_listContext *tf_port_list();
    antlr4::tree::TerminalNode *RP();
    std::vector<Block_item_declarationContext *> block_item_declaration();
    Block_item_declarationContext* block_item_declaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Task_body_declarationContext* task_body_declaration();

  class  Task_nameContext : public antlr4::ParserRuleContext {
  public:
    Task_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CL();
    Task_identifierContext *task_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Task_nameContext* task_name();

  class  Tf_item_declarationContext : public antlr4::ParserRuleContext {
  public:
    Tf_item_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Block_item_declarationContext *block_item_declaration();
    Tf_port_declarationContext *tf_port_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tf_item_declarationContext* tf_item_declaration();

  class  Tf_port_listContext : public antlr4::ParserRuleContext {
  public:
    Tf_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Tf_port_itemContext *> tf_port_item();
    Tf_port_itemContext* tf_port_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tf_port_listContext* tf_port_list();

  class  Tf_port_itemContext : public antlr4::ParserRuleContext {
  public:
    Tf_port_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tf_port_idContext *tf_port_id();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Tf_port_directionContext *tf_port_direction();
    antlr4::tree::TerminalNode *VAR();
    Data_type_or_implicitContext *data_type_or_implicit();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tf_port_itemContext* tf_port_item();

  class  Tf_port_idContext : public antlr4::ParserRuleContext {
  public:
    Tf_port_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_identifierContext *port_identifier();
    std::vector<Variable_dimensionContext *> variable_dimension();
    Variable_dimensionContext* variable_dimension(size_t i);
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tf_port_idContext* tf_port_id();

  class  Tf_port_directionContext : public antlr4::ParserRuleContext {
  public:
    Tf_port_directionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_directionContext *port_direction();
    antlr4::tree::TerminalNode *CONST();
    antlr4::tree::TerminalNode *REF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tf_port_directionContext* tf_port_direction();

  class  Tf_port_declarationContext : public antlr4::ParserRuleContext {
  public:
    Tf_port_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tf_port_directionContext *tf_port_direction();
    List_of_tf_variable_identifiersContext *list_of_tf_variable_identifiers();
    antlr4::tree::TerminalNode *SC();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    antlr4::tree::TerminalNode *VAR();
    Data_type_or_implicitContext *data_type_or_implicit();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tf_port_declarationContext* tf_port_declaration();

  class  Task_prototypeContext : public antlr4::ParserRuleContext {
  public:
    Task_prototypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TASK();
    Task_identifierContext *task_identifier();
    Port_listContext *port_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Task_prototypeContext* task_prototype();

  class  Block_item_declarationContext : public antlr4::ParserRuleContext {
  public:
    Block_item_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_declarationContext *data_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Local_parameter_declarationContext *local_parameter_declaration();
    antlr4::tree::TerminalNode *SC();
    Parameter_declarationContext *parameter_declaration();
    Let_declarationContext *let_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Block_item_declarationContext* block_item_declaration();

  class  Modport_declarationContext : public antlr4::ParserRuleContext {
  public:
    Modport_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MODPORT();
    std::vector<Modport_itemContext *> modport_item();
    Modport_itemContext* modport_item(size_t i);
    antlr4::tree::TerminalNode *SC();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Modport_declarationContext* modport_declaration();

  class  Modport_itemContext : public antlr4::ParserRuleContext {
  public:
    Modport_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Modport_identifierContext *modport_identifier();
    antlr4::tree::TerminalNode *LP();
    std::vector<Modport_ports_declarationContext *> modport_ports_declaration();
    Modport_ports_declarationContext* modport_ports_declaration(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Modport_itemContext* modport_item();

  class  Modport_ports_declarationContext : public antlr4::ParserRuleContext {
  public:
    Modport_ports_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Modport_simple_ports_declarationContext *modport_simple_ports_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Modport_tf_ports_declarationContext *modport_tf_ports_declaration();
    Modport_clocking_declarationContext *modport_clocking_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Modport_ports_declarationContext* modport_ports_declaration();

  class  Modport_clocking_declarationContext : public antlr4::ParserRuleContext {
  public:
    Modport_clocking_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLOCKING();
    Clocking_identifierContext *clocking_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Modport_clocking_declarationContext* modport_clocking_declaration();

  class  Modport_simple_ports_declarationContext : public antlr4::ParserRuleContext {
  public:
    Modport_simple_ports_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_directionContext *port_direction();
    std::vector<Modport_simple_portContext *> modport_simple_port();
    Modport_simple_portContext* modport_simple_port(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Modport_simple_ports_declarationContext* modport_simple_ports_declaration();

  class  Modport_simple_portContext : public antlr4::ParserRuleContext {
  public:
    Modport_simple_portContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_identifierContext *port_identifier();
    antlr4::tree::TerminalNode *DT();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Modport_simple_portContext* modport_simple_port();

  class  Modport_tf_ports_declarationContext : public antlr4::ParserRuleContext {
  public:
    Modport_tf_ports_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Import_exportContext *import_export();
    std::vector<Modport_tf_portContext *> modport_tf_port();
    Modport_tf_portContext* modport_tf_port(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Modport_tf_ports_declarationContext* modport_tf_ports_declaration();

  class  Modport_tf_portContext : public antlr4::ParserRuleContext {
  public:
    Modport_tf_portContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Method_prototypeContext *method_prototype();
    Tf_identifierContext *tf_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Modport_tf_portContext* modport_tf_port();

  class  Import_exportContext : public antlr4::ParserRuleContext {
  public:
    Import_exportContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *EXPORT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Import_exportContext* import_export();

  class  Concurrent_assertion_itemContext : public antlr4::ParserRuleContext {
  public:
    Concurrent_assertion_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Concurrent_assertion_statementContext *concurrent_assertion_statement();
    Block_labelContext *block_label();
    Checker_instantiationContext *checker_instantiation();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Concurrent_assertion_itemContext* concurrent_assertion_item();

  class  Block_labelContext : public antlr4::ParserRuleContext {
  public:
    Block_labelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Block_identifierContext *block_identifier();
    antlr4::tree::TerminalNode *CL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Block_labelContext* block_label();

  class  Concurrent_assertion_statementContext : public antlr4::ParserRuleContext {
  public:
    Concurrent_assertion_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Assert_property_statementContext *assert_property_statement();
    Assume_property_statementContext *assume_property_statement();
    Cover_property_statementContext *cover_property_statement();
    Cover_sequence_statementContext *cover_sequence_statement();
    Restrict_property_statementContext *restrict_property_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Concurrent_assertion_statementContext* concurrent_assertion_statement();

  class  Assert_property_statementContext : public antlr4::ParserRuleContext {
  public:
    Assert_property_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSERT();
    antlr4::tree::TerminalNode *PROPERTY();
    antlr4::tree::TerminalNode *LP();
    Property_specContext *property_spec();
    antlr4::tree::TerminalNode *RP();
    Action_blockContext *action_block();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assert_property_statementContext* assert_property_statement();

  class  Assume_property_statementContext : public antlr4::ParserRuleContext {
  public:
    Assume_property_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSUME();
    antlr4::tree::TerminalNode *PROPERTY();
    antlr4::tree::TerminalNode *LP();
    Property_specContext *property_spec();
    antlr4::tree::TerminalNode *RP();
    Action_blockContext *action_block();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assume_property_statementContext* assume_property_statement();

  class  Cover_property_statementContext : public antlr4::ParserRuleContext {
  public:
    Cover_property_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COVER();
    antlr4::tree::TerminalNode *PROPERTY();
    antlr4::tree::TerminalNode *LP();
    Property_specContext *property_spec();
    antlr4::tree::TerminalNode *RP();
    Statement_or_nullContext *statement_or_null();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cover_property_statementContext* cover_property_statement();

  class  Expect_property_statementContext : public antlr4::ParserRuleContext {
  public:
    Expect_property_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXPECT();
    antlr4::tree::TerminalNode *LP();
    Property_specContext *property_spec();
    antlr4::tree::TerminalNode *RP();
    Action_blockContext *action_block();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expect_property_statementContext* expect_property_statement();

  class  Cover_sequence_statementContext : public antlr4::ParserRuleContext {
  public:
    Cover_sequence_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COVER();
    antlr4::tree::TerminalNode *SEQUENCE();
    std::vector<antlr4::tree::TerminalNode *> LP();
    antlr4::tree::TerminalNode* LP(size_t i);
    Sequence_exprContext *sequence_expr();
    std::vector<antlr4::tree::TerminalNode *> RP();
    antlr4::tree::TerminalNode* RP(size_t i);
    Statement_or_nullContext *statement_or_null();
    Clocking_eventContext *clocking_event();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *IFF();
    Expression_or_distContext *expression_or_dist();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cover_sequence_statementContext* cover_sequence_statement();

  class  Restrict_property_statementContext : public antlr4::ParserRuleContext {
  public:
    Restrict_property_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *PROPERTY();
    antlr4::tree::TerminalNode *LP();
    Property_specContext *property_spec();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Restrict_property_statementContext* restrict_property_statement();

  class  Property_instanceContext : public antlr4::ParserRuleContext {
  public:
    Property_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ps_or_hierarchical_identifierContext *ps_or_hierarchical_identifier();
    Prop_arg_listContext *prop_arg_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Property_instanceContext* property_instance();

  class  Prop_arg_listContext : public antlr4::ParserRuleContext {
  public:
    Prop_arg_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    Property_list_of_argumentsContext *property_list_of_arguments();
    antlr4::tree::TerminalNode *RP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Prop_arg_listContext* prop_arg_list();

  class  Property_list_of_argumentsContext : public antlr4::ParserRuleContext {
  public:
    Property_list_of_argumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Prop_ordered_argContext *> prop_ordered_arg();
    Prop_ordered_argContext* prop_ordered_arg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    std::vector<Prop_named_argContext *> prop_named_arg();
    Prop_named_argContext* prop_named_arg(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Property_list_of_argumentsContext* property_list_of_arguments();

  class  Prop_ordered_argContext : public antlr4::ParserRuleContext {
  public:
    Prop_ordered_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Property_actual_argContext *property_actual_arg();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Prop_ordered_argContext* prop_ordered_arg();

  class  Prop_named_argContext : public antlr4::ParserRuleContext {
  public:
    Prop_named_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DT();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    Property_actual_argContext *property_actual_arg();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Prop_named_argContext* prop_named_arg();

  class  Property_actual_argContext : public antlr4::ParserRuleContext {
  public:
    Property_actual_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Property_exprContext *property_expr();
    Sequence_actual_argContext *sequence_actual_arg();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Property_actual_argContext* property_actual_arg();

  class  Assertion_item_declarationContext : public antlr4::ParserRuleContext {
  public:
    Assertion_item_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Property_declarationContext *property_declaration();
    Sequence_declarationContext *sequence_declaration();
    Let_declarationContext *let_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assertion_item_declarationContext* assertion_item_declaration();

  class  Property_declarationContext : public antlr4::ParserRuleContext {
  public:
    Property_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROPERTY();
    Property_identifierContext *property_identifier();
    std::vector<antlr4::tree::TerminalNode *> SC();
    antlr4::tree::TerminalNode* SC(size_t i);
    Property_specContext *property_spec();
    antlr4::tree::TerminalNode *ENDPROPERTY();
    Prop_port_listContext *prop_port_list();
    std::vector<Assertion_variable_declarationContext *> assertion_variable_declaration();
    Assertion_variable_declarationContext* assertion_variable_declaration(size_t i);
    Property_nameContext *property_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Property_declarationContext* property_declaration();

  class  Property_nameContext : public antlr4::ParserRuleContext {
  public:
    Property_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CL();
    Property_identifierContext *property_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Property_nameContext* property_name();

  class  Prop_port_listContext : public antlr4::ParserRuleContext {
  public:
    Prop_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    Property_port_listContext *property_port_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Prop_port_listContext* prop_port_list();

  class  Property_port_listContext : public antlr4::ParserRuleContext {
  public:
    Property_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Property_port_itemContext *> property_port_item();
    Property_port_itemContext* property_port_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Property_port_listContext* property_port_list();

  class  Property_port_itemContext : public antlr4::ParserRuleContext {
  public:
    Property_port_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Formal_port_identifierContext *formal_port_identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Prop_port_item_localContext *prop_port_item_local();
    Property_formal_typeContext *property_formal_type();
    std::vector<Variable_dimensionContext *> variable_dimension();
    Variable_dimensionContext* variable_dimension(size_t i);
    antlr4::tree::TerminalNode *EQ();
    Property_actual_argContext *property_actual_arg();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Property_port_itemContext* property_port_item();

  class  Prop_port_item_localContext : public antlr4::ParserRuleContext {
  public:
    Prop_port_item_localContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCAL();
    Property_lvar_port_directionContext *property_lvar_port_direction();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Prop_port_item_localContext* prop_port_item_local();

  class  Property_lvar_port_directionContext : public antlr4::ParserRuleContext {
  public:
    Property_lvar_port_directionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INPUT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Property_lvar_port_directionContext* property_lvar_port_direction();

  class  Property_formal_typeContext : public antlr4::ParserRuleContext {
  public:
    Property_formal_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Sequence_formal_typeContext *sequence_formal_type();
    antlr4::tree::TerminalNode *PROPERTY();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Property_formal_typeContext* property_formal_type();

  class  Property_specContext : public antlr4::ParserRuleContext {
  public:
    Property_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Property_exprContext *property_expr();
    Clocking_eventContext *clocking_event();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *IFF();
    antlr4::tree::TerminalNode *LP();
    Expression_or_distContext *expression_or_dist();
    antlr4::tree::TerminalNode *RP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Property_specContext* property_spec();

  class  Property_exprContext : public antlr4::ParserRuleContext {
  public:
    Property_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Sequence_exprContext *sequence_expr();
    antlr4::tree::TerminalNode *STRONG();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *WEAK();
    std::vector<Property_exprContext *> property_expr();
    Property_exprContext* property_expr(size_t i);
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *VLMIGT();
    antlr4::tree::TerminalNode *VLEQGT();
    antlr4::tree::TerminalNode *IF();
    Expression_or_distContext *expression_or_dist();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *ENDCASE();
    std::vector<Property_case_itemContext *> property_case_item();
    Property_case_itemContext* property_case_item(size_t i);
    antlr4::tree::TerminalNode *HAMIHA();
    antlr4::tree::TerminalNode *HAEQHA();
    antlr4::tree::TerminalNode *NEXTTIME();
    antlr4::tree::TerminalNode *LB();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *RB();
    antlr4::tree::TerminalNode *S_NEXTTIME();
    antlr4::tree::TerminalNode *ALWAYS();
    Cycle_delay_const_range_expressionContext *cycle_delay_const_range_expression();
    antlr4::tree::TerminalNode *S_ALWAYS();
    Constant_rangeContext *constant_range();
    antlr4::tree::TerminalNode *S_EVENTUALLY();
    antlr4::tree::TerminalNode *EVENTUALLY();
    antlr4::tree::TerminalNode *ACCEPT_ON();
    antlr4::tree::TerminalNode *REJECT_ON();
    antlr4::tree::TerminalNode *SYNC_ACCEPT_ON();
    antlr4::tree::TerminalNode *SYNC_REJECT_ON();
    Property_instanceContext *property_instance();
    Clocking_eventContext *clocking_event();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *UNTIL();
    antlr4::tree::TerminalNode *S_UNTIL();
    antlr4::tree::TerminalNode *UNTIL_WITH();
    antlr4::tree::TerminalNode *S_UNTIL_WITH();
    antlr4::tree::TerminalNode *IMPLIES();
    antlr4::tree::TerminalNode *IFF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Property_exprContext* property_expr();
  Property_exprContext* property_expr(int precedence);
  class  Property_case_itemContext : public antlr4::ParserRuleContext {
  public:
    Property_case_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Expression_or_distContext *> expression_or_dist();
    Expression_or_distContext* expression_or_dist(size_t i);
    antlr4::tree::TerminalNode *CL();
    Property_exprContext *property_expr();
    antlr4::tree::TerminalNode *SC();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    antlr4::tree::TerminalNode *DEFAULT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Property_case_itemContext* property_case_item();

  class  Sequence_declarationContext : public antlr4::ParserRuleContext {
  public:
    Sequence_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEQUENCE();
    Sequence_identifierContext *sequence_identifier();
    std::vector<antlr4::tree::TerminalNode *> SC();
    antlr4::tree::TerminalNode* SC(size_t i);
    Sequence_exprContext *sequence_expr();
    antlr4::tree::TerminalNode *ENDSEQUENCE();
    Seq_port_listContext *seq_port_list();
    std::vector<Assertion_variable_declarationContext *> assertion_variable_declaration();
    Assertion_variable_declarationContext* assertion_variable_declaration(size_t i);
    Sequence_nameContext *sequence_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_declarationContext* sequence_declaration();

  class  Sequence_nameContext : public antlr4::ParserRuleContext {
  public:
    Sequence_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CL();
    Sequence_identifierContext *sequence_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_nameContext* sequence_name();

  class  Seq_port_listContext : public antlr4::ParserRuleContext {
  public:
    Seq_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    Sequence_port_listContext *sequence_port_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Seq_port_listContext* seq_port_list();

  class  Sequence_port_listContext : public antlr4::ParserRuleContext {
  public:
    Sequence_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Sequence_port_itemContext *> sequence_port_item();
    Sequence_port_itemContext* sequence_port_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_port_listContext* sequence_port_list();

  class  Sequence_port_itemContext : public antlr4::ParserRuleContext {
  public:
    Sequence_port_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Formal_port_identifierContext *formal_port_identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Seq_port_item_localContext *seq_port_item_local();
    Sequence_formal_typeContext *sequence_formal_type();
    std::vector<Variable_dimensionContext *> variable_dimension();
    Variable_dimensionContext* variable_dimension(size_t i);
    antlr4::tree::TerminalNode *EQ();
    Sequence_actual_argContext *sequence_actual_arg();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_port_itemContext* sequence_port_item();

  class  Seq_port_item_localContext : public antlr4::ParserRuleContext {
  public:
    Seq_port_item_localContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCAL();
    Sequence_lvar_port_directionContext *sequence_lvar_port_direction();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Seq_port_item_localContext* seq_port_item_local();

  class  Sequence_lvar_port_directionContext : public antlr4::ParserRuleContext {
  public:
    Sequence_lvar_port_directionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *INOUT();
    antlr4::tree::TerminalNode *OUTPUT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_lvar_port_directionContext* sequence_lvar_port_direction();

  class  Sequence_formal_typeContext : public antlr4::ParserRuleContext {
  public:
    Sequence_formal_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_type_or_implicitContext *data_type_or_implicit();
    antlr4::tree::TerminalNode *SEQUENCE();
    antlr4::tree::TerminalNode *UNTYPED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_formal_typeContext* sequence_formal_type();

  class  Sequence_exprContext : public antlr4::ParserRuleContext {
  public:
    Sequence_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Cycle_delay_rangeContext *> cycle_delay_range();
    Cycle_delay_rangeContext* cycle_delay_range(size_t i);
    std::vector<Sequence_exprContext *> sequence_expr();
    Sequence_exprContext* sequence_expr(size_t i);
    Expression_or_distContext *expression_or_dist();
    Boolean_abbrevContext *boolean_abbrev();
    Sequence_instanceContext *sequence_instance();
    Sequence_abbrevContext *sequence_abbrev();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    std::vector<Sequence_match_itemContext *> sequence_match_item();
    Sequence_match_itemContext* sequence_match_item(size_t i);
    antlr4::tree::TerminalNode *FIRST_MATCH();
    antlr4::tree::TerminalNode *THROUGHOUT();
    Clocking_eventContext *clocking_event();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *INTERSECT();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *WITHIN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_exprContext* sequence_expr();
  Sequence_exprContext* sequence_expr(int precedence);
  class  Cycle_delay_rangeContext : public antlr4::ParserRuleContext {
  public:
    Cycle_delay_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HAHA();
    Constant_primaryContext *constant_primary();
    antlr4::tree::TerminalNode *LB();
    Cycle_delay_const_range_expressionContext *cycle_delay_const_range_expression();
    antlr4::tree::TerminalNode *RB();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *PL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cycle_delay_rangeContext* cycle_delay_range();

  class  Sequence_method_callContext : public antlr4::ParserRuleContext {
  public:
    Sequence_method_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ps_or_hierarchical_identifierContext *ps_or_hierarchical_identifier();
    Seq_arg_listContext *seq_arg_list();
    antlr4::tree::TerminalNode *DT();
    Method_identifierContext *method_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_method_callContext* sequence_method_call();

  class  Sequence_match_itemContext : public antlr4::ParserRuleContext {
  public:
    Sequence_match_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Operator_assignmentContext *operator_assignment();
    Inc_or_dec_expressionContext *inc_or_dec_expression();
    Subroutine_callContext *subroutine_call();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_match_itemContext* sequence_match_item();

  class  Sequence_instanceContext : public antlr4::ParserRuleContext {
  public:
    Sequence_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ps_or_hierarchical_identifierContext *ps_or_hierarchical_identifier();
    Seq_arg_listContext *seq_arg_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_instanceContext* sequence_instance();

  class  Seq_arg_listContext : public antlr4::ParserRuleContext {
  public:
    Seq_arg_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    Sequence_list_of_argumentsContext *sequence_list_of_arguments();
    antlr4::tree::TerminalNode *RP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Seq_arg_listContext* seq_arg_list();

  class  Sequence_list_of_argumentsContext : public antlr4::ParserRuleContext {
  public:
    Sequence_list_of_argumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Seq_ordered_argContext *> seq_ordered_arg();
    Seq_ordered_argContext* seq_ordered_arg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    std::vector<Seq_named_argContext *> seq_named_arg();
    Seq_named_argContext* seq_named_arg(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_list_of_argumentsContext* sequence_list_of_arguments();

  class  Seq_ordered_argContext : public antlr4::ParserRuleContext {
  public:
    Seq_ordered_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Sequence_actual_argContext *sequence_actual_arg();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Seq_ordered_argContext* seq_ordered_arg();

  class  Seq_named_argContext : public antlr4::ParserRuleContext {
  public:
    Seq_named_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DT();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    Sequence_actual_argContext *sequence_actual_arg();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Seq_named_argContext* seq_named_arg();

  class  Sequence_actual_argContext : public antlr4::ParserRuleContext {
  public:
    Sequence_actual_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Event_expressionContext *event_expression();
    Sequence_exprContext *sequence_expr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_actual_argContext* sequence_actual_arg();

  class  Boolean_abbrevContext : public antlr4::ParserRuleContext {
  public:
    Boolean_abbrevContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Consecutive_repetitionContext *consecutive_repetition();
    Non_consecutive_repetitionContext *non_consecutive_repetition();
    Goto_repetitionContext *goto_repetition();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Boolean_abbrevContext* boolean_abbrev();

  class  Sequence_abbrevContext : public antlr4::ParserRuleContext {
  public:
    Sequence_abbrevContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Consecutive_repetitionContext *consecutive_repetition();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_abbrevContext* sequence_abbrev();

  class  Consecutive_repetitionContext : public antlr4::ParserRuleContext {
  public:
    Consecutive_repetitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LB();
    antlr4::tree::TerminalNode *AS();
    Const_or_range_expressionContext *const_or_range_expression();
    antlr4::tree::TerminalNode *RB();
    antlr4::tree::TerminalNode *PL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Consecutive_repetitionContext* consecutive_repetition();

  class  Non_consecutive_repetitionContext : public antlr4::ParserRuleContext {
  public:
    Non_consecutive_repetitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LB();
    antlr4::tree::TerminalNode *EQ();
    Const_or_range_expressionContext *const_or_range_expression();
    antlr4::tree::TerminalNode *RB();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Non_consecutive_repetitionContext* non_consecutive_repetition();

  class  Goto_repetitionContext : public antlr4::ParserRuleContext {
  public:
    Goto_repetitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LB();
    antlr4::tree::TerminalNode *MIGT();
    Const_or_range_expressionContext *const_or_range_expression();
    antlr4::tree::TerminalNode *RB();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Goto_repetitionContext* goto_repetition();

  class  Const_or_range_expressionContext : public antlr4::ParserRuleContext {
  public:
    Const_or_range_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();
    Cycle_delay_const_range_expressionContext *cycle_delay_const_range_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Const_or_range_expressionContext* const_or_range_expression();

  class  Cycle_delay_const_range_expressionContext : public antlr4::ParserRuleContext {
  public:
    Cycle_delay_const_range_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    antlr4::tree::TerminalNode *CL();
    antlr4::tree::TerminalNode *DL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cycle_delay_const_range_expressionContext* cycle_delay_const_range_expression();

  class  Expression_or_distContext : public antlr4::ParserRuleContext {
  public:
    Expression_or_distContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DIST();
    antlr4::tree::TerminalNode *LC();
    Dist_listContext *dist_list();
    antlr4::tree::TerminalNode *RC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expression_or_distContext* expression_or_dist();

  class  Assertion_variable_declarationContext : public antlr4::ParserRuleContext {
  public:
    Assertion_variable_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_data_typeContext *var_data_type();
    List_of_variable_decl_assignmentsContext *list_of_variable_decl_assignments();
    antlr4::tree::TerminalNode *SC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assertion_variable_declarationContext* assertion_variable_declaration();

  class  Covergroup_declarationContext : public antlr4::ParserRuleContext {
  public:
    Covergroup_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COVERGROUP();
    Covergroup_identifierContext *covergroup_identifier();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *ENDGROUP();
    Port_listContext *port_list();
    Coverage_eventContext *coverage_event();
    std::vector<Coverage_spec_or_optionContext *> coverage_spec_or_option();
    Coverage_spec_or_optionContext* coverage_spec_or_option(size_t i);
    Covergroup_nameContext *covergroup_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Covergroup_declarationContext* covergroup_declaration();

  class  Covergroup_nameContext : public antlr4::ParserRuleContext {
  public:
    Covergroup_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CL();
    Covergroup_identifierContext *covergroup_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Covergroup_nameContext* covergroup_name();

  class  Coverage_spec_or_optionContext : public antlr4::ParserRuleContext {
  public:
    Coverage_spec_or_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Coverage_specContext *coverage_spec();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Coverage_optionContext *coverage_option();
    antlr4::tree::TerminalNode *SC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Coverage_spec_or_optionContext* coverage_spec_or_option();

  class  Coverage_optionContext : public antlr4::ParserRuleContext {
  public:
    Coverage_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *DT();
    Member_identifierContext *member_identifier();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *TYPE_OPTION();
    Constant_expressionContext *constant_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Coverage_optionContext* coverage_option();

  class  Coverage_specContext : public antlr4::ParserRuleContext {
  public:
    Coverage_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cover_pointContext *cover_point();
    Cover_crossContext *cover_cross();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Coverage_specContext* coverage_spec();

  class  Coverage_eventContext : public antlr4::ParserRuleContext {
  public:
    Coverage_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Clocking_eventContext *clocking_event();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *SAMPLE();
    antlr4::tree::TerminalNode *LP();
    Tf_port_listContext *tf_port_list();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *ATAT();
    Block_event_expressionContext *block_event_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Coverage_eventContext* coverage_event();

  class  Block_event_expressionContext : public antlr4::ParserRuleContext {
  public:
    Block_event_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    Hierarchical_btf_identifierContext *hierarchical_btf_identifier();
    antlr4::tree::TerminalNode *END();
    std::vector<Block_event_expressionContext *> block_event_expression();
    Block_event_expressionContext* block_event_expression(size_t i);
    antlr4::tree::TerminalNode *OR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Block_event_expressionContext* block_event_expression();
  Block_event_expressionContext* block_event_expression(int precedence);
  class  Hierarchical_btf_identifierContext : public antlr4::ParserRuleContext {
  public:
    Hierarchical_btf_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Class_scopeContext *class_scope();
    std::vector<Hier_refContext *> hier_ref();
    Hier_refContext* hier_ref(size_t i);
    antlr4::tree::TerminalNode *DLROOT();
    antlr4::tree::TerminalNode *DT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hierarchical_btf_identifierContext* hierarchical_btf_identifier();

  class  Cover_pointContext : public antlr4::ParserRuleContext {
  public:
    Cover_pointContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COVERPOINT();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Bins_or_emptyContext *bins_or_empty();
    Cover_point_labelContext *cover_point_label();
    antlr4::tree::TerminalNode *IFF();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cover_pointContext* cover_point();

  class  Cover_point_labelContext : public antlr4::ParserRuleContext {
  public:
    Cover_point_labelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cover_point_identifierContext *cover_point_identifier();
    antlr4::tree::TerminalNode *CL();
    Data_type_or_implicitContext *data_type_or_implicit();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cover_point_labelContext* cover_point_label();

  class  Bins_or_emptyContext : public antlr4::ParserRuleContext {
  public:
    Bins_or_emptyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LC();
    antlr4::tree::TerminalNode *RC();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    std::vector<Bins_or_optionsContext *> bins_or_options();
    Bins_or_optionsContext* bins_or_options(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SC();
    antlr4::tree::TerminalNode* SC(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bins_or_emptyContext* bins_or_empty();

  class  Bins_or_optionsContext : public antlr4::ParserRuleContext {
  public:
    Bins_or_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Coverage_optionContext *coverage_option();
    Bins_keywordContext *bins_keyword();
    Bin_identifierContext *bin_identifier();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *LC();
    Covergroup_range_listContext *covergroup_range_list();
    antlr4::tree::TerminalNode *RC();
    antlr4::tree::TerminalNode *WILDCARD();
    Bin_array_sizeContext *bin_array_size();
    antlr4::tree::TerminalNode *WITH();
    std::vector<antlr4::tree::TerminalNode *> LP();
    antlr4::tree::TerminalNode* LP(size_t i);
    With_covergroup_expressionContext *with_covergroup_expression();
    std::vector<antlr4::tree::TerminalNode *> RP();
    antlr4::tree::TerminalNode* RP(size_t i);
    antlr4::tree::TerminalNode *IFF();
    ExpressionContext *expression();
    Cover_point_identifierContext *cover_point_identifier();
    Set_covergroup_expressionContext *set_covergroup_expression();
    Trans_listContext *trans_list();
    antlr4::tree::TerminalNode *LB();
    antlr4::tree::TerminalNode *RB();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *SEQUENCE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bins_or_optionsContext* bins_or_options();

  class  Bin_array_sizeContext : public antlr4::ParserRuleContext {
  public:
    Bin_array_sizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LB();
    antlr4::tree::TerminalNode *RB();
    Covergroup_expressionContext *covergroup_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bin_array_sizeContext* bin_array_size();

  class  Bins_keywordContext : public antlr4::ParserRuleContext {
  public:
    Bins_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINS();
    antlr4::tree::TerminalNode *ILLEGAL_BINS();
    antlr4::tree::TerminalNode *IGNORE_BINS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bins_keywordContext* bins_keyword();

  class  Trans_listContext : public antlr4::ParserRuleContext {
  public:
    Trans_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Trans_setContext *> trans_set();
    Trans_setContext* trans_set(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trans_listContext* trans_list();

  class  Trans_setContext : public antlr4::ParserRuleContext {
  public:
    Trans_setContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<Trans_range_listContext *> trans_range_list();
    Trans_range_listContext* trans_range_list(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> EQGT();
    antlr4::tree::TerminalNode* EQGT(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trans_setContext* trans_set();

  class  Trans_range_listContext : public antlr4::ParserRuleContext {
  public:
    Trans_range_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Trans_itemContext *trans_item();
    antlr4::tree::TerminalNode *LB();
    antlr4::tree::TerminalNode *AS();
    Repeat_rangeContext *repeat_range();
    antlr4::tree::TerminalNode *RB();
    antlr4::tree::TerminalNode *MIGT();
    antlr4::tree::TerminalNode *EQ();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trans_range_listContext* trans_range_list();

  class  Trans_itemContext : public antlr4::ParserRuleContext {
  public:
    Trans_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Covergroup_range_listContext *covergroup_range_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trans_itemContext* trans_item();

  class  Repeat_rangeContext : public antlr4::ParserRuleContext {
  public:
    Repeat_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Covergroup_expressionContext *> covergroup_expression();
    Covergroup_expressionContext* covergroup_expression(size_t i);
    antlr4::tree::TerminalNode *CL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Repeat_rangeContext* repeat_range();

  class  Cover_crossContext : public antlr4::ParserRuleContext {
  public:
    Cover_crossContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CROSS();
    List_of_cross_itemsContext *list_of_cross_items();
    Cross_bodyContext *cross_body();
    Cross_labelContext *cross_label();
    antlr4::tree::TerminalNode *IFF();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cover_crossContext* cover_cross();

  class  Cross_labelContext : public antlr4::ParserRuleContext {
  public:
    Cross_labelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cross_identifierContext *cross_identifier();
    antlr4::tree::TerminalNode *CL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cross_labelContext* cross_label();

  class  List_of_cross_itemsContext : public antlr4::ParserRuleContext {
  public:
    List_of_cross_itemsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Cross_itemContext *> cross_item();
    Cross_itemContext* cross_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_cross_itemsContext* list_of_cross_items();

  class  Cross_itemContext : public antlr4::ParserRuleContext {
  public:
    Cross_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cross_itemContext* cross_item();

  class  Cross_bodyContext : public antlr4::ParserRuleContext {
  public:
    Cross_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LC();
    antlr4::tree::TerminalNode *RC();
    std::vector<Cross_body_itemContext *> cross_body_item();
    Cross_body_itemContext* cross_body_item(size_t i);
    antlr4::tree::TerminalNode *SC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cross_bodyContext* cross_body();

  class  Cross_body_itemContext : public antlr4::ParserRuleContext {
  public:
    Cross_body_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_declarationContext *function_declaration();
    Bins_selection_or_optionContext *bins_selection_or_option();
    antlr4::tree::TerminalNode *SC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cross_body_itemContext* cross_body_item();

  class  Bins_selection_or_optionContext : public antlr4::ParserRuleContext {
  public:
    Bins_selection_or_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Coverage_optionContext *coverage_option();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Bins_selectionContext *bins_selection();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bins_selection_or_optionContext* bins_selection_or_option();

  class  Bins_selectionContext : public antlr4::ParserRuleContext {
  public:
    Bins_selectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Bins_keywordContext *bins_keyword();
    Bin_identifierContext *bin_identifier();
    antlr4::tree::TerminalNode *EQ();
    Select_expressionContext *select_expression();
    antlr4::tree::TerminalNode *IFF();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bins_selectionContext* bins_selection();

  class  Select_expressionContext : public antlr4::ParserRuleContext {
  public:
    Select_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Select_conditionContext *select_condition();
    antlr4::tree::TerminalNode *EM();
    antlr4::tree::TerminalNode *LP();
    std::vector<Select_expressionContext *> select_expression();
    Select_expressionContext* select_expression(size_t i);
    antlr4::tree::TerminalNode *RP();
    Cross_identifierContext *cross_identifier();
    Cross_set_expressionContext *cross_set_expression();
    antlr4::tree::TerminalNode *MATCHES();
    Integer_covergroup_expressionContext *integer_covergroup_expression();
    antlr4::tree::TerminalNode *AMAM();
    antlr4::tree::TerminalNode *VLVL();
    antlr4::tree::TerminalNode *WITH();
    With_covergroup_expressionContext *with_covergroup_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_expressionContext* select_expression();
  Select_expressionContext* select_expression(int precedence);
  class  Select_conditionContext : public antlr4::ParserRuleContext {
  public:
    Select_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINSOF();
    antlr4::tree::TerminalNode *LP();
    Bins_expressionContext *bins_expression();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *INTERSECT();
    antlr4::tree::TerminalNode *LC();
    Covergroup_range_listContext *covergroup_range_list();
    antlr4::tree::TerminalNode *RC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_conditionContext* select_condition();

  class  Bins_expressionContext : public antlr4::ParserRuleContext {
  public:
    Bins_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_identifierContext *variable_identifier();
    Cover_point_identifierContext *cover_point_identifier();
    antlr4::tree::TerminalNode *DT();
    Bin_identifierContext *bin_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bins_expressionContext* bins_expression();

  class  Covergroup_range_listContext : public antlr4::ParserRuleContext {
  public:
    Covergroup_range_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Covergroup_value_rangeContext *> covergroup_value_range();
    Covergroup_value_rangeContext* covergroup_value_range(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Covergroup_range_listContext* covergroup_range_list();

  class  Covergroup_value_rangeContext : public antlr4::ParserRuleContext {
  public:
    Covergroup_value_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Covergroup_expressionContext *> covergroup_expression();
    Covergroup_expressionContext* covergroup_expression(size_t i);
    antlr4::tree::TerminalNode *LB();
    antlr4::tree::TerminalNode *CL();
    antlr4::tree::TerminalNode *RB();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Covergroup_value_rangeContext* covergroup_value_range();

  class  With_covergroup_expressionContext : public antlr4::ParserRuleContext {
  public:
    With_covergroup_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Covergroup_expressionContext *covergroup_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  With_covergroup_expressionContext* with_covergroup_expression();

  class  Set_covergroup_expressionContext : public antlr4::ParserRuleContext {
  public:
    Set_covergroup_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Covergroup_expressionContext *covergroup_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_covergroup_expressionContext* set_covergroup_expression();

  class  Integer_covergroup_expressionContext : public antlr4::ParserRuleContext {
  public:
    Integer_covergroup_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Covergroup_expressionContext *covergroup_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Integer_covergroup_expressionContext* integer_covergroup_expression();

  class  Cross_set_expressionContext : public antlr4::ParserRuleContext {
  public:
    Cross_set_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Covergroup_expressionContext *covergroup_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cross_set_expressionContext* cross_set_expression();

  class  Covergroup_expressionContext : public antlr4::ParserRuleContext {
  public:
    Covergroup_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Covergroup_expressionContext* covergroup_expression();

  class  Let_declarationContext : public antlr4::ParserRuleContext {
  public:
    Let_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LET();
    Let_identifierContext *let_identifier();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SC();
    Let_portsContext *let_ports();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Let_declarationContext* let_declaration();

  class  Let_portsContext : public antlr4::ParserRuleContext {
  public:
    Let_portsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    Let_port_listContext *let_port_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Let_portsContext* let_ports();

  class  Let_identifierContext : public antlr4::ParserRuleContext {
  public:
    Let_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Let_identifierContext* let_identifier();

  class  Let_port_listContext : public antlr4::ParserRuleContext {
  public:
    Let_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Let_port_itemContext *> let_port_item();
    Let_port_itemContext* let_port_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Let_port_listContext* let_port_list();

  class  Let_port_itemContext : public antlr4::ParserRuleContext {
  public:
    Let_port_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Formal_port_identifierContext *formal_port_identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Let_formal_typeContext *let_formal_type();
    std::vector<Variable_dimensionContext *> variable_dimension();
    Variable_dimensionContext* variable_dimension(size_t i);
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Let_port_itemContext* let_port_item();

  class  Let_formal_typeContext : public antlr4::ParserRuleContext {
  public:
    Let_formal_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_type_or_implicitContext *data_type_or_implicit();
    antlr4::tree::TerminalNode *UNTYPED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Let_formal_typeContext* let_formal_type();

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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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
    Name_of_instanceContext *name_of_instance();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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
    Name_of_instanceContext *name_of_instance();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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
    Name_of_instanceContext *name_of_instance();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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
    Name_of_instanceContext *name_of_instance();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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
    Name_of_instanceContext *name_of_instance();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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
    Name_of_instanceContext *name_of_instance();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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
    Name_of_instanceContext *name_of_instance();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pass_enable_switch_instanceContext* pass_enable_switch_instance();

  class  Pull_gate_instanceContext : public antlr4::ParserRuleContext {
  public:
    Pull_gate_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    Output_terminalContext *output_terminal();
    antlr4::tree::TerminalNode *RP();
    Name_of_instanceContext *name_of_instance();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pull_gate_instanceContext* pull_gate_instance();

  class  Pulldown_strengthContext : public antlr4::ParserRuleContext {
  public:
    Pulldown_strengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    Strength0Context *strength0();
    antlr4::tree::TerminalNode *CO();
    Strength1Context *strength1();
    antlr4::tree::TerminalNode *RP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pullup_strengthContext* pullup_strength();

  class  Enable_terminalContext : public antlr4::ParserRuleContext {
  public:
    Enable_terminalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enable_terminalContext* enable_terminal();

  class  Inout_terminalContext : public antlr4::ParserRuleContext {
  public:
    Inout_terminalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_lvalueContext *net_lvalue();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Inout_terminalContext* inout_terminal();

  class  Input_terminalContext : public antlr4::ParserRuleContext {
  public:
    Input_terminalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Input_terminalContext* input_terminal();

  class  Ncontrol_terminalContext : public antlr4::ParserRuleContext {
  public:
    Ncontrol_terminalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ncontrol_terminalContext* ncontrol_terminal();

  class  Output_terminalContext : public antlr4::ParserRuleContext {
  public:
    Output_terminalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_lvalueContext *net_lvalue();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Output_terminalContext* output_terminal();

  class  Pcontrol_terminalContext : public antlr4::ParserRuleContext {
  public:
    Pcontrol_terminalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pcontrol_terminalContext* pcontrol_terminal();

  class  Cmos_switchtypeContext : public antlr4::ParserRuleContext {
  public:
    Cmos_switchtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CMOS();
    antlr4::tree::TerminalNode *RCMOS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  N_input_gatetypeContext* n_input_gatetype();

  class  N_output_gatetypeContext : public antlr4::ParserRuleContext {
  public:
    N_output_gatetypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BUF();
    antlr4::tree::TerminalNode *NOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pass_en_switchtypeContext* pass_en_switchtype();

  class  Pass_switchtypeContext : public antlr4::ParserRuleContext {
  public:
    Pass_switchtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRAN();
    antlr4::tree::TerminalNode *RTRAN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pass_switchtypeContext* pass_switchtype();

  class  Module_program_interface_instantiationContext : public antlr4::ParserRuleContext {
  public:
    Module_program_interface_instantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Instance_identifierContext *instance_identifier();
    std::vector<Hierarchical_instanceContext *> hierarchical_instance();
    Hierarchical_instanceContext* hierarchical_instance(size_t i);
    antlr4::tree::TerminalNode *SC();
    Parameter_value_assignmentContext *parameter_value_assignment();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_program_interface_instantiationContext* module_program_interface_instantiation();

  class  Parameter_value_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Parameter_value_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HA();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    List_of_parameter_assignmentsContext *list_of_parameter_assignments();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_parameter_assignmentsContext* list_of_parameter_assignments();

  class  Ordered_parameter_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Ordered_parameter_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Param_expressionContext *param_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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
    Param_expressionContext *param_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Named_parameter_assignmentContext* named_parameter_assignment();

  class  Hierarchical_instanceContext : public antlr4::ParserRuleContext {
  public:
    Hierarchical_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Name_of_instanceContext *name_of_instance();
    antlr4::tree::TerminalNode *LP();
    List_of_port_connectionsContext *list_of_port_connections();
    antlr4::tree::TerminalNode *RP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hierarchical_instanceContext* hierarchical_instance();

  class  Name_of_instanceContext : public antlr4::ParserRuleContext {
  public:
    Name_of_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Instance_identifierContext *instance_identifier();
    std::vector<Unpacked_dimensionContext *> unpacked_dimension();
    Unpacked_dimensionContext* unpacked_dimension(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Name_of_instanceContext* name_of_instance();

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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_port_connectionsContext* list_of_port_connections();

  class  Ordered_port_connectionContext : public antlr4::ParserRuleContext {
  public:
    Ordered_port_connectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ordered_port_connectionContext* ordered_port_connection();

  class  Named_port_connectionContext : public antlr4::ParserRuleContext {
  public:
    Named_port_connectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DT();
    Port_identifierContext *port_identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Port_assignContext *port_assign();
    antlr4::tree::TerminalNode *DTAS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Named_port_connectionContext* named_port_connection();

  class  Port_assignContext : public antlr4::ParserRuleContext {
  public:
    Port_assignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Port_assignContext* port_assign();

  class  Checker_instantiationContext : public antlr4::ParserRuleContext {
  public:
    Checker_instantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ps_identifierContext *ps_identifier();
    Name_of_instanceContext *name_of_instance();
    antlr4::tree::TerminalNode *LP();
    List_of_checker_port_connectionsContext *list_of_checker_port_connections();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Checker_instantiationContext* checker_instantiation();

  class  List_of_checker_port_connectionsContext : public antlr4::ParserRuleContext {
  public:
    List_of_checker_port_connectionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Ordered_checker_port_connectionContext *> ordered_checker_port_connection();
    Ordered_checker_port_connectionContext* ordered_checker_port_connection(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    std::vector<Named_checker_port_connectionContext *> named_checker_port_connection();
    Named_checker_port_connectionContext* named_checker_port_connection(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_checker_port_connectionsContext* list_of_checker_port_connections();

  class  Ordered_checker_port_connectionContext : public antlr4::ParserRuleContext {
  public:
    Ordered_checker_port_connectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Property_actual_argContext *property_actual_arg();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ordered_checker_port_connectionContext* ordered_checker_port_connection();

  class  Named_checker_port_connectionContext : public antlr4::ParserRuleContext {
  public:
    Named_checker_port_connectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DT();
    Formal_port_identifierContext *formal_port_identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Checker_port_assignContext *checker_port_assign();
    antlr4::tree::TerminalNode *DTAS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Named_checker_port_connectionContext* named_checker_port_connection();

  class  Checker_port_assignContext : public antlr4::ParserRuleContext {
  public:
    Checker_port_assignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    Property_actual_argContext *property_actual_arg();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Checker_port_assignContext* checker_port_assign();

  class  Generate_regionContext : public antlr4::ParserRuleContext {
  public:
    Generate_regionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GENERATE();
    antlr4::tree::TerminalNode *ENDGENERATE();
    std::vector<Generate_itemContext *> generate_item();
    Generate_itemContext* generate_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_regionContext* generate_region();

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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Loop_generate_constructContext* loop_generate_construct();

  class  Genvar_initializationContext : public antlr4::ParserRuleContext {
  public:
    Genvar_initializationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Genvar_identifierContext *genvar_identifier();
    antlr4::tree::TerminalNode *EQ();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *GENVAR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Genvar_initializationContext* genvar_initialization();

  class  Genvar_iterationContext : public antlr4::ParserRuleContext {
  public:
    Genvar_iterationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Genvar_identifierContext *genvar_identifier();
    Assignment_operatorContext *assignment_operator();
    Genvar_expressionContext *genvar_expression();
    Inc_or_dec_operatorContext *inc_or_dec_operator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Genvar_iterationContext* genvar_iteration();

  class  Conditional_generate_constructContext : public antlr4::ParserRuleContext {
  public:
    Conditional_generate_constructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    If_generate_constructContext *if_generate_construct();
    Case_generate_constructContext *case_generate_construct();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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
    std::vector<Generate_blockContext *> generate_block();
    Generate_blockContext* generate_block(size_t i);
    antlr4::tree::TerminalNode *ELSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_generate_constructContext* case_generate_construct();

  class  Case_generate_itemContext : public antlr4::ParserRuleContext {
  public:
    Case_generate_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    antlr4::tree::TerminalNode *CL();
    Generate_blockContext *generate_block();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    antlr4::tree::TerminalNode *DEFAULT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_generate_itemContext* case_generate_item();

  class  Generate_blockContext : public antlr4::ParserRuleContext {
  public:
    Generate_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Generate_itemContext *> generate_item();
    Generate_itemContext* generate_item(size_t i);
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    Generate_block_labelContext *generate_block_label();
    std::vector<Generate_block_nameContext *> generate_block_name();
    Generate_block_nameContext* generate_block_name(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_blockContext* generate_block();

  class  Generate_block_labelContext : public antlr4::ParserRuleContext {
  public:
    Generate_block_labelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Generate_block_identifierContext *generate_block_identifier();
    antlr4::tree::TerminalNode *CL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_block_labelContext* generate_block_label();

  class  Generate_block_nameContext : public antlr4::ParserRuleContext {
  public:
    Generate_block_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CL();
    Generate_block_identifierContext *generate_block_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_block_nameContext* generate_block_name();

  class  Generate_itemContext : public antlr4::ParserRuleContext {
  public:
    Generate_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parameter_overrideContext *parameter_override();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Gate_instantiationContext *gate_instantiation();
    Net_declarationContext *net_declaration();
    Data_declarationContext *data_declaration();
    antlr4::tree::TerminalNode *RAND();
    Task_declarationContext *task_declaration();
    Function_declarationContext *function_declaration();
    Checker_declarationContext *checker_declaration();
    Dpi_import_exportContext *dpi_import_export();
    Extern_constraint_declarationContext *extern_constraint_declaration();
    Class_declarationContext *class_declaration();
    Interface_class_declarationContext *interface_class_declaration();
    Class_constructor_declarationContext *class_constructor_declaration();
    Local_parameter_declarationContext *local_parameter_declaration();
    antlr4::tree::TerminalNode *SC();
    Parameter_declarationContext *parameter_declaration();
    Covergroup_declarationContext *covergroup_declaration();
    Assertion_item_declarationContext *assertion_item_declaration();
    Genvar_declarationContext *genvar_declaration();
    Clocking_declarationContext *clocking_declaration();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *CLOCKING();
    Clocking_identifierContext *clocking_identifier();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *IFF();
    Expression_or_distContext *expression_or_dist();
    Module_program_interface_instantiationContext *module_program_interface_instantiation();
    Assertion_itemContext *assertion_item();
    Udp_instantiationContext *udp_instantiation();
    Bind_directiveContext *bind_directive();
    Continuous_assignContext *continuous_assign();
    Net_aliasContext *net_alias();
    Initial_constructContext *initial_construct();
    Final_constructContext *final_construct();
    Always_constructContext *always_construct();
    Loop_generate_constructContext *loop_generate_construct();
    Conditional_generate_constructContext *conditional_generate_construct();
    Elaboration_system_taskContext *elaboration_system_task();
    Extern_tf_declarationContext *extern_tf_declaration();
    Generate_regionContext *generate_region();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_itemContext* generate_item();

  class  Udp_nonansi_declarationContext : public antlr4::ParserRuleContext {
  public:
    Udp_nonansi_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRIMITIVE();
    Udp_identifierContext *udp_identifier();
    antlr4::tree::TerminalNode *LP();
    Udp_port_listContext *udp_port_list();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_nonansi_declarationContext* udp_nonansi_declaration();

  class  Udp_ansi_declarationContext : public antlr4::ParserRuleContext {
  public:
    Udp_ansi_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRIMITIVE();
    Udp_identifierContext *udp_identifier();
    antlr4::tree::TerminalNode *LP();
    Udp_declaration_port_listContext *udp_declaration_port_list();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_ansi_declarationContext* udp_ansi_declaration();

  class  Udp_declarationContext : public antlr4::ParserRuleContext {
  public:
    Udp_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Udp_nonansi_declarationContext *udp_nonansi_declaration();
    Udp_bodyContext *udp_body();
    antlr4::tree::TerminalNode *ENDPRIMITIVE();
    std::vector<Udp_port_declarationContext *> udp_port_declaration();
    Udp_port_declarationContext* udp_port_declaration(size_t i);
    Udp_nameContext *udp_name();
    Udp_ansi_declarationContext *udp_ansi_declaration();
    antlr4::tree::TerminalNode *EXTERN();
    antlr4::tree::TerminalNode *PRIMITIVE();
    Udp_identifierContext *udp_identifier();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *DTAS();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_declarationContext* udp_declaration();

  class  Udp_nameContext : public antlr4::ParserRuleContext {
  public:
    Udp_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CL();
    Udp_identifierContext *udp_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_nameContext* udp_name();

  class  Udp_port_listContext : public antlr4::ParserRuleContext {
  public:
    Udp_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Output_port_identifierContext *output_port_identifier();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    std::vector<Input_port_identifierContext *> input_port_identifier();
    Input_port_identifierContext* input_port_identifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_output_declarationContext* udp_output_declaration();

  class  Udp_input_declarationContext : public antlr4::ParserRuleContext {
  public:
    Udp_input_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INPUT();
    List_of_udp_port_identifiersContext *list_of_udp_port_identifiers();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_reg_declarationContext* udp_reg_declaration();

  class  Udp_bodyContext : public antlr4::ParserRuleContext {
  public:
    Udp_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Combinational_bodyContext *combinational_body();
    Sequential_bodyContext *sequential_body();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_initial_statementContext* udp_initial_statement();

  class  Init_valContext : public antlr4::ParserRuleContext {
  public:
    Init_valContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Binary_numberContext *binary_number();
    Unsigned_numberContext *unsigned_number();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequential_entryContext* sequential_entry();

  class  Seq_input_listContext : public antlr4::ParserRuleContext {
  public:
    Seq_input_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Level_input_listContext *level_input_list();
    Edge_input_listContext *edge_input_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Seq_input_listContext* seq_input_list();

  class  Level_input_listContext : public antlr4::ParserRuleContext {
  public:
    Level_input_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Level_symbolContext *> level_symbol();
    Level_symbolContext* level_symbol(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Level_input_listContext* level_input_list();

  class  Edge_input_listContext : public antlr4::ParserRuleContext {
  public:
    Edge_input_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Edge_indicatorContext *edge_indicator();
    std::vector<Level_symbolContext *> level_symbol();
    Level_symbolContext* level_symbol(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Edge_indicatorContext* edge_indicator();

  class  Current_stateContext : public antlr4::ParserRuleContext {
  public:
    Current_stateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Level_symbolContext *level_symbol();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Current_stateContext* current_state();

  class  Next_stateContext : public antlr4::ParserRuleContext {
  public:
    Next_stateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Output_symbolContext *output_symbol();
    antlr4::tree::TerminalNode *MI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Next_stateContext* next_state();

  class  Output_symbolContext : public antlr4::ParserRuleContext {
  public:
    Output_symbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OUTPUT_OR_LEVEL_SYMBOL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Output_symbolContext* output_symbol();

  class  Level_symbolContext : public antlr4::ParserRuleContext {
  public:
    Level_symbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEVEL_ONLY_SYMBOL();
    antlr4::tree::TerminalNode *OUTPUT_OR_LEVEL_SYMBOL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Level_symbolContext* level_symbol();

  class  Edge_symbolContext : public antlr4::ParserRuleContext {
  public:
    Edge_symbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EDGE_SYMBOL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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
    Name_of_instanceContext *name_of_instance();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_instanceContext* udp_instance();

  class  Continuous_assignContext : public antlr4::ParserRuleContext {
  public:
    Continuous_assignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *HA();
    antlr4::tree::TerminalNode *LP();
    std::vector<Mintypmax_expressionContext *> mintypmax_expression();
    Mintypmax_expressionContext* mintypmax_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    antlr4::tree::TerminalNode *RP();
    List_of_net_assignmentsContext *list_of_net_assignments();
    antlr4::tree::TerminalNode *SC();
    Drive_strengthContext *drive_strength();
    Delay3Context *delay3();
    List_of_variable_assignmentsContext *list_of_variable_assignments();
    Delay_controlContext *delay_control();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_net_assignmentsContext* list_of_net_assignments();

  class  List_of_variable_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_variable_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Variable_assignmentContext *> variable_assignment();
    Variable_assignmentContext* variable_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_variable_assignmentsContext* list_of_variable_assignments();

  class  Net_aliasContext : public antlr4::ParserRuleContext {
  public:
    Net_aliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALIAS();
    std::vector<Net_lvalueContext *> net_lvalue();
    Net_lvalueContext* net_lvalue(size_t i);
    antlr4::tree::TerminalNode *SC();
    std::vector<antlr4::tree::TerminalNode *> EQ();
    antlr4::tree::TerminalNode* EQ(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_aliasContext* net_alias();

  class  Net_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Net_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_lvalueContext *net_lvalue();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_assignmentContext* net_assignment();

  class  Initial_constructContext : public antlr4::ParserRuleContext {
  public:
    Initial_constructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INITIAL();
    Statement_or_nullContext *statement_or_null();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Initial_constructContext* initial_construct();

  class  Always_constructContext : public antlr4::ParserRuleContext {
  public:
    Always_constructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Always_keywordContext *always_keyword();
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Always_constructContext* always_construct();

  class  Always_keywordContext : public antlr4::ParserRuleContext {
  public:
    Always_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALWAYS();
    antlr4::tree::TerminalNode *ALWAYS_COMB();
    antlr4::tree::TerminalNode *ALWAYS_LATCH();
    antlr4::tree::TerminalNode *ALWAYS_FF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Always_keywordContext* always_keyword();

  class  Final_constructContext : public antlr4::ParserRuleContext {
  public:
    Final_constructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FINAL();
    Function_statementContext *function_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Final_constructContext* final_construct();

  class  Blocking_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Blocking_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_lvalueContext *variable_lvalue();
    antlr4::tree::TerminalNode *EQ();
    Delay_or_event_controlContext *delay_or_event_control();
    ExpressionContext *expression();
    Nonrange_variable_lvalueContext *nonrange_variable_lvalue();
    Dynamic_array_newContext *dynamic_array_new();
    Hierarchical_identifierContext *hierarchical_identifier();
    Class_newContext *class_new();
    Implicit_class_handleContext *implicit_class_handle();
    antlr4::tree::TerminalNode *DT();
    Package_or_class_scopeContext *package_or_class_scope();
    Select_Context *select_();
    Operator_assignmentContext *operator_assignment();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Blocking_assignmentContext* blocking_assignment();

  class  Operator_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Operator_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_lvalueContext *variable_lvalue();
    Assignment_operatorContext *assignment_operator();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Operator_assignmentContext* operator_assignment();

  class  Assignment_operatorContext : public antlr4::ParserRuleContext {
  public:
    Assignment_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *PLEQ();
    antlr4::tree::TerminalNode *MIEQ();
    antlr4::tree::TerminalNode *ASEQ();
    antlr4::tree::TerminalNode *SLEQ();
    antlr4::tree::TerminalNode *MOEQ();
    antlr4::tree::TerminalNode *AMEQ();
    antlr4::tree::TerminalNode *VLEQ();
    antlr4::tree::TerminalNode *CAEQ();
    antlr4::tree::TerminalNode *LTLTEQ();
    antlr4::tree::TerminalNode *GTGTEQ();
    antlr4::tree::TerminalNode *LTLTLTEQ();
    antlr4::tree::TerminalNode *GTGTGTEQ();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_operatorContext* assignment_operator();

  class  Nonblocking_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Nonblocking_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_lvalueContext *variable_lvalue();
    antlr4::tree::TerminalNode *LTEQ();
    ExpressionContext *expression();
    Delay_or_event_controlContext *delay_or_event_control();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nonblocking_assignmentContext* nonblocking_assignment();

  class  Procedural_continuous_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Procedural_continuous_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();
    Variable_assignmentContext *variable_assignment();
    antlr4::tree::TerminalNode *DEASSIGN();
    Variable_lvalueContext *variable_lvalue();
    antlr4::tree::TerminalNode *FORCE();
    antlr4::tree::TerminalNode *RELEASE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedural_continuous_assignmentContext* procedural_continuous_assignment();

  class  Variable_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Variable_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_lvalueContext *variable_lvalue();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_assignmentContext* variable_assignment();

  class  Action_blockContext : public antlr4::ParserRuleContext {
  public:
    Action_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Statement_or_nullContext *statement_or_null();
    antlr4::tree::TerminalNode *ELSE();
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Action_blockContext* action_block();

  class  Seq_blockContext : public antlr4::ParserRuleContext {
  public:
    Seq_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    std::vector<Block_nameContext *> block_name();
    Block_nameContext* block_name(size_t i);
    std::vector<Block_item_declarationContext *> block_item_declaration();
    Block_item_declarationContext* block_item_declaration(size_t i);
    std::vector<Statement_or_nullContext *> statement_or_null();
    Statement_or_nullContext* statement_or_null(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Seq_blockContext* seq_block();

  class  Block_nameContext : public antlr4::ParserRuleContext {
  public:
    Block_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CL();
    Block_identifierContext *block_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Block_nameContext* block_name();

  class  Par_blockContext : public antlr4::ParserRuleContext {
  public:
    Par_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FORK();
    Join_keywordContext *join_keyword();
    std::vector<Block_nameContext *> block_name();
    Block_nameContext* block_name(size_t i);
    std::vector<Block_item_declarationContext *> block_item_declaration();
    Block_item_declarationContext* block_item_declaration(size_t i);
    std::vector<Statement_or_nullContext *> statement_or_null();
    Statement_or_nullContext* statement_or_null(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Par_blockContext* par_block();

  class  Join_keywordContext : public antlr4::ParserRuleContext {
  public:
    Join_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *JOIN_ANY();
    antlr4::tree::TerminalNode *JOIN_NONE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Join_keywordContext* join_keyword();

  class  Statement_or_nullContext : public antlr4::ParserRuleContext {
  public:
    Statement_or_nullContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    antlr4::tree::TerminalNode *SC();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_or_nullContext* statement_or_null();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Statement_itemContext *statement_item();
    Block_labelContext *block_label();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  Statement_itemContext : public antlr4::ParserRuleContext {
  public:
    Statement_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Blocking_assignmentContext *blocking_assignment();
    antlr4::tree::TerminalNode *SC();
    Nonblocking_assignmentContext *nonblocking_assignment();
    Procedural_continuous_assignmentContext *procedural_continuous_assignment();
    Case_statementContext *case_statement();
    Conditional_statementContext *conditional_statement();
    Inc_or_dec_expressionContext *inc_or_dec_expression();
    Subroutine_call_statementContext *subroutine_call_statement();
    Disable_statementContext *disable_statement();
    Event_triggerContext *event_trigger();
    Loop_statementContext *loop_statement();
    Jump_statementContext *jump_statement();
    Par_blockContext *par_block();
    Procedural_timing_control_statementContext *procedural_timing_control_statement();
    Seq_blockContext *seq_block();
    Wait_statementContext *wait_statement();
    Procedural_assertion_statementContext *procedural_assertion_statement();
    Clocking_driveContext *clocking_drive();
    Randsequence_statementContext *randsequence_statement();
    Randcase_statementContext *randcase_statement();
    Expect_property_statementContext *expect_property_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_itemContext* statement_item();

  class  Function_statementContext : public antlr4::ParserRuleContext {
  public:
    Function_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_statementContext* function_statement();

  class  Function_statement_or_nullContext : public antlr4::ParserRuleContext {
  public:
    Function_statement_or_nullContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_statementContext *function_statement();
    antlr4::tree::TerminalNode *SC();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_statement_or_nullContext* function_statement_or_null();

  class  Variable_identifier_listContext : public antlr4::ParserRuleContext {
  public:
    Variable_identifier_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Variable_identifierContext *> variable_identifier();
    Variable_identifierContext* variable_identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_identifier_listContext* variable_identifier_list();

  class  Procedural_timing_control_statementContext : public antlr4::ParserRuleContext {
  public:
    Procedural_timing_control_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Procedural_timing_controlContext *procedural_timing_control();
    Statement_or_nullContext *statement_or_null();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedural_timing_control_statementContext* procedural_timing_control_statement();

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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delay_or_event_controlContext* delay_or_event_control();

  class  Delay_controlContext : public antlr4::ParserRuleContext {
  public:
    Delay_controlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HA();
    Delay_valueContext *delay_value();
    antlr4::tree::TerminalNode *LP();
    Mintypmax_expressionContext *mintypmax_expression();
    antlr4::tree::TerminalNode *RP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delay_controlContext* delay_control();

  class  Event_controlContext : public antlr4::ParserRuleContext {
  public:
    Event_controlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *LP();
    Event_expressionContext *event_expression();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *AS();
    Ps_or_hierarchical_identifierContext *ps_or_hierarchical_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_controlContext* event_control();

  class  Event_expressionContext : public antlr4::ParserRuleContext {
  public:
    Event_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Edge_identifierContext *edge_identifier();
    antlr4::tree::TerminalNode *IFF();
    Sequence_instanceContext *sequence_instance();
    antlr4::tree::TerminalNode *LP();
    std::vector<Event_expressionContext *> event_expression();
    Event_expressionContext* event_expression(size_t i);
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *CO();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_expressionContext* event_expression();
  Event_expressionContext* event_expression(int precedence);
  class  Procedural_timing_controlContext : public antlr4::ParserRuleContext {
  public:
    Procedural_timing_controlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Delay_controlContext *delay_control();
    Event_controlContext *event_control();
    Cycle_delayContext *cycle_delay();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedural_timing_controlContext* procedural_timing_control();

  class  Jump_statementContext : public antlr4::ParserRuleContext {
  public:
    Jump_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *SC();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *BREAK();
    antlr4::tree::TerminalNode *CONTINUE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Jump_statementContext* jump_statement();

  class  Wait_statementContext : public antlr4::ParserRuleContext {
  public:
    Wait_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    Statement_or_nullContext *statement_or_null();
    antlr4::tree::TerminalNode *FORK();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *WAIT_ORDER();
    std::vector<Hierarchical_identifierContext *> hierarchical_identifier();
    Hierarchical_identifierContext* hierarchical_identifier(size_t i);
    Action_blockContext *action_block();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Wait_statementContext* wait_statement();

  class  Event_triggerContext : public antlr4::ParserRuleContext {
  public:
    Event_triggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MIGT();
    Hierarchical_identifierContext *hierarchical_identifier();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *MIGTGT();
    Delay_or_event_controlContext *delay_or_event_control();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_triggerContext* event_trigger();

  class  Disable_statementContext : public antlr4::ParserRuleContext {
  public:
    Disable_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISABLE();
    Hierarchical_identifierContext *hierarchical_identifier();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *FORK();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Disable_statementContext* disable_statement();

  class  Conditional_statementContext : public antlr4::ParserRuleContext {
  public:
    Conditional_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LP();
    Cond_predicateContext *cond_predicate();
    antlr4::tree::TerminalNode *RP();
    std::vector<Statement_or_nullContext *> statement_or_null();
    Statement_or_nullContext* statement_or_null(size_t i);
    Unique_priorityContext *unique_priority();
    antlr4::tree::TerminalNode *ELSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Conditional_statementContext* conditional_statement();

  class  Unique_priorityContext : public antlr4::ParserRuleContext {
  public:
    Unique_priorityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *UNIQUEZERO();
    antlr4::tree::TerminalNode *PRIORITY();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unique_priorityContext* unique_priority();

  class  Cond_predicateContext : public antlr4::ParserRuleContext {
  public:
    Cond_predicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Expression_or_cond_patternContext *> expression_or_cond_pattern();
    Expression_or_cond_patternContext* expression_or_cond_pattern(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AMAMAM();
    antlr4::tree::TerminalNode* AMAMAM(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cond_predicateContext* cond_predicate();

  class  Expression_or_cond_patternContext : public antlr4::ParserRuleContext {
  public:
    Expression_or_cond_patternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *MATCHES();
    PatternContext *pattern();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expression_or_cond_patternContext* expression_or_cond_pattern();

  class  Case_statementContext : public antlr4::ParserRuleContext {
  public:
    Case_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Case_keywordContext *case_keyword();
    antlr4::tree::TerminalNode *LP();
    Case_expressionContext *case_expression();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *ENDCASE();
    Unique_priorityContext *unique_priority();
    std::vector<Case_itemContext *> case_item();
    Case_itemContext* case_item(size_t i);
    antlr4::tree::TerminalNode *MATCHES();
    std::vector<Case_pattern_itemContext *> case_pattern_item();
    Case_pattern_itemContext* case_pattern_item(size_t i);
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *INSIDE();
    std::vector<Case_inside_itemContext *> case_inside_item();
    Case_inside_itemContext* case_inside_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_statementContext* case_statement();

  class  Case_keywordContext : public antlr4::ParserRuleContext {
  public:
    Case_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *CASEZ();
    antlr4::tree::TerminalNode *CASEX();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_keywordContext* case_keyword();

  class  Case_expressionContext : public antlr4::ParserRuleContext {
  public:
    Case_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_expressionContext* case_expression();

  class  Case_itemContext : public antlr4::ParserRuleContext {
  public:
    Case_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Case_item_expressionContext *> case_item_expression();
    Case_item_expressionContext* case_item_expression(size_t i);
    antlr4::tree::TerminalNode *CL();
    Statement_or_nullContext *statement_or_null();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    antlr4::tree::TerminalNode *DEFAULT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_itemContext* case_item();

  class  Case_pattern_itemContext : public antlr4::ParserRuleContext {
  public:
    Case_pattern_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PatternContext *pattern();
    antlr4::tree::TerminalNode *CL();
    Statement_or_nullContext *statement_or_null();
    antlr4::tree::TerminalNode *AMAMAM();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DEFAULT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_pattern_itemContext* case_pattern_item();

  class  Case_inside_itemContext : public antlr4::ParserRuleContext {
  public:
    Case_inside_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Open_range_listContext *open_range_list();
    antlr4::tree::TerminalNode *CL();
    Statement_or_nullContext *statement_or_null();
    antlr4::tree::TerminalNode *DEFAULT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_inside_itemContext* case_inside_item();

  class  Case_item_expressionContext : public antlr4::ParserRuleContext {
  public:
    Case_item_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_item_expressionContext* case_item_expression();

  class  Randcase_statementContext : public antlr4::ParserRuleContext {
  public:
    Randcase_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RANDCASE();
    antlr4::tree::TerminalNode *ENDCASE();
    std::vector<Randcase_itemContext *> randcase_item();
    Randcase_itemContext* randcase_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Randcase_statementContext* randcase_statement();

  class  Randcase_itemContext : public antlr4::ParserRuleContext {
  public:
    Randcase_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CL();
    Statement_or_nullContext *statement_or_null();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Randcase_itemContext* randcase_item();

  class  Open_range_listContext : public antlr4::ParserRuleContext {
  public:
    Open_range_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Open_value_rangeContext *> open_value_range();
    Open_value_rangeContext* open_value_range(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Open_range_listContext* open_range_list();

  class  Open_value_rangeContext : public antlr4::ParserRuleContext {
  public:
    Open_value_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Value_rangeContext *value_range();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Open_value_rangeContext* open_value_range();

  class  PatternContext : public antlr4::ParserRuleContext {
  public:
    PatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DT();
    Variable_identifierContext *variable_identifier();
    antlr4::tree::TerminalNode *DTAS();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *TAGGED();
    Member_identifierContext *member_identifier();
    std::vector<PatternContext *> pattern();
    PatternContext* pattern(size_t i);
    antlr4::tree::TerminalNode *AP();
    antlr4::tree::TerminalNode *LC();
    antlr4::tree::TerminalNode *RC();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    std::vector<Member_pattern_pairContext *> member_pattern_pair();
    Member_pattern_pairContext* member_pattern_pair(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PatternContext* pattern();

  class  Member_pattern_pairContext : public antlr4::ParserRuleContext {
  public:
    Member_pattern_pairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Member_identifierContext *member_identifier();
    antlr4::tree::TerminalNode *CL();
    PatternContext *pattern();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Member_pattern_pairContext* member_pattern_pair();

  class  Assignment_patternContext : public antlr4::ParserRuleContext {
  public:
    Assignment_patternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AP();
    std::vector<antlr4::tree::TerminalNode *> LC();
    antlr4::tree::TerminalNode* LC(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RC();
    antlr4::tree::TerminalNode* RC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    std::vector<Array_key_val_pairContext *> array_key_val_pair();
    Array_key_val_pairContext* array_key_val_pair(size_t i);
    Constant_expressionContext *constant_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_patternContext* assignment_pattern();

  class  Array_key_val_pairContext : public antlr4::ParserRuleContext {
  public:
    Array_key_val_pairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Array_pattern_keyContext *array_pattern_key();
    antlr4::tree::TerminalNode *CL();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_key_val_pairContext* array_key_val_pair();

  class  Array_pattern_keyContext : public antlr4::ParserRuleContext {
  public:
    Array_pattern_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();
    Assignment_pattern_keyContext *assignment_pattern_key();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_pattern_keyContext* array_pattern_key();

  class  Assignment_pattern_keyContext : public antlr4::ParserRuleContext {
  public:
    Assignment_pattern_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_typeContext *integer_type();
    Non_integer_typeContext *non_integer_type();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *CLCL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *DEFAULT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_pattern_keyContext* assignment_pattern_key();

  class  Assignment_pattern_expressionContext : public antlr4::ParserRuleContext {
  public:
    Assignment_pattern_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Assignment_patternContext *assignment_pattern();
    Assignment_pattern_expression_typeContext *assignment_pattern_expression_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_pattern_expressionContext* assignment_pattern_expression();

  class  Assignment_pattern_expression_typeContext : public antlr4::ParserRuleContext {
  public:
    Assignment_pattern_expression_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ps_type_or_parameter_identifierContext *ps_type_or_parameter_identifier();
    Integer_atom_typeContext *integer_atom_type();
    Type_referenceContext *type_reference();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_pattern_expression_typeContext* assignment_pattern_expression_type();

  class  Constant_assignment_pattern_expressionContext : public antlr4::ParserRuleContext {
  public:
    Constant_assignment_pattern_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Assignment_pattern_expressionContext *assignment_pattern_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_assignment_pattern_expressionContext* constant_assignment_pattern_expression();

  class  Assignment_pattern_net_lvalueContext : public antlr4::ParserRuleContext {
  public:
    Assignment_pattern_net_lvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AP();
    antlr4::tree::TerminalNode *LC();
    std::vector<Net_lvalueContext *> net_lvalue();
    Net_lvalueContext* net_lvalue(size_t i);
    antlr4::tree::TerminalNode *RC();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_pattern_net_lvalueContext* assignment_pattern_net_lvalue();

  class  Assignment_pattern_variable_lvalueContext : public antlr4::ParserRuleContext {
  public:
    Assignment_pattern_variable_lvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AP();
    antlr4::tree::TerminalNode *LC();
    std::vector<Variable_lvalueContext *> variable_lvalue();
    Variable_lvalueContext* variable_lvalue(size_t i);
    antlr4::tree::TerminalNode *RC();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_pattern_variable_lvalueContext* assignment_pattern_variable_lvalue();

  class  Loop_statementContext : public antlr4::ParserRuleContext {
  public:
    Loop_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOREVER();
    Statement_or_nullContext *statement_or_null();
    antlr4::tree::TerminalNode *REPEAT();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *FOR();
    std::vector<antlr4::tree::TerminalNode *> SC();
    antlr4::tree::TerminalNode* SC(size_t i);
    For_initializationContext *for_initialization();
    For_stepContext *for_step();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *FOREACH();
    Ps_or_hierarchical_array_identifierContext *ps_or_hierarchical_array_identifier();
    antlr4::tree::TerminalNode *LB();
    Loop_variablesContext *loop_variables();
    antlr4::tree::TerminalNode *RB();
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Loop_statementContext* loop_statement();

  class  For_initializationContext : public antlr4::ParserRuleContext {
  public:
    For_initializationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_variable_assignmentsContext *list_of_variable_assignments();
    std::vector<For_variable_declarationContext *> for_variable_declaration();
    For_variable_declarationContext* for_variable_declaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_initializationContext* for_initialization();

  class  For_variable_declarationContext : public antlr4::ParserRuleContext {
  public:
    For_variable_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_typeContext *data_type();
    std::vector<For_variable_assignContext *> for_variable_assign();
    For_variable_assignContext* for_variable_assign(size_t i);
    antlr4::tree::TerminalNode *VAR();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_variable_declarationContext* for_variable_declaration();

  class  For_variable_assignContext : public antlr4::ParserRuleContext {
  public:
    For_variable_assignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_identifierContext *variable_identifier();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_variable_assignContext* for_variable_assign();

  class  For_stepContext : public antlr4::ParserRuleContext {
  public:
    For_stepContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<For_step_assignmentContext *> for_step_assignment();
    For_step_assignmentContext* for_step_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_stepContext* for_step();

  class  For_step_assignmentContext : public antlr4::ParserRuleContext {
  public:
    For_step_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Operator_assignmentContext *operator_assignment();
    Inc_or_dec_expressionContext *inc_or_dec_expression();
    Subroutine_callContext *subroutine_call();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_step_assignmentContext* for_step_assignment();

  class  Loop_variablesContext : public antlr4::ParserRuleContext {
  public:
    Loop_variablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Loop_varContext *> loop_var();
    Loop_varContext* loop_var(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Loop_variablesContext* loop_variables();

  class  Loop_varContext : public antlr4::ParserRuleContext {
  public:
    Loop_varContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Index_variable_identifierContext *index_variable_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Loop_varContext* loop_var();

  class  Subroutine_call_statementContext : public antlr4::ParserRuleContext {
  public:
    Subroutine_call_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subroutine_callContext *subroutine_call();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *VOID();
    antlr4::tree::TerminalNode *AP();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subroutine_call_statementContext* subroutine_call_statement();

  class  Assertion_itemContext : public antlr4::ParserRuleContext {
  public:
    Assertion_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Concurrent_assertion_itemContext *concurrent_assertion_item();
    Deferred_immediate_assertion_itemContext *deferred_immediate_assertion_item();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assertion_itemContext* assertion_item();

  class  Deferred_immediate_assertion_itemContext : public antlr4::ParserRuleContext {
  public:
    Deferred_immediate_assertion_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Deferred_immediate_assertion_statementContext *deferred_immediate_assertion_statement();
    Block_labelContext *block_label();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Deferred_immediate_assertion_itemContext* deferred_immediate_assertion_item();

  class  Procedural_assertion_statementContext : public antlr4::ParserRuleContext {
  public:
    Procedural_assertion_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Concurrent_assertion_statementContext *concurrent_assertion_statement();
    Immediate_assertion_statementContext *immediate_assertion_statement();
    Checker_instantiationContext *checker_instantiation();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedural_assertion_statementContext* procedural_assertion_statement();

  class  Immediate_assertion_statementContext : public antlr4::ParserRuleContext {
  public:
    Immediate_assertion_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_immediate_assertion_statementContext *simple_immediate_assertion_statement();
    Deferred_immediate_assertion_statementContext *deferred_immediate_assertion_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Immediate_assertion_statementContext* immediate_assertion_statement();

  class  Simple_immediate_assertion_statementContext : public antlr4::ParserRuleContext {
  public:
    Simple_immediate_assertion_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_immediate_assert_statementContext *simple_immediate_assert_statement();
    Simple_immediate_assume_statementContext *simple_immediate_assume_statement();
    Simple_immediate_cover_statementContext *simple_immediate_cover_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_immediate_assertion_statementContext* simple_immediate_assertion_statement();

  class  Simple_immediate_assert_statementContext : public antlr4::ParserRuleContext {
  public:
    Simple_immediate_assert_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSERT();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    Action_blockContext *action_block();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_immediate_assert_statementContext* simple_immediate_assert_statement();

  class  Simple_immediate_assume_statementContext : public antlr4::ParserRuleContext {
  public:
    Simple_immediate_assume_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSUME();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    Action_blockContext *action_block();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_immediate_assume_statementContext* simple_immediate_assume_statement();

  class  Simple_immediate_cover_statementContext : public antlr4::ParserRuleContext {
  public:
    Simple_immediate_cover_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COVER();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    Statement_or_nullContext *statement_or_null();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_immediate_cover_statementContext* simple_immediate_cover_statement();

  class  Deferred_immediate_assertion_statementContext : public antlr4::ParserRuleContext {
  public:
    Deferred_immediate_assertion_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Deferred_immediate_assert_statementContext *deferred_immediate_assert_statement();
    Deferred_immediate_assume_statementContext *deferred_immediate_assume_statement();
    Deferred_immediate_cover_statementContext *deferred_immediate_cover_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Deferred_immediate_assertion_statementContext* deferred_immediate_assertion_statement();

  class  Deferred_immediate_assert_statementContext : public antlr4::ParserRuleContext {
  public:
    Deferred_immediate_assert_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSERT();
    antlr4::tree::TerminalNode *HA();
    Unsigned_numberContext *unsigned_number();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    Action_blockContext *action_block();
    antlr4::tree::TerminalNode *FINAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Deferred_immediate_assert_statementContext* deferred_immediate_assert_statement();

  class  Deferred_immediate_assume_statementContext : public antlr4::ParserRuleContext {
  public:
    Deferred_immediate_assume_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSUME();
    antlr4::tree::TerminalNode *HA();
    Unsigned_numberContext *unsigned_number();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    Action_blockContext *action_block();
    antlr4::tree::TerminalNode *FINAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Deferred_immediate_assume_statementContext* deferred_immediate_assume_statement();

  class  Deferred_immediate_cover_statementContext : public antlr4::ParserRuleContext {
  public:
    Deferred_immediate_cover_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COVER();
    antlr4::tree::TerminalNode *HA();
    Unsigned_numberContext *unsigned_number();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    Statement_or_nullContext *statement_or_null();
    antlr4::tree::TerminalNode *FINAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Deferred_immediate_cover_statementContext* deferred_immediate_cover_statement();

  class  Clocking_declarationContext : public antlr4::ParserRuleContext {
  public:
    Clocking_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLOCKING();
    Clocking_eventContext *clocking_event();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *ENDCLOCKING();
    antlr4::tree::TerminalNode *DEFAULT();
    Clocking_identifierContext *clocking_identifier();
    std::vector<Clocking_itemContext *> clocking_item();
    Clocking_itemContext* clocking_item(size_t i);
    Clocking_nameContext *clocking_name();
    antlr4::tree::TerminalNode *GLOBAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Clocking_declarationContext* clocking_declaration();

  class  Clocking_nameContext : public antlr4::ParserRuleContext {
  public:
    Clocking_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CL();
    Clocking_identifierContext *clocking_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Clocking_nameContext* clocking_name();

  class  Clocking_eventContext : public antlr4::ParserRuleContext {
  public:
    Clocking_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LP();
    Event_expressionContext *event_expression();
    antlr4::tree::TerminalNode *RP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Clocking_eventContext* clocking_event();

  class  Clocking_itemContext : public antlr4::ParserRuleContext {
  public:
    Clocking_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT();
    Default_skewContext *default_skew();
    antlr4::tree::TerminalNode *SC();
    Clocking_directionContext *clocking_direction();
    List_of_clocking_decl_assignContext *list_of_clocking_decl_assign();
    Assertion_item_declarationContext *assertion_item_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Clocking_itemContext* clocking_item();

  class  Default_skewContext : public antlr4::ParserRuleContext {
  public:
    Default_skewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INPUT();
    std::vector<Clocking_skewContext *> clocking_skew();
    Clocking_skewContext* clocking_skew(size_t i);
    antlr4::tree::TerminalNode *OUTPUT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Default_skewContext* default_skew();

  class  Clocking_directionContext : public antlr4::ParserRuleContext {
  public:
    Clocking_directionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INPUT();
    std::vector<Clocking_skewContext *> clocking_skew();
    Clocking_skewContext* clocking_skew(size_t i);
    antlr4::tree::TerminalNode *OUTPUT();
    antlr4::tree::TerminalNode *INOUT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Clocking_directionContext* clocking_direction();

  class  List_of_clocking_decl_assignContext : public antlr4::ParserRuleContext {
  public:
    List_of_clocking_decl_assignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Clocking_decl_assignContext *> clocking_decl_assign();
    Clocking_decl_assignContext* clocking_decl_assign(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_clocking_decl_assignContext* list_of_clocking_decl_assign();

  class  Clocking_decl_assignContext : public antlr4::ParserRuleContext {
  public:
    Clocking_decl_assignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Signal_identifierContext *signal_identifier();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Clocking_decl_assignContext* clocking_decl_assign();

  class  Clocking_skewContext : public antlr4::ParserRuleContext {
  public:
    Clocking_skewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Edge_identifierContext *edge_identifier();
    Delay_controlContext *delay_control();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Clocking_skewContext* clocking_skew();

  class  Clocking_driveContext : public antlr4::ParserRuleContext {
  public:
    Clocking_driveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Clockvar_expressionContext *clockvar_expression();
    antlr4::tree::TerminalNode *LTEQ();
    Cycle_delayContext *cycle_delay();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Clocking_driveContext* clocking_drive();

  class  Cycle_delayContext : public antlr4::ParserRuleContext {
  public:
    Cycle_delayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HAHA();
    Integral_numberContext *integral_number();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cycle_delayContext* cycle_delay();

  class  ClockvarContext : public antlr4::ParserRuleContext {
  public:
    ClockvarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClockvarContext* clockvar();

  class  Clockvar_expressionContext : public antlr4::ParserRuleContext {
  public:
    Clockvar_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClockvarContext *clockvar();
    Select_Context *select_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Clockvar_expressionContext* clockvar_expression();

  class  Randsequence_statementContext : public antlr4::ParserRuleContext {
  public:
    Randsequence_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RANDSEQUENCE();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *ENDSEQUENCE();
    Production_identifierContext *production_identifier();
    std::vector<ProductionContext *> production();
    ProductionContext* production(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Randsequence_statementContext* randsequence_statement();

  class  ProductionContext : public antlr4::ParserRuleContext {
  public:
    ProductionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Production_identifierContext *production_identifier();
    antlr4::tree::TerminalNode *CL();
    std::vector<Rs_ruleContext *> rs_rule();
    Rs_ruleContext* rs_rule(size_t i);
    antlr4::tree::TerminalNode *SC();
    Data_type_or_voidContext *data_type_or_void();
    Port_listContext *port_list();
    std::vector<antlr4::tree::TerminalNode *> VL();
    antlr4::tree::TerminalNode* VL(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProductionContext* production();

  class  Rs_ruleContext : public antlr4::ParserRuleContext {
  public:
    Rs_ruleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Rs_production_listContext *rs_production_list();
    Weight_specContext *weight_spec();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rs_ruleContext* rs_rule();

  class  Weight_specContext : public antlr4::ParserRuleContext {
  public:
    Weight_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLEQ();
    Weight_specificationContext *weight_specification();
    Rs_code_blockContext *rs_code_block();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Weight_specContext* weight_spec();

  class  Rs_production_listContext : public antlr4::ParserRuleContext {
  public:
    Rs_production_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Rs_prodContext *> rs_prod();
    Rs_prodContext* rs_prod(size_t i);
    antlr4::tree::TerminalNode *RAND();
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    std::vector<Production_itemContext *> production_item();
    Production_itemContext* production_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rs_production_listContext* rs_production_list();

  class  Weight_specificationContext : public antlr4::ParserRuleContext {
  public:
    Weight_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integral_numberContext *integral_number();
    Ps_identifierContext *ps_identifier();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Weight_specificationContext* weight_specification();

  class  Rs_code_blockContext : public antlr4::ParserRuleContext {
  public:
    Rs_code_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LC();
    antlr4::tree::TerminalNode *RC();
    std::vector<Data_declarationContext *> data_declaration();
    Data_declarationContext* data_declaration(size_t i);
    std::vector<Statement_or_nullContext *> statement_or_null();
    Statement_or_nullContext* statement_or_null(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rs_code_blockContext* rs_code_block();

  class  Rs_prodContext : public antlr4::ParserRuleContext {
  public:
    Rs_prodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Production_itemContext *production_item();
    Rs_code_blockContext *rs_code_block();
    Rs_if_elseContext *rs_if_else();
    Rs_repeatContext *rs_repeat();
    Rs_caseContext *rs_case();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rs_prodContext* rs_prod();

  class  Production_itemContext : public antlr4::ParserRuleContext {
  public:
    Production_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Production_identifierContext *production_identifier();
    Arg_listContext *arg_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Production_itemContext* production_item();

  class  Rs_if_elseContext : public antlr4::ParserRuleContext {
  public:
    Rs_if_elseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    std::vector<Production_itemContext *> production_item();
    Production_itemContext* production_item(size_t i);
    antlr4::tree::TerminalNode *ELSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rs_if_elseContext* rs_if_else();

  class  Rs_repeatContext : public antlr4::ParserRuleContext {
  public:
    Rs_repeatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPEAT();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    Production_itemContext *production_item();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rs_repeatContext* rs_repeat();

  class  Rs_caseContext : public antlr4::ParserRuleContext {
  public:
    Rs_caseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *LP();
    Case_expressionContext *case_expression();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *ENDCASE();
    std::vector<Rs_case_itemContext *> rs_case_item();
    Rs_case_itemContext* rs_case_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rs_caseContext* rs_case();

  class  Rs_case_itemContext : public antlr4::ParserRuleContext {
  public:
    Rs_case_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Case_item_expressionContext *> case_item_expression();
    Case_item_expressionContext* case_item_expression(size_t i);
    antlr4::tree::TerminalNode *CL();
    Production_itemContext *production_item();
    antlr4::tree::TerminalNode *SC();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    antlr4::tree::TerminalNode *DEFAULT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rs_case_itemContext* rs_case_item();

  class  Specify_blockContext : public antlr4::ParserRuleContext {
  public:
    Specify_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SPECIFY();
    antlr4::tree::TerminalNode *ENDSPECIFY();
    std::vector<Specify_itemContext *> specify_item();
    Specify_itemContext* specify_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Specify_output_terminal_descriptorContext* specify_output_terminal_descriptor();

  class  Input_identifierContext : public antlr4::ParserRuleContext {
  public:
    Input_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_identifierContext *port_identifier();
    Interface_identifierContext *interface_identifier();
    antlr4::tree::TerminalNode *DT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Input_identifierContext* input_identifier();

  class  Output_identifierContext : public antlr4::ParserRuleContext {
  public:
    Output_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_identifierContext *port_identifier();
    Interface_identifierContext *interface_identifier();
    antlr4::tree::TerminalNode *DT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Output_identifierContext* output_identifier();

  class  Path_delay_valueContext : public antlr4::ParserRuleContext {
  public:
    Path_delay_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_path_delay_expressionsContext *list_of_path_delay_expressions();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_path_delay_expressionsContext* list_of_path_delay_expressions();

  class  T_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    T_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  T_path_delay_expressionContext* t_path_delay_expression();

  class  Trise_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Trise_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trise_path_delay_expressionContext* trise_path_delay_expression();

  class  Tfall_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Tfall_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tfall_path_delay_expressionContext* tfall_path_delay_expression();

  class  Tz_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Tz_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tz_path_delay_expressionContext* tz_path_delay_expression();

  class  T01_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    T01_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  T01_path_delay_expressionContext* t01_path_delay_expression();

  class  T10_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    T10_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  T10_path_delay_expressionContext* t10_path_delay_expression();

  class  T0z_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    T0z_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  T0z_path_delay_expressionContext* t0z_path_delay_expression();

  class  Tz1_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Tz1_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tz1_path_delay_expressionContext* tz1_path_delay_expression();

  class  T1z_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    T1z_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  T1z_path_delay_expressionContext* t1z_path_delay_expression();

  class  Tz0_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Tz0_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tz0_path_delay_expressionContext* tz0_path_delay_expression();

  class  T0x_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    T0x_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  T0x_path_delay_expressionContext* t0x_path_delay_expression();

  class  Tx1_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Tx1_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tx1_path_delay_expressionContext* tx1_path_delay_expression();

  class  T1x_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    T1x_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  T1x_path_delay_expressionContext* t1x_path_delay_expression();

  class  Tx0_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Tx0_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tx0_path_delay_expressionContext* tx0_path_delay_expression();

  class  Txz_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Txz_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Txz_path_delay_expressionContext* txz_path_delay_expression();

  class  Tzx_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Tzx_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tzx_path_delay_expressionContext* tzx_path_delay_expression();

  class  Path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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
    std::vector<Polarity_operatorContext *> polarity_operator();
    Polarity_operatorContext* polarity_operator(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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
    std::vector<Polarity_operatorContext *> polarity_operator();
    Polarity_operatorContext* polarity_operator(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Full_edge_sensitive_path_descriptionContext* full_edge_sensitive_path_description();

  class  Data_source_expressionContext : public antlr4::ParserRuleContext {
  public:
    Data_source_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_source_expressionContext* data_source_expression();

  class  Edge_identifierContext : public antlr4::ParserRuleContext {
  public:
    Edge_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POSEDGE();
    antlr4::tree::TerminalNode *NEGEDGE();
    antlr4::tree::TerminalNode *EDGE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  State_dependent_path_declarationContext* state_dependent_path_declaration();

  class  Polarity_operatorContext : public antlr4::ParserRuleContext {
  public:
    Polarity_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PL();
    antlr4::tree::TerminalNode *MI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Setup_timing_checkContext* setup_timing_check();

  class  Notifier_optContext : public antlr4::ParserRuleContext {
  public:
    Notifier_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CO();
    NotifierContext *notifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Setuphold_timing_checkContext* setuphold_timing_check();

  class  Timing_check_optContext : public antlr4::ParserRuleContext {
  public:
    Timing_check_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CO();
    NotifierContext *notifier();
    Timestamp_cond_optContext *timestamp_cond_opt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Timing_check_optContext* timing_check_opt();

  class  Timestamp_cond_optContext : public antlr4::ParserRuleContext {
  public:
    Timestamp_cond_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CO();
    Timestamp_conditionContext *timestamp_condition();
    Timecheck_cond_optContext *timecheck_cond_opt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Timestamp_cond_optContext* timestamp_cond_opt();

  class  Timecheck_cond_optContext : public antlr4::ParserRuleContext {
  public:
    Timecheck_cond_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CO();
    Timecheck_conditionContext *timecheck_condition();
    Delayed_ref_optContext *delayed_ref_opt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Timecheck_cond_optContext* timecheck_cond_opt();

  class  Delayed_ref_optContext : public antlr4::ParserRuleContext {
  public:
    Delayed_ref_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CO();
    Delayed_referenceContext *delayed_reference();
    Delayed_data_optContext *delayed_data_opt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delayed_ref_optContext* delayed_ref_opt();

  class  Delayed_data_optContext : public antlr4::ParserRuleContext {
  public:
    Delayed_data_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CO();
    Delayed_dataContext *delayed_data();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Timeskew_timing_checkContext* timeskew_timing_check();

  class  Skew_timing_check_optContext : public antlr4::ParserRuleContext {
  public:
    Skew_timing_check_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CO();
    NotifierContext *notifier();
    Event_based_flag_optContext *event_based_flag_opt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Skew_timing_check_optContext* skew_timing_check_opt();

  class  Event_based_flag_optContext : public antlr4::ParserRuleContext {
  public:
    Event_based_flag_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CO();
    Event_based_flagContext *event_based_flag();
    Remain_active_flag_optContext *remain_active_flag_opt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_based_flag_optContext* event_based_flag_opt();

  class  Remain_active_flag_optContext : public antlr4::ParserRuleContext {
  public:
    Remain_active_flag_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CO();
    Remain_active_flagContext *remain_active_flag();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Period_timing_checkContext* period_timing_check();

  class  Width_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Width_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DLWIDTH();
    antlr4::tree::TerminalNode *LP();
    Controlled_reference_eventContext *controlled_reference_event();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Timing_check_limitContext *timing_check_limit();
    ThresholdContext *threshold();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SC();
    Notifier_optContext *notifier_opt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Width_timing_checkContext* width_timing_check();

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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nochange_timing_checkContext* nochange_timing_check();

  class  Timecheck_conditionContext : public antlr4::ParserRuleContext {
  public:
    Timecheck_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mintypmax_expressionContext *mintypmax_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Timecheck_conditionContext* timecheck_condition();

  class  Controlled_reference_eventContext : public antlr4::ParserRuleContext {
  public:
    Controlled_reference_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Controlled_timing_check_eventContext *controlled_timing_check_event();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Controlled_reference_eventContext* controlled_reference_event();

  class  Data_eventContext : public antlr4::ParserRuleContext {
  public:
    Data_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Timing_check_eventContext *timing_check_event();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delayed_referenceContext* delayed_reference();

  class  End_edge_offsetContext : public antlr4::ParserRuleContext {
  public:
    End_edge_offsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mintypmax_expressionContext *mintypmax_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  End_edge_offsetContext* end_edge_offset();

  class  Event_based_flagContext : public antlr4::ParserRuleContext {
  public:
    Event_based_flagContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_based_flagContext* event_based_flag();

  class  NotifierContext : public antlr4::ParserRuleContext {
  public:
    NotifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_identifierContext *variable_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NotifierContext* notifier();

  class  Reference_eventContext : public antlr4::ParserRuleContext {
  public:
    Reference_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Timing_check_eventContext *timing_check_event();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reference_eventContext* reference_event();

  class  Remain_active_flagContext : public antlr4::ParserRuleContext {
  public:
    Remain_active_flagContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Remain_active_flagContext* remain_active_flag();

  class  Timestamp_conditionContext : public antlr4::ParserRuleContext {
  public:
    Timestamp_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mintypmax_expressionContext *mintypmax_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Timestamp_conditionContext* timestamp_condition();

  class  Start_edge_offsetContext : public antlr4::ParserRuleContext {
  public:
    Start_edge_offsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mintypmax_expressionContext *mintypmax_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Start_edge_offsetContext* start_edge_offset();

  class  ThresholdContext : public antlr4::ParserRuleContext {
  public:
    ThresholdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThresholdContext* threshold();

  class  Timing_check_limitContext : public antlr4::ParserRuleContext {
  public:
    Timing_check_limitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Controlled_timing_check_eventContext* controlled_timing_check_event();

  class  Timing_check_event_controlContext : public antlr4::ParserRuleContext {
  public:
    Timing_check_event_controlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POSEDGE();
    antlr4::tree::TerminalNode *NEGEDGE();
    antlr4::tree::TerminalNode *EDGE();
    Edge_control_specifierContext *edge_control_specifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Timing_check_event_controlContext* timing_check_event_control();

  class  Specify_terminal_descriptorContext : public antlr4::ParserRuleContext {
  public:
    Specify_terminal_descriptorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_identifierContext *port_identifier();
    Interface_identifierContext *interface_identifier();
    antlr4::tree::TerminalNode *DT();
    antlr4::tree::TerminalNode *LB();
    Constant_range_expressionContext *constant_range_expression();
    antlr4::tree::TerminalNode *RB();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Edge_control_specifierContext* edge_control_specifier();

  class  Edge_descriptorContext : public antlr4::ParserRuleContext {
  public:
    Edge_descriptorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIMPLE_IDENTIFIER();
    antlr4::tree::TerminalNode *UNSIGNED_NUMBER();
    antlr4::tree::TerminalNode *ZERO_OR_ONE_X_OR_Z();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Edge_descriptorContext* edge_descriptor();

  class  Timing_check_conditionContext : public antlr4::ParserRuleContext {
  public:
    Timing_check_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Scalar_timing_check_conditionContext *scalar_timing_check_condition();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Scalar_timing_check_conditionContext* scalar_timing_check_condition();

  class  Scalar_constantContext : public antlr4::ParserRuleContext {
  public:
    Scalar_constantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Binary_numberContext *binary_number();
    Unsigned_numberContext *unsigned_number();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_path_multiple_concatenationContext* module_path_multiple_concatenation();

  class  Multiple_concatenationContext : public antlr4::ParserRuleContext {
  public:
    Multiple_concatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LC();
    ExpressionContext *expression();
    ConcatenationContext *concatenation();
    antlr4::tree::TerminalNode *RC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multiple_concatenationContext* multiple_concatenation();

  class  Streaming_concatenationContext : public antlr4::ParserRuleContext {
  public:
    Streaming_concatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LC();
    Stream_operatorContext *stream_operator();
    Stream_concatenationContext *stream_concatenation();
    antlr4::tree::TerminalNode *RC();
    Slice_sizeContext *slice_size();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Streaming_concatenationContext* streaming_concatenation();

  class  Stream_operatorContext : public antlr4::ParserRuleContext {
  public:
    Stream_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GTGT();
    antlr4::tree::TerminalNode *LTLT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Stream_operatorContext* stream_operator();

  class  Slice_sizeContext : public antlr4::ParserRuleContext {
  public:
    Slice_sizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_typeContext *simple_type();
    Constant_expressionContext *constant_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Slice_sizeContext* slice_size();

  class  Stream_concatenationContext : public antlr4::ParserRuleContext {
  public:
    Stream_concatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LC();
    std::vector<Stream_expressionContext *> stream_expression();
    Stream_expressionContext* stream_expression(size_t i);
    antlr4::tree::TerminalNode *RC();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Stream_concatenationContext* stream_concatenation();

  class  Stream_expressionContext : public antlr4::ParserRuleContext {
  public:
    Stream_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *LB();
    Array_range_expressionContext *array_range_expression();
    antlr4::tree::TerminalNode *RB();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Stream_expressionContext* stream_expression();

  class  Array_range_expressionContext : public antlr4::ParserRuleContext {
  public:
    Array_range_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *CL();
    antlr4::tree::TerminalNode *PLCL();
    antlr4::tree::TerminalNode *MICL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_range_expressionContext* array_range_expression();

  class  Empty_unpacked_array_concatenationContext : public antlr4::ParserRuleContext {
  public:
    Empty_unpacked_array_concatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LC();
    antlr4::tree::TerminalNode *RC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Empty_unpacked_array_concatenationContext* empty_unpacked_array_concatenation();

  class  System_tf_callContext : public antlr4::ParserRuleContext {
  public:
    System_tf_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    System_tf_identifierContext *system_tf_identifier();
    Arg_listContext *arg_list();
    antlr4::tree::TerminalNode *LP();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    ExpressionContext *expression();
    Clocking_eventContext *clocking_event();
    std::vector<Ordered_argContext *> ordered_arg();
    Ordered_argContext* ordered_arg(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  System_tf_callContext* system_tf_call();

  class  Arg_listContext : public antlr4::ParserRuleContext {
  public:
    Arg_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    List_of_argumentsContext *list_of_arguments();
    antlr4::tree::TerminalNode *RP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Arg_listContext* arg_list();

  class  Subroutine_callContext : public antlr4::ParserRuleContext {
  public:
    Subroutine_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Package_scopeContext *package_scope();
    antlr4::tree::TerminalNode *DLROOT();
    antlr4::tree::TerminalNode *DT();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Arg_listContext *arg_list();
    System_tf_callContext *system_tf_call();
    Method_call_rootContext *method_call_root();
    Array_manipulation_callContext *array_manipulation_call();
    Randomize_callContext *randomize_call();
    antlr4::tree::TerminalNode *STD();
    antlr4::tree::TerminalNode *CLCL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subroutine_callContext* subroutine_call();

  class  List_of_argumentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_argumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Ordered_argContext *> ordered_arg();
    Ordered_argContext* ordered_arg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    std::vector<Named_argContext *> named_arg();
    Named_argContext* named_arg(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_argumentsContext* list_of_arguments();

  class  Ordered_argContext : public antlr4::ParserRuleContext {
  public:
    Ordered_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ordered_argContext* ordered_arg();

  class  Named_argContext : public antlr4::ParserRuleContext {
  public:
    Named_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DT();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Named_argContext* named_arg();

  class  Array_manipulation_callContext : public antlr4::ParserRuleContext {
  public:
    Array_manipulation_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Array_method_nameContext *array_method_name();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Arg_listContext *arg_list();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_manipulation_callContext* array_manipulation_call();

  class  Randomize_callContext : public antlr4::ParserRuleContext {
  public:
    Randomize_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RANDOMIZE();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Rand_listContext *rand_list();
    Rand_withContext *rand_with();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Randomize_callContext* randomize_call();

  class  Rand_listContext : public antlr4::ParserRuleContext {
  public:
    Rand_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    Variable_identifier_listContext *variable_identifier_list();
    antlr4::tree::TerminalNode *NULL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rand_listContext* rand_list();

  class  Rand_withContext : public antlr4::ParserRuleContext {
  public:
    Rand_withContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    Constraint_blockContext *constraint_block();
    Id_listContext *id_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rand_withContext* rand_with();

  class  Id_listContext : public antlr4::ParserRuleContext {
  public:
    Id_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    Identifier_listContext *identifier_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Id_listContext* id_list();

  class  Method_call_rootContext : public antlr4::ParserRuleContext {
  public:
    Method_call_rootContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryContext *primary();
    Implicit_class_handleContext *implicit_class_handle();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Method_call_rootContext* method_call_root();

  class  Array_method_nameContext : public antlr4::ParserRuleContext {
  public:
    Array_method_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Method_identifierContext *method_identifier();
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *XOR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_method_nameContext* array_method_name();

  class  Inc_or_dec_expressionContext : public antlr4::ParserRuleContext {
  public:
    Inc_or_dec_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Inc_or_dec_operatorContext *inc_or_dec_operator();
    Variable_lvalueContext *variable_lvalue();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Inc_or_dec_expressionContext* inc_or_dec_expression();

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
    antlr4::tree::TerminalNode *EQEQQM();
    antlr4::tree::TerminalNode *EMEQQM();
    antlr4::tree::TerminalNode *AM();
    antlr4::tree::TerminalNode *CA();
    antlr4::tree::TerminalNode *CATI();
    antlr4::tree::TerminalNode *TICA();
    antlr4::tree::TerminalNode *VL();
    antlr4::tree::TerminalNode *AMAM();
    antlr4::tree::TerminalNode *VLVL();
    antlr4::tree::TerminalNode *QM();
    antlr4::tree::TerminalNode *CL();
    antlr4::tree::TerminalNode *MIGT();
    antlr4::tree::TerminalNode *LTMIGT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_mintypmax_expressionContext* constant_mintypmax_expression();

  class  Constant_param_expressionContext : public antlr4::ParserRuleContext {
  public:
    Constant_param_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *DL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_param_expressionContext* constant_param_expression();

  class  Param_expressionContext : public antlr4::ParserRuleContext {
  public:
    Param_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mintypmax_expressionContext *mintypmax_expression();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *DL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_expressionContext* param_expression();

  class  Constant_range_expressionContext : public antlr4::ParserRuleContext {
  public:
    Constant_range_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();
    Constant_part_select_rangeContext *constant_part_select_range();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_range_expressionContext* constant_range_expression();

  class  Constant_part_select_rangeContext : public antlr4::ParserRuleContext {
  public:
    Constant_part_select_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_rangeContext *constant_range();
    Constant_indexed_rangeContext *constant_indexed_range();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_part_select_rangeContext* constant_part_select_range();

  class  Constant_rangeContext : public antlr4::ParserRuleContext {
  public:
    Constant_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    antlr4::tree::TerminalNode *CL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_rangeContext* constant_range();

  class  Constant_indexed_rangeContext : public antlr4::ParserRuleContext {
  public:
    Constant_indexed_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    antlr4::tree::TerminalNode *PLCL();
    antlr4::tree::TerminalNode *MICL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_indexed_rangeContext* constant_indexed_range();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryContext *primary();
    antlr4::tree::TerminalNode *LP();
    Operator_assignmentContext *operator_assignment();
    antlr4::tree::TerminalNode *RP();
    Unary_operatorContext *unary_operator();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Inc_or_dec_expressionContext *inc_or_dec_expression();
    Tagged_union_expressionContext *tagged_union_expression();
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
    antlr4::tree::TerminalNode *EQEQ();
    antlr4::tree::TerminalNode *EMEQ();
    antlr4::tree::TerminalNode *EQEQEQ();
    antlr4::tree::TerminalNode *EMEQEQ();
    antlr4::tree::TerminalNode *EQEQQM();
    antlr4::tree::TerminalNode *EMEQQM();
    antlr4::tree::TerminalNode *AM();
    antlr4::tree::TerminalNode *CA();
    antlr4::tree::TerminalNode *CATI();
    antlr4::tree::TerminalNode *TICA();
    antlr4::tree::TerminalNode *VL();
    antlr4::tree::TerminalNode *AMAM();
    antlr4::tree::TerminalNode *VLVL();
    antlr4::tree::TerminalNode *QM();
    antlr4::tree::TerminalNode *CL();
    antlr4::tree::TerminalNode *MATCHES();
    PatternContext *pattern();
    std::vector<antlr4::tree::TerminalNode *> AMAMAM();
    antlr4::tree::TerminalNode* AMAMAM(size_t i);
    std::vector<Expression_or_cond_patternContext *> expression_or_cond_pattern();
    Expression_or_cond_patternContext* expression_or_cond_pattern(size_t i);
    antlr4::tree::TerminalNode *MIGT();
    antlr4::tree::TerminalNode *LTMIGT();
    antlr4::tree::TerminalNode *INSIDE();
    antlr4::tree::TerminalNode *LC();
    Open_range_listContext *open_range_list();
    antlr4::tree::TerminalNode *RC();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LTEQ();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GTEQ();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  Tagged_union_expressionContext : public antlr4::ParserRuleContext {
  public:
    Tagged_union_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TAGGED();
    Member_identifierContext *member_identifier();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tagged_union_expressionContext* tagged_union_expression();

  class  Value_rangeContext : public antlr4::ParserRuleContext {
  public:
    Value_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *LB();
    antlr4::tree::TerminalNode *CL();
    antlr4::tree::TerminalNode *RB();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Value_rangeContext* value_range();

  class  Mintypmax_expressionContext : public antlr4::ParserRuleContext {
  public:
    Mintypmax_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CL();
    antlr4::tree::TerminalNode* CL(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_path_mintypmax_expressionContext* module_path_mintypmax_expression();

  class  Part_select_rangeContext : public antlr4::ParserRuleContext {
  public:
    Part_select_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_rangeContext *constant_range();
    Indexed_rangeContext *indexed_range();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Part_select_rangeContext* part_select_range();

  class  Indexed_rangeContext : public antlr4::ParserRuleContext {
  public:
    Indexed_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *PLCL();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *MICL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Indexed_rangeContext* indexed_range();

  class  Genvar_expressionContext : public antlr4::ParserRuleContext {
  public:
    Genvar_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Genvar_expressionContext* genvar_expression();

  class  Constant_primaryContext : public antlr4::ParserRuleContext {
  public:
    Constant_primaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Primary_literalContext *primary_literal();
    IdentifierContext *identifier();
    Package_or_class_scopeContext *package_or_class_scope();
    Constant_selectContext *constant_select();
    std::vector<Gen_refContext *> gen_ref();
    Gen_refContext* gen_ref(size_t i);
    Constant_concatenationContext *constant_concatenation();
    antlr4::tree::TerminalNode *LB();
    Constant_range_expressionContext *constant_range_expression();
    antlr4::tree::TerminalNode *RB();
    Constant_multiple_concatenationContext *constant_multiple_concatenation();
    Arg_listContext *arg_list();
    Package_scopeContext *package_scope();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    antlr4::tree::TerminalNode *DLROOT();
    antlr4::tree::TerminalNode *DT();
    System_tf_callContext *system_tf_call();
    Method_call_rootContext *method_call_root();
    Array_manipulation_callContext *array_manipulation_call();
    Randomize_callContext *randomize_call();
    antlr4::tree::TerminalNode *STD();
    antlr4::tree::TerminalNode *CLCL();
    antlr4::tree::TerminalNode *LP();
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *AP();
    Constant_expressionContext *constant_expression();
    Simple_typeContext *simple_type();
    SigningContext *signing();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *CONST();
    Constant_assignment_pattern_expressionContext *constant_assignment_pattern_expression();
    Type_referenceContext *type_reference();
    antlr4::tree::TerminalNode *NULL();
    Constant_primaryContext *constant_primary();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_primaryContext* constant_primary();
  Constant_primaryContext* constant_primary(int precedence);
  class  Module_path_primaryContext : public antlr4::ParserRuleContext {
  public:
    Module_path_primaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    Module_path_concatenationContext *module_path_concatenation();
    Module_path_multiple_concatenationContext *module_path_multiple_concatenation();
    IdentifierContext *identifier();
    Package_scopeContext *package_scope();
    antlr4::tree::TerminalNode *DLROOT();
    antlr4::tree::TerminalNode *DT();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Arg_listContext *arg_list();
    System_tf_callContext *system_tf_call();
    Method_call_rootContext *method_call_root();
    Array_manipulation_callContext *array_manipulation_call();
    Randomize_callContext *randomize_call();
    antlr4::tree::TerminalNode *STD();
    antlr4::tree::TerminalNode *CLCL();
    antlr4::tree::TerminalNode *LP();
    Module_path_mintypmax_expressionContext *module_path_mintypmax_expression();
    antlr4::tree::TerminalNode *RP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_path_primaryContext* module_path_primary();

  class  PrimaryContext : public antlr4::ParserRuleContext {
  public:
    PrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Primary_literalContext *primary_literal();
    Hierarchical_identifierContext *hierarchical_identifier();
    Package_or_class_scopeContext *package_or_class_scope();
    Select_Context *select_();
    Implicit_class_handleContext *implicit_class_handle();
    std::vector<antlr4::tree::TerminalNode *> DT();
    antlr4::tree::TerminalNode* DT(size_t i);
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *DLROOT();
    std::vector<Hier_refContext *> hier_ref();
    Hier_refContext* hier_ref(size_t i);
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *CLCL();
    Class_scopeContext *class_scope();
    Empty_unpacked_array_concatenationContext *empty_unpacked_array_concatenation();
    ConcatenationContext *concatenation();
    antlr4::tree::TerminalNode *LB();
    Range_expressionContext *range_expression();
    antlr4::tree::TerminalNode *RB();
    Multiple_concatenationContext *multiple_concatenation();
    Arg_listContext *arg_list();
    Package_scopeContext *package_scope();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    System_tf_callContext *system_tf_call();
    antlr4::tree::TerminalNode *SUPER();
    Array_manipulation_callContext *array_manipulation_call();
    Randomize_callContext *randomize_call();
    antlr4::tree::TerminalNode *THIS();
    antlr4::tree::TerminalNode *STD();
    antlr4::tree::TerminalNode *LP();
    Mintypmax_expressionContext *mintypmax_expression();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *AP();
    ExpressionContext *expression();
    Integer_typeContext *integer_type();
    Non_integer_typeContext *non_integer_type();
    SigningContext *signing();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *CONST();
    Assignment_pattern_expressionContext *assignment_pattern_expression();
    Streaming_concatenationContext *streaming_concatenation();
    Sequence_method_callContext *sequence_method_call();
    antlr4::tree::TerminalNode *DL();
    antlr4::tree::TerminalNode *NULL();
    PrimaryContext *primary();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryContext* primary();
  PrimaryContext* primary(int precedence);
  class  Range_expressionContext : public antlr4::ParserRuleContext {
  public:
    Range_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Part_select_rangeContext *part_select_range();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Range_expressionContext* range_expression();

  class  Primary_literalContext : public antlr4::ParserRuleContext {
  public:
    Primary_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    Time_literalContext *time_literal();
    Unbased_unsized_literalContext *unbased_unsized_literal();
    String_literalContext *string_literal();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Primary_literalContext* primary_literal();

  class  Time_literalContext : public antlr4::ParserRuleContext {
  public:
    Time_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TIME_LITERAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Time_literalContext* time_literal();

  class  Implicit_class_handleContext : public antlr4::ParserRuleContext {
  public:
    Implicit_class_handleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THIS();
    antlr4::tree::TerminalNode *DT();
    antlr4::tree::TerminalNode *SUPER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Implicit_class_handleContext* implicit_class_handle();

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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bit_selectContext* bit_select();

  class  Select_Context : public antlr4::ParserRuleContext {
  public:
    Select_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LB();
    Part_select_rangeContext *part_select_range();
    antlr4::tree::TerminalNode *RB();
    Bit_selectContext *bit_select();
    std::vector<Member_selectContext *> member_select();
    Member_selectContext* member_select(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_Context* select_();

  class  Nonrange_selectContext : public antlr4::ParserRuleContext {
  public:
    Nonrange_selectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Bit_selectContext *bit_select();
    std::vector<Member_selectContext *> member_select();
    Member_selectContext* member_select(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nonrange_selectContext* nonrange_select();

  class  Member_selectContext : public antlr4::ParserRuleContext {
  public:
    Member_selectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DT();
    Member_identifierContext *member_identifier();
    Bit_selectContext *bit_select();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Member_selectContext* member_select();

  class  Constant_bit_selectContext : public antlr4::ParserRuleContext {
  public:
    Constant_bit_selectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LB();
    antlr4::tree::TerminalNode* LB(size_t i);
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RB();
    antlr4::tree::TerminalNode* RB(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_bit_selectContext* constant_bit_select();

  class  Constant_selectContext : public antlr4::ParserRuleContext {
  public:
    Constant_selectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LB();
    Constant_part_select_rangeContext *constant_part_select_range();
    antlr4::tree::TerminalNode *RB();
    Constant_bit_selectContext *constant_bit_select();
    std::vector<Const_member_selectContext *> const_member_select();
    Const_member_selectContext* const_member_select(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_selectContext* constant_select();

  class  Const_member_selectContext : public antlr4::ParserRuleContext {
  public:
    Const_member_selectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DT();
    Member_identifierContext *member_identifier();
    Constant_bit_selectContext *constant_bit_select();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Const_member_selectContext* const_member_select();

  class  Net_lvalueContext : public antlr4::ParserRuleContext {
  public:
    Net_lvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ps_or_hierarchical_identifierContext *ps_or_hierarchical_identifier();
    Constant_selectContext *constant_select();
    antlr4::tree::TerminalNode *LC();
    std::vector<Net_lvalueContext *> net_lvalue();
    Net_lvalueContext* net_lvalue(size_t i);
    antlr4::tree::TerminalNode *RC();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Assignment_pattern_net_lvalueContext *assignment_pattern_net_lvalue();
    Assignment_pattern_expression_typeContext *assignment_pattern_expression_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_lvalueContext* net_lvalue();

  class  Variable_lvalueContext : public antlr4::ParserRuleContext {
  public:
    Variable_lvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();
    Implicit_class_handleContext *implicit_class_handle();
    antlr4::tree::TerminalNode *DT();
    Package_scopeContext *package_scope();
    Select_Context *select_();
    antlr4::tree::TerminalNode *LC();
    std::vector<Variable_lvalueContext *> variable_lvalue();
    Variable_lvalueContext* variable_lvalue(size_t i);
    antlr4::tree::TerminalNode *RC();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    Assignment_pattern_variable_lvalueContext *assignment_pattern_variable_lvalue();
    Assignment_pattern_expression_typeContext *assignment_pattern_expression_type();
    Streaming_concatenationContext *streaming_concatenation();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_lvalueContext* variable_lvalue();

  class  Nonrange_variable_lvalueContext : public antlr4::ParserRuleContext {
  public:
    Nonrange_variable_lvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();
    Implicit_class_handleContext *implicit_class_handle();
    antlr4::tree::TerminalNode *DT();
    Package_scopeContext *package_scope();
    Nonrange_selectContext *nonrange_select();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nonrange_variable_lvalueContext* nonrange_variable_lvalue();

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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unary_operatorContext* unary_operator();

  class  Inc_or_dec_operatorContext : public antlr4::ParserRuleContext {
  public:
    Inc_or_dec_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLPL();
    antlr4::tree::TerminalNode *MIMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Inc_or_dec_operatorContext* inc_or_dec_operator();

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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unary_module_path_operatorContext* unary_module_path_operator();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integral_numberContext *integral_number();
    Real_numberContext *real_number();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  Integral_numberContext : public antlr4::ParserRuleContext {
  public:
    Integral_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Decimal_numberContext *decimal_number();
    Octal_numberContext *octal_number();
    Binary_numberContext *binary_number();
    Hex_numberContext *hex_number();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Integral_numberContext* integral_number();

  class  Decimal_numberContext : public antlr4::ParserRuleContext {
  public:
    Decimal_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unsigned_numberContext *unsigned_number();
    Decimal_baseContext *decimal_base();
    Decimal_valueContext *decimal_value();
    SizeContext *size();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Decimal_numberContext* decimal_number();

  class  Binary_numberContext : public antlr4::ParserRuleContext {
  public:
    Binary_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Binary_baseContext *binary_base();
    Binary_valueContext *binary_value();
    SizeContext *size();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_numberContext* binary_number();

  class  Octal_numberContext : public antlr4::ParserRuleContext {
  public:
    Octal_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Octal_baseContext *octal_base();
    Octal_valueContext *octal_value();
    SizeContext *size();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Octal_numberContext* octal_number();

  class  Hex_numberContext : public antlr4::ParserRuleContext {
  public:
    Hex_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hex_baseContext *hex_base();
    Hex_valueContext *hex_value();
    SizeContext *size();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hex_numberContext* hex_number();

  class  SizeContext : public antlr4::ParserRuleContext {
  public:
    SizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNSIGNED_NUMBER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SizeContext* size();

  class  Real_numberContext : public antlr4::ParserRuleContext {
  public:
    Real_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fixed_point_numberContext *fixed_point_number();
    Exponential_numberContext *exponential_number();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Real_numberContext* real_number();

  class  Fixed_point_numberContext : public antlr4::ParserRuleContext {
  public:
    Fixed_point_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FIXED_POINT_NUMBER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fixed_point_numberContext* fixed_point_number();

  class  Exponential_numberContext : public antlr4::ParserRuleContext {
  public:
    Exponential_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXPONENTIAL_NUMBER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Exponential_numberContext* exponential_number();

  class  Unsigned_numberContext : public antlr4::ParserRuleContext {
  public:
    Unsigned_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNSIGNED_NUMBER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unsigned_numberContext* unsigned_number();

  class  Decimal_valueContext : public antlr4::ParserRuleContext {
  public:
    Decimal_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNSIGNED_NUMBER();
    antlr4::tree::TerminalNode *X_OR_Z_UNDERSCORE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Decimal_valueContext* decimal_value();

  class  Binary_valueContext : public antlr4::ParserRuleContext {
  public:
    Binary_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINARY_VALUE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_valueContext* binary_value();

  class  Octal_valueContext : public antlr4::ParserRuleContext {
  public:
    Octal_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OCTAL_VALUE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Octal_valueContext* octal_value();

  class  Hex_valueContext : public antlr4::ParserRuleContext {
  public:
    Hex_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HEX_VALUE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hex_valueContext* hex_value();

  class  Decimal_baseContext : public antlr4::ParserRuleContext {
  public:
    Decimal_baseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL_BASE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Decimal_baseContext* decimal_base();

  class  Binary_baseContext : public antlr4::ParserRuleContext {
  public:
    Binary_baseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINARY_BASE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_baseContext* binary_base();

  class  Octal_baseContext : public antlr4::ParserRuleContext {
  public:
    Octal_baseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OCTAL_BASE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Octal_baseContext* octal_base();

  class  Hex_baseContext : public antlr4::ParserRuleContext {
  public:
    Hex_baseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HEX_BASE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hex_baseContext* hex_base();

  class  Unbased_unsized_literalContext : public antlr4::ParserRuleContext {
  public:
    Unbased_unsized_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNBASED_UNSIZED_LITERAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unbased_unsized_literalContext* unbased_unsized_literal();

  class  String_literalContext : public antlr4::ParserRuleContext {
  public:
    String_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_LITERAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  String_literalContext* string_literal();

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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attribute_instanceContext* attribute_instance();

  class  Attr_specContext : public antlr4::ParserRuleContext {
  public:
    Attr_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Attr_nameContext *attr_name();
    antlr4::tree::TerminalNode *EQ();
    Constant_expressionContext *constant_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attr_specContext* attr_spec();

  class  Attr_nameContext : public antlr4::ParserRuleContext {
  public:
    Attr_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attr_nameContext* attr_name();

  class  Block_identifierContext : public antlr4::ParserRuleContext {
  public:
    Block_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Block_identifierContext* block_identifier();

  class  Bin_identifierContext : public antlr4::ParserRuleContext {
  public:
    Bin_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bin_identifierContext* bin_identifier();

  class  C_identifierContext : public antlr4::ParserRuleContext {
  public:
    C_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIMPLE_IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  C_identifierContext* c_identifier();

  class  Cell_identifierContext : public antlr4::ParserRuleContext {
  public:
    Cell_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cell_identifierContext* cell_identifier();

  class  Checker_identifierContext : public antlr4::ParserRuleContext {
  public:
    Checker_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Checker_identifierContext* checker_identifier();

  class  Class_identifierContext : public antlr4::ParserRuleContext {
  public:
    Class_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_identifierContext* class_identifier();

  class  Class_variable_identifierContext : public antlr4::ParserRuleContext {
  public:
    Class_variable_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_variable_identifierContext* class_variable_identifier();

  class  Clocking_identifierContext : public antlr4::ParserRuleContext {
  public:
    Clocking_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Clocking_identifierContext* clocking_identifier();

  class  Config_identifierContext : public antlr4::ParserRuleContext {
  public:
    Config_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Config_identifierContext* config_identifier();

  class  Const_identifierContext : public antlr4::ParserRuleContext {
  public:
    Const_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Const_identifierContext* const_identifier();

  class  Constraint_identifierContext : public antlr4::ParserRuleContext {
  public:
    Constraint_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_identifierContext* constraint_identifier();

  class  Covergroup_identifierContext : public antlr4::ParserRuleContext {
  public:
    Covergroup_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Covergroup_identifierContext* covergroup_identifier();

  class  Cover_point_identifierContext : public antlr4::ParserRuleContext {
  public:
    Cover_point_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cover_point_identifierContext* cover_point_identifier();

  class  Cross_identifierContext : public antlr4::ParserRuleContext {
  public:
    Cross_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cross_identifierContext* cross_identifier();

  class  Dynamic_array_variable_identifierContext : public antlr4::ParserRuleContext {
  public:
    Dynamic_array_variable_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dynamic_array_variable_identifierContext* dynamic_array_variable_identifier();

  class  Enum_identifierContext : public antlr4::ParserRuleContext {
  public:
    Enum_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enum_identifierContext* enum_identifier();

  class  Escaped_identifierContext : public antlr4::ParserRuleContext {
  public:
    Escaped_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ESCAPED_IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Escaped_identifierContext* escaped_identifier();

  class  Formal_port_identifierContext : public antlr4::ParserRuleContext {
  public:
    Formal_port_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Formal_port_identifierContext* formal_port_identifier();

  class  Function_identifierContext : public antlr4::ParserRuleContext {
  public:
    Function_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_identifierContext* function_identifier();

  class  Generate_block_identifierContext : public antlr4::ParserRuleContext {
  public:
    Generate_block_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_block_identifierContext* generate_block_identifier();

  class  Genvar_identifierContext : public antlr4::ParserRuleContext {
  public:
    Genvar_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Genvar_identifierContext* genvar_identifier();

  class  Hierarchical_identifierContext : public antlr4::ParserRuleContext {
  public:
    Hierarchical_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *DLROOT();
    antlr4::tree::TerminalNode *DT();
    std::vector<Hier_refContext *> hier_ref();
    Hier_refContext* hier_ref(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hierarchical_identifierContext* hierarchical_identifier();

  class  Hier_refContext : public antlr4::ParserRuleContext {
  public:
    Hier_refContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *DT();
    Constant_bit_selectContext *constant_bit_select();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hier_refContext* hier_ref();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_identifierContext *simple_identifier();
    Escaped_identifierContext *escaped_identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();

  class  Index_variable_identifierContext : public antlr4::ParserRuleContext {
  public:
    Index_variable_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_variable_identifierContext* index_variable_identifier();

  class  Interface_identifierContext : public antlr4::ParserRuleContext {
  public:
    Interface_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_identifierContext* interface_identifier();

  class  Interface_instance_identifierContext : public antlr4::ParserRuleContext {
  public:
    Interface_instance_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_instance_identifierContext* interface_instance_identifier();

  class  Input_port_identifierContext : public antlr4::ParserRuleContext {
  public:
    Input_port_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Input_port_identifierContext* input_port_identifier();

  class  Instance_identifierContext : public antlr4::ParserRuleContext {
  public:
    Instance_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Instance_identifierContext* instance_identifier();

  class  Library_identifierContext : public antlr4::ParserRuleContext {
  public:
    Library_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Library_identifierContext* library_identifier();

  class  Member_identifierContext : public antlr4::ParserRuleContext {
  public:
    Member_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Member_identifierContext* member_identifier();

  class  Method_identifierContext : public antlr4::ParserRuleContext {
  public:
    Method_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Method_identifierContext* method_identifier();

  class  Modport_identifierContext : public antlr4::ParserRuleContext {
  public:
    Modport_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Modport_identifierContext* modport_identifier();

  class  Module_identifierContext : public antlr4::ParserRuleContext {
  public:
    Module_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_identifierContext* module_identifier();

  class  Net_identifierContext : public antlr4::ParserRuleContext {
  public:
    Net_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_identifierContext* net_identifier();

  class  Net_type_identifierContext : public antlr4::ParserRuleContext {
  public:
    Net_type_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_type_identifierContext* net_type_identifier();

  class  Output_port_identifierContext : public antlr4::ParserRuleContext {
  public:
    Output_port_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Output_port_identifierContext* output_port_identifier();

  class  Package_identifierContext : public antlr4::ParserRuleContext {
  public:
    Package_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_identifierContext* package_identifier();

  class  Package_scopeContext : public antlr4::ParserRuleContext {
  public:
    Package_scopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Package_identifierContext *package_identifier();
    antlr4::tree::TerminalNode *CLCL();
    antlr4::tree::TerminalNode *DLUNIT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_scopeContext* package_scope();

  class  Parameter_identifierContext : public antlr4::ParserRuleContext {
  public:
    Parameter_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_identifierContext* parameter_identifier();

  class  Port_identifierContext : public antlr4::ParserRuleContext {
  public:
    Port_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Port_identifierContext* port_identifier();

  class  Production_identifierContext : public antlr4::ParserRuleContext {
  public:
    Production_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Production_identifierContext* production_identifier();

  class  Program_identifierContext : public antlr4::ParserRuleContext {
  public:
    Program_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Program_identifierContext* program_identifier();

  class  Property_identifierContext : public antlr4::ParserRuleContext {
  public:
    Property_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Property_identifierContext* property_identifier();

  class  Ps_identifierContext : public antlr4::ParserRuleContext {
  public:
    Ps_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Package_scopeContext *package_scope();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ps_identifierContext* ps_identifier();

  class  Ps_or_hierarchical_array_identifierContext : public antlr4::ParserRuleContext {
  public:
    Ps_or_hierarchical_array_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();
    Implicit_class_handleContext *implicit_class_handle();
    antlr4::tree::TerminalNode *DT();
    Package_or_class_scopeContext *package_or_class_scope();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ps_or_hierarchical_array_identifierContext* ps_or_hierarchical_array_identifier();

  class  Ps_or_hierarchical_identifierContext : public antlr4::ParserRuleContext {
  public:
    Ps_or_hierarchical_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Package_scopeContext *package_scope();
    std::vector<Hier_refContext *> hier_ref();
    Hier_refContext* hier_ref(size_t i);
    antlr4::tree::TerminalNode *DLROOT();
    antlr4::tree::TerminalNode *DT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ps_or_hierarchical_identifierContext* ps_or_hierarchical_identifier();

  class  Ps_type_or_parameter_identifierContext : public antlr4::ParserRuleContext {
  public:
    Ps_type_or_parameter_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *CLCL();
    Package_or_class_scopeContext *package_or_class_scope();
    std::vector<Gen_refContext *> gen_ref();
    Gen_refContext* gen_ref(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ps_type_or_parameter_identifierContext* ps_type_or_parameter_identifier();

  class  Gen_refContext : public antlr4::ParserRuleContext {
  public:
    Gen_refContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Generate_block_identifierContext *generate_block_identifier();
    antlr4::tree::TerminalNode *DT();
    antlr4::tree::TerminalNode *LB();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *RB();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Gen_refContext* gen_ref();

  class  Sequence_identifierContext : public antlr4::ParserRuleContext {
  public:
    Sequence_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_identifierContext* sequence_identifier();

  class  Signal_identifierContext : public antlr4::ParserRuleContext {
  public:
    Signal_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Signal_identifierContext* signal_identifier();

  class  Simple_identifierContext : public antlr4::ParserRuleContext {
  public:
    Simple_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIMPLE_IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_identifierContext* simple_identifier();

  class  Specparam_identifierContext : public antlr4::ParserRuleContext {
  public:
    Specparam_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Specparam_identifierContext* specparam_identifier();

  class  System_tf_identifierContext : public antlr4::ParserRuleContext {
  public:
    System_tf_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SYSTEM_TF_IDENTIFIER();
    antlr4::tree::TerminalNode *DLERROR();
    antlr4::tree::TerminalNode *DLFATAL();
    antlr4::tree::TerminalNode *DLINFO();
    antlr4::tree::TerminalNode *DLWARNING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  System_tf_identifierContext* system_tf_identifier();

  class  Task_identifierContext : public antlr4::ParserRuleContext {
  public:
    Task_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Task_identifierContext* task_identifier();

  class  Tf_identifierContext : public antlr4::ParserRuleContext {
  public:
    Tf_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tf_identifierContext* tf_identifier();

  class  Terminal_identifierContext : public antlr4::ParserRuleContext {
  public:
    Terminal_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Terminal_identifierContext* terminal_identifier();

  class  Topmodule_identifierContext : public antlr4::ParserRuleContext {
  public:
    Topmodule_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Topmodule_identifierContext* topmodule_identifier();

  class  Type_identifierContext : public antlr4::ParserRuleContext {
  public:
    Type_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_identifierContext* type_identifier();

  class  Udp_identifierContext : public antlr4::ParserRuleContext {
  public:
    Udp_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_identifierContext* udp_identifier();

  class  Variable_identifierContext : public antlr4::ParserRuleContext {
  public:
    Variable_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_identifierContext* variable_identifier();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool property_exprSempred(Property_exprContext *_localctx, size_t predicateIndex);
  bool sequence_exprSempred(Sequence_exprContext *_localctx, size_t predicateIndex);
  bool block_event_expressionSempred(Block_event_expressionContext *_localctx, size_t predicateIndex);
  bool select_expressionSempred(Select_expressionContext *_localctx, size_t predicateIndex);
  bool event_expressionSempred(Event_expressionContext *_localctx, size_t predicateIndex);
  bool constant_expressionSempred(Constant_expressionContext *_localctx, size_t predicateIndex);
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool module_path_expressionSempred(Module_path_expressionContext *_localctx, size_t predicateIndex);
  bool constant_primarySempred(Constant_primaryContext *_localctx, size_t predicateIndex);
  bool primarySempred(PrimaryContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

