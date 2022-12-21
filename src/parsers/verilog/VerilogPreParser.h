
// Generated from VerilogPreParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  VerilogPreParser : public antlr4::Parser {
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
    RuleSource_text = 0, RuleCompiler_directive = 1, RuleBegin_keywords_directive = 2, 
    RuleCelldefine_directive = 3, RuleDefault_nettype_directive = 4, RuleDefault_nettype_value = 5, 
    RuleElse_directive = 6, RuleElsif_directive = 7, RuleEnd_keywords_directive = 8, 
    RuleEndcelldefine_directive = 9, RuleEndif_directive = 10, RuleFilename = 11, 
    RuleGroup_of_lines = 12, RuleIdentifier = 13, RuleIfdef_directive = 14, 
    RuleIfndef_directive = 15, RuleInclude_directive = 16, RuleLevel = 17, 
    RuleLine_directive = 18, RuleMacro_delimiter = 19, RuleMacro_esc_newline = 20, 
    RuleMacro_esc_quote = 21, RuleMacro_identifier = 22, RuleMacro_name = 23, 
    RuleMacro_quote = 24, RuleMacro_text = 25, RuleMacro_usage = 26, RuleNounconnected_drive_directive = 27, 
    RuleNumber = 28, RulePragma_directive = 29, RulePragma_expression = 30, 
    RulePragma_keyword = 31, RulePragma_name = 32, RulePragma_value = 33, 
    RuleResetall_directive = 34, RuleSource_text_ = 35, RuleString_ = 36, 
    RuleText_macro_definition = 37, RuleText_macro_usage = 38, RuleTime_precision = 39, 
    RuleTime_unit = 40, RuleTimescale_directive = 41, RuleUnconnected_drive_directive = 42, 
    RuleUnconnected_drive_value = 43, RuleUndef_directive = 44, RuleVersion_specifier = 45
  };

  explicit VerilogPreParser(antlr4::TokenStream *input);

  VerilogPreParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~VerilogPreParser() override;

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
  class FilenameContext;
  class Group_of_linesContext;
  class IdentifierContext;
  class Ifdef_directiveContext;
  class Ifndef_directiveContext;
  class Include_directiveContext;
  class LevelContext;
  class Line_directiveContext;
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
  class String_Context;
  class Text_macro_definitionContext;
  class Text_macro_usageContext;
  class Time_precisionContext;
  class Time_unitContext;
  class Timescale_directiveContext;
  class Unconnected_drive_directiveContext;
  class Unconnected_drive_valueContext;
  class Undef_directiveContext;
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
    Ifdef_directiveContext *ifdef_directive();
    Ifndef_directiveContext *ifndef_directive();
    Include_directiveContext *include_directive();
    Line_directiveContext *line_directive();
    Nounconnected_drive_directiveContext *nounconnected_drive_directive();
    Pragma_directiveContext *pragma_directive();
    Resetall_directiveContext *resetall_directive();
    Text_macro_definitionContext *text_macro_definition();
    Text_macro_usageContext *text_macro_usage();
    Timescale_directiveContext *timescale_directive();
    Unconnected_drive_directiveContext *unconnected_drive_directive();
    Undef_directiveContext *undef_directive();

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
    std::vector<String_Context *> string_();
    String_Context* string_(size_t i);

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
    String_Context *string_();
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

  class  String_Context : public antlr4::ParserRuleContext {
  public:
    String_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  String_Context* string_();

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

