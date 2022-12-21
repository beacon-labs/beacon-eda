
// Generated from SystemVerilogPreParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  SystemVerilogPreParser : public antlr4::Parser {
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
    RuleSource_text = 0, RuleCompiler_directive = 1, RuleBegin_keywords_directive = 2, 
    RuleCelldefine_directive = 3, RuleDefault_nettype_directive = 4, RuleDefault_nettype_value = 5, 
    RuleElse_directive = 6, RuleElsif_directive = 7, RuleEnd_keywords_directive = 8, 
    RuleEndcelldefine_directive = 9, RuleEndif_directive = 10, RuleFile_directive = 11, 
    RuleFilename = 12, RuleGroup_of_lines = 13, RuleIdentifier = 14, RuleIfdef_directive = 15, 
    RuleIfndef_directive = 16, RuleInclude_directive = 17, RuleLevel = 18, 
    RuleLine_directive = 19, RuleLine_directive_ = 20, RuleMacro_delimiter = 21, 
    RuleMacro_esc_newline = 22, RuleMacro_esc_quote = 23, RuleMacro_identifier = 24, 
    RuleMacro_name = 25, RuleMacro_quote = 26, RuleMacro_text = 27, RuleMacro_usage = 28, 
    RuleNounconnected_drive_directive = 29, RuleNumber = 30, RulePragma_directive = 31, 
    RulePragma_expression = 32, RulePragma_keyword = 33, RulePragma_name = 34, 
    RulePragma_value = 35, RuleResetall_directive = 36, RuleSource_text_ = 37, 
    RuleString_literal = 38, RuleText_macro_definition = 39, RuleText_macro_usage = 40, 
    RuleTime_precision = 41, RuleTime_unit = 42, RuleTimescale_directive = 43, 
    RuleUnconnected_drive_directive = 44, RuleUnconnected_drive_value = 45, 
    RuleUndef_directive = 46, RuleUndefineall_directive = 47, RuleVersion_specifier = 48
  };

  explicit SystemVerilogPreParser(antlr4::TokenStream *input);

  SystemVerilogPreParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~SystemVerilogPreParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class Source_textContext;
  class Compiler_directiveContext;
  class Begin_keywords_directiveContext;
  class Celldefine_directiveContext;
  class Default_nettype_directiveContext;
  class Default_nettype_valueContext;
  class Else_directiveContext;
  class Elsif_directiveContext;
  class End_keywords_directiveContext;
  class Endcelldefine_directiveContext;
  class Endif_directiveContext;
  class File_directiveContext;
  class FilenameContext;
  class Group_of_linesContext;
  class IdentifierContext;
  class Ifdef_directiveContext;
  class Ifndef_directiveContext;
  class Include_directiveContext;
  class LevelContext;
  class Line_directiveContext;
  class Line_directive_Context;
  class Macro_delimiterContext;
  class Macro_esc_newlineContext;
  class Macro_esc_quoteContext;
  class Macro_identifierContext;
  class Macro_nameContext;
  class Macro_quoteContext;
  class Macro_textContext;
  class Macro_usageContext;
  class Nounconnected_drive_directiveContext;
  class NumberContext;
  class Pragma_directiveContext;
  class Pragma_expressionContext;
  class Pragma_keywordContext;
  class Pragma_nameContext;
  class Pragma_valueContext;
  class Resetall_directiveContext;
  class Source_text_Context;
  class String_literalContext;
  class Text_macro_definitionContext;
  class Text_macro_usageContext;
  class Time_precisionContext;
  class Time_unitContext;
  class Timescale_directiveContext;
  class Unconnected_drive_directiveContext;
  class Unconnected_drive_valueContext;
  class Undef_directiveContext;
  class Undefineall_directiveContext;
  class Version_specifierContext; 

  class  Source_textContext : public antlr4::ParserRuleContext {
  public:
    Source_textContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Compiler_directiveContext *> compiler_directive();
    Compiler_directiveContext* compiler_directive(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Source_textContext* source_text();

  class  Compiler_directiveContext : public antlr4::ParserRuleContext {
  public:
    Compiler_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Begin_keywords_directiveContext *begin_keywords_directive();
    Celldefine_directiveContext *celldefine_directive();
    Default_nettype_directiveContext *default_nettype_directive();
    End_keywords_directiveContext *end_keywords_directive();
    Endcelldefine_directiveContext *endcelldefine_directive();
    File_directiveContext *file_directive();
    Ifdef_directiveContext *ifdef_directive();
    Ifndef_directiveContext *ifndef_directive();
    Include_directiveContext *include_directive();
    Line_directiveContext *line_directive();
    Line_directive_Context *line_directive_();
    Nounconnected_drive_directiveContext *nounconnected_drive_directive();
    Pragma_directiveContext *pragma_directive();
    Resetall_directiveContext *resetall_directive();
    Text_macro_definitionContext *text_macro_definition();
    Text_macro_usageContext *text_macro_usage();
    Timescale_directiveContext *timescale_directive();
    Unconnected_drive_directiveContext *unconnected_drive_directive();
    Undef_directiveContext *undef_directive();
    Undefineall_directiveContext *undefineall_directive();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Compiler_directiveContext* compiler_directive();

  class  Begin_keywords_directiveContext : public antlr4::ParserRuleContext {
  public:
    Begin_keywords_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *BEGIN_KEYWORDS_DIRECTIVE();
    std::vector<antlr4::tree::TerminalNode *> DQ();
    antlr4::tree::TerminalNode* DQ(size_t i);
    Version_specifierContext *version_specifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Begin_keywords_directiveContext* begin_keywords_directive();

  class  Celldefine_directiveContext : public antlr4::ParserRuleContext {
  public:
    Celldefine_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *CELLDEFINE_DIRECTIVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Celldefine_directiveContext* celldefine_directive();

  class  Default_nettype_directiveContext : public antlr4::ParserRuleContext {
  public:
    Default_nettype_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *DEFAULT_NETTYPE_DIRECTIVE();
    Default_nettype_valueContext *default_nettype_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Default_nettype_directiveContext* default_nettype_directive();

  class  Default_nettype_valueContext : public antlr4::ParserRuleContext {
  public:
    Default_nettype_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT_NETTYPE_VALUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Default_nettype_valueContext* default_nettype_value();

  class  Else_directiveContext : public antlr4::ParserRuleContext {
  public:
    Else_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *ELSE_DIRECTIVE();
    Group_of_linesContext *group_of_lines();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Else_directiveContext* else_directive();

  class  Elsif_directiveContext : public antlr4::ParserRuleContext {
  public:
    Elsif_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *ELSIF_DIRECTIVE();
    Macro_identifierContext *macro_identifier();
    Group_of_linesContext *group_of_lines();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Elsif_directiveContext* elsif_directive();

  class  End_keywords_directiveContext : public antlr4::ParserRuleContext {
  public:
    End_keywords_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *END_KEYWORDS_DIRECTIVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  End_keywords_directiveContext* end_keywords_directive();

  class  Endcelldefine_directiveContext : public antlr4::ParserRuleContext {
  public:
    Endcelldefine_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *ENDCELLDEFINE_DIRECTIVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Endcelldefine_directiveContext* endcelldefine_directive();

  class  Endif_directiveContext : public antlr4::ParserRuleContext {
  public:
    Endif_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *ENDIF_DIRECTIVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Endif_directiveContext* endif_directive();

  class  File_directiveContext : public antlr4::ParserRuleContext {
  public:
    File_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *FILE_DIRECTIVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  File_directiveContext* file_directive();

  class  FilenameContext : public antlr4::ParserRuleContext {
  public:
    FilenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILENAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FilenameContext* filename();

  class  Group_of_linesContext : public antlr4::ParserRuleContext {
  public:
    Group_of_linesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Source_text_Context *> source_text_();
    Source_text_Context* source_text_(size_t i);
    std::vector<Compiler_directiveContext *> compiler_directive();
    Compiler_directiveContext* compiler_directive(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Group_of_linesContext* group_of_lines();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIMPLE_IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdentifierContext* identifier();

  class  Ifdef_directiveContext : public antlr4::ParserRuleContext {
  public:
    Ifdef_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *IFDEF_DIRECTIVE();
    Macro_identifierContext *macro_identifier();
    Group_of_linesContext *group_of_lines();
    Endif_directiveContext *endif_directive();
    std::vector<Elsif_directiveContext *> elsif_directive();
    Elsif_directiveContext* elsif_directive(size_t i);
    Else_directiveContext *else_directive();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ifdef_directiveContext* ifdef_directive();

  class  Ifndef_directiveContext : public antlr4::ParserRuleContext {
  public:
    Ifndef_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *IFNDEF_DIRECTIVE();
    Macro_identifierContext *macro_identifier();
    Group_of_linesContext *group_of_lines();
    Endif_directiveContext *endif_directive();
    std::vector<Elsif_directiveContext *> elsif_directive();
    Elsif_directiveContext* elsif_directive(size_t i);
    Else_directiveContext *else_directive();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ifndef_directiveContext* ifndef_directive();

  class  Include_directiveContext : public antlr4::ParserRuleContext {
  public:
    Include_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *INCLUDE_DIRECTIVE();
    std::vector<antlr4::tree::TerminalNode *> DQ();
    antlr4::tree::TerminalNode* DQ(size_t i);
    FilenameContext *filename();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();
    Text_macro_usageContext *text_macro_usage();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Include_directiveContext* include_directive();

  class  LevelContext : public antlr4::ParserRuleContext {
  public:
    LevelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNSIGNED_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LevelContext* level();

  class  Line_directiveContext : public antlr4::ParserRuleContext {
  public:
    Line_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *LINE_DIRECTIVE();
    NumberContext *number();
    std::vector<antlr4::tree::TerminalNode *> DQ();
    antlr4::tree::TerminalNode* DQ(size_t i);
    FilenameContext *filename();
    LevelContext *level();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Line_directiveContext* line_directive();

  class  Line_directive_Context : public antlr4::ParserRuleContext {
  public:
    Line_directive_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *LINE_DIRECTIVE_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Line_directive_Context* line_directive_();

  class  Macro_delimiterContext : public antlr4::ParserRuleContext {
  public:
    Macro_delimiterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MACRO_DELIMITER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Macro_delimiterContext* macro_delimiter();

  class  Macro_esc_newlineContext : public antlr4::ParserRuleContext {
  public:
    Macro_esc_newlineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MACRO_ESC_NEWLINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Macro_esc_newlineContext* macro_esc_newline();

  class  Macro_esc_quoteContext : public antlr4::ParserRuleContext {
  public:
    Macro_esc_quoteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MACRO_ESC_QUOTE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Macro_esc_quoteContext* macro_esc_quote();

  class  Macro_identifierContext : public antlr4::ParserRuleContext {
  public:
    Macro_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MACRO_IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Macro_identifierContext* macro_identifier();

  class  Macro_nameContext : public antlr4::ParserRuleContext {
  public:
    Macro_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MACRO_NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Macro_nameContext* macro_name();

  class  Macro_quoteContext : public antlr4::ParserRuleContext {
  public:
    Macro_quoteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MACRO_QUOTE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Macro_quoteContext* macro_quote();

  class  Macro_textContext : public antlr4::ParserRuleContext {
  public:
    Macro_textContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> MACRO_TEXT();
    antlr4::tree::TerminalNode* MACRO_TEXT(size_t i);
    std::vector<Macro_delimiterContext *> macro_delimiter();
    Macro_delimiterContext* macro_delimiter(size_t i);
    std::vector<Macro_esc_newlineContext *> macro_esc_newline();
    Macro_esc_newlineContext* macro_esc_newline(size_t i);
    std::vector<Macro_esc_quoteContext *> macro_esc_quote();
    Macro_esc_quoteContext* macro_esc_quote(size_t i);
    std::vector<Macro_quoteContext *> macro_quote();
    Macro_quoteContext* macro_quote(size_t i);
    std::vector<String_literalContext *> string_literal();
    String_literalContext* string_literal(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Macro_textContext* macro_text();

  class  Macro_usageContext : public antlr4::ParserRuleContext {
  public:
    Macro_usageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MACRO_USAGE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Macro_usageContext* macro_usage();

  class  Nounconnected_drive_directiveContext : public antlr4::ParserRuleContext {
  public:
    Nounconnected_drive_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *NOUNCONNECTED_DRIVE_DIRECTIVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Nounconnected_drive_directiveContext* nounconnected_drive_directive();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNSIGNED_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumberContext* number();

  class  Pragma_directiveContext : public antlr4::ParserRuleContext {
  public:
    Pragma_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *PRAGMA_DIRECTIVE();
    Pragma_nameContext *pragma_name();
    std::vector<Pragma_expressionContext *> pragma_expression();
    Pragma_expressionContext* pragma_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pragma_directiveContext* pragma_directive();

  class  Pragma_expressionContext : public antlr4::ParserRuleContext {
  public:
    Pragma_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pragma_valueContext *pragma_value();
    Pragma_keywordContext *pragma_keyword();
    antlr4::tree::TerminalNode *EQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pragma_expressionContext* pragma_expression();

  class  Pragma_keywordContext : public antlr4::ParserRuleContext {
  public:
    Pragma_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIMPLE_IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pragma_keywordContext* pragma_keyword();

  class  Pragma_nameContext : public antlr4::ParserRuleContext {
  public:
    Pragma_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIMPLE_IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pragma_nameContext* pragma_name();

  class  Pragma_valueContext : public antlr4::ParserRuleContext {
  public:
    Pragma_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<Pragma_expressionContext *> pragma_expression();
    Pragma_expressionContext* pragma_expression(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> CO();
    antlr4::tree::TerminalNode* CO(size_t i);
    NumberContext *number();
    String_literalContext *string_literal();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pragma_valueContext* pragma_value();

  class  Resetall_directiveContext : public antlr4::ParserRuleContext {
  public:
    Resetall_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *RESETALL_DIRECTIVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Resetall_directiveContext* resetall_directive();

  class  Source_text_Context : public antlr4::ParserRuleContext {
  public:
    Source_text_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SOURCE_TEXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Source_text_Context* source_text_();

  class  String_literalContext : public antlr4::ParserRuleContext {
  public:
    String_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  String_literalContext* string_literal();

  class  Text_macro_definitionContext : public antlr4::ParserRuleContext {
  public:
    Text_macro_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *DEFINE_DIRECTIVE();
    Macro_nameContext *macro_name();
    Macro_textContext *macro_text();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Text_macro_definitionContext* text_macro_definition();

  class  Text_macro_usageContext : public antlr4::ParserRuleContext {
  public:
    Text_macro_usageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    Macro_usageContext *macro_usage();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Text_macro_usageContext* text_macro_usage();

  class  Time_precisionContext : public antlr4::ParserRuleContext {
  public:
    Time_precisionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TIME_VALUE();
    antlr4::tree::TerminalNode *TIME_UNIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Time_precisionContext* time_precision();

  class  Time_unitContext : public antlr4::ParserRuleContext {
  public:
    Time_unitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TIME_VALUE();
    antlr4::tree::TerminalNode *TIME_UNIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Time_unitContext* time_unit();

  class  Timescale_directiveContext : public antlr4::ParserRuleContext {
  public:
    Timescale_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *TIMESCALE_DIRECTIVE();
    Time_unitContext *time_unit();
    antlr4::tree::TerminalNode *SL();
    Time_precisionContext *time_precision();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Timescale_directiveContext* timescale_directive();

  class  Unconnected_drive_directiveContext : public antlr4::ParserRuleContext {
  public:
    Unconnected_drive_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *UNCONNECTED_DRIVE_DIRECTIVE();
    Unconnected_drive_valueContext *unconnected_drive_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Unconnected_drive_directiveContext* unconnected_drive_directive();

  class  Unconnected_drive_valueContext : public antlr4::ParserRuleContext {
  public:
    Unconnected_drive_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNCONNECTED_DRIVE_VALUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Unconnected_drive_valueContext* unconnected_drive_value();

  class  Undef_directiveContext : public antlr4::ParserRuleContext {
  public:
    Undef_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *UNDEF_DIRECTIVE();
    Macro_identifierContext *macro_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Undef_directiveContext* undef_directive();

  class  Undefineall_directiveContext : public antlr4::ParserRuleContext {
  public:
    Undefineall_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GA();
    antlr4::tree::TerminalNode *UNDEFINEALL_DIRECTIVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Undefineall_directiveContext* undefineall_directive();

  class  Version_specifierContext : public antlr4::ParserRuleContext {
  public:
    Version_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VERSION_SPECIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Version_specifierContext* version_specifier();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

