
// Generated from SystemVerilogPreParser.g4 by ANTLR 4.11.1


#include "SystemVerilogPreParserListener.h"

#include "SystemVerilogPreParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct SystemVerilogPreParserStaticData final {
  SystemVerilogPreParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SystemVerilogPreParserStaticData(const SystemVerilogPreParserStaticData&) = delete;
  SystemVerilogPreParserStaticData(SystemVerilogPreParserStaticData&&) = delete;
  SystemVerilogPreParserStaticData& operator=(const SystemVerilogPreParserStaticData&) = delete;
  SystemVerilogPreParserStaticData& operator=(SystemVerilogPreParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag systemverilogpreparserParserOnceFlag;
SystemVerilogPreParserStaticData *systemverilogpreparserParserStaticData = nullptr;

void systemverilogpreparserParserInitialize() {
  assert(systemverilogpreparserParserStaticData == nullptr);
  auto staticData = std::make_unique<SystemVerilogPreParserStaticData>(
    std::vector<std::string>{
      "source_text", "compiler_directive", "begin_keywords_directive", "celldefine_directive", 
      "default_nettype_directive", "default_nettype_value", "else_directive", 
      "elsif_directive", "end_keywords_directive", "endcelldefine_directive", 
      "endif_directive", "file_directive", "filename", "group_of_lines", 
      "identifier", "ifdef_directive", "ifndef_directive", "include_directive", 
      "level", "line_directive", "line_directive_", "macro_delimiter", "macro_esc_newline", 
      "macro_esc_quote", "macro_identifier", "macro_name", "macro_quote", 
      "macro_text", "macro_usage", "nounconnected_drive_directive", "number", 
      "pragma_directive", "pragma_expression", "pragma_keyword", "pragma_name", 
      "pragma_value", "resetall_directive", "source_text_", "string_literal", 
      "text_macro_definition", "text_macro_usage", "time_precision", "time_unit", 
      "timescale_directive", "unconnected_drive_directive", "unconnected_drive_value", 
      "undef_directive", "undefineall_directive", "version_specifier"
    },
    std::vector<std::string>{
      "", "'accept_on'", "'alias'", "'always'", "'always_comb'", "'always_ff'", 
      "'always_latch'", "'&'", "'&&'", "'&&&'", "'&='", "'and'", "'''", 
      "'*'", "'**'", "'*='", "'*>'", "'assert'", "'assign'", "'assume'", 
      "'@'", "'@@'", "'automatic'", "'before'", "'begin'", "'bind'", "'bins'", 
      "'binsof'", "'bit'", "'break'", "'buf'", "'bufif1'", "'bufif0'", "'byte'", 
      "'^'", "'^='", "'case'", "'casex'", "'casez'", "'^~'", "'cell'", "'chandle'", 
      "'checker'", "':'", "'class'", "'::'", "':='", "'clocking'", "':/'", 
      "'cmos'", "','", "'config'", "'const'", "'constraint'", "'context'", 
      "'continue'", "'cover'", "'covergroup'", "'coverpoint'", "'cross'", 
      "'deassign'", "'default'", "'defparam'", "'design'", "'disable'", 
      "'dist'", "'$'", "'$error'", "'$fatal'", "'$fullskew'", "'$hold'", 
      "'$info'", "'$nochange'", "'$period'", "'$recovery'", "'$recrem'", 
      "'$removal'", "'$root'", "'$setup'", "'$setuphold'", "'$skew'", "'$timeskew'", 
      "'$unit'", "'$warning'", "'$width'", "'do'", "'\"'", "'\"DPI\"'", 
      "'\"DPI-C\"'", "'.'", "'.*'", "'edge'", "'else'", "'!'", "'!='", "'!=='", 
      "'!=\\u003F'", "'end'", "'endcase'", "'endchecker'", "'endclass'", 
      "'endclocking'", "'endconfig'", "'endfunction'", "'endgenerate'", 
      "'endgroup'", "'endinterface'", "'endmodule'", "'endpackage'", "'endprimitive'", 
      "'endprogram'", "'endproperty'", "'endsequence'", "'endspecify'", 
      "'endtable'", "'endtask'", "'enum'", "'='", "'=='", "'==='", "'==\\u003F'", 
      "'=>'", "'event'", "'eventually'", "'expect'", "'export'", "'extends'", 
      "'extern'", "'final'", "'first_match'", "'for'", "'force'", "'foreach'", 
      "'forever'", "'fork'", "'forkjoin'", "'function'", "", "'generate'", 
      "'genvar'", "'global'", "'>'", "'>='", "'>>'", "'>>='", "'>>>'", "'>>>='", 
      "'#'", "'#=#'", "'##'", "'#-#'", "'highz1'", "'highz0'", "'if'", "'iff'", 
      "'ifnone'", "'ignore_bins'", "'illegal_bins'", "'implements'", "'implies'", 
      "'import'", "'include'", "'initial'", "'inout'", "'input'", "'inside'", 
      "'instance'", "'int'", "'integer'", "'interconnect'", "'interface'", 
      "'intersect'", "'join'", "'join_any'", "'join_none'", "'large'", "'['", 
      "'{'", "'let'", "'liblist'", "'library'", "'local'", "'localparam'", 
      "'logic'", "'longint'", "'('", "'<'", "'<='", "'<<'", "'<<='", "'<<<'", 
      "'<<<='", "'<->'", "'macromodule'", "'matches'", "'medium'", "'-'", 
      "'-:'", "'-='", "'->'", "'->>'", "'-incdir'", "'--'", "'%'", "'modport'", 
      "'module'", "'%='", "'nand'", "'negedge'", "'nettype'", "'new'", "'nexttime'", 
      "'nmos'", "'nor'", "'noshowcancelled'", "'not'", "'notif1'", "'notif0'", 
      "'null'", "'1step'", "'option'", "'or'", "'output'", "'package'", 
      "'packed'", "'parameter'", "'PATHPULSE$'", "'+'", "'+:'", "'+='", 
      "'++'", "'pmos'", "'posedge'", "'primitive'", "'priority'", "'program'", 
      "'property'", "'protected'", "'pulldown'", "'pull1'", "'pullup'", 
      "'pull0'", "'pulsestyle_ondetect'", "'pulsestyle_onevent'", "'pure'", 
      "'\\u003F'", "'rand'", "'randc'", "'randcase'", "'randomize'", "'randsequence'", 
      "']'", "'}'", "'rcmos'", "'real'", "'realtime'", "'ref'", "'reg'", 
      "'reject_on'", "'release'", "'repeat'", "'restrict'", "'return'", 
      "'rnmos'", "')'", "'rpmos'", "'rtran'", "'rtranif1'", "'rtranif0'", 
      "'s_always'", "'s_eventually'", "'s_nexttime'", "'s_until'", "'s_until_with'", 
      "'sample'", "';'", "'scalared'", "'sequence'", "'shortint'", "'shortreal'", 
      "'showcancelled'", "'signed'", "'/'", "'/='", "'small'", "'soft'", 
      "'solve'", "'specify'", "'specparam'", "'static'", "'std'", "'string'", 
      "'strong'", "'strong1'", "'strong0'", "'struct'", "'super'", "'supply1'", 
      "'supply0'", "'sync_accept_on'", "'sync_reject_on'", "'table'", "'tagged'", 
      "'task'", "'this'", "'throughout'", "'~'", "'~&'", "'~^'", "'time'", 
      "'timeprecision'", "'timeunit'", "'~|'", "'tran'", "'tranif1'", "'tranif0'", 
      "'tri'", "'triand'", "'tri1'", "'trior'", "'trireg'", "'tri0'", "'type'", 
      "'type_option'", "'typedef'", "'union'", "'unique'", "'unique0'", 
      "'unsigned'", "'until'", "'until_with'", "'untyped'", "'use'", "'uwire'", 
      "'var'", "'vectored'", "'virtual'", "'|'", "'|='", "'|=>'", "'|->'", 
      "'||'", "'void'", "'wait'", "'wait_order'", "'wand'", "'weak'", "'weak1'", 
      "'weak0'", "'while'", "'wildcard'", "'wire'", "'with'", "'within'", 
      "'wor'", "'xnor'", "'xor'", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "'celldefine'", 
      "", "", "", "", "'end_keywords'", "'endcelldefine'", "", "'__FILE__'", 
      "", "", "", "", "'__LINE__'", "'nounconnected_drive'", "", "'resetall'", 
      "", "", "", "'undefineall'", "", "", "", "", "", "", "", "'``'", "", 
      "'`\\`\"'", "'`\"'"
    },
    std::vector<std::string>{
      "", "ACCEPT_ON", "ALIAS", "ALWAYS", "ALWAYS_COMB", "ALWAYS_FF", "ALWAYS_LATCH", 
      "AM", "AMAM", "AMAMAM", "AMEQ", "AND", "AP", "AS", "ASAS", "ASEQ", 
      "ASGT", "ASSERT", "ASSIGN", "ASSUME", "AT", "ATAT", "AUTOMATIC", "BEFORE", 
      "BEGIN", "BIND", "BINS", "BINSOF", "BIT", "BREAK", "BUF", "BUFIFONE", 
      "BUFIFZERO", "BYTE", "CA", "CAEQ", "CASE", "CASEX", "CASEZ", "CATI", 
      "CELL", "CHANDLE", "CHECKER", "CL", "CLASS", "CLCL", "CLEQ", "CLOCKING", 
      "CLSL", "CMOS", "CO", "CONFIG", "CONST", "CONSTRAINT", "CONTEXT", 
      "CONTINUE", "COVER", "COVERGROUP", "COVERPOINT", "CROSS", "DEASSIGN", 
      "DEFAULT", "DEFPARAM", "DESIGN", "DISABLE", "DIST", "DL", "DLERROR", 
      "DLFATAL", "DLFULLSKEW", "DLHOLD", "DLINFO", "DLNOCHANGE", "DLPERIOD", 
      "DLRECOVERY", "DLRECREM", "DLREMOVAL", "DLROOT", "DLSETUP", "DLSETUPHOLD", 
      "DLSKEW", "DLTIMESKEW", "DLUNIT", "DLWARNING", "DLWIDTH", "DO", "DQ", 
      "DQDPIDQ", "DQDPIMICDQ", "DT", "DTAS", "EDGE", "ELSE", "EM", "EMEQ", 
      "EMEQEQ", "EMEQQM", "END", "ENDCASE", "ENDCHECKER", "ENDCLASS", "ENDCLOCKING", 
      "ENDCONFIG", "ENDFUNCTION", "ENDGENERATE", "ENDGROUP", "ENDINTERFACE", 
      "ENDMODULE", "ENDPACKAGE", "ENDPRIMITIVE", "ENDPROGRAM", "ENDPROPERTY", 
      "ENDSEQUENCE", "ENDSPECIFY", "ENDTABLE", "ENDTASK", "ENUM", "EQ", 
      "EQEQ", "EQEQEQ", "EQEQQM", "EQGT", "EVENT", "EVENTUALLY", "EXPECT", 
      "EXPORT", "EXTENDS", "EXTERN", "FINAL", "FIRST_MATCH", "FOR", "FORCE", 
      "FOREACH", "FOREVER", "FORK", "FORKJOIN", "FUNCTION", "GA", "GENERATE", 
      "GENVAR", "GLOBAL", "GT", "GTEQ", "GTGT", "GTGTEQ", "GTGTGT", "GTGTGTEQ", 
      "HA", "HAEQHA", "HAHA", "HAMIHA", "HIGHZONE", "HIGHZZERO", "IF", "IFF", 
      "IFNONE", "IGNORE_BINS", "ILLEGAL_BINS", "IMPLEMENTS", "IMPLIES", 
      "IMPORT", "INCLUDE", "INITIAL", "INOUT", "INPUT", "INSIDE", "INSTANCE", 
      "INT", "INTEGER", "INTERCONNECT", "INTERFACE", "INTERSECT", "JOIN", 
      "JOIN_ANY", "JOIN_NONE", "LARGE", "LB", "LC", "LET", "LIBLIST", "LIBRARY", 
      "LOCAL", "LOCALPARAM", "LOGIC", "LONGINT", "LP", "LT", "LTEQ", "LTLT", 
      "LTLTEQ", "LTLTLT", "LTLTLTEQ", "LTMIGT", "MACROMODULE", "MATCHES", 
      "MEDIUM", "MI", "MICL", "MIEQ", "MIGT", "MIGTGT", "MIINCDIR", "MIMI", 
      "MO", "MODPORT", "MODULE", "MOEQ", "NAND", "NEGEDGE", "NETTYPE", "NEW", 
      "NEXTTIME", "NMOS", "NOR", "NOSHOWCANCELLED", "NOT", "NOTIFONE", "NOTIFZERO", 
      "NULL", "ONESTEP", "OPTION", "OR", "OUTPUT", "PACKAGE", "PACKED", 
      "PARAMETER", "PATHPULSEDL", "PL", "PLCL", "PLEQ", "PLPL", "PMOS", 
      "POSEDGE", "PRIMITIVE", "PRIORITY", "PROGRAM", "PROPERTY", "PROTECTED", 
      "PULLDOWN", "PULLONE", "PULLUP", "PULLZERO", "PULSESTYLE_ONDETECT", 
      "PULSESTYLE_ONEVENT", "PURE", "QM", "RAND", "RANDC", "RANDCASE", "RANDOMIZE", 
      "RANDSEQUENCE", "RB", "RC", "RCMOS", "REAL", "REALTIME", "REF", "REG", 
      "REJECT_ON", "RELEASE", "REPEAT", "RESTRICT", "RETURN", "RNMOS", "RP", 
      "RPMOS", "RTRAN", "RTRANIFONE", "RTRANIFZERO", "S_ALWAYS", "S_EVENTUALLY", 
      "S_NEXTTIME", "S_UNTIL", "S_UNTIL_WITH", "SAMPLE", "SC", "SCALARED", 
      "SEQUENCE", "SHORTINT", "SHORTREAL", "SHOWCANCELLED", "SIGNED", "SL", 
      "SLEQ", "SMALL", "SOFT", "SOLVE", "SPECIFY", "SPECPARAM", "STATIC", 
      "STD", "STRING", "STRONG", "STRONGONE", "STRONGZERO", "STRUCT", "SUPER", 
      "SUPPLYONE", "SUPPLYZERO", "SYNC_ACCEPT_ON", "SYNC_REJECT_ON", "TABLE", 
      "TAGGED", "TASK", "THIS", "THROUGHOUT", "TI", "TIAM", "TICA", "TIME", 
      "TIMEPRECISION", "TIMEUNIT", "TIVL", "TRAN", "TRANIFONE", "TRANIFZERO", 
      "TRI", "TRIAND", "TRIONE", "TRIOR", "TRIREG", "TRIZERO", "TYPE", "TYPE_OPTION", 
      "TYPEDEF", "UNION", "UNIQUE", "UNIQUEZERO", "UNSIGNED", "UNTIL", "UNTIL_WITH", 
      "UNTYPED", "USE", "UWIRE", "VAR", "VECTORED", "VIRTUAL", "VL", "VLEQ", 
      "VLEQGT", "VLMIGT", "VLVL", "VOID", "WAIT", "WAIT_ORDER", "WAND", 
      "WEAK", "WEAKONE", "WEAKZERO", "WHILE", "WILDCARD", "WIRE", "WITH", 
      "WITHIN", "WOR", "XNOR", "XOR", "BINARY_BASE", "COMMENT", "DECIMAL_BASE", 
      "ESCAPED_IDENTIFIER", "EXPONENTIAL_NUMBER", "FIXED_POINT_NUMBER", 
      "HEX_BASE", "OCTAL_BASE", "SIMPLE_IDENTIFIER", "STRING_LITERAL", "SYSTEM_TF_IDENTIFIER", 
      "TIME_LITERAL", "UNBASED_UNSIZED_LITERAL", "UNSIGNED_NUMBER", "WHITE_SPACE", 
      "ZERO_OR_ONE_X_OR_Z", "BINARY_VALUE", "X_OR_Z_UNDERSCORE", "HEX_VALUE", 
      "FILE_PATH_SPEC", "OCTAL_VALUE", "EDGE_SYMBOL", "LEVEL_ONLY_SYMBOL", 
      "OUTPUT_OR_LEVEL_SYMBOL", "BEGIN_KEYWORDS_DIRECTIVE", "CELLDEFINE_DIRECTIVE", 
      "DEFAULT_NETTYPE_DIRECTIVE", "DEFINE_DIRECTIVE", "ELSE_DIRECTIVE", 
      "ELSIF_DIRECTIVE", "END_KEYWORDS_DIRECTIVE", "ENDCELLDEFINE_DIRECTIVE", 
      "ENDIF_DIRECTIVE", "FILE_DIRECTIVE", "IFDEF_DIRECTIVE", "IFNDEF_DIRECTIVE", 
      "INCLUDE_DIRECTIVE", "LINE_DIRECTIVE", "LINE_DIRECTIVE_", "NOUNCONNECTED_DRIVE_DIRECTIVE", 
      "PRAGMA_DIRECTIVE", "RESETALL_DIRECTIVE", "TIMESCALE_DIRECTIVE", "UNCONNECTED_DRIVE_DIRECTIVE", 
      "UNDEF_DIRECTIVE", "UNDEFINEALL_DIRECTIVE", "MACRO_USAGE", "VERSION_SPECIFIER", 
      "DEFAULT_NETTYPE_VALUE", "COMMENT_4", "MACRO_NAME", "WHITE_SPACE_6", 
      "FILENAME", "MACRO_DELIMITER", "MACRO_ESC_NEWLINE", "MACRO_ESC_QUOTE", 
      "MACRO_QUOTE", "MACRO_TEXT", "SOURCE_TEXT", "TIME_UNIT", "TIME_VALUE", 
      "UNCONNECTED_DRIVE_VALUE", "MACRO_IDENTIFIER"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,419,342,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,1,0,5,
  	0,100,8,0,10,0,12,0,103,9,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,125,8,1,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,
  	7,1,7,1,8,1,8,1,8,1,9,1,9,1,9,1,10,1,10,1,10,1,11,1,11,1,11,1,12,1,12,
  	1,13,1,13,5,13,167,8,13,10,13,12,13,170,9,13,1,14,1,14,1,15,1,15,1,15,
  	1,15,1,15,5,15,179,8,15,10,15,12,15,182,9,15,1,15,3,15,185,8,15,1,15,
  	1,15,1,16,1,16,1,16,1,16,1,16,5,16,194,8,16,10,16,12,16,197,9,16,1,16,
  	3,16,200,8,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,
  	1,17,1,17,3,17,215,8,17,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,19,
  	1,19,1,20,1,20,1,20,1,21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,1,25,1,25,
  	1,26,1,26,1,27,1,27,1,27,1,27,1,27,1,27,5,27,248,8,27,10,27,12,27,251,
  	9,27,1,28,1,28,1,29,1,29,1,29,1,30,1,30,1,31,1,31,1,31,1,31,1,31,1,31,
  	5,31,266,8,31,10,31,12,31,269,9,31,3,31,271,8,31,1,32,1,32,1,32,3,32,
  	276,8,32,1,32,1,32,1,33,1,33,1,34,1,34,1,35,1,35,1,35,1,35,5,35,288,8,
  	35,10,35,12,35,291,9,35,1,35,1,35,1,35,1,35,1,35,3,35,298,8,35,1,36,1,
  	36,1,36,1,37,1,37,1,38,1,38,1,39,1,39,1,39,1,39,1,39,1,40,1,40,1,40,1,
  	41,1,41,1,41,1,42,1,42,1,42,1,43,1,43,1,43,1,43,1,43,1,43,1,44,1,44,1,
  	44,1,44,1,45,1,45,1,46,1,46,1,46,1,46,1,47,1,47,1,47,1,48,1,48,1,48,0,
  	0,49,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,
  	46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,90,
  	92,94,96,0,0,333,0,101,1,0,0,0,2,124,1,0,0,0,4,126,1,0,0,0,6,132,1,0,
  	0,0,8,135,1,0,0,0,10,139,1,0,0,0,12,141,1,0,0,0,14,145,1,0,0,0,16,150,
  	1,0,0,0,18,153,1,0,0,0,20,156,1,0,0,0,22,159,1,0,0,0,24,162,1,0,0,0,26,
  	168,1,0,0,0,28,171,1,0,0,0,30,173,1,0,0,0,32,188,1,0,0,0,34,203,1,0,0,
  	0,36,216,1,0,0,0,38,218,1,0,0,0,40,226,1,0,0,0,42,229,1,0,0,0,44,231,
  	1,0,0,0,46,233,1,0,0,0,48,235,1,0,0,0,50,237,1,0,0,0,52,239,1,0,0,0,54,
  	249,1,0,0,0,56,252,1,0,0,0,58,254,1,0,0,0,60,257,1,0,0,0,62,259,1,0,0,
  	0,64,275,1,0,0,0,66,279,1,0,0,0,68,281,1,0,0,0,70,297,1,0,0,0,72,299,
  	1,0,0,0,74,302,1,0,0,0,76,304,1,0,0,0,78,306,1,0,0,0,80,311,1,0,0,0,82,
  	314,1,0,0,0,84,317,1,0,0,0,86,320,1,0,0,0,88,326,1,0,0,0,90,330,1,0,0,
  	0,92,332,1,0,0,0,94,336,1,0,0,0,96,339,1,0,0,0,98,100,3,2,1,0,99,98,1,
  	0,0,0,100,103,1,0,0,0,101,99,1,0,0,0,101,102,1,0,0,0,102,1,1,0,0,0,103,
  	101,1,0,0,0,104,125,3,4,2,0,105,125,3,6,3,0,106,125,3,8,4,0,107,125,3,
  	16,8,0,108,125,3,18,9,0,109,125,3,22,11,0,110,125,3,30,15,0,111,125,3,
  	32,16,0,112,125,3,34,17,0,113,125,3,38,19,0,114,125,3,40,20,0,115,125,
  	3,58,29,0,116,125,3,62,31,0,117,125,3,72,36,0,118,125,3,78,39,0,119,125,
  	3,80,40,0,120,125,3,86,43,0,121,125,3,88,44,0,122,125,3,92,46,0,123,125,
  	3,94,47,0,124,104,1,0,0,0,124,105,1,0,0,0,124,106,1,0,0,0,124,107,1,0,
  	0,0,124,108,1,0,0,0,124,109,1,0,0,0,124,110,1,0,0,0,124,111,1,0,0,0,124,
  	112,1,0,0,0,124,113,1,0,0,0,124,114,1,0,0,0,124,115,1,0,0,0,124,116,1,
  	0,0,0,124,117,1,0,0,0,124,118,1,0,0,0,124,119,1,0,0,0,124,120,1,0,0,0,
  	124,121,1,0,0,0,124,122,1,0,0,0,124,123,1,0,0,0,125,3,1,0,0,0,126,127,
  	5,137,0,0,127,128,5,381,0,0,128,129,5,86,0,0,129,130,3,96,48,0,130,131,
  	5,86,0,0,131,5,1,0,0,0,132,133,5,137,0,0,133,134,5,382,0,0,134,7,1,0,
  	0,0,135,136,5,137,0,0,136,137,5,383,0,0,137,138,3,10,5,0,138,9,1,0,0,
  	0,139,140,5,405,0,0,140,11,1,0,0,0,141,142,5,137,0,0,142,143,5,385,0,
  	0,143,144,3,26,13,0,144,13,1,0,0,0,145,146,5,137,0,0,146,147,5,386,0,
  	0,147,148,3,48,24,0,148,149,3,26,13,0,149,15,1,0,0,0,150,151,5,137,0,
  	0,151,152,5,387,0,0,152,17,1,0,0,0,153,154,5,137,0,0,154,155,5,388,0,
  	0,155,19,1,0,0,0,156,157,5,137,0,0,157,158,5,389,0,0,158,21,1,0,0,0,159,
  	160,5,137,0,0,160,161,5,390,0,0,161,23,1,0,0,0,162,163,5,409,0,0,163,
  	25,1,0,0,0,164,167,3,74,37,0,165,167,3,2,1,0,166,164,1,0,0,0,166,165,
  	1,0,0,0,167,170,1,0,0,0,168,166,1,0,0,0,168,169,1,0,0,0,169,27,1,0,0,
  	0,170,168,1,0,0,0,171,172,5,365,0,0,172,29,1,0,0,0,173,174,5,137,0,0,
  	174,175,5,391,0,0,175,176,3,48,24,0,176,180,3,26,13,0,177,179,3,14,7,
  	0,178,177,1,0,0,0,179,182,1,0,0,0,180,178,1,0,0,0,180,181,1,0,0,0,181,
  	184,1,0,0,0,182,180,1,0,0,0,183,185,3,12,6,0,184,183,1,0,0,0,184,185,
  	1,0,0,0,185,186,1,0,0,0,186,187,3,20,10,0,187,31,1,0,0,0,188,189,5,137,
  	0,0,189,190,5,392,0,0,190,191,3,48,24,0,191,195,3,26,13,0,192,194,3,14,
  	7,0,193,192,1,0,0,0,194,197,1,0,0,0,195,193,1,0,0,0,195,196,1,0,0,0,196,
  	199,1,0,0,0,197,195,1,0,0,0,198,200,3,12,6,0,199,198,1,0,0,0,199,200,
  	1,0,0,0,200,201,1,0,0,0,201,202,3,20,10,0,202,33,1,0,0,0,203,204,5,137,
  	0,0,204,214,5,393,0,0,205,206,5,86,0,0,206,207,3,24,12,0,207,208,5,86,
  	0,0,208,215,1,0,0,0,209,210,5,186,0,0,210,211,3,24,12,0,211,212,5,141,
  	0,0,212,215,1,0,0,0,213,215,3,80,40,0,214,205,1,0,0,0,214,209,1,0,0,0,
  	214,213,1,0,0,0,215,35,1,0,0,0,216,217,5,370,0,0,217,37,1,0,0,0,218,219,
  	5,137,0,0,219,220,5,394,0,0,220,221,3,60,30,0,221,222,5,86,0,0,222,223,
  	3,24,12,0,223,224,5,86,0,0,224,225,3,36,18,0,225,39,1,0,0,0,226,227,5,
  	137,0,0,227,228,5,395,0,0,228,41,1,0,0,0,229,230,5,410,0,0,230,43,1,0,
  	0,0,231,232,5,411,0,0,232,45,1,0,0,0,233,234,5,412,0,0,234,47,1,0,0,0,
  	235,236,5,419,0,0,236,49,1,0,0,0,237,238,5,407,0,0,238,51,1,0,0,0,239,
  	240,5,413,0,0,240,53,1,0,0,0,241,248,5,414,0,0,242,248,3,42,21,0,243,
  	248,3,44,22,0,244,248,3,46,23,0,245,248,3,52,26,0,246,248,3,76,38,0,247,
  	241,1,0,0,0,247,242,1,0,0,0,247,243,1,0,0,0,247,244,1,0,0,0,247,245,1,
  	0,0,0,247,246,1,0,0,0,248,251,1,0,0,0,249,247,1,0,0,0,249,250,1,0,0,0,
  	250,55,1,0,0,0,251,249,1,0,0,0,252,253,5,403,0,0,253,57,1,0,0,0,254,255,
  	5,137,0,0,255,256,5,396,0,0,256,59,1,0,0,0,257,258,5,370,0,0,258,61,1,
  	0,0,0,259,260,5,137,0,0,260,261,5,397,0,0,261,270,3,68,34,0,262,267,3,
  	64,32,0,263,264,5,50,0,0,264,266,3,64,32,0,265,263,1,0,0,0,266,269,1,
  	0,0,0,267,265,1,0,0,0,267,268,1,0,0,0,268,271,1,0,0,0,269,267,1,0,0,0,
  	270,262,1,0,0,0,270,271,1,0,0,0,271,63,1,0,0,0,272,273,3,66,33,0,273,
  	274,5,117,0,0,274,276,1,0,0,0,275,272,1,0,0,0,275,276,1,0,0,0,276,277,
  	1,0,0,0,277,278,3,70,35,0,278,65,1,0,0,0,279,280,5,365,0,0,280,67,1,0,
  	0,0,281,282,5,365,0,0,282,69,1,0,0,0,283,284,5,185,0,0,284,289,3,64,32,
  	0,285,286,5,50,0,0,286,288,3,64,32,0,287,285,1,0,0,0,288,291,1,0,0,0,
  	289,287,1,0,0,0,289,290,1,0,0,0,290,292,1,0,0,0,291,289,1,0,0,0,292,293,
  	5,264,0,0,293,298,1,0,0,0,294,298,3,60,30,0,295,298,3,76,38,0,296,298,
  	3,28,14,0,297,283,1,0,0,0,297,294,1,0,0,0,297,295,1,0,0,0,297,296,1,0,
  	0,0,298,71,1,0,0,0,299,300,5,137,0,0,300,301,5,398,0,0,301,73,1,0,0,0,
  	302,303,5,415,0,0,303,75,1,0,0,0,304,305,5,366,0,0,305,77,1,0,0,0,306,
  	307,5,137,0,0,307,308,5,384,0,0,308,309,3,50,25,0,309,310,3,54,27,0,310,
  	79,1,0,0,0,311,312,5,137,0,0,312,313,3,56,28,0,313,81,1,0,0,0,314,315,
  	5,417,0,0,315,316,5,416,0,0,316,83,1,0,0,0,317,318,5,417,0,0,318,319,
  	5,416,0,0,319,85,1,0,0,0,320,321,5,137,0,0,321,322,5,399,0,0,322,323,
  	3,84,42,0,323,324,5,282,0,0,324,325,3,82,41,0,325,87,1,0,0,0,326,327,
  	5,137,0,0,327,328,5,400,0,0,328,329,3,90,45,0,329,89,1,0,0,0,330,331,
  	5,418,0,0,331,91,1,0,0,0,332,333,5,137,0,0,333,334,5,401,0,0,334,335,
  	3,48,24,0,335,93,1,0,0,0,336,337,5,137,0,0,337,338,5,402,0,0,338,95,1,
  	0,0,0,339,340,5,404,0,0,340,97,1,0,0,0,16,101,124,166,168,180,184,195,
  	199,214,247,249,267,270,275,289,297
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  systemverilogpreparserParserStaticData = staticData.release();
}

}

SystemVerilogPreParser::SystemVerilogPreParser(TokenStream *input) : SystemVerilogPreParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

SystemVerilogPreParser::SystemVerilogPreParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  SystemVerilogPreParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *systemverilogpreparserParserStaticData->atn, systemverilogpreparserParserStaticData->decisionToDFA, systemverilogpreparserParserStaticData->sharedContextCache, options);
}

SystemVerilogPreParser::~SystemVerilogPreParser() {
  delete _interpreter;
}

const atn::ATN& SystemVerilogPreParser::getATN() const {
  return *systemverilogpreparserParserStaticData->atn;
}

std::string SystemVerilogPreParser::getGrammarFileName() const {
  return "SystemVerilogPreParser.g4";
}

const std::vector<std::string>& SystemVerilogPreParser::getRuleNames() const {
  return systemverilogpreparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& SystemVerilogPreParser::getVocabulary() const {
  return systemverilogpreparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SystemVerilogPreParser::getSerializedATN() const {
  return systemverilogpreparserParserStaticData->serializedATN;
}


//----------------- Source_textContext ------------------------------------------------------------------

SystemVerilogPreParser::Source_textContext::Source_textContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SystemVerilogPreParser::Compiler_directiveContext *> SystemVerilogPreParser::Source_textContext::compiler_directive() {
  return getRuleContexts<SystemVerilogPreParser::Compiler_directiveContext>();
}

SystemVerilogPreParser::Compiler_directiveContext* SystemVerilogPreParser::Source_textContext::compiler_directive(size_t i) {
  return getRuleContext<SystemVerilogPreParser::Compiler_directiveContext>(i);
}


size_t SystemVerilogPreParser::Source_textContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleSource_text;
}

void SystemVerilogPreParser::Source_textContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSource_text(this);
}

void SystemVerilogPreParser::Source_textContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSource_text(this);
}

SystemVerilogPreParser::Source_textContext* SystemVerilogPreParser::source_text() {
  Source_textContext *_localctx = _tracker.createInstance<Source_textContext>(_ctx, getState());
  enterRule(_localctx, 0, SystemVerilogPreParser::RuleSource_text);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(101);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SystemVerilogPreParser::GA) {
      setState(98);
      compiler_directive();
      setState(103);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Compiler_directiveContext ------------------------------------------------------------------

SystemVerilogPreParser::Compiler_directiveContext::Compiler_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SystemVerilogPreParser::Begin_keywords_directiveContext* SystemVerilogPreParser::Compiler_directiveContext::begin_keywords_directive() {
  return getRuleContext<SystemVerilogPreParser::Begin_keywords_directiveContext>(0);
}

SystemVerilogPreParser::Celldefine_directiveContext* SystemVerilogPreParser::Compiler_directiveContext::celldefine_directive() {
  return getRuleContext<SystemVerilogPreParser::Celldefine_directiveContext>(0);
}

SystemVerilogPreParser::Default_nettype_directiveContext* SystemVerilogPreParser::Compiler_directiveContext::default_nettype_directive() {
  return getRuleContext<SystemVerilogPreParser::Default_nettype_directiveContext>(0);
}

SystemVerilogPreParser::End_keywords_directiveContext* SystemVerilogPreParser::Compiler_directiveContext::end_keywords_directive() {
  return getRuleContext<SystemVerilogPreParser::End_keywords_directiveContext>(0);
}

SystemVerilogPreParser::Endcelldefine_directiveContext* SystemVerilogPreParser::Compiler_directiveContext::endcelldefine_directive() {
  return getRuleContext<SystemVerilogPreParser::Endcelldefine_directiveContext>(0);
}

SystemVerilogPreParser::File_directiveContext* SystemVerilogPreParser::Compiler_directiveContext::file_directive() {
  return getRuleContext<SystemVerilogPreParser::File_directiveContext>(0);
}

SystemVerilogPreParser::Ifdef_directiveContext* SystemVerilogPreParser::Compiler_directiveContext::ifdef_directive() {
  return getRuleContext<SystemVerilogPreParser::Ifdef_directiveContext>(0);
}

SystemVerilogPreParser::Ifndef_directiveContext* SystemVerilogPreParser::Compiler_directiveContext::ifndef_directive() {
  return getRuleContext<SystemVerilogPreParser::Ifndef_directiveContext>(0);
}

SystemVerilogPreParser::Include_directiveContext* SystemVerilogPreParser::Compiler_directiveContext::include_directive() {
  return getRuleContext<SystemVerilogPreParser::Include_directiveContext>(0);
}

SystemVerilogPreParser::Line_directiveContext* SystemVerilogPreParser::Compiler_directiveContext::line_directive() {
  return getRuleContext<SystemVerilogPreParser::Line_directiveContext>(0);
}

SystemVerilogPreParser::Line_directive_Context* SystemVerilogPreParser::Compiler_directiveContext::line_directive_() {
  return getRuleContext<SystemVerilogPreParser::Line_directive_Context>(0);
}

SystemVerilogPreParser::Nounconnected_drive_directiveContext* SystemVerilogPreParser::Compiler_directiveContext::nounconnected_drive_directive() {
  return getRuleContext<SystemVerilogPreParser::Nounconnected_drive_directiveContext>(0);
}

SystemVerilogPreParser::Pragma_directiveContext* SystemVerilogPreParser::Compiler_directiveContext::pragma_directive() {
  return getRuleContext<SystemVerilogPreParser::Pragma_directiveContext>(0);
}

SystemVerilogPreParser::Resetall_directiveContext* SystemVerilogPreParser::Compiler_directiveContext::resetall_directive() {
  return getRuleContext<SystemVerilogPreParser::Resetall_directiveContext>(0);
}

SystemVerilogPreParser::Text_macro_definitionContext* SystemVerilogPreParser::Compiler_directiveContext::text_macro_definition() {
  return getRuleContext<SystemVerilogPreParser::Text_macro_definitionContext>(0);
}

SystemVerilogPreParser::Text_macro_usageContext* SystemVerilogPreParser::Compiler_directiveContext::text_macro_usage() {
  return getRuleContext<SystemVerilogPreParser::Text_macro_usageContext>(0);
}

SystemVerilogPreParser::Timescale_directiveContext* SystemVerilogPreParser::Compiler_directiveContext::timescale_directive() {
  return getRuleContext<SystemVerilogPreParser::Timescale_directiveContext>(0);
}

SystemVerilogPreParser::Unconnected_drive_directiveContext* SystemVerilogPreParser::Compiler_directiveContext::unconnected_drive_directive() {
  return getRuleContext<SystemVerilogPreParser::Unconnected_drive_directiveContext>(0);
}

SystemVerilogPreParser::Undef_directiveContext* SystemVerilogPreParser::Compiler_directiveContext::undef_directive() {
  return getRuleContext<SystemVerilogPreParser::Undef_directiveContext>(0);
}

SystemVerilogPreParser::Undefineall_directiveContext* SystemVerilogPreParser::Compiler_directiveContext::undefineall_directive() {
  return getRuleContext<SystemVerilogPreParser::Undefineall_directiveContext>(0);
}


size_t SystemVerilogPreParser::Compiler_directiveContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleCompiler_directive;
}

void SystemVerilogPreParser::Compiler_directiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompiler_directive(this);
}

void SystemVerilogPreParser::Compiler_directiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompiler_directive(this);
}

SystemVerilogPreParser::Compiler_directiveContext* SystemVerilogPreParser::compiler_directive() {
  Compiler_directiveContext *_localctx = _tracker.createInstance<Compiler_directiveContext>(_ctx, getState());
  enterRule(_localctx, 2, SystemVerilogPreParser::RuleCompiler_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(124);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(104);
      begin_keywords_directive();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(105);
      celldefine_directive();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(106);
      default_nettype_directive();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(107);
      end_keywords_directive();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(108);
      endcelldefine_directive();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(109);
      file_directive();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(110);
      ifdef_directive();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(111);
      ifndef_directive();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(112);
      include_directive();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(113);
      line_directive();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(114);
      line_directive_();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(115);
      nounconnected_drive_directive();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(116);
      pragma_directive();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(117);
      resetall_directive();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(118);
      text_macro_definition();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(119);
      text_macro_usage();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(120);
      timescale_directive();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(121);
      unconnected_drive_directive();
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(122);
      undef_directive();
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(123);
      undefineall_directive();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Begin_keywords_directiveContext ------------------------------------------------------------------

SystemVerilogPreParser::Begin_keywords_directiveContext::Begin_keywords_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Begin_keywords_directiveContext::GA() {
  return getToken(SystemVerilogPreParser::GA, 0);
}

tree::TerminalNode* SystemVerilogPreParser::Begin_keywords_directiveContext::BEGIN_KEYWORDS_DIRECTIVE() {
  return getToken(SystemVerilogPreParser::BEGIN_KEYWORDS_DIRECTIVE, 0);
}

std::vector<tree::TerminalNode *> SystemVerilogPreParser::Begin_keywords_directiveContext::DQ() {
  return getTokens(SystemVerilogPreParser::DQ);
}

tree::TerminalNode* SystemVerilogPreParser::Begin_keywords_directiveContext::DQ(size_t i) {
  return getToken(SystemVerilogPreParser::DQ, i);
}

SystemVerilogPreParser::Version_specifierContext* SystemVerilogPreParser::Begin_keywords_directiveContext::version_specifier() {
  return getRuleContext<SystemVerilogPreParser::Version_specifierContext>(0);
}


size_t SystemVerilogPreParser::Begin_keywords_directiveContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleBegin_keywords_directive;
}

void SystemVerilogPreParser::Begin_keywords_directiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBegin_keywords_directive(this);
}

void SystemVerilogPreParser::Begin_keywords_directiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBegin_keywords_directive(this);
}

SystemVerilogPreParser::Begin_keywords_directiveContext* SystemVerilogPreParser::begin_keywords_directive() {
  Begin_keywords_directiveContext *_localctx = _tracker.createInstance<Begin_keywords_directiveContext>(_ctx, getState());
  enterRule(_localctx, 4, SystemVerilogPreParser::RuleBegin_keywords_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    match(SystemVerilogPreParser::GA);
    setState(127);
    match(SystemVerilogPreParser::BEGIN_KEYWORDS_DIRECTIVE);
    setState(128);
    match(SystemVerilogPreParser::DQ);
    setState(129);
    version_specifier();
    setState(130);
    match(SystemVerilogPreParser::DQ);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Celldefine_directiveContext ------------------------------------------------------------------

SystemVerilogPreParser::Celldefine_directiveContext::Celldefine_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Celldefine_directiveContext::GA() {
  return getToken(SystemVerilogPreParser::GA, 0);
}

tree::TerminalNode* SystemVerilogPreParser::Celldefine_directiveContext::CELLDEFINE_DIRECTIVE() {
  return getToken(SystemVerilogPreParser::CELLDEFINE_DIRECTIVE, 0);
}


size_t SystemVerilogPreParser::Celldefine_directiveContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleCelldefine_directive;
}

void SystemVerilogPreParser::Celldefine_directiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCelldefine_directive(this);
}

void SystemVerilogPreParser::Celldefine_directiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCelldefine_directive(this);
}

SystemVerilogPreParser::Celldefine_directiveContext* SystemVerilogPreParser::celldefine_directive() {
  Celldefine_directiveContext *_localctx = _tracker.createInstance<Celldefine_directiveContext>(_ctx, getState());
  enterRule(_localctx, 6, SystemVerilogPreParser::RuleCelldefine_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    match(SystemVerilogPreParser::GA);
    setState(133);
    match(SystemVerilogPreParser::CELLDEFINE_DIRECTIVE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Default_nettype_directiveContext ------------------------------------------------------------------

SystemVerilogPreParser::Default_nettype_directiveContext::Default_nettype_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Default_nettype_directiveContext::GA() {
  return getToken(SystemVerilogPreParser::GA, 0);
}

tree::TerminalNode* SystemVerilogPreParser::Default_nettype_directiveContext::DEFAULT_NETTYPE_DIRECTIVE() {
  return getToken(SystemVerilogPreParser::DEFAULT_NETTYPE_DIRECTIVE, 0);
}

SystemVerilogPreParser::Default_nettype_valueContext* SystemVerilogPreParser::Default_nettype_directiveContext::default_nettype_value() {
  return getRuleContext<SystemVerilogPreParser::Default_nettype_valueContext>(0);
}


size_t SystemVerilogPreParser::Default_nettype_directiveContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleDefault_nettype_directive;
}

void SystemVerilogPreParser::Default_nettype_directiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefault_nettype_directive(this);
}

void SystemVerilogPreParser::Default_nettype_directiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefault_nettype_directive(this);
}

SystemVerilogPreParser::Default_nettype_directiveContext* SystemVerilogPreParser::default_nettype_directive() {
  Default_nettype_directiveContext *_localctx = _tracker.createInstance<Default_nettype_directiveContext>(_ctx, getState());
  enterRule(_localctx, 8, SystemVerilogPreParser::RuleDefault_nettype_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    match(SystemVerilogPreParser::GA);
    setState(136);
    match(SystemVerilogPreParser::DEFAULT_NETTYPE_DIRECTIVE);
    setState(137);
    default_nettype_value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Default_nettype_valueContext ------------------------------------------------------------------

SystemVerilogPreParser::Default_nettype_valueContext::Default_nettype_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Default_nettype_valueContext::DEFAULT_NETTYPE_VALUE() {
  return getToken(SystemVerilogPreParser::DEFAULT_NETTYPE_VALUE, 0);
}


size_t SystemVerilogPreParser::Default_nettype_valueContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleDefault_nettype_value;
}

void SystemVerilogPreParser::Default_nettype_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefault_nettype_value(this);
}

void SystemVerilogPreParser::Default_nettype_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefault_nettype_value(this);
}

SystemVerilogPreParser::Default_nettype_valueContext* SystemVerilogPreParser::default_nettype_value() {
  Default_nettype_valueContext *_localctx = _tracker.createInstance<Default_nettype_valueContext>(_ctx, getState());
  enterRule(_localctx, 10, SystemVerilogPreParser::RuleDefault_nettype_value);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(139);
    match(SystemVerilogPreParser::DEFAULT_NETTYPE_VALUE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Else_directiveContext ------------------------------------------------------------------

SystemVerilogPreParser::Else_directiveContext::Else_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Else_directiveContext::GA() {
  return getToken(SystemVerilogPreParser::GA, 0);
}

tree::TerminalNode* SystemVerilogPreParser::Else_directiveContext::ELSE_DIRECTIVE() {
  return getToken(SystemVerilogPreParser::ELSE_DIRECTIVE, 0);
}

SystemVerilogPreParser::Group_of_linesContext* SystemVerilogPreParser::Else_directiveContext::group_of_lines() {
  return getRuleContext<SystemVerilogPreParser::Group_of_linesContext>(0);
}


size_t SystemVerilogPreParser::Else_directiveContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleElse_directive;
}

void SystemVerilogPreParser::Else_directiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElse_directive(this);
}

void SystemVerilogPreParser::Else_directiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElse_directive(this);
}

SystemVerilogPreParser::Else_directiveContext* SystemVerilogPreParser::else_directive() {
  Else_directiveContext *_localctx = _tracker.createInstance<Else_directiveContext>(_ctx, getState());
  enterRule(_localctx, 12, SystemVerilogPreParser::RuleElse_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(141);
    match(SystemVerilogPreParser::GA);
    setState(142);
    match(SystemVerilogPreParser::ELSE_DIRECTIVE);
    setState(143);
    group_of_lines();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Elsif_directiveContext ------------------------------------------------------------------

SystemVerilogPreParser::Elsif_directiveContext::Elsif_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Elsif_directiveContext::GA() {
  return getToken(SystemVerilogPreParser::GA, 0);
}

tree::TerminalNode* SystemVerilogPreParser::Elsif_directiveContext::ELSIF_DIRECTIVE() {
  return getToken(SystemVerilogPreParser::ELSIF_DIRECTIVE, 0);
}

SystemVerilogPreParser::Macro_identifierContext* SystemVerilogPreParser::Elsif_directiveContext::macro_identifier() {
  return getRuleContext<SystemVerilogPreParser::Macro_identifierContext>(0);
}

SystemVerilogPreParser::Group_of_linesContext* SystemVerilogPreParser::Elsif_directiveContext::group_of_lines() {
  return getRuleContext<SystemVerilogPreParser::Group_of_linesContext>(0);
}


size_t SystemVerilogPreParser::Elsif_directiveContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleElsif_directive;
}

void SystemVerilogPreParser::Elsif_directiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElsif_directive(this);
}

void SystemVerilogPreParser::Elsif_directiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElsif_directive(this);
}

SystemVerilogPreParser::Elsif_directiveContext* SystemVerilogPreParser::elsif_directive() {
  Elsif_directiveContext *_localctx = _tracker.createInstance<Elsif_directiveContext>(_ctx, getState());
  enterRule(_localctx, 14, SystemVerilogPreParser::RuleElsif_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(145);
    match(SystemVerilogPreParser::GA);
    setState(146);
    match(SystemVerilogPreParser::ELSIF_DIRECTIVE);
    setState(147);
    macro_identifier();
    setState(148);
    group_of_lines();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- End_keywords_directiveContext ------------------------------------------------------------------

SystemVerilogPreParser::End_keywords_directiveContext::End_keywords_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::End_keywords_directiveContext::GA() {
  return getToken(SystemVerilogPreParser::GA, 0);
}

tree::TerminalNode* SystemVerilogPreParser::End_keywords_directiveContext::END_KEYWORDS_DIRECTIVE() {
  return getToken(SystemVerilogPreParser::END_KEYWORDS_DIRECTIVE, 0);
}


size_t SystemVerilogPreParser::End_keywords_directiveContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleEnd_keywords_directive;
}

void SystemVerilogPreParser::End_keywords_directiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnd_keywords_directive(this);
}

void SystemVerilogPreParser::End_keywords_directiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnd_keywords_directive(this);
}

SystemVerilogPreParser::End_keywords_directiveContext* SystemVerilogPreParser::end_keywords_directive() {
  End_keywords_directiveContext *_localctx = _tracker.createInstance<End_keywords_directiveContext>(_ctx, getState());
  enterRule(_localctx, 16, SystemVerilogPreParser::RuleEnd_keywords_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    match(SystemVerilogPreParser::GA);
    setState(151);
    match(SystemVerilogPreParser::END_KEYWORDS_DIRECTIVE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Endcelldefine_directiveContext ------------------------------------------------------------------

SystemVerilogPreParser::Endcelldefine_directiveContext::Endcelldefine_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Endcelldefine_directiveContext::GA() {
  return getToken(SystemVerilogPreParser::GA, 0);
}

tree::TerminalNode* SystemVerilogPreParser::Endcelldefine_directiveContext::ENDCELLDEFINE_DIRECTIVE() {
  return getToken(SystemVerilogPreParser::ENDCELLDEFINE_DIRECTIVE, 0);
}


size_t SystemVerilogPreParser::Endcelldefine_directiveContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleEndcelldefine_directive;
}

void SystemVerilogPreParser::Endcelldefine_directiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEndcelldefine_directive(this);
}

void SystemVerilogPreParser::Endcelldefine_directiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEndcelldefine_directive(this);
}

SystemVerilogPreParser::Endcelldefine_directiveContext* SystemVerilogPreParser::endcelldefine_directive() {
  Endcelldefine_directiveContext *_localctx = _tracker.createInstance<Endcelldefine_directiveContext>(_ctx, getState());
  enterRule(_localctx, 18, SystemVerilogPreParser::RuleEndcelldefine_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
    match(SystemVerilogPreParser::GA);
    setState(154);
    match(SystemVerilogPreParser::ENDCELLDEFINE_DIRECTIVE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Endif_directiveContext ------------------------------------------------------------------

SystemVerilogPreParser::Endif_directiveContext::Endif_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Endif_directiveContext::GA() {
  return getToken(SystemVerilogPreParser::GA, 0);
}

tree::TerminalNode* SystemVerilogPreParser::Endif_directiveContext::ENDIF_DIRECTIVE() {
  return getToken(SystemVerilogPreParser::ENDIF_DIRECTIVE, 0);
}


size_t SystemVerilogPreParser::Endif_directiveContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleEndif_directive;
}

void SystemVerilogPreParser::Endif_directiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEndif_directive(this);
}

void SystemVerilogPreParser::Endif_directiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEndif_directive(this);
}

SystemVerilogPreParser::Endif_directiveContext* SystemVerilogPreParser::endif_directive() {
  Endif_directiveContext *_localctx = _tracker.createInstance<Endif_directiveContext>(_ctx, getState());
  enterRule(_localctx, 20, SystemVerilogPreParser::RuleEndif_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    match(SystemVerilogPreParser::GA);
    setState(157);
    match(SystemVerilogPreParser::ENDIF_DIRECTIVE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- File_directiveContext ------------------------------------------------------------------

SystemVerilogPreParser::File_directiveContext::File_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::File_directiveContext::GA() {
  return getToken(SystemVerilogPreParser::GA, 0);
}

tree::TerminalNode* SystemVerilogPreParser::File_directiveContext::FILE_DIRECTIVE() {
  return getToken(SystemVerilogPreParser::FILE_DIRECTIVE, 0);
}


size_t SystemVerilogPreParser::File_directiveContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleFile_directive;
}

void SystemVerilogPreParser::File_directiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFile_directive(this);
}

void SystemVerilogPreParser::File_directiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFile_directive(this);
}

SystemVerilogPreParser::File_directiveContext* SystemVerilogPreParser::file_directive() {
  File_directiveContext *_localctx = _tracker.createInstance<File_directiveContext>(_ctx, getState());
  enterRule(_localctx, 22, SystemVerilogPreParser::RuleFile_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(159);
    match(SystemVerilogPreParser::GA);
    setState(160);
    match(SystemVerilogPreParser::FILE_DIRECTIVE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FilenameContext ------------------------------------------------------------------

SystemVerilogPreParser::FilenameContext::FilenameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::FilenameContext::FILENAME() {
  return getToken(SystemVerilogPreParser::FILENAME, 0);
}


size_t SystemVerilogPreParser::FilenameContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleFilename;
}

void SystemVerilogPreParser::FilenameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFilename(this);
}

void SystemVerilogPreParser::FilenameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFilename(this);
}

SystemVerilogPreParser::FilenameContext* SystemVerilogPreParser::filename() {
  FilenameContext *_localctx = _tracker.createInstance<FilenameContext>(_ctx, getState());
  enterRule(_localctx, 24, SystemVerilogPreParser::RuleFilename);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    match(SystemVerilogPreParser::FILENAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Group_of_linesContext ------------------------------------------------------------------

SystemVerilogPreParser::Group_of_linesContext::Group_of_linesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SystemVerilogPreParser::Source_text_Context *> SystemVerilogPreParser::Group_of_linesContext::source_text_() {
  return getRuleContexts<SystemVerilogPreParser::Source_text_Context>();
}

SystemVerilogPreParser::Source_text_Context* SystemVerilogPreParser::Group_of_linesContext::source_text_(size_t i) {
  return getRuleContext<SystemVerilogPreParser::Source_text_Context>(i);
}

std::vector<SystemVerilogPreParser::Compiler_directiveContext *> SystemVerilogPreParser::Group_of_linesContext::compiler_directive() {
  return getRuleContexts<SystemVerilogPreParser::Compiler_directiveContext>();
}

SystemVerilogPreParser::Compiler_directiveContext* SystemVerilogPreParser::Group_of_linesContext::compiler_directive(size_t i) {
  return getRuleContext<SystemVerilogPreParser::Compiler_directiveContext>(i);
}


size_t SystemVerilogPreParser::Group_of_linesContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleGroup_of_lines;
}

void SystemVerilogPreParser::Group_of_linesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGroup_of_lines(this);
}

void SystemVerilogPreParser::Group_of_linesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGroup_of_lines(this);
}

SystemVerilogPreParser::Group_of_linesContext* SystemVerilogPreParser::group_of_lines() {
  Group_of_linesContext *_localctx = _tracker.createInstance<Group_of_linesContext>(_ctx, getState());
  enterRule(_localctx, 26, SystemVerilogPreParser::RuleGroup_of_lines);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(168);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(166);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case SystemVerilogPreParser::SOURCE_TEXT: {
            setState(164);
            source_text_();
            break;
          }

          case SystemVerilogPreParser::GA: {
            setState(165);
            compiler_directive();
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(170);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

SystemVerilogPreParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::IdentifierContext::SIMPLE_IDENTIFIER() {
  return getToken(SystemVerilogPreParser::SIMPLE_IDENTIFIER, 0);
}


size_t SystemVerilogPreParser::IdentifierContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleIdentifier;
}

void SystemVerilogPreParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}

void SystemVerilogPreParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}

SystemVerilogPreParser::IdentifierContext* SystemVerilogPreParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 28, SystemVerilogPreParser::RuleIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
    match(SystemVerilogPreParser::SIMPLE_IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ifdef_directiveContext ------------------------------------------------------------------

SystemVerilogPreParser::Ifdef_directiveContext::Ifdef_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Ifdef_directiveContext::GA() {
  return getToken(SystemVerilogPreParser::GA, 0);
}

tree::TerminalNode* SystemVerilogPreParser::Ifdef_directiveContext::IFDEF_DIRECTIVE() {
  return getToken(SystemVerilogPreParser::IFDEF_DIRECTIVE, 0);
}

SystemVerilogPreParser::Macro_identifierContext* SystemVerilogPreParser::Ifdef_directiveContext::macro_identifier() {
  return getRuleContext<SystemVerilogPreParser::Macro_identifierContext>(0);
}

SystemVerilogPreParser::Group_of_linesContext* SystemVerilogPreParser::Ifdef_directiveContext::group_of_lines() {
  return getRuleContext<SystemVerilogPreParser::Group_of_linesContext>(0);
}

SystemVerilogPreParser::Endif_directiveContext* SystemVerilogPreParser::Ifdef_directiveContext::endif_directive() {
  return getRuleContext<SystemVerilogPreParser::Endif_directiveContext>(0);
}

std::vector<SystemVerilogPreParser::Elsif_directiveContext *> SystemVerilogPreParser::Ifdef_directiveContext::elsif_directive() {
  return getRuleContexts<SystemVerilogPreParser::Elsif_directiveContext>();
}

SystemVerilogPreParser::Elsif_directiveContext* SystemVerilogPreParser::Ifdef_directiveContext::elsif_directive(size_t i) {
  return getRuleContext<SystemVerilogPreParser::Elsif_directiveContext>(i);
}

SystemVerilogPreParser::Else_directiveContext* SystemVerilogPreParser::Ifdef_directiveContext::else_directive() {
  return getRuleContext<SystemVerilogPreParser::Else_directiveContext>(0);
}


size_t SystemVerilogPreParser::Ifdef_directiveContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleIfdef_directive;
}

void SystemVerilogPreParser::Ifdef_directiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfdef_directive(this);
}

void SystemVerilogPreParser::Ifdef_directiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfdef_directive(this);
}

SystemVerilogPreParser::Ifdef_directiveContext* SystemVerilogPreParser::ifdef_directive() {
  Ifdef_directiveContext *_localctx = _tracker.createInstance<Ifdef_directiveContext>(_ctx, getState());
  enterRule(_localctx, 30, SystemVerilogPreParser::RuleIfdef_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(173);
    match(SystemVerilogPreParser::GA);
    setState(174);
    match(SystemVerilogPreParser::IFDEF_DIRECTIVE);
    setState(175);
    macro_identifier();
    setState(176);
    group_of_lines();
    setState(180);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(177);
        elsif_directive(); 
      }
      setState(182);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
    setState(184);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(183);
      else_directive();
      break;
    }

    default:
      break;
    }
    setState(186);
    endif_directive();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ifndef_directiveContext ------------------------------------------------------------------

SystemVerilogPreParser::Ifndef_directiveContext::Ifndef_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Ifndef_directiveContext::GA() {
  return getToken(SystemVerilogPreParser::GA, 0);
}

tree::TerminalNode* SystemVerilogPreParser::Ifndef_directiveContext::IFNDEF_DIRECTIVE() {
  return getToken(SystemVerilogPreParser::IFNDEF_DIRECTIVE, 0);
}

SystemVerilogPreParser::Macro_identifierContext* SystemVerilogPreParser::Ifndef_directiveContext::macro_identifier() {
  return getRuleContext<SystemVerilogPreParser::Macro_identifierContext>(0);
}

SystemVerilogPreParser::Group_of_linesContext* SystemVerilogPreParser::Ifndef_directiveContext::group_of_lines() {
  return getRuleContext<SystemVerilogPreParser::Group_of_linesContext>(0);
}

SystemVerilogPreParser::Endif_directiveContext* SystemVerilogPreParser::Ifndef_directiveContext::endif_directive() {
  return getRuleContext<SystemVerilogPreParser::Endif_directiveContext>(0);
}

std::vector<SystemVerilogPreParser::Elsif_directiveContext *> SystemVerilogPreParser::Ifndef_directiveContext::elsif_directive() {
  return getRuleContexts<SystemVerilogPreParser::Elsif_directiveContext>();
}

SystemVerilogPreParser::Elsif_directiveContext* SystemVerilogPreParser::Ifndef_directiveContext::elsif_directive(size_t i) {
  return getRuleContext<SystemVerilogPreParser::Elsif_directiveContext>(i);
}

SystemVerilogPreParser::Else_directiveContext* SystemVerilogPreParser::Ifndef_directiveContext::else_directive() {
  return getRuleContext<SystemVerilogPreParser::Else_directiveContext>(0);
}


size_t SystemVerilogPreParser::Ifndef_directiveContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleIfndef_directive;
}

void SystemVerilogPreParser::Ifndef_directiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfndef_directive(this);
}

void SystemVerilogPreParser::Ifndef_directiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfndef_directive(this);
}

SystemVerilogPreParser::Ifndef_directiveContext* SystemVerilogPreParser::ifndef_directive() {
  Ifndef_directiveContext *_localctx = _tracker.createInstance<Ifndef_directiveContext>(_ctx, getState());
  enterRule(_localctx, 32, SystemVerilogPreParser::RuleIfndef_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(188);
    match(SystemVerilogPreParser::GA);
    setState(189);
    match(SystemVerilogPreParser::IFNDEF_DIRECTIVE);
    setState(190);
    macro_identifier();
    setState(191);
    group_of_lines();
    setState(195);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(192);
        elsif_directive(); 
      }
      setState(197);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
    setState(199);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(198);
      else_directive();
      break;
    }

    default:
      break;
    }
    setState(201);
    endif_directive();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Include_directiveContext ------------------------------------------------------------------

SystemVerilogPreParser::Include_directiveContext::Include_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Include_directiveContext::GA() {
  return getToken(SystemVerilogPreParser::GA, 0);
}

tree::TerminalNode* SystemVerilogPreParser::Include_directiveContext::INCLUDE_DIRECTIVE() {
  return getToken(SystemVerilogPreParser::INCLUDE_DIRECTIVE, 0);
}

std::vector<tree::TerminalNode *> SystemVerilogPreParser::Include_directiveContext::DQ() {
  return getTokens(SystemVerilogPreParser::DQ);
}

tree::TerminalNode* SystemVerilogPreParser::Include_directiveContext::DQ(size_t i) {
  return getToken(SystemVerilogPreParser::DQ, i);
}

SystemVerilogPreParser::FilenameContext* SystemVerilogPreParser::Include_directiveContext::filename() {
  return getRuleContext<SystemVerilogPreParser::FilenameContext>(0);
}

tree::TerminalNode* SystemVerilogPreParser::Include_directiveContext::LT() {
  return getToken(SystemVerilogPreParser::LT, 0);
}

tree::TerminalNode* SystemVerilogPreParser::Include_directiveContext::GT() {
  return getToken(SystemVerilogPreParser::GT, 0);
}

SystemVerilogPreParser::Text_macro_usageContext* SystemVerilogPreParser::Include_directiveContext::text_macro_usage() {
  return getRuleContext<SystemVerilogPreParser::Text_macro_usageContext>(0);
}


size_t SystemVerilogPreParser::Include_directiveContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleInclude_directive;
}

void SystemVerilogPreParser::Include_directiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInclude_directive(this);
}

void SystemVerilogPreParser::Include_directiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInclude_directive(this);
}

SystemVerilogPreParser::Include_directiveContext* SystemVerilogPreParser::include_directive() {
  Include_directiveContext *_localctx = _tracker.createInstance<Include_directiveContext>(_ctx, getState());
  enterRule(_localctx, 34, SystemVerilogPreParser::RuleInclude_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(203);
    match(SystemVerilogPreParser::GA);
    setState(204);
    match(SystemVerilogPreParser::INCLUDE_DIRECTIVE);
    setState(214);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SystemVerilogPreParser::DQ: {
        setState(205);
        match(SystemVerilogPreParser::DQ);
        setState(206);
        filename();
        setState(207);
        match(SystemVerilogPreParser::DQ);
        break;
      }

      case SystemVerilogPreParser::LT: {
        setState(209);
        match(SystemVerilogPreParser::LT);
        setState(210);
        filename();
        setState(211);
        match(SystemVerilogPreParser::GT);
        break;
      }

      case SystemVerilogPreParser::GA: {
        setState(213);
        text_macro_usage();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LevelContext ------------------------------------------------------------------

SystemVerilogPreParser::LevelContext::LevelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::LevelContext::UNSIGNED_NUMBER() {
  return getToken(SystemVerilogPreParser::UNSIGNED_NUMBER, 0);
}


size_t SystemVerilogPreParser::LevelContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleLevel;
}

void SystemVerilogPreParser::LevelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLevel(this);
}

void SystemVerilogPreParser::LevelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLevel(this);
}

SystemVerilogPreParser::LevelContext* SystemVerilogPreParser::level() {
  LevelContext *_localctx = _tracker.createInstance<LevelContext>(_ctx, getState());
  enterRule(_localctx, 36, SystemVerilogPreParser::RuleLevel);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(216);
    match(SystemVerilogPreParser::UNSIGNED_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Line_directiveContext ------------------------------------------------------------------

SystemVerilogPreParser::Line_directiveContext::Line_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Line_directiveContext::GA() {
  return getToken(SystemVerilogPreParser::GA, 0);
}

tree::TerminalNode* SystemVerilogPreParser::Line_directiveContext::LINE_DIRECTIVE() {
  return getToken(SystemVerilogPreParser::LINE_DIRECTIVE, 0);
}

SystemVerilogPreParser::NumberContext* SystemVerilogPreParser::Line_directiveContext::number() {
  return getRuleContext<SystemVerilogPreParser::NumberContext>(0);
}

std::vector<tree::TerminalNode *> SystemVerilogPreParser::Line_directiveContext::DQ() {
  return getTokens(SystemVerilogPreParser::DQ);
}

tree::TerminalNode* SystemVerilogPreParser::Line_directiveContext::DQ(size_t i) {
  return getToken(SystemVerilogPreParser::DQ, i);
}

SystemVerilogPreParser::FilenameContext* SystemVerilogPreParser::Line_directiveContext::filename() {
  return getRuleContext<SystemVerilogPreParser::FilenameContext>(0);
}

SystemVerilogPreParser::LevelContext* SystemVerilogPreParser::Line_directiveContext::level() {
  return getRuleContext<SystemVerilogPreParser::LevelContext>(0);
}


size_t SystemVerilogPreParser::Line_directiveContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleLine_directive;
}

void SystemVerilogPreParser::Line_directiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLine_directive(this);
}

void SystemVerilogPreParser::Line_directiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLine_directive(this);
}

SystemVerilogPreParser::Line_directiveContext* SystemVerilogPreParser::line_directive() {
  Line_directiveContext *_localctx = _tracker.createInstance<Line_directiveContext>(_ctx, getState());
  enterRule(_localctx, 38, SystemVerilogPreParser::RuleLine_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(218);
    match(SystemVerilogPreParser::GA);
    setState(219);
    match(SystemVerilogPreParser::LINE_DIRECTIVE);
    setState(220);
    number();
    setState(221);
    match(SystemVerilogPreParser::DQ);
    setState(222);
    filename();
    setState(223);
    match(SystemVerilogPreParser::DQ);
    setState(224);
    level();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Line_directive_Context ------------------------------------------------------------------

SystemVerilogPreParser::Line_directive_Context::Line_directive_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Line_directive_Context::GA() {
  return getToken(SystemVerilogPreParser::GA, 0);
}

tree::TerminalNode* SystemVerilogPreParser::Line_directive_Context::LINE_DIRECTIVE_() {
  return getToken(SystemVerilogPreParser::LINE_DIRECTIVE_, 0);
}


size_t SystemVerilogPreParser::Line_directive_Context::getRuleIndex() const {
  return SystemVerilogPreParser::RuleLine_directive_;
}

void SystemVerilogPreParser::Line_directive_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLine_directive_(this);
}

void SystemVerilogPreParser::Line_directive_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLine_directive_(this);
}

SystemVerilogPreParser::Line_directive_Context* SystemVerilogPreParser::line_directive_() {
  Line_directive_Context *_localctx = _tracker.createInstance<Line_directive_Context>(_ctx, getState());
  enterRule(_localctx, 40, SystemVerilogPreParser::RuleLine_directive_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(226);
    match(SystemVerilogPreParser::GA);
    setState(227);
    match(SystemVerilogPreParser::LINE_DIRECTIVE_);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Macro_delimiterContext ------------------------------------------------------------------

SystemVerilogPreParser::Macro_delimiterContext::Macro_delimiterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Macro_delimiterContext::MACRO_DELIMITER() {
  return getToken(SystemVerilogPreParser::MACRO_DELIMITER, 0);
}


size_t SystemVerilogPreParser::Macro_delimiterContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleMacro_delimiter;
}

void SystemVerilogPreParser::Macro_delimiterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMacro_delimiter(this);
}

void SystemVerilogPreParser::Macro_delimiterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMacro_delimiter(this);
}

SystemVerilogPreParser::Macro_delimiterContext* SystemVerilogPreParser::macro_delimiter() {
  Macro_delimiterContext *_localctx = _tracker.createInstance<Macro_delimiterContext>(_ctx, getState());
  enterRule(_localctx, 42, SystemVerilogPreParser::RuleMacro_delimiter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    match(SystemVerilogPreParser::MACRO_DELIMITER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Macro_esc_newlineContext ------------------------------------------------------------------

SystemVerilogPreParser::Macro_esc_newlineContext::Macro_esc_newlineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Macro_esc_newlineContext::MACRO_ESC_NEWLINE() {
  return getToken(SystemVerilogPreParser::MACRO_ESC_NEWLINE, 0);
}


size_t SystemVerilogPreParser::Macro_esc_newlineContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleMacro_esc_newline;
}

void SystemVerilogPreParser::Macro_esc_newlineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMacro_esc_newline(this);
}

void SystemVerilogPreParser::Macro_esc_newlineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMacro_esc_newline(this);
}

SystemVerilogPreParser::Macro_esc_newlineContext* SystemVerilogPreParser::macro_esc_newline() {
  Macro_esc_newlineContext *_localctx = _tracker.createInstance<Macro_esc_newlineContext>(_ctx, getState());
  enterRule(_localctx, 44, SystemVerilogPreParser::RuleMacro_esc_newline);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(231);
    match(SystemVerilogPreParser::MACRO_ESC_NEWLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Macro_esc_quoteContext ------------------------------------------------------------------

SystemVerilogPreParser::Macro_esc_quoteContext::Macro_esc_quoteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Macro_esc_quoteContext::MACRO_ESC_QUOTE() {
  return getToken(SystemVerilogPreParser::MACRO_ESC_QUOTE, 0);
}


size_t SystemVerilogPreParser::Macro_esc_quoteContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleMacro_esc_quote;
}

void SystemVerilogPreParser::Macro_esc_quoteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMacro_esc_quote(this);
}

void SystemVerilogPreParser::Macro_esc_quoteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMacro_esc_quote(this);
}

SystemVerilogPreParser::Macro_esc_quoteContext* SystemVerilogPreParser::macro_esc_quote() {
  Macro_esc_quoteContext *_localctx = _tracker.createInstance<Macro_esc_quoteContext>(_ctx, getState());
  enterRule(_localctx, 46, SystemVerilogPreParser::RuleMacro_esc_quote);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(233);
    match(SystemVerilogPreParser::MACRO_ESC_QUOTE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Macro_identifierContext ------------------------------------------------------------------

SystemVerilogPreParser::Macro_identifierContext::Macro_identifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Macro_identifierContext::MACRO_IDENTIFIER() {
  return getToken(SystemVerilogPreParser::MACRO_IDENTIFIER, 0);
}


size_t SystemVerilogPreParser::Macro_identifierContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleMacro_identifier;
}

void SystemVerilogPreParser::Macro_identifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMacro_identifier(this);
}

void SystemVerilogPreParser::Macro_identifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMacro_identifier(this);
}

SystemVerilogPreParser::Macro_identifierContext* SystemVerilogPreParser::macro_identifier() {
  Macro_identifierContext *_localctx = _tracker.createInstance<Macro_identifierContext>(_ctx, getState());
  enterRule(_localctx, 48, SystemVerilogPreParser::RuleMacro_identifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(235);
    match(SystemVerilogPreParser::MACRO_IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Macro_nameContext ------------------------------------------------------------------

SystemVerilogPreParser::Macro_nameContext::Macro_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Macro_nameContext::MACRO_NAME() {
  return getToken(SystemVerilogPreParser::MACRO_NAME, 0);
}


size_t SystemVerilogPreParser::Macro_nameContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleMacro_name;
}

void SystemVerilogPreParser::Macro_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMacro_name(this);
}

void SystemVerilogPreParser::Macro_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMacro_name(this);
}

SystemVerilogPreParser::Macro_nameContext* SystemVerilogPreParser::macro_name() {
  Macro_nameContext *_localctx = _tracker.createInstance<Macro_nameContext>(_ctx, getState());
  enterRule(_localctx, 50, SystemVerilogPreParser::RuleMacro_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(237);
    match(SystemVerilogPreParser::MACRO_NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Macro_quoteContext ------------------------------------------------------------------

SystemVerilogPreParser::Macro_quoteContext::Macro_quoteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Macro_quoteContext::MACRO_QUOTE() {
  return getToken(SystemVerilogPreParser::MACRO_QUOTE, 0);
}


size_t SystemVerilogPreParser::Macro_quoteContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleMacro_quote;
}

void SystemVerilogPreParser::Macro_quoteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMacro_quote(this);
}

void SystemVerilogPreParser::Macro_quoteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMacro_quote(this);
}

SystemVerilogPreParser::Macro_quoteContext* SystemVerilogPreParser::macro_quote() {
  Macro_quoteContext *_localctx = _tracker.createInstance<Macro_quoteContext>(_ctx, getState());
  enterRule(_localctx, 52, SystemVerilogPreParser::RuleMacro_quote);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(239);
    match(SystemVerilogPreParser::MACRO_QUOTE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Macro_textContext ------------------------------------------------------------------

SystemVerilogPreParser::Macro_textContext::Macro_textContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SystemVerilogPreParser::Macro_textContext::MACRO_TEXT() {
  return getTokens(SystemVerilogPreParser::MACRO_TEXT);
}

tree::TerminalNode* SystemVerilogPreParser::Macro_textContext::MACRO_TEXT(size_t i) {
  return getToken(SystemVerilogPreParser::MACRO_TEXT, i);
}

std::vector<SystemVerilogPreParser::Macro_delimiterContext *> SystemVerilogPreParser::Macro_textContext::macro_delimiter() {
  return getRuleContexts<SystemVerilogPreParser::Macro_delimiterContext>();
}

SystemVerilogPreParser::Macro_delimiterContext* SystemVerilogPreParser::Macro_textContext::macro_delimiter(size_t i) {
  return getRuleContext<SystemVerilogPreParser::Macro_delimiterContext>(i);
}

std::vector<SystemVerilogPreParser::Macro_esc_newlineContext *> SystemVerilogPreParser::Macro_textContext::macro_esc_newline() {
  return getRuleContexts<SystemVerilogPreParser::Macro_esc_newlineContext>();
}

SystemVerilogPreParser::Macro_esc_newlineContext* SystemVerilogPreParser::Macro_textContext::macro_esc_newline(size_t i) {
  return getRuleContext<SystemVerilogPreParser::Macro_esc_newlineContext>(i);
}

std::vector<SystemVerilogPreParser::Macro_esc_quoteContext *> SystemVerilogPreParser::Macro_textContext::macro_esc_quote() {
  return getRuleContexts<SystemVerilogPreParser::Macro_esc_quoteContext>();
}

SystemVerilogPreParser::Macro_esc_quoteContext* SystemVerilogPreParser::Macro_textContext::macro_esc_quote(size_t i) {
  return getRuleContext<SystemVerilogPreParser::Macro_esc_quoteContext>(i);
}

std::vector<SystemVerilogPreParser::Macro_quoteContext *> SystemVerilogPreParser::Macro_textContext::macro_quote() {
  return getRuleContexts<SystemVerilogPreParser::Macro_quoteContext>();
}

SystemVerilogPreParser::Macro_quoteContext* SystemVerilogPreParser::Macro_textContext::macro_quote(size_t i) {
  return getRuleContext<SystemVerilogPreParser::Macro_quoteContext>(i);
}

std::vector<SystemVerilogPreParser::String_literalContext *> SystemVerilogPreParser::Macro_textContext::string_literal() {
  return getRuleContexts<SystemVerilogPreParser::String_literalContext>();
}

SystemVerilogPreParser::String_literalContext* SystemVerilogPreParser::Macro_textContext::string_literal(size_t i) {
  return getRuleContext<SystemVerilogPreParser::String_literalContext>(i);
}


size_t SystemVerilogPreParser::Macro_textContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleMacro_text;
}

void SystemVerilogPreParser::Macro_textContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMacro_text(this);
}

void SystemVerilogPreParser::Macro_textContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMacro_text(this);
}

SystemVerilogPreParser::Macro_textContext* SystemVerilogPreParser::macro_text() {
  Macro_textContext *_localctx = _tracker.createInstance<Macro_textContext>(_ctx, getState());
  enterRule(_localctx, 54, SystemVerilogPreParser::RuleMacro_text);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(249);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la - 366) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 366)) & 545357767376897) != 0) {
      setState(247);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SystemVerilogPreParser::MACRO_TEXT: {
          setState(241);
          match(SystemVerilogPreParser::MACRO_TEXT);
          break;
        }

        case SystemVerilogPreParser::MACRO_DELIMITER: {
          setState(242);
          macro_delimiter();
          break;
        }

        case SystemVerilogPreParser::MACRO_ESC_NEWLINE: {
          setState(243);
          macro_esc_newline();
          break;
        }

        case SystemVerilogPreParser::MACRO_ESC_QUOTE: {
          setState(244);
          macro_esc_quote();
          break;
        }

        case SystemVerilogPreParser::MACRO_QUOTE: {
          setState(245);
          macro_quote();
          break;
        }

        case SystemVerilogPreParser::STRING_LITERAL: {
          setState(246);
          string_literal();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(251);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Macro_usageContext ------------------------------------------------------------------

SystemVerilogPreParser::Macro_usageContext::Macro_usageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Macro_usageContext::MACRO_USAGE() {
  return getToken(SystemVerilogPreParser::MACRO_USAGE, 0);
}


size_t SystemVerilogPreParser::Macro_usageContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleMacro_usage;
}

void SystemVerilogPreParser::Macro_usageContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMacro_usage(this);
}

void SystemVerilogPreParser::Macro_usageContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMacro_usage(this);
}

SystemVerilogPreParser::Macro_usageContext* SystemVerilogPreParser::macro_usage() {
  Macro_usageContext *_localctx = _tracker.createInstance<Macro_usageContext>(_ctx, getState());
  enterRule(_localctx, 56, SystemVerilogPreParser::RuleMacro_usage);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(252);
    match(SystemVerilogPreParser::MACRO_USAGE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Nounconnected_drive_directiveContext ------------------------------------------------------------------

SystemVerilogPreParser::Nounconnected_drive_directiveContext::Nounconnected_drive_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Nounconnected_drive_directiveContext::GA() {
  return getToken(SystemVerilogPreParser::GA, 0);
}

tree::TerminalNode* SystemVerilogPreParser::Nounconnected_drive_directiveContext::NOUNCONNECTED_DRIVE_DIRECTIVE() {
  return getToken(SystemVerilogPreParser::NOUNCONNECTED_DRIVE_DIRECTIVE, 0);
}


size_t SystemVerilogPreParser::Nounconnected_drive_directiveContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleNounconnected_drive_directive;
}

void SystemVerilogPreParser::Nounconnected_drive_directiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNounconnected_drive_directive(this);
}

void SystemVerilogPreParser::Nounconnected_drive_directiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNounconnected_drive_directive(this);
}

SystemVerilogPreParser::Nounconnected_drive_directiveContext* SystemVerilogPreParser::nounconnected_drive_directive() {
  Nounconnected_drive_directiveContext *_localctx = _tracker.createInstance<Nounconnected_drive_directiveContext>(_ctx, getState());
  enterRule(_localctx, 58, SystemVerilogPreParser::RuleNounconnected_drive_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(254);
    match(SystemVerilogPreParser::GA);
    setState(255);
    match(SystemVerilogPreParser::NOUNCONNECTED_DRIVE_DIRECTIVE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

SystemVerilogPreParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::NumberContext::UNSIGNED_NUMBER() {
  return getToken(SystemVerilogPreParser::UNSIGNED_NUMBER, 0);
}


size_t SystemVerilogPreParser::NumberContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleNumber;
}

void SystemVerilogPreParser::NumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber(this);
}

void SystemVerilogPreParser::NumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber(this);
}

SystemVerilogPreParser::NumberContext* SystemVerilogPreParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 60, SystemVerilogPreParser::RuleNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(257);
    match(SystemVerilogPreParser::UNSIGNED_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pragma_directiveContext ------------------------------------------------------------------

SystemVerilogPreParser::Pragma_directiveContext::Pragma_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Pragma_directiveContext::GA() {
  return getToken(SystemVerilogPreParser::GA, 0);
}

tree::TerminalNode* SystemVerilogPreParser::Pragma_directiveContext::PRAGMA_DIRECTIVE() {
  return getToken(SystemVerilogPreParser::PRAGMA_DIRECTIVE, 0);
}

SystemVerilogPreParser::Pragma_nameContext* SystemVerilogPreParser::Pragma_directiveContext::pragma_name() {
  return getRuleContext<SystemVerilogPreParser::Pragma_nameContext>(0);
}

std::vector<SystemVerilogPreParser::Pragma_expressionContext *> SystemVerilogPreParser::Pragma_directiveContext::pragma_expression() {
  return getRuleContexts<SystemVerilogPreParser::Pragma_expressionContext>();
}

SystemVerilogPreParser::Pragma_expressionContext* SystemVerilogPreParser::Pragma_directiveContext::pragma_expression(size_t i) {
  return getRuleContext<SystemVerilogPreParser::Pragma_expressionContext>(i);
}

std::vector<tree::TerminalNode *> SystemVerilogPreParser::Pragma_directiveContext::CO() {
  return getTokens(SystemVerilogPreParser::CO);
}

tree::TerminalNode* SystemVerilogPreParser::Pragma_directiveContext::CO(size_t i) {
  return getToken(SystemVerilogPreParser::CO, i);
}


size_t SystemVerilogPreParser::Pragma_directiveContext::getRuleIndex() const {
  return SystemVerilogPreParser::RulePragma_directive;
}

void SystemVerilogPreParser::Pragma_directiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPragma_directive(this);
}

void SystemVerilogPreParser::Pragma_directiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPragma_directive(this);
}

SystemVerilogPreParser::Pragma_directiveContext* SystemVerilogPreParser::pragma_directive() {
  Pragma_directiveContext *_localctx = _tracker.createInstance<Pragma_directiveContext>(_ctx, getState());
  enterRule(_localctx, 62, SystemVerilogPreParser::RulePragma_directive);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(259);
    match(SystemVerilogPreParser::GA);
    setState(260);
    match(SystemVerilogPreParser::PRAGMA_DIRECTIVE);
    setState(261);
    pragma_name();
    setState(270);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SystemVerilogPreParser::LP || (((_la - 365) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 365)) & 35) != 0) {
      setState(262);
      pragma_expression();
      setState(267);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SystemVerilogPreParser::CO) {
        setState(263);
        match(SystemVerilogPreParser::CO);
        setState(264);
        pragma_expression();
        setState(269);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pragma_expressionContext ------------------------------------------------------------------

SystemVerilogPreParser::Pragma_expressionContext::Pragma_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SystemVerilogPreParser::Pragma_valueContext* SystemVerilogPreParser::Pragma_expressionContext::pragma_value() {
  return getRuleContext<SystemVerilogPreParser::Pragma_valueContext>(0);
}

SystemVerilogPreParser::Pragma_keywordContext* SystemVerilogPreParser::Pragma_expressionContext::pragma_keyword() {
  return getRuleContext<SystemVerilogPreParser::Pragma_keywordContext>(0);
}

tree::TerminalNode* SystemVerilogPreParser::Pragma_expressionContext::EQ() {
  return getToken(SystemVerilogPreParser::EQ, 0);
}


size_t SystemVerilogPreParser::Pragma_expressionContext::getRuleIndex() const {
  return SystemVerilogPreParser::RulePragma_expression;
}

void SystemVerilogPreParser::Pragma_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPragma_expression(this);
}

void SystemVerilogPreParser::Pragma_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPragma_expression(this);
}

SystemVerilogPreParser::Pragma_expressionContext* SystemVerilogPreParser::pragma_expression() {
  Pragma_expressionContext *_localctx = _tracker.createInstance<Pragma_expressionContext>(_ctx, getState());
  enterRule(_localctx, 64, SystemVerilogPreParser::RulePragma_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(275);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(272);
      pragma_keyword();
      setState(273);
      match(SystemVerilogPreParser::EQ);
      break;
    }

    default:
      break;
    }
    setState(277);
    pragma_value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pragma_keywordContext ------------------------------------------------------------------

SystemVerilogPreParser::Pragma_keywordContext::Pragma_keywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Pragma_keywordContext::SIMPLE_IDENTIFIER() {
  return getToken(SystemVerilogPreParser::SIMPLE_IDENTIFIER, 0);
}


size_t SystemVerilogPreParser::Pragma_keywordContext::getRuleIndex() const {
  return SystemVerilogPreParser::RulePragma_keyword;
}

void SystemVerilogPreParser::Pragma_keywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPragma_keyword(this);
}

void SystemVerilogPreParser::Pragma_keywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPragma_keyword(this);
}

SystemVerilogPreParser::Pragma_keywordContext* SystemVerilogPreParser::pragma_keyword() {
  Pragma_keywordContext *_localctx = _tracker.createInstance<Pragma_keywordContext>(_ctx, getState());
  enterRule(_localctx, 66, SystemVerilogPreParser::RulePragma_keyword);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(279);
    match(SystemVerilogPreParser::SIMPLE_IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pragma_nameContext ------------------------------------------------------------------

SystemVerilogPreParser::Pragma_nameContext::Pragma_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Pragma_nameContext::SIMPLE_IDENTIFIER() {
  return getToken(SystemVerilogPreParser::SIMPLE_IDENTIFIER, 0);
}


size_t SystemVerilogPreParser::Pragma_nameContext::getRuleIndex() const {
  return SystemVerilogPreParser::RulePragma_name;
}

void SystemVerilogPreParser::Pragma_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPragma_name(this);
}

void SystemVerilogPreParser::Pragma_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPragma_name(this);
}

SystemVerilogPreParser::Pragma_nameContext* SystemVerilogPreParser::pragma_name() {
  Pragma_nameContext *_localctx = _tracker.createInstance<Pragma_nameContext>(_ctx, getState());
  enterRule(_localctx, 68, SystemVerilogPreParser::RulePragma_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(281);
    match(SystemVerilogPreParser::SIMPLE_IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pragma_valueContext ------------------------------------------------------------------

SystemVerilogPreParser::Pragma_valueContext::Pragma_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Pragma_valueContext::LP() {
  return getToken(SystemVerilogPreParser::LP, 0);
}

std::vector<SystemVerilogPreParser::Pragma_expressionContext *> SystemVerilogPreParser::Pragma_valueContext::pragma_expression() {
  return getRuleContexts<SystemVerilogPreParser::Pragma_expressionContext>();
}

SystemVerilogPreParser::Pragma_expressionContext* SystemVerilogPreParser::Pragma_valueContext::pragma_expression(size_t i) {
  return getRuleContext<SystemVerilogPreParser::Pragma_expressionContext>(i);
}

tree::TerminalNode* SystemVerilogPreParser::Pragma_valueContext::RP() {
  return getToken(SystemVerilogPreParser::RP, 0);
}

std::vector<tree::TerminalNode *> SystemVerilogPreParser::Pragma_valueContext::CO() {
  return getTokens(SystemVerilogPreParser::CO);
}

tree::TerminalNode* SystemVerilogPreParser::Pragma_valueContext::CO(size_t i) {
  return getToken(SystemVerilogPreParser::CO, i);
}

SystemVerilogPreParser::NumberContext* SystemVerilogPreParser::Pragma_valueContext::number() {
  return getRuleContext<SystemVerilogPreParser::NumberContext>(0);
}

SystemVerilogPreParser::String_literalContext* SystemVerilogPreParser::Pragma_valueContext::string_literal() {
  return getRuleContext<SystemVerilogPreParser::String_literalContext>(0);
}

SystemVerilogPreParser::IdentifierContext* SystemVerilogPreParser::Pragma_valueContext::identifier() {
  return getRuleContext<SystemVerilogPreParser::IdentifierContext>(0);
}


size_t SystemVerilogPreParser::Pragma_valueContext::getRuleIndex() const {
  return SystemVerilogPreParser::RulePragma_value;
}

void SystemVerilogPreParser::Pragma_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPragma_value(this);
}

void SystemVerilogPreParser::Pragma_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPragma_value(this);
}

SystemVerilogPreParser::Pragma_valueContext* SystemVerilogPreParser::pragma_value() {
  Pragma_valueContext *_localctx = _tracker.createInstance<Pragma_valueContext>(_ctx, getState());
  enterRule(_localctx, 70, SystemVerilogPreParser::RulePragma_value);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(297);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SystemVerilogPreParser::LP: {
        enterOuterAlt(_localctx, 1);
        setState(283);
        match(SystemVerilogPreParser::LP);
        setState(284);
        pragma_expression();
        setState(289);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SystemVerilogPreParser::CO) {
          setState(285);
          match(SystemVerilogPreParser::CO);
          setState(286);
          pragma_expression();
          setState(291);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(292);
        match(SystemVerilogPreParser::RP);
        break;
      }

      case SystemVerilogPreParser::UNSIGNED_NUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(294);
        number();
        break;
      }

      case SystemVerilogPreParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(295);
        string_literal();
        break;
      }

      case SystemVerilogPreParser::SIMPLE_IDENTIFIER: {
        enterOuterAlt(_localctx, 4);
        setState(296);
        identifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Resetall_directiveContext ------------------------------------------------------------------

SystemVerilogPreParser::Resetall_directiveContext::Resetall_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Resetall_directiveContext::GA() {
  return getToken(SystemVerilogPreParser::GA, 0);
}

tree::TerminalNode* SystemVerilogPreParser::Resetall_directiveContext::RESETALL_DIRECTIVE() {
  return getToken(SystemVerilogPreParser::RESETALL_DIRECTIVE, 0);
}


size_t SystemVerilogPreParser::Resetall_directiveContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleResetall_directive;
}

void SystemVerilogPreParser::Resetall_directiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResetall_directive(this);
}

void SystemVerilogPreParser::Resetall_directiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResetall_directive(this);
}

SystemVerilogPreParser::Resetall_directiveContext* SystemVerilogPreParser::resetall_directive() {
  Resetall_directiveContext *_localctx = _tracker.createInstance<Resetall_directiveContext>(_ctx, getState());
  enterRule(_localctx, 72, SystemVerilogPreParser::RuleResetall_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(299);
    match(SystemVerilogPreParser::GA);
    setState(300);
    match(SystemVerilogPreParser::RESETALL_DIRECTIVE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Source_text_Context ------------------------------------------------------------------

SystemVerilogPreParser::Source_text_Context::Source_text_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Source_text_Context::SOURCE_TEXT() {
  return getToken(SystemVerilogPreParser::SOURCE_TEXT, 0);
}


size_t SystemVerilogPreParser::Source_text_Context::getRuleIndex() const {
  return SystemVerilogPreParser::RuleSource_text_;
}

void SystemVerilogPreParser::Source_text_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSource_text_(this);
}

void SystemVerilogPreParser::Source_text_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSource_text_(this);
}

SystemVerilogPreParser::Source_text_Context* SystemVerilogPreParser::source_text_() {
  Source_text_Context *_localctx = _tracker.createInstance<Source_text_Context>(_ctx, getState());
  enterRule(_localctx, 74, SystemVerilogPreParser::RuleSource_text_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(302);
    match(SystemVerilogPreParser::SOURCE_TEXT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- String_literalContext ------------------------------------------------------------------

SystemVerilogPreParser::String_literalContext::String_literalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::String_literalContext::STRING_LITERAL() {
  return getToken(SystemVerilogPreParser::STRING_LITERAL, 0);
}


size_t SystemVerilogPreParser::String_literalContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleString_literal;
}

void SystemVerilogPreParser::String_literalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString_literal(this);
}

void SystemVerilogPreParser::String_literalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString_literal(this);
}

SystemVerilogPreParser::String_literalContext* SystemVerilogPreParser::string_literal() {
  String_literalContext *_localctx = _tracker.createInstance<String_literalContext>(_ctx, getState());
  enterRule(_localctx, 76, SystemVerilogPreParser::RuleString_literal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(304);
    match(SystemVerilogPreParser::STRING_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Text_macro_definitionContext ------------------------------------------------------------------

SystemVerilogPreParser::Text_macro_definitionContext::Text_macro_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Text_macro_definitionContext::GA() {
  return getToken(SystemVerilogPreParser::GA, 0);
}

tree::TerminalNode* SystemVerilogPreParser::Text_macro_definitionContext::DEFINE_DIRECTIVE() {
  return getToken(SystemVerilogPreParser::DEFINE_DIRECTIVE, 0);
}

SystemVerilogPreParser::Macro_nameContext* SystemVerilogPreParser::Text_macro_definitionContext::macro_name() {
  return getRuleContext<SystemVerilogPreParser::Macro_nameContext>(0);
}

SystemVerilogPreParser::Macro_textContext* SystemVerilogPreParser::Text_macro_definitionContext::macro_text() {
  return getRuleContext<SystemVerilogPreParser::Macro_textContext>(0);
}


size_t SystemVerilogPreParser::Text_macro_definitionContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleText_macro_definition;
}

void SystemVerilogPreParser::Text_macro_definitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterText_macro_definition(this);
}

void SystemVerilogPreParser::Text_macro_definitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitText_macro_definition(this);
}

SystemVerilogPreParser::Text_macro_definitionContext* SystemVerilogPreParser::text_macro_definition() {
  Text_macro_definitionContext *_localctx = _tracker.createInstance<Text_macro_definitionContext>(_ctx, getState());
  enterRule(_localctx, 78, SystemVerilogPreParser::RuleText_macro_definition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(306);
    match(SystemVerilogPreParser::GA);
    setState(307);
    match(SystemVerilogPreParser::DEFINE_DIRECTIVE);
    setState(308);
    macro_name();
    setState(309);
    macro_text();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Text_macro_usageContext ------------------------------------------------------------------

SystemVerilogPreParser::Text_macro_usageContext::Text_macro_usageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Text_macro_usageContext::GA() {
  return getToken(SystemVerilogPreParser::GA, 0);
}

SystemVerilogPreParser::Macro_usageContext* SystemVerilogPreParser::Text_macro_usageContext::macro_usage() {
  return getRuleContext<SystemVerilogPreParser::Macro_usageContext>(0);
}


size_t SystemVerilogPreParser::Text_macro_usageContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleText_macro_usage;
}

void SystemVerilogPreParser::Text_macro_usageContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterText_macro_usage(this);
}

void SystemVerilogPreParser::Text_macro_usageContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitText_macro_usage(this);
}

SystemVerilogPreParser::Text_macro_usageContext* SystemVerilogPreParser::text_macro_usage() {
  Text_macro_usageContext *_localctx = _tracker.createInstance<Text_macro_usageContext>(_ctx, getState());
  enterRule(_localctx, 80, SystemVerilogPreParser::RuleText_macro_usage);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(311);
    match(SystemVerilogPreParser::GA);
    setState(312);
    macro_usage();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Time_precisionContext ------------------------------------------------------------------

SystemVerilogPreParser::Time_precisionContext::Time_precisionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Time_precisionContext::TIME_VALUE() {
  return getToken(SystemVerilogPreParser::TIME_VALUE, 0);
}

tree::TerminalNode* SystemVerilogPreParser::Time_precisionContext::TIME_UNIT() {
  return getToken(SystemVerilogPreParser::TIME_UNIT, 0);
}


size_t SystemVerilogPreParser::Time_precisionContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleTime_precision;
}

void SystemVerilogPreParser::Time_precisionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTime_precision(this);
}

void SystemVerilogPreParser::Time_precisionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTime_precision(this);
}

SystemVerilogPreParser::Time_precisionContext* SystemVerilogPreParser::time_precision() {
  Time_precisionContext *_localctx = _tracker.createInstance<Time_precisionContext>(_ctx, getState());
  enterRule(_localctx, 82, SystemVerilogPreParser::RuleTime_precision);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(314);
    match(SystemVerilogPreParser::TIME_VALUE);
    setState(315);
    match(SystemVerilogPreParser::TIME_UNIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Time_unitContext ------------------------------------------------------------------

SystemVerilogPreParser::Time_unitContext::Time_unitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Time_unitContext::TIME_VALUE() {
  return getToken(SystemVerilogPreParser::TIME_VALUE, 0);
}

tree::TerminalNode* SystemVerilogPreParser::Time_unitContext::TIME_UNIT() {
  return getToken(SystemVerilogPreParser::TIME_UNIT, 0);
}


size_t SystemVerilogPreParser::Time_unitContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleTime_unit;
}

void SystemVerilogPreParser::Time_unitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTime_unit(this);
}

void SystemVerilogPreParser::Time_unitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTime_unit(this);
}

SystemVerilogPreParser::Time_unitContext* SystemVerilogPreParser::time_unit() {
  Time_unitContext *_localctx = _tracker.createInstance<Time_unitContext>(_ctx, getState());
  enterRule(_localctx, 84, SystemVerilogPreParser::RuleTime_unit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(317);
    match(SystemVerilogPreParser::TIME_VALUE);
    setState(318);
    match(SystemVerilogPreParser::TIME_UNIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Timescale_directiveContext ------------------------------------------------------------------

SystemVerilogPreParser::Timescale_directiveContext::Timescale_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Timescale_directiveContext::GA() {
  return getToken(SystemVerilogPreParser::GA, 0);
}

tree::TerminalNode* SystemVerilogPreParser::Timescale_directiveContext::TIMESCALE_DIRECTIVE() {
  return getToken(SystemVerilogPreParser::TIMESCALE_DIRECTIVE, 0);
}

SystemVerilogPreParser::Time_unitContext* SystemVerilogPreParser::Timescale_directiveContext::time_unit() {
  return getRuleContext<SystemVerilogPreParser::Time_unitContext>(0);
}

tree::TerminalNode* SystemVerilogPreParser::Timescale_directiveContext::SL() {
  return getToken(SystemVerilogPreParser::SL, 0);
}

SystemVerilogPreParser::Time_precisionContext* SystemVerilogPreParser::Timescale_directiveContext::time_precision() {
  return getRuleContext<SystemVerilogPreParser::Time_precisionContext>(0);
}


size_t SystemVerilogPreParser::Timescale_directiveContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleTimescale_directive;
}

void SystemVerilogPreParser::Timescale_directiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTimescale_directive(this);
}

void SystemVerilogPreParser::Timescale_directiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTimescale_directive(this);
}

SystemVerilogPreParser::Timescale_directiveContext* SystemVerilogPreParser::timescale_directive() {
  Timescale_directiveContext *_localctx = _tracker.createInstance<Timescale_directiveContext>(_ctx, getState());
  enterRule(_localctx, 86, SystemVerilogPreParser::RuleTimescale_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(320);
    match(SystemVerilogPreParser::GA);
    setState(321);
    match(SystemVerilogPreParser::TIMESCALE_DIRECTIVE);
    setState(322);
    time_unit();
    setState(323);
    match(SystemVerilogPreParser::SL);
    setState(324);
    time_precision();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unconnected_drive_directiveContext ------------------------------------------------------------------

SystemVerilogPreParser::Unconnected_drive_directiveContext::Unconnected_drive_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Unconnected_drive_directiveContext::GA() {
  return getToken(SystemVerilogPreParser::GA, 0);
}

tree::TerminalNode* SystemVerilogPreParser::Unconnected_drive_directiveContext::UNCONNECTED_DRIVE_DIRECTIVE() {
  return getToken(SystemVerilogPreParser::UNCONNECTED_DRIVE_DIRECTIVE, 0);
}

SystemVerilogPreParser::Unconnected_drive_valueContext* SystemVerilogPreParser::Unconnected_drive_directiveContext::unconnected_drive_value() {
  return getRuleContext<SystemVerilogPreParser::Unconnected_drive_valueContext>(0);
}


size_t SystemVerilogPreParser::Unconnected_drive_directiveContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleUnconnected_drive_directive;
}

void SystemVerilogPreParser::Unconnected_drive_directiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnconnected_drive_directive(this);
}

void SystemVerilogPreParser::Unconnected_drive_directiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnconnected_drive_directive(this);
}

SystemVerilogPreParser::Unconnected_drive_directiveContext* SystemVerilogPreParser::unconnected_drive_directive() {
  Unconnected_drive_directiveContext *_localctx = _tracker.createInstance<Unconnected_drive_directiveContext>(_ctx, getState());
  enterRule(_localctx, 88, SystemVerilogPreParser::RuleUnconnected_drive_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(326);
    match(SystemVerilogPreParser::GA);
    setState(327);
    match(SystemVerilogPreParser::UNCONNECTED_DRIVE_DIRECTIVE);
    setState(328);
    unconnected_drive_value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unconnected_drive_valueContext ------------------------------------------------------------------

SystemVerilogPreParser::Unconnected_drive_valueContext::Unconnected_drive_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Unconnected_drive_valueContext::UNCONNECTED_DRIVE_VALUE() {
  return getToken(SystemVerilogPreParser::UNCONNECTED_DRIVE_VALUE, 0);
}


size_t SystemVerilogPreParser::Unconnected_drive_valueContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleUnconnected_drive_value;
}

void SystemVerilogPreParser::Unconnected_drive_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnconnected_drive_value(this);
}

void SystemVerilogPreParser::Unconnected_drive_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnconnected_drive_value(this);
}

SystemVerilogPreParser::Unconnected_drive_valueContext* SystemVerilogPreParser::unconnected_drive_value() {
  Unconnected_drive_valueContext *_localctx = _tracker.createInstance<Unconnected_drive_valueContext>(_ctx, getState());
  enterRule(_localctx, 90, SystemVerilogPreParser::RuleUnconnected_drive_value);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(330);
    match(SystemVerilogPreParser::UNCONNECTED_DRIVE_VALUE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Undef_directiveContext ------------------------------------------------------------------

SystemVerilogPreParser::Undef_directiveContext::Undef_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Undef_directiveContext::GA() {
  return getToken(SystemVerilogPreParser::GA, 0);
}

tree::TerminalNode* SystemVerilogPreParser::Undef_directiveContext::UNDEF_DIRECTIVE() {
  return getToken(SystemVerilogPreParser::UNDEF_DIRECTIVE, 0);
}

SystemVerilogPreParser::Macro_identifierContext* SystemVerilogPreParser::Undef_directiveContext::macro_identifier() {
  return getRuleContext<SystemVerilogPreParser::Macro_identifierContext>(0);
}


size_t SystemVerilogPreParser::Undef_directiveContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleUndef_directive;
}

void SystemVerilogPreParser::Undef_directiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUndef_directive(this);
}

void SystemVerilogPreParser::Undef_directiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUndef_directive(this);
}

SystemVerilogPreParser::Undef_directiveContext* SystemVerilogPreParser::undef_directive() {
  Undef_directiveContext *_localctx = _tracker.createInstance<Undef_directiveContext>(_ctx, getState());
  enterRule(_localctx, 92, SystemVerilogPreParser::RuleUndef_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(332);
    match(SystemVerilogPreParser::GA);
    setState(333);
    match(SystemVerilogPreParser::UNDEF_DIRECTIVE);
    setState(334);
    macro_identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Undefineall_directiveContext ------------------------------------------------------------------

SystemVerilogPreParser::Undefineall_directiveContext::Undefineall_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Undefineall_directiveContext::GA() {
  return getToken(SystemVerilogPreParser::GA, 0);
}

tree::TerminalNode* SystemVerilogPreParser::Undefineall_directiveContext::UNDEFINEALL_DIRECTIVE() {
  return getToken(SystemVerilogPreParser::UNDEFINEALL_DIRECTIVE, 0);
}


size_t SystemVerilogPreParser::Undefineall_directiveContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleUndefineall_directive;
}

void SystemVerilogPreParser::Undefineall_directiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUndefineall_directive(this);
}

void SystemVerilogPreParser::Undefineall_directiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUndefineall_directive(this);
}

SystemVerilogPreParser::Undefineall_directiveContext* SystemVerilogPreParser::undefineall_directive() {
  Undefineall_directiveContext *_localctx = _tracker.createInstance<Undefineall_directiveContext>(_ctx, getState());
  enterRule(_localctx, 94, SystemVerilogPreParser::RuleUndefineall_directive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(336);
    match(SystemVerilogPreParser::GA);
    setState(337);
    match(SystemVerilogPreParser::UNDEFINEALL_DIRECTIVE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Version_specifierContext ------------------------------------------------------------------

SystemVerilogPreParser::Version_specifierContext::Version_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SystemVerilogPreParser::Version_specifierContext::VERSION_SPECIFIER() {
  return getToken(SystemVerilogPreParser::VERSION_SPECIFIER, 0);
}


size_t SystemVerilogPreParser::Version_specifierContext::getRuleIndex() const {
  return SystemVerilogPreParser::RuleVersion_specifier;
}

void SystemVerilogPreParser::Version_specifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVersion_specifier(this);
}

void SystemVerilogPreParser::Version_specifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SystemVerilogPreParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVersion_specifier(this);
}

SystemVerilogPreParser::Version_specifierContext* SystemVerilogPreParser::version_specifier() {
  Version_specifierContext *_localctx = _tracker.createInstance<Version_specifierContext>(_ctx, getState());
  enterRule(_localctx, 96, SystemVerilogPreParser::RuleVersion_specifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(339);
    match(SystemVerilogPreParser::VERSION_SPECIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void SystemVerilogPreParser::initialize() {
  ::antlr4::internal::call_once(systemverilogpreparserParserOnceFlag, systemverilogpreparserParserInitialize);
}
