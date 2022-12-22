// Generated from /home/john/Projects/beacon-labs/beacon-eda/src/parsers/verilog/VerilogPreParser.g4 by ANTLR 4.9.2
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class VerilogPreParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.9.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		ALWAYS=1, AM=2, AMAM=3, AMAMAM=4, AND=5, AS=6, ASAS=7, ASGT=8, ASSIGN=9, 
		AT=10, AUTOMATIC=11, BEGIN=12, BUF=13, BUFIFONE=14, BUFIFZERO=15, CA=16, 
		CASE=17, CASEX=18, CASEZ=19, CATI=20, CELL=21, CL=22, CMOS=23, CO=24, 
		CONFIG=25, DEASSIGN=26, DEFAULT=27, DEFPARAM=28, DESIGN=29, DISABLE=30, 
		DL=31, DLFULLSKEW=32, DLHOLD=33, DLNOCHANGE=34, DLPERIOD=35, DLRECOVERY=36, 
		DLRECREM=37, DLREMOVAL=38, DLSETUP=39, DLSETUPHOLD=40, DLSKEW=41, DLTIMESKEW=42, 
		DLWIDTH=43, DQ=44, DT=45, EDGE=46, ELSE=47, EM=48, EMEQ=49, EMEQEQ=50, 
		END=51, ENDCASE=52, ENDCONFIG=53, ENDFUNCTION=54, ENDGENERATE=55, ENDMODULE=56, 
		ENDPRIMITIVE=57, ENDSPECIFY=58, ENDTABLE=59, ENDTASK=60, EQ=61, EQEQ=62, 
		EQEQEQ=63, EQGT=64, EVENT=65, FOR=66, FORCE=67, FOREVER=68, FORK=69, FUNCTION=70, 
		GA=71, GENERATE=72, GENVAR=73, GT=74, GTEQ=75, GTGT=76, GTGTGT=77, HA=78, 
		HIGHZONE=79, HIGHZZERO=80, IF=81, IFNONE=82, INCLUDE=83, INITIAL=84, INOUT=85, 
		INPUT=86, INSTANCE=87, INTEGER=88, JOIN=89, LARGE=90, LB=91, LC=92, LIBLIST=93, 
		LIBRARY=94, LOCALPARAM=95, LP=96, LT=97, LTEQ=98, LTLT=99, LTLTLT=100, 
		MACROMODULE=101, MEDIUM=102, MI=103, MICL=104, MIGT=105, MIINCDIR=106, 
		MO=107, MODULE=108, NAND=109, NEGEDGE=110, NMOS=111, NOR=112, NOSHOWCANCELLED=113, 
		NOT=114, NOTIFONE=115, NOTIFZERO=116, OR=117, OUTPUT=118, PARAMETER=119, 
		PATHPULSEDL=120, PL=121, PLCL=122, PMOS=123, POSEDGE=124, PRIMITIVE=125, 
		PULLDOWN=126, PULLONE=127, PULLUP=128, PULLZERO=129, PULSESTYLE_ONDETECT=130, 
		PULSESTYLE_ONEVENT=131, QM=132, RB=133, RC=134, RCMOS=135, REAL=136, REALTIME=137, 
		REG=138, RELEASE=139, REPEAT=140, RNMOS=141, RP=142, RPMOS=143, RTRAN=144, 
		RTRANIFONE=145, RTRANIFZERO=146, SC=147, SCALARED=148, SHOWCANCELLED=149, 
		SIGNED=150, SL=151, SMALL=152, SPECIFY=153, SPECPARAM=154, STRONGONE=155, 
		STRONGZERO=156, SUPPLYONE=157, SUPPLYZERO=158, TABLE=159, TASK=160, TI=161, 
		TIAM=162, TICA=163, TIME=164, TIVL=165, TRAN=166, TRANIFONE=167, TRANIFZERO=168, 
		TRI=169, TRIAND=170, TRIONE=171, TRIOR=172, TRIREG=173, TRIZERO=174, USE=175, 
		UWIRE=176, VECTORED=177, VL=178, VLVL=179, WAIT=180, WAND=181, WEAKONE=182, 
		WEAKZERO=183, WHILE=184, WIRE=185, WOR=186, XNOR=187, XOR=188, BINARY_BASE=189, 
		COMMENT=190, DECIMAL_BASE=191, ESCAPED_IDENTIFIER=192, EXPONENTIAL_NUMBER=193, 
		FIXED_POINT_NUMBER=194, HEX_BASE=195, OCTAL_BASE=196, SIMPLE_IDENTIFIER=197, 
		STRING=198, SYSTEM_TF_IDENTIFIER=199, UNSIGNED_NUMBER=200, WHITE_SPACE=201, 
		BINARY_VALUE=202, X_OR_Z_UNDERSCORE=203, EDGE_DESCRIPTOR=204, HEX_VALUE=205, 
		FILE_PATH_SPEC=206, OCTAL_VALUE=207, EDGE_SYMBOL=208, LEVEL_ONLY_SYMBOL=209, 
		OUTPUT_OR_LEVEL_SYMBOL=210, BEGIN_KEYWORDS_DIRECTIVE=211, CELLDEFINE_DIRECTIVE=212, 
		DEFAULT_NETTYPE_DIRECTIVE=213, DEFINE_DIRECTIVE=214, ELSE_DIRECTIVE=215, 
		ELSIF_DIRECTIVE=216, END_KEYWORDS_DIRECTIVE=217, ENDCELLDEFINE_DIRECTIVE=218, 
		ENDIF_DIRECTIVE=219, IFDEF_DIRECTIVE=220, IFNDEF_DIRECTIVE=221, INCLUDE_DIRECTIVE=222, 
		LINE_DIRECTIVE=223, NOUNCONNECTED_DRIVE_DIRECTIVE=224, PRAGMA_DIRECTIVE=225, 
		RESETALL_DIRECTIVE=226, TIMESCALE_DIRECTIVE=227, UNCONNECTED_DRIVE_DIRECTIVE=228, 
		UNDEF_DIRECTIVE=229, MACRO_USAGE=230, VERSION_SPECIFIER=231, DEFAULT_NETTYPE_VALUE=232, 
		COMMENT_5=233, MACRO_NAME=234, WHITE_SPACE_7=235, FILENAME=236, MACRO_DELIMITER=237, 
		MACRO_ESC_NEWLINE=238, MACRO_ESC_QUOTE=239, MACRO_QUOTE=240, MACRO_TEXT=241, 
		SOURCE_TEXT=242, TIME_UNIT=243, TIME_VALUE=244, UNCONNECTED_DRIVE_VALUE=245, 
		MACRO_IDENTIFIER=246;
	public static final int
		RULE_source_text = 0, RULE_compiler_directive = 1, RULE_begin_keywords_directive = 2, 
		RULE_celldefine_directive = 3, RULE_default_nettype_directive = 4, RULE_default_nettype_value = 5, 
		RULE_else_directive = 6, RULE_elsif_directive = 7, RULE_end_keywords_directive = 8, 
		RULE_endcelldefine_directive = 9, RULE_endif_directive = 10, RULE_filename = 11, 
		RULE_group_of_lines = 12, RULE_identifier = 13, RULE_ifdef_directive = 14, 
		RULE_ifndef_directive = 15, RULE_include_directive = 16, RULE_level = 17, 
		RULE_line_directive = 18, RULE_macro_delimiter = 19, RULE_macro_esc_newline = 20, 
		RULE_macro_esc_quote = 21, RULE_macro_identifier = 22, RULE_macro_name = 23, 
		RULE_macro_quote = 24, RULE_macro_text = 25, RULE_macro_usage = 26, RULE_nounconnected_drive_directive = 27, 
		RULE_number = 28, RULE_pragma_directive = 29, RULE_pragma_expression = 30, 
		RULE_pragma_keyword = 31, RULE_pragma_name = 32, RULE_pragma_value = 33, 
		RULE_resetall_directive = 34, RULE_source_text_ = 35, RULE_string_ = 36, 
		RULE_text_macro_definition = 37, RULE_text_macro_usage = 38, RULE_time_precision = 39, 
		RULE_time_unit = 40, RULE_timescale_directive = 41, RULE_unconnected_drive_directive = 42, 
		RULE_unconnected_drive_value = 43, RULE_undef_directive = 44, RULE_version_specifier = 45;
	private static String[] makeRuleNames() {
		return new String[] {
			"source_text", "compiler_directive", "begin_keywords_directive", "celldefine_directive", 
			"default_nettype_directive", "default_nettype_value", "else_directive", 
			"elsif_directive", "end_keywords_directive", "endcelldefine_directive", 
			"endif_directive", "filename", "group_of_lines", "identifier", "ifdef_directive", 
			"ifndef_directive", "include_directive", "level", "line_directive", "macro_delimiter", 
			"macro_esc_newline", "macro_esc_quote", "macro_identifier", "macro_name", 
			"macro_quote", "macro_text", "macro_usage", "nounconnected_drive_directive", 
			"number", "pragma_directive", "pragma_expression", "pragma_keyword", 
			"pragma_name", "pragma_value", "resetall_directive", "source_text_", 
			"string_", "text_macro_definition", "text_macro_usage", "time_precision", 
			"time_unit", "timescale_directive", "unconnected_drive_directive", "unconnected_drive_value", 
			"undef_directive", "version_specifier"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'always'", "'&'", "'&&'", "'&&&'", "'and'", "'*'", "'**'", "'*>'", 
			"'assign'", "'@'", "'automatic'", "'begin'", "'buf'", "'bufif1'", "'bufif0'", 
			"'^'", "'case'", "'casex'", "'casez'", "'^~'", "'cell'", "':'", "'cmos'", 
			"','", "'config'", "'deassign'", "'default'", "'defparam'", "'design'", 
			"'disable'", "'$'", "'$fullskew'", "'$hold'", "'$nochange'", "'$period'", 
			"'$recovery'", "'$recrem'", "'$removal'", "'$setup'", "'$setuphold'", 
			"'$skew'", "'$timeskew'", "'$width'", "'\"'", "'.'", "'edge'", "'else'", 
			"'!'", "'!='", "'!=='", "'end'", "'endcase'", "'endconfig'", "'endfunction'", 
			"'endgenerate'", "'endmodule'", "'endprimitive'", "'endspecify'", "'endtable'", 
			"'endtask'", "'='", "'=='", "'==='", "'=>'", "'event'", "'for'", "'force'", 
			"'forever'", "'fork'", "'function'", null, "'generate'", "'genvar'", 
			"'>'", "'>='", "'>>'", "'>>>'", "'#'", "'highz1'", "'highz0'", "'if'", 
			"'ifnone'", "'include'", "'initial'", "'inout'", "'input'", "'instance'", 
			"'integer'", "'join'", "'large'", "'['", "'{'", "'liblist'", "'library'", 
			"'localparam'", "'('", "'<'", "'<='", "'<<'", "'<<<'", "'macromodule'", 
			"'medium'", "'-'", "'-:'", "'->'", "'-incdir'", "'%'", "'module'", "'nand'", 
			"'negedge'", "'nmos'", "'nor'", "'noshowcancelled'", "'not'", "'notif1'", 
			"'notif0'", "'or'", "'output'", "'parameter'", "'PATHPULSE$'", "'+'", 
			"'+:'", "'pmos'", "'posedge'", "'primitive'", "'pulldown'", "'pull1'", 
			"'pullup'", "'pull0'", "'pulsestyle_ondetect'", "'pulsestyle_onevent'", 
			"'?'", "']'", "'}'", "'rcmos'", "'real'", "'realtime'", "'reg'", "'release'", 
			"'repeat'", "'rnmos'", "')'", "'rpmos'", "'rtran'", "'rtranif1'", "'rtranif0'", 
			"';'", "'scalared'", "'showcancelled'", "'signed'", "'/'", "'small'", 
			"'specify'", "'specparam'", "'strong1'", "'strong0'", "'supply1'", "'supply0'", 
			"'table'", "'task'", "'~'", "'~&'", "'~^'", "'time'", "'~|'", "'tran'", 
			"'tranif1'", "'tranif0'", "'tri'", "'triand'", "'tri1'", "'trior'", "'trireg'", 
			"'tri0'", "'use'", "'uwire'", "'vectored'", "'|'", "'||'", "'wait'", 
			"'wand'", "'weak1'", "'weak0'", "'while'", "'wire'", "'wor'", "'xnor'", 
			"'xor'", null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, "'celldefine'", null, null, null, null, "'end_keywords'", "'endcelldefine'", 
			null, null, null, null, null, "'nounconnected_drive'", null, "'resetall'", 
			null, null, null, null, null, null, null, null, null, null, "'``'", null, 
			"'`\\`\"'", "'`\"'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "ALWAYS", "AM", "AMAM", "AMAMAM", "AND", "AS", "ASAS", "ASGT", 
			"ASSIGN", "AT", "AUTOMATIC", "BEGIN", "BUF", "BUFIFONE", "BUFIFZERO", 
			"CA", "CASE", "CASEX", "CASEZ", "CATI", "CELL", "CL", "CMOS", "CO", "CONFIG", 
			"DEASSIGN", "DEFAULT", "DEFPARAM", "DESIGN", "DISABLE", "DL", "DLFULLSKEW", 
			"DLHOLD", "DLNOCHANGE", "DLPERIOD", "DLRECOVERY", "DLRECREM", "DLREMOVAL", 
			"DLSETUP", "DLSETUPHOLD", "DLSKEW", "DLTIMESKEW", "DLWIDTH", "DQ", "DT", 
			"EDGE", "ELSE", "EM", "EMEQ", "EMEQEQ", "END", "ENDCASE", "ENDCONFIG", 
			"ENDFUNCTION", "ENDGENERATE", "ENDMODULE", "ENDPRIMITIVE", "ENDSPECIFY", 
			"ENDTABLE", "ENDTASK", "EQ", "EQEQ", "EQEQEQ", "EQGT", "EVENT", "FOR", 
			"FORCE", "FOREVER", "FORK", "FUNCTION", "GA", "GENERATE", "GENVAR", "GT", 
			"GTEQ", "GTGT", "GTGTGT", "HA", "HIGHZONE", "HIGHZZERO", "IF", "IFNONE", 
			"INCLUDE", "INITIAL", "INOUT", "INPUT", "INSTANCE", "INTEGER", "JOIN", 
			"LARGE", "LB", "LC", "LIBLIST", "LIBRARY", "LOCALPARAM", "LP", "LT", 
			"LTEQ", "LTLT", "LTLTLT", "MACROMODULE", "MEDIUM", "MI", "MICL", "MIGT", 
			"MIINCDIR", "MO", "MODULE", "NAND", "NEGEDGE", "NMOS", "NOR", "NOSHOWCANCELLED", 
			"NOT", "NOTIFONE", "NOTIFZERO", "OR", "OUTPUT", "PARAMETER", "PATHPULSEDL", 
			"PL", "PLCL", "PMOS", "POSEDGE", "PRIMITIVE", "PULLDOWN", "PULLONE", 
			"PULLUP", "PULLZERO", "PULSESTYLE_ONDETECT", "PULSESTYLE_ONEVENT", "QM", 
			"RB", "RC", "RCMOS", "REAL", "REALTIME", "REG", "RELEASE", "REPEAT", 
			"RNMOS", "RP", "RPMOS", "RTRAN", "RTRANIFONE", "RTRANIFZERO", "SC", "SCALARED", 
			"SHOWCANCELLED", "SIGNED", "SL", "SMALL", "SPECIFY", "SPECPARAM", "STRONGONE", 
			"STRONGZERO", "SUPPLYONE", "SUPPLYZERO", "TABLE", "TASK", "TI", "TIAM", 
			"TICA", "TIME", "TIVL", "TRAN", "TRANIFONE", "TRANIFZERO", "TRI", "TRIAND", 
			"TRIONE", "TRIOR", "TRIREG", "TRIZERO", "USE", "UWIRE", "VECTORED", "VL", 
			"VLVL", "WAIT", "WAND", "WEAKONE", "WEAKZERO", "WHILE", "WIRE", "WOR", 
			"XNOR", "XOR", "BINARY_BASE", "COMMENT", "DECIMAL_BASE", "ESCAPED_IDENTIFIER", 
			"EXPONENTIAL_NUMBER", "FIXED_POINT_NUMBER", "HEX_BASE", "OCTAL_BASE", 
			"SIMPLE_IDENTIFIER", "STRING", "SYSTEM_TF_IDENTIFIER", "UNSIGNED_NUMBER", 
			"WHITE_SPACE", "BINARY_VALUE", "X_OR_Z_UNDERSCORE", "EDGE_DESCRIPTOR", 
			"HEX_VALUE", "FILE_PATH_SPEC", "OCTAL_VALUE", "EDGE_SYMBOL", "LEVEL_ONLY_SYMBOL", 
			"OUTPUT_OR_LEVEL_SYMBOL", "BEGIN_KEYWORDS_DIRECTIVE", "CELLDEFINE_DIRECTIVE", 
			"DEFAULT_NETTYPE_DIRECTIVE", "DEFINE_DIRECTIVE", "ELSE_DIRECTIVE", "ELSIF_DIRECTIVE", 
			"END_KEYWORDS_DIRECTIVE", "ENDCELLDEFINE_DIRECTIVE", "ENDIF_DIRECTIVE", 
			"IFDEF_DIRECTIVE", "IFNDEF_DIRECTIVE", "INCLUDE_DIRECTIVE", "LINE_DIRECTIVE", 
			"NOUNCONNECTED_DRIVE_DIRECTIVE", "PRAGMA_DIRECTIVE", "RESETALL_DIRECTIVE", 
			"TIMESCALE_DIRECTIVE", "UNCONNECTED_DRIVE_DIRECTIVE", "UNDEF_DIRECTIVE", 
			"MACRO_USAGE", "VERSION_SPECIFIER", "DEFAULT_NETTYPE_VALUE", "COMMENT_5", 
			"MACRO_NAME", "WHITE_SPACE_7", "FILENAME", "MACRO_DELIMITER", "MACRO_ESC_NEWLINE", 
			"MACRO_ESC_QUOTE", "MACRO_QUOTE", "MACRO_TEXT", "SOURCE_TEXT", "TIME_UNIT", 
			"TIME_VALUE", "UNCONNECTED_DRIVE_VALUE", "MACRO_IDENTIFIER"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "VerilogPreParser.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public VerilogPreParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class Source_textContext extends ParserRuleContext {
		public List<Compiler_directiveContext> compiler_directive() {
			return getRuleContexts(Compiler_directiveContext.class);
		}
		public Compiler_directiveContext compiler_directive(int i) {
			return getRuleContext(Compiler_directiveContext.class,i);
		}
		public Source_textContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_source_text; }
	}

	public final Source_textContext source_text() throws RecognitionException {
		Source_textContext _localctx = new Source_textContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_source_text);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(95);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==GA) {
				{
				{
				setState(92);
				compiler_directive();
				}
				}
				setState(97);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Compiler_directiveContext extends ParserRuleContext {
		public Begin_keywords_directiveContext begin_keywords_directive() {
			return getRuleContext(Begin_keywords_directiveContext.class,0);
		}
		public Celldefine_directiveContext celldefine_directive() {
			return getRuleContext(Celldefine_directiveContext.class,0);
		}
		public Default_nettype_directiveContext default_nettype_directive() {
			return getRuleContext(Default_nettype_directiveContext.class,0);
		}
		public End_keywords_directiveContext end_keywords_directive() {
			return getRuleContext(End_keywords_directiveContext.class,0);
		}
		public Endcelldefine_directiveContext endcelldefine_directive() {
			return getRuleContext(Endcelldefine_directiveContext.class,0);
		}
		public Ifdef_directiveContext ifdef_directive() {
			return getRuleContext(Ifdef_directiveContext.class,0);
		}
		public Ifndef_directiveContext ifndef_directive() {
			return getRuleContext(Ifndef_directiveContext.class,0);
		}
		public Include_directiveContext include_directive() {
			return getRuleContext(Include_directiveContext.class,0);
		}
		public Line_directiveContext line_directive() {
			return getRuleContext(Line_directiveContext.class,0);
		}
		public Nounconnected_drive_directiveContext nounconnected_drive_directive() {
			return getRuleContext(Nounconnected_drive_directiveContext.class,0);
		}
		public Pragma_directiveContext pragma_directive() {
			return getRuleContext(Pragma_directiveContext.class,0);
		}
		public Resetall_directiveContext resetall_directive() {
			return getRuleContext(Resetall_directiveContext.class,0);
		}
		public Text_macro_definitionContext text_macro_definition() {
			return getRuleContext(Text_macro_definitionContext.class,0);
		}
		public Text_macro_usageContext text_macro_usage() {
			return getRuleContext(Text_macro_usageContext.class,0);
		}
		public Timescale_directiveContext timescale_directive() {
			return getRuleContext(Timescale_directiveContext.class,0);
		}
		public Unconnected_drive_directiveContext unconnected_drive_directive() {
			return getRuleContext(Unconnected_drive_directiveContext.class,0);
		}
		public Undef_directiveContext undef_directive() {
			return getRuleContext(Undef_directiveContext.class,0);
		}
		public Compiler_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compiler_directive; }
	}

	public final Compiler_directiveContext compiler_directive() throws RecognitionException {
		Compiler_directiveContext _localctx = new Compiler_directiveContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_compiler_directive);
		try {
			setState(115);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(98);
				begin_keywords_directive();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(99);
				celldefine_directive();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(100);
				default_nettype_directive();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(101);
				end_keywords_directive();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(102);
				endcelldefine_directive();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(103);
				ifdef_directive();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(104);
				ifndef_directive();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(105);
				include_directive();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(106);
				line_directive();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(107);
				nounconnected_drive_directive();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(108);
				pragma_directive();
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(109);
				resetall_directive();
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(110);
				text_macro_definition();
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(111);
				text_macro_usage();
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(112);
				timescale_directive();
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(113);
				unconnected_drive_directive();
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(114);
				undef_directive();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Begin_keywords_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode BEGIN_KEYWORDS_DIRECTIVE() { return getToken(VerilogPreParser.BEGIN_KEYWORDS_DIRECTIVE, 0); }
		public List<TerminalNode> DQ() { return getTokens(VerilogPreParser.DQ); }
		public TerminalNode DQ(int i) {
			return getToken(VerilogPreParser.DQ, i);
		}
		public Version_specifierContext version_specifier() {
			return getRuleContext(Version_specifierContext.class,0);
		}
		public Begin_keywords_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_begin_keywords_directive; }
	}

	public final Begin_keywords_directiveContext begin_keywords_directive() throws RecognitionException {
		Begin_keywords_directiveContext _localctx = new Begin_keywords_directiveContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_begin_keywords_directive);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(117);
			match(GA);
			setState(118);
			match(BEGIN_KEYWORDS_DIRECTIVE);
			setState(119);
			match(DQ);
			setState(120);
			version_specifier();
			setState(121);
			match(DQ);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Celldefine_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode CELLDEFINE_DIRECTIVE() { return getToken(VerilogPreParser.CELLDEFINE_DIRECTIVE, 0); }
		public Celldefine_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_celldefine_directive; }
	}

	public final Celldefine_directiveContext celldefine_directive() throws RecognitionException {
		Celldefine_directiveContext _localctx = new Celldefine_directiveContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_celldefine_directive);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(123);
			match(GA);
			setState(124);
			match(CELLDEFINE_DIRECTIVE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Default_nettype_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode DEFAULT_NETTYPE_DIRECTIVE() { return getToken(VerilogPreParser.DEFAULT_NETTYPE_DIRECTIVE, 0); }
		public Default_nettype_valueContext default_nettype_value() {
			return getRuleContext(Default_nettype_valueContext.class,0);
		}
		public Default_nettype_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_default_nettype_directive; }
	}

	public final Default_nettype_directiveContext default_nettype_directive() throws RecognitionException {
		Default_nettype_directiveContext _localctx = new Default_nettype_directiveContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_default_nettype_directive);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(126);
			match(GA);
			setState(127);
			match(DEFAULT_NETTYPE_DIRECTIVE);
			setState(128);
			default_nettype_value();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Default_nettype_valueContext extends ParserRuleContext {
		public TerminalNode DEFAULT_NETTYPE_VALUE() { return getToken(VerilogPreParser.DEFAULT_NETTYPE_VALUE, 0); }
		public Default_nettype_valueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_default_nettype_value; }
	}

	public final Default_nettype_valueContext default_nettype_value() throws RecognitionException {
		Default_nettype_valueContext _localctx = new Default_nettype_valueContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_default_nettype_value);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(130);
			match(DEFAULT_NETTYPE_VALUE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Else_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode ELSE_DIRECTIVE() { return getToken(VerilogPreParser.ELSE_DIRECTIVE, 0); }
		public Group_of_linesContext group_of_lines() {
			return getRuleContext(Group_of_linesContext.class,0);
		}
		public Else_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_else_directive; }
	}

	public final Else_directiveContext else_directive() throws RecognitionException {
		Else_directiveContext _localctx = new Else_directiveContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_else_directive);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(132);
			match(GA);
			setState(133);
			match(ELSE_DIRECTIVE);
			setState(134);
			group_of_lines();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Elsif_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode ELSIF_DIRECTIVE() { return getToken(VerilogPreParser.ELSIF_DIRECTIVE, 0); }
		public Macro_identifierContext macro_identifier() {
			return getRuleContext(Macro_identifierContext.class,0);
		}
		public Group_of_linesContext group_of_lines() {
			return getRuleContext(Group_of_linesContext.class,0);
		}
		public Elsif_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_elsif_directive; }
	}

	public final Elsif_directiveContext elsif_directive() throws RecognitionException {
		Elsif_directiveContext _localctx = new Elsif_directiveContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_elsif_directive);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(136);
			match(GA);
			setState(137);
			match(ELSIF_DIRECTIVE);
			setState(138);
			macro_identifier();
			setState(139);
			group_of_lines();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class End_keywords_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode END_KEYWORDS_DIRECTIVE() { return getToken(VerilogPreParser.END_KEYWORDS_DIRECTIVE, 0); }
		public End_keywords_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_end_keywords_directive; }
	}

	public final End_keywords_directiveContext end_keywords_directive() throws RecognitionException {
		End_keywords_directiveContext _localctx = new End_keywords_directiveContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_end_keywords_directive);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(141);
			match(GA);
			setState(142);
			match(END_KEYWORDS_DIRECTIVE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Endcelldefine_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode ENDCELLDEFINE_DIRECTIVE() { return getToken(VerilogPreParser.ENDCELLDEFINE_DIRECTIVE, 0); }
		public Endcelldefine_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_endcelldefine_directive; }
	}

	public final Endcelldefine_directiveContext endcelldefine_directive() throws RecognitionException {
		Endcelldefine_directiveContext _localctx = new Endcelldefine_directiveContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_endcelldefine_directive);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(144);
			match(GA);
			setState(145);
			match(ENDCELLDEFINE_DIRECTIVE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Endif_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode ENDIF_DIRECTIVE() { return getToken(VerilogPreParser.ENDIF_DIRECTIVE, 0); }
		public Endif_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_endif_directive; }
	}

	public final Endif_directiveContext endif_directive() throws RecognitionException {
		Endif_directiveContext _localctx = new Endif_directiveContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_endif_directive);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(147);
			match(GA);
			setState(148);
			match(ENDIF_DIRECTIVE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FilenameContext extends ParserRuleContext {
		public TerminalNode FILENAME() { return getToken(VerilogPreParser.FILENAME, 0); }
		public FilenameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_filename; }
	}

	public final FilenameContext filename() throws RecognitionException {
		FilenameContext _localctx = new FilenameContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_filename);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(150);
			match(FILENAME);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Group_of_linesContext extends ParserRuleContext {
		public List<Source_text_Context> source_text_() {
			return getRuleContexts(Source_text_Context.class);
		}
		public Source_text_Context source_text_(int i) {
			return getRuleContext(Source_text_Context.class,i);
		}
		public List<Compiler_directiveContext> compiler_directive() {
			return getRuleContexts(Compiler_directiveContext.class);
		}
		public Compiler_directiveContext compiler_directive(int i) {
			return getRuleContext(Compiler_directiveContext.class,i);
		}
		public Group_of_linesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_group_of_lines; }
	}

	public final Group_of_linesContext group_of_lines() throws RecognitionException {
		Group_of_linesContext _localctx = new Group_of_linesContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_group_of_lines);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(156);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					setState(154);
					_errHandler.sync(this);
					switch (_input.LA(1)) {
					case SOURCE_TEXT:
						{
						setState(152);
						source_text_();
						}
						break;
					case GA:
						{
						setState(153);
						compiler_directive();
						}
						break;
					default:
						throw new NoViableAltException(this);
					}
					} 
				}
				setState(158);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IdentifierContext extends ParserRuleContext {
		public TerminalNode SIMPLE_IDENTIFIER() { return getToken(VerilogPreParser.SIMPLE_IDENTIFIER, 0); }
		public IdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifier; }
	}

	public final IdentifierContext identifier() throws RecognitionException {
		IdentifierContext _localctx = new IdentifierContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_identifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(159);
			match(SIMPLE_IDENTIFIER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Ifdef_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode IFDEF_DIRECTIVE() { return getToken(VerilogPreParser.IFDEF_DIRECTIVE, 0); }
		public Macro_identifierContext macro_identifier() {
			return getRuleContext(Macro_identifierContext.class,0);
		}
		public Group_of_linesContext group_of_lines() {
			return getRuleContext(Group_of_linesContext.class,0);
		}
		public Endif_directiveContext endif_directive() {
			return getRuleContext(Endif_directiveContext.class,0);
		}
		public List<Elsif_directiveContext> elsif_directive() {
			return getRuleContexts(Elsif_directiveContext.class);
		}
		public Elsif_directiveContext elsif_directive(int i) {
			return getRuleContext(Elsif_directiveContext.class,i);
		}
		public Else_directiveContext else_directive() {
			return getRuleContext(Else_directiveContext.class,0);
		}
		public Ifdef_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ifdef_directive; }
	}

	public final Ifdef_directiveContext ifdef_directive() throws RecognitionException {
		Ifdef_directiveContext _localctx = new Ifdef_directiveContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_ifdef_directive);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(161);
			match(GA);
			setState(162);
			match(IFDEF_DIRECTIVE);
			setState(163);
			macro_identifier();
			setState(164);
			group_of_lines();
			setState(168);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(165);
					elsif_directive();
					}
					} 
				}
				setState(170);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
			}
			setState(172);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				{
				setState(171);
				else_directive();
				}
				break;
			}
			setState(174);
			endif_directive();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Ifndef_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode IFNDEF_DIRECTIVE() { return getToken(VerilogPreParser.IFNDEF_DIRECTIVE, 0); }
		public Macro_identifierContext macro_identifier() {
			return getRuleContext(Macro_identifierContext.class,0);
		}
		public Group_of_linesContext group_of_lines() {
			return getRuleContext(Group_of_linesContext.class,0);
		}
		public Endif_directiveContext endif_directive() {
			return getRuleContext(Endif_directiveContext.class,0);
		}
		public List<Elsif_directiveContext> elsif_directive() {
			return getRuleContexts(Elsif_directiveContext.class);
		}
		public Elsif_directiveContext elsif_directive(int i) {
			return getRuleContext(Elsif_directiveContext.class,i);
		}
		public Else_directiveContext else_directive() {
			return getRuleContext(Else_directiveContext.class,0);
		}
		public Ifndef_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ifndef_directive; }
	}

	public final Ifndef_directiveContext ifndef_directive() throws RecognitionException {
		Ifndef_directiveContext _localctx = new Ifndef_directiveContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_ifndef_directive);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(176);
			match(GA);
			setState(177);
			match(IFNDEF_DIRECTIVE);
			setState(178);
			macro_identifier();
			setState(179);
			group_of_lines();
			setState(183);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(180);
					elsif_directive();
					}
					} 
				}
				setState(185);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
			}
			setState(187);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
			case 1:
				{
				setState(186);
				else_directive();
				}
				break;
			}
			setState(189);
			endif_directive();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Include_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode INCLUDE_DIRECTIVE() { return getToken(VerilogPreParser.INCLUDE_DIRECTIVE, 0); }
		public List<TerminalNode> DQ() { return getTokens(VerilogPreParser.DQ); }
		public TerminalNode DQ(int i) {
			return getToken(VerilogPreParser.DQ, i);
		}
		public FilenameContext filename() {
			return getRuleContext(FilenameContext.class,0);
		}
		public Include_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_include_directive; }
	}

	public final Include_directiveContext include_directive() throws RecognitionException {
		Include_directiveContext _localctx = new Include_directiveContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_include_directive);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(191);
			match(GA);
			setState(192);
			match(INCLUDE_DIRECTIVE);
			setState(193);
			match(DQ);
			setState(194);
			filename();
			setState(195);
			match(DQ);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LevelContext extends ParserRuleContext {
		public TerminalNode UNSIGNED_NUMBER() { return getToken(VerilogPreParser.UNSIGNED_NUMBER, 0); }
		public LevelContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_level; }
	}

	public final LevelContext level() throws RecognitionException {
		LevelContext _localctx = new LevelContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_level);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(197);
			match(UNSIGNED_NUMBER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Line_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode LINE_DIRECTIVE() { return getToken(VerilogPreParser.LINE_DIRECTIVE, 0); }
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public List<TerminalNode> DQ() { return getTokens(VerilogPreParser.DQ); }
		public TerminalNode DQ(int i) {
			return getToken(VerilogPreParser.DQ, i);
		}
		public FilenameContext filename() {
			return getRuleContext(FilenameContext.class,0);
		}
		public LevelContext level() {
			return getRuleContext(LevelContext.class,0);
		}
		public Line_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_line_directive; }
	}

	public final Line_directiveContext line_directive() throws RecognitionException {
		Line_directiveContext _localctx = new Line_directiveContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_line_directive);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(199);
			match(GA);
			setState(200);
			match(LINE_DIRECTIVE);
			setState(201);
			number();
			setState(202);
			match(DQ);
			setState(203);
			filename();
			setState(204);
			match(DQ);
			setState(205);
			level();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Macro_delimiterContext extends ParserRuleContext {
		public TerminalNode MACRO_DELIMITER() { return getToken(VerilogPreParser.MACRO_DELIMITER, 0); }
		public Macro_delimiterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_macro_delimiter; }
	}

	public final Macro_delimiterContext macro_delimiter() throws RecognitionException {
		Macro_delimiterContext _localctx = new Macro_delimiterContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_macro_delimiter);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(207);
			match(MACRO_DELIMITER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Macro_esc_newlineContext extends ParserRuleContext {
		public TerminalNode MACRO_ESC_NEWLINE() { return getToken(VerilogPreParser.MACRO_ESC_NEWLINE, 0); }
		public Macro_esc_newlineContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_macro_esc_newline; }
	}

	public final Macro_esc_newlineContext macro_esc_newline() throws RecognitionException {
		Macro_esc_newlineContext _localctx = new Macro_esc_newlineContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_macro_esc_newline);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(209);
			match(MACRO_ESC_NEWLINE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Macro_esc_quoteContext extends ParserRuleContext {
		public TerminalNode MACRO_ESC_QUOTE() { return getToken(VerilogPreParser.MACRO_ESC_QUOTE, 0); }
		public Macro_esc_quoteContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_macro_esc_quote; }
	}

	public final Macro_esc_quoteContext macro_esc_quote() throws RecognitionException {
		Macro_esc_quoteContext _localctx = new Macro_esc_quoteContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_macro_esc_quote);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(211);
			match(MACRO_ESC_QUOTE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Macro_identifierContext extends ParserRuleContext {
		public TerminalNode MACRO_IDENTIFIER() { return getToken(VerilogPreParser.MACRO_IDENTIFIER, 0); }
		public Macro_identifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_macro_identifier; }
	}

	public final Macro_identifierContext macro_identifier() throws RecognitionException {
		Macro_identifierContext _localctx = new Macro_identifierContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_macro_identifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(213);
			match(MACRO_IDENTIFIER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Macro_nameContext extends ParserRuleContext {
		public TerminalNode MACRO_NAME() { return getToken(VerilogPreParser.MACRO_NAME, 0); }
		public Macro_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_macro_name; }
	}

	public final Macro_nameContext macro_name() throws RecognitionException {
		Macro_nameContext _localctx = new Macro_nameContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_macro_name);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(215);
			match(MACRO_NAME);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Macro_quoteContext extends ParserRuleContext {
		public TerminalNode MACRO_QUOTE() { return getToken(VerilogPreParser.MACRO_QUOTE, 0); }
		public Macro_quoteContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_macro_quote; }
	}

	public final Macro_quoteContext macro_quote() throws RecognitionException {
		Macro_quoteContext _localctx = new Macro_quoteContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_macro_quote);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(217);
			match(MACRO_QUOTE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Macro_textContext extends ParserRuleContext {
		public List<TerminalNode> MACRO_TEXT() { return getTokens(VerilogPreParser.MACRO_TEXT); }
		public TerminalNode MACRO_TEXT(int i) {
			return getToken(VerilogPreParser.MACRO_TEXT, i);
		}
		public List<Macro_delimiterContext> macro_delimiter() {
			return getRuleContexts(Macro_delimiterContext.class);
		}
		public Macro_delimiterContext macro_delimiter(int i) {
			return getRuleContext(Macro_delimiterContext.class,i);
		}
		public List<Macro_esc_newlineContext> macro_esc_newline() {
			return getRuleContexts(Macro_esc_newlineContext.class);
		}
		public Macro_esc_newlineContext macro_esc_newline(int i) {
			return getRuleContext(Macro_esc_newlineContext.class,i);
		}
		public List<Macro_esc_quoteContext> macro_esc_quote() {
			return getRuleContexts(Macro_esc_quoteContext.class);
		}
		public Macro_esc_quoteContext macro_esc_quote(int i) {
			return getRuleContext(Macro_esc_quoteContext.class,i);
		}
		public List<Macro_quoteContext> macro_quote() {
			return getRuleContexts(Macro_quoteContext.class);
		}
		public Macro_quoteContext macro_quote(int i) {
			return getRuleContext(Macro_quoteContext.class,i);
		}
		public List<String_Context> string_() {
			return getRuleContexts(String_Context.class);
		}
		public String_Context string_(int i) {
			return getRuleContext(String_Context.class,i);
		}
		public Macro_textContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_macro_text; }
	}

	public final Macro_textContext macro_text() throws RecognitionException {
		Macro_textContext _localctx = new Macro_textContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_macro_text);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(227);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((((_la - 198)) & ~0x3f) == 0 && ((1L << (_la - 198)) & ((1L << (STRING - 198)) | (1L << (MACRO_DELIMITER - 198)) | (1L << (MACRO_ESC_NEWLINE - 198)) | (1L << (MACRO_ESC_QUOTE - 198)) | (1L << (MACRO_QUOTE - 198)) | (1L << (MACRO_TEXT - 198)))) != 0)) {
				{
				setState(225);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case MACRO_TEXT:
					{
					setState(219);
					match(MACRO_TEXT);
					}
					break;
				case MACRO_DELIMITER:
					{
					setState(220);
					macro_delimiter();
					}
					break;
				case MACRO_ESC_NEWLINE:
					{
					setState(221);
					macro_esc_newline();
					}
					break;
				case MACRO_ESC_QUOTE:
					{
					setState(222);
					macro_esc_quote();
					}
					break;
				case MACRO_QUOTE:
					{
					setState(223);
					macro_quote();
					}
					break;
				case STRING:
					{
					setState(224);
					string_();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				setState(229);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Macro_usageContext extends ParserRuleContext {
		public TerminalNode MACRO_USAGE() { return getToken(VerilogPreParser.MACRO_USAGE, 0); }
		public Macro_usageContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_macro_usage; }
	}

	public final Macro_usageContext macro_usage() throws RecognitionException {
		Macro_usageContext _localctx = new Macro_usageContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_macro_usage);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(230);
			match(MACRO_USAGE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Nounconnected_drive_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode NOUNCONNECTED_DRIVE_DIRECTIVE() { return getToken(VerilogPreParser.NOUNCONNECTED_DRIVE_DIRECTIVE, 0); }
		public Nounconnected_drive_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_nounconnected_drive_directive; }
	}

	public final Nounconnected_drive_directiveContext nounconnected_drive_directive() throws RecognitionException {
		Nounconnected_drive_directiveContext _localctx = new Nounconnected_drive_directiveContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_nounconnected_drive_directive);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(232);
			match(GA);
			setState(233);
			match(NOUNCONNECTED_DRIVE_DIRECTIVE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NumberContext extends ParserRuleContext {
		public TerminalNode UNSIGNED_NUMBER() { return getToken(VerilogPreParser.UNSIGNED_NUMBER, 0); }
		public NumberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_number; }
	}

	public final NumberContext number() throws RecognitionException {
		NumberContext _localctx = new NumberContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_number);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(235);
			match(UNSIGNED_NUMBER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Pragma_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode PRAGMA_DIRECTIVE() { return getToken(VerilogPreParser.PRAGMA_DIRECTIVE, 0); }
		public Pragma_nameContext pragma_name() {
			return getRuleContext(Pragma_nameContext.class,0);
		}
		public List<Pragma_expressionContext> pragma_expression() {
			return getRuleContexts(Pragma_expressionContext.class);
		}
		public Pragma_expressionContext pragma_expression(int i) {
			return getRuleContext(Pragma_expressionContext.class,i);
		}
		public List<TerminalNode> CO() { return getTokens(VerilogPreParser.CO); }
		public TerminalNode CO(int i) {
			return getToken(VerilogPreParser.CO, i);
		}
		public Pragma_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pragma_directive; }
	}

	public final Pragma_directiveContext pragma_directive() throws RecognitionException {
		Pragma_directiveContext _localctx = new Pragma_directiveContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_pragma_directive);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(237);
			match(GA);
			setState(238);
			match(PRAGMA_DIRECTIVE);
			setState(239);
			pragma_name();
			setState(248);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LP || ((((_la - 197)) & ~0x3f) == 0 && ((1L << (_la - 197)) & ((1L << (SIMPLE_IDENTIFIER - 197)) | (1L << (STRING - 197)) | (1L << (UNSIGNED_NUMBER - 197)))) != 0)) {
				{
				setState(240);
				pragma_expression();
				setState(245);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==CO) {
					{
					{
					setState(241);
					match(CO);
					setState(242);
					pragma_expression();
					}
					}
					setState(247);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Pragma_expressionContext extends ParserRuleContext {
		public Pragma_valueContext pragma_value() {
			return getRuleContext(Pragma_valueContext.class,0);
		}
		public Pragma_keywordContext pragma_keyword() {
			return getRuleContext(Pragma_keywordContext.class,0);
		}
		public TerminalNode EQ() { return getToken(VerilogPreParser.EQ, 0); }
		public Pragma_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pragma_expression; }
	}

	public final Pragma_expressionContext pragma_expression() throws RecognitionException {
		Pragma_expressionContext _localctx = new Pragma_expressionContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_pragma_expression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(253);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				{
				setState(250);
				pragma_keyword();
				setState(251);
				match(EQ);
				}
				break;
			}
			setState(255);
			pragma_value();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Pragma_keywordContext extends ParserRuleContext {
		public TerminalNode SIMPLE_IDENTIFIER() { return getToken(VerilogPreParser.SIMPLE_IDENTIFIER, 0); }
		public Pragma_keywordContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pragma_keyword; }
	}

	public final Pragma_keywordContext pragma_keyword() throws RecognitionException {
		Pragma_keywordContext _localctx = new Pragma_keywordContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_pragma_keyword);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(257);
			match(SIMPLE_IDENTIFIER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Pragma_nameContext extends ParserRuleContext {
		public TerminalNode SIMPLE_IDENTIFIER() { return getToken(VerilogPreParser.SIMPLE_IDENTIFIER, 0); }
		public Pragma_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pragma_name; }
	}

	public final Pragma_nameContext pragma_name() throws RecognitionException {
		Pragma_nameContext _localctx = new Pragma_nameContext(_ctx, getState());
		enterRule(_localctx, 64, RULE_pragma_name);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(259);
			match(SIMPLE_IDENTIFIER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Pragma_valueContext extends ParserRuleContext {
		public TerminalNode LP() { return getToken(VerilogPreParser.LP, 0); }
		public List<Pragma_expressionContext> pragma_expression() {
			return getRuleContexts(Pragma_expressionContext.class);
		}
		public Pragma_expressionContext pragma_expression(int i) {
			return getRuleContext(Pragma_expressionContext.class,i);
		}
		public TerminalNode RP() { return getToken(VerilogPreParser.RP, 0); }
		public List<TerminalNode> CO() { return getTokens(VerilogPreParser.CO); }
		public TerminalNode CO(int i) {
			return getToken(VerilogPreParser.CO, i);
		}
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public String_Context string_() {
			return getRuleContext(String_Context.class,0);
		}
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public Pragma_valueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pragma_value; }
	}

	public final Pragma_valueContext pragma_value() throws RecognitionException {
		Pragma_valueContext _localctx = new Pragma_valueContext(_ctx, getState());
		enterRule(_localctx, 66, RULE_pragma_value);
		int _la;
		try {
			setState(275);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LP:
				enterOuterAlt(_localctx, 1);
				{
				setState(261);
				match(LP);
				setState(262);
				pragma_expression();
				setState(267);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==CO) {
					{
					{
					setState(263);
					match(CO);
					setState(264);
					pragma_expression();
					}
					}
					setState(269);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(270);
				match(RP);
				}
				break;
			case UNSIGNED_NUMBER:
				enterOuterAlt(_localctx, 2);
				{
				setState(272);
				number();
				}
				break;
			case STRING:
				enterOuterAlt(_localctx, 3);
				{
				setState(273);
				string_();
				}
				break;
			case SIMPLE_IDENTIFIER:
				enterOuterAlt(_localctx, 4);
				{
				setState(274);
				identifier();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Resetall_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode RESETALL_DIRECTIVE() { return getToken(VerilogPreParser.RESETALL_DIRECTIVE, 0); }
		public Resetall_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_resetall_directive; }
	}

	public final Resetall_directiveContext resetall_directive() throws RecognitionException {
		Resetall_directiveContext _localctx = new Resetall_directiveContext(_ctx, getState());
		enterRule(_localctx, 68, RULE_resetall_directive);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(277);
			match(GA);
			setState(278);
			match(RESETALL_DIRECTIVE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Source_text_Context extends ParserRuleContext {
		public TerminalNode SOURCE_TEXT() { return getToken(VerilogPreParser.SOURCE_TEXT, 0); }
		public Source_text_Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_source_text_; }
	}

	public final Source_text_Context source_text_() throws RecognitionException {
		Source_text_Context _localctx = new Source_text_Context(_ctx, getState());
		enterRule(_localctx, 70, RULE_source_text_);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(280);
			match(SOURCE_TEXT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class String_Context extends ParserRuleContext {
		public TerminalNode STRING() { return getToken(VerilogPreParser.STRING, 0); }
		public String_Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_string_; }
	}

	public final String_Context string_() throws RecognitionException {
		String_Context _localctx = new String_Context(_ctx, getState());
		enterRule(_localctx, 72, RULE_string_);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(282);
			match(STRING);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Text_macro_definitionContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode DEFINE_DIRECTIVE() { return getToken(VerilogPreParser.DEFINE_DIRECTIVE, 0); }
		public Macro_nameContext macro_name() {
			return getRuleContext(Macro_nameContext.class,0);
		}
		public Macro_textContext macro_text() {
			return getRuleContext(Macro_textContext.class,0);
		}
		public Text_macro_definitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_text_macro_definition; }
	}

	public final Text_macro_definitionContext text_macro_definition() throws RecognitionException {
		Text_macro_definitionContext _localctx = new Text_macro_definitionContext(_ctx, getState());
		enterRule(_localctx, 74, RULE_text_macro_definition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(284);
			match(GA);
			setState(285);
			match(DEFINE_DIRECTIVE);
			setState(286);
			macro_name();
			setState(287);
			macro_text();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Text_macro_usageContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public Macro_usageContext macro_usage() {
			return getRuleContext(Macro_usageContext.class,0);
		}
		public Text_macro_usageContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_text_macro_usage; }
	}

	public final Text_macro_usageContext text_macro_usage() throws RecognitionException {
		Text_macro_usageContext _localctx = new Text_macro_usageContext(_ctx, getState());
		enterRule(_localctx, 76, RULE_text_macro_usage);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(289);
			match(GA);
			setState(290);
			macro_usage();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Time_precisionContext extends ParserRuleContext {
		public TerminalNode TIME_VALUE() { return getToken(VerilogPreParser.TIME_VALUE, 0); }
		public TerminalNode TIME_UNIT() { return getToken(VerilogPreParser.TIME_UNIT, 0); }
		public Time_precisionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_time_precision; }
	}

	public final Time_precisionContext time_precision() throws RecognitionException {
		Time_precisionContext _localctx = new Time_precisionContext(_ctx, getState());
		enterRule(_localctx, 78, RULE_time_precision);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(292);
			match(TIME_VALUE);
			setState(293);
			match(TIME_UNIT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Time_unitContext extends ParserRuleContext {
		public TerminalNode TIME_VALUE() { return getToken(VerilogPreParser.TIME_VALUE, 0); }
		public TerminalNode TIME_UNIT() { return getToken(VerilogPreParser.TIME_UNIT, 0); }
		public Time_unitContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_time_unit; }
	}

	public final Time_unitContext time_unit() throws RecognitionException {
		Time_unitContext _localctx = new Time_unitContext(_ctx, getState());
		enterRule(_localctx, 80, RULE_time_unit);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(295);
			match(TIME_VALUE);
			setState(296);
			match(TIME_UNIT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Timescale_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode TIMESCALE_DIRECTIVE() { return getToken(VerilogPreParser.TIMESCALE_DIRECTIVE, 0); }
		public Time_unitContext time_unit() {
			return getRuleContext(Time_unitContext.class,0);
		}
		public TerminalNode SL() { return getToken(VerilogPreParser.SL, 0); }
		public Time_precisionContext time_precision() {
			return getRuleContext(Time_precisionContext.class,0);
		}
		public Timescale_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_timescale_directive; }
	}

	public final Timescale_directiveContext timescale_directive() throws RecognitionException {
		Timescale_directiveContext _localctx = new Timescale_directiveContext(_ctx, getState());
		enterRule(_localctx, 82, RULE_timescale_directive);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(298);
			match(GA);
			setState(299);
			match(TIMESCALE_DIRECTIVE);
			setState(300);
			time_unit();
			setState(301);
			match(SL);
			setState(302);
			time_precision();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Unconnected_drive_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode UNCONNECTED_DRIVE_DIRECTIVE() { return getToken(VerilogPreParser.UNCONNECTED_DRIVE_DIRECTIVE, 0); }
		public Unconnected_drive_valueContext unconnected_drive_value() {
			return getRuleContext(Unconnected_drive_valueContext.class,0);
		}
		public Unconnected_drive_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unconnected_drive_directive; }
	}

	public final Unconnected_drive_directiveContext unconnected_drive_directive() throws RecognitionException {
		Unconnected_drive_directiveContext _localctx = new Unconnected_drive_directiveContext(_ctx, getState());
		enterRule(_localctx, 84, RULE_unconnected_drive_directive);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(304);
			match(GA);
			setState(305);
			match(UNCONNECTED_DRIVE_DIRECTIVE);
			setState(306);
			unconnected_drive_value();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Unconnected_drive_valueContext extends ParserRuleContext {
		public TerminalNode UNCONNECTED_DRIVE_VALUE() { return getToken(VerilogPreParser.UNCONNECTED_DRIVE_VALUE, 0); }
		public Unconnected_drive_valueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unconnected_drive_value; }
	}

	public final Unconnected_drive_valueContext unconnected_drive_value() throws RecognitionException {
		Unconnected_drive_valueContext _localctx = new Unconnected_drive_valueContext(_ctx, getState());
		enterRule(_localctx, 86, RULE_unconnected_drive_value);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(308);
			match(UNCONNECTED_DRIVE_VALUE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Undef_directiveContext extends ParserRuleContext {
		public TerminalNode GA() { return getToken(VerilogPreParser.GA, 0); }
		public TerminalNode UNDEF_DIRECTIVE() { return getToken(VerilogPreParser.UNDEF_DIRECTIVE, 0); }
		public Macro_identifierContext macro_identifier() {
			return getRuleContext(Macro_identifierContext.class,0);
		}
		public Undef_directiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_undef_directive; }
	}

	public final Undef_directiveContext undef_directive() throws RecognitionException {
		Undef_directiveContext _localctx = new Undef_directiveContext(_ctx, getState());
		enterRule(_localctx, 88, RULE_undef_directive);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(310);
			match(GA);
			setState(311);
			match(UNDEF_DIRECTIVE);
			setState(312);
			macro_identifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Version_specifierContext extends ParserRuleContext {
		public TerminalNode VERSION_SPECIFIER() { return getToken(VerilogPreParser.VERSION_SPECIFIER, 0); }
		public Version_specifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_version_specifier; }
	}

	public final Version_specifierContext version_specifier() throws RecognitionException {
		Version_specifierContext _localctx = new Version_specifierContext(_ctx, getState());
		enterRule(_localctx, 90, RULE_version_specifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(314);
			match(VERSION_SPECIFIER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u00f8\u013f\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\3\2\7\2`\n\2\f\2\16\2c\13\2\3\3\3\3\3\3\3\3\3\3"+
		"\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\5\3v\n\3\3\4\3\4\3\4"+
		"\3\4\3\4\3\4\3\5\3\5\3\5\3\6\3\6\3\6\3\6\3\7\3\7\3\b\3\b\3\b\3\b\3\t\3"+
		"\t\3\t\3\t\3\t\3\n\3\n\3\n\3\13\3\13\3\13\3\f\3\f\3\f\3\r\3\r\3\16\3\16"+
		"\7\16\u009d\n\16\f\16\16\16\u00a0\13\16\3\17\3\17\3\20\3\20\3\20\3\20"+
		"\3\20\7\20\u00a9\n\20\f\20\16\20\u00ac\13\20\3\20\5\20\u00af\n\20\3\20"+
		"\3\20\3\21\3\21\3\21\3\21\3\21\7\21\u00b8\n\21\f\21\16\21\u00bb\13\21"+
		"\3\21\5\21\u00be\n\21\3\21\3\21\3\22\3\22\3\22\3\22\3\22\3\22\3\23\3\23"+
		"\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\25\3\25\3\26\3\26\3\27\3\27"+
		"\3\30\3\30\3\31\3\31\3\32\3\32\3\33\3\33\3\33\3\33\3\33\3\33\7\33\u00e4"+
		"\n\33\f\33\16\33\u00e7\13\33\3\34\3\34\3\35\3\35\3\35\3\36\3\36\3\37\3"+
		"\37\3\37\3\37\3\37\3\37\7\37\u00f6\n\37\f\37\16\37\u00f9\13\37\5\37\u00fb"+
		"\n\37\3 \3 \3 \5 \u0100\n \3 \3 \3!\3!\3\"\3\"\3#\3#\3#\3#\7#\u010c\n"+
		"#\f#\16#\u010f\13#\3#\3#\3#\3#\3#\5#\u0116\n#\3$\3$\3$\3%\3%\3&\3&\3\'"+
		"\3\'\3\'\3\'\3\'\3(\3(\3(\3)\3)\3)\3*\3*\3*\3+\3+\3+\3+\3+\3+\3,\3,\3"+
		",\3,\3-\3-\3.\3.\3.\3.\3/\3/\3/\2\2\60\2\4\6\b\n\f\16\20\22\24\26\30\32"+
		"\34\36 \"$&(*,.\60\62\64\668:<>@BDFHJLNPRTVXZ\\\2\2\2\u0134\2a\3\2\2\2"+
		"\4u\3\2\2\2\6w\3\2\2\2\b}\3\2\2\2\n\u0080\3\2\2\2\f\u0084\3\2\2\2\16\u0086"+
		"\3\2\2\2\20\u008a\3\2\2\2\22\u008f\3\2\2\2\24\u0092\3\2\2\2\26\u0095\3"+
		"\2\2\2\30\u0098\3\2\2\2\32\u009e\3\2\2\2\34\u00a1\3\2\2\2\36\u00a3\3\2"+
		"\2\2 \u00b2\3\2\2\2\"\u00c1\3\2\2\2$\u00c7\3\2\2\2&\u00c9\3\2\2\2(\u00d1"+
		"\3\2\2\2*\u00d3\3\2\2\2,\u00d5\3\2\2\2.\u00d7\3\2\2\2\60\u00d9\3\2\2\2"+
		"\62\u00db\3\2\2\2\64\u00e5\3\2\2\2\66\u00e8\3\2\2\28\u00ea\3\2\2\2:\u00ed"+
		"\3\2\2\2<\u00ef\3\2\2\2>\u00ff\3\2\2\2@\u0103\3\2\2\2B\u0105\3\2\2\2D"+
		"\u0115\3\2\2\2F\u0117\3\2\2\2H\u011a\3\2\2\2J\u011c\3\2\2\2L\u011e\3\2"+
		"\2\2N\u0123\3\2\2\2P\u0126\3\2\2\2R\u0129\3\2\2\2T\u012c\3\2\2\2V\u0132"+
		"\3\2\2\2X\u0136\3\2\2\2Z\u0138\3\2\2\2\\\u013c\3\2\2\2^`\5\4\3\2_^\3\2"+
		"\2\2`c\3\2\2\2a_\3\2\2\2ab\3\2\2\2b\3\3\2\2\2ca\3\2\2\2dv\5\6\4\2ev\5"+
		"\b\5\2fv\5\n\6\2gv\5\22\n\2hv\5\24\13\2iv\5\36\20\2jv\5 \21\2kv\5\"\22"+
		"\2lv\5&\24\2mv\58\35\2nv\5<\37\2ov\5F$\2pv\5L\'\2qv\5N(\2rv\5T+\2sv\5"+
		"V,\2tv\5Z.\2ud\3\2\2\2ue\3\2\2\2uf\3\2\2\2ug\3\2\2\2uh\3\2\2\2ui\3\2\2"+
		"\2uj\3\2\2\2uk\3\2\2\2ul\3\2\2\2um\3\2\2\2un\3\2\2\2uo\3\2\2\2up\3\2\2"+
		"\2uq\3\2\2\2ur\3\2\2\2us\3\2\2\2ut\3\2\2\2v\5\3\2\2\2wx\7I\2\2xy\7\u00d5"+
		"\2\2yz\7.\2\2z{\5\\/\2{|\7.\2\2|\7\3\2\2\2}~\7I\2\2~\177\7\u00d6\2\2\177"+
		"\t\3\2\2\2\u0080\u0081\7I\2\2\u0081\u0082\7\u00d7\2\2\u0082\u0083\5\f"+
		"\7\2\u0083\13\3\2\2\2\u0084\u0085\7\u00ea\2\2\u0085\r\3\2\2\2\u0086\u0087"+
		"\7I\2\2\u0087\u0088\7\u00d9\2\2\u0088\u0089\5\32\16\2\u0089\17\3\2\2\2"+
		"\u008a\u008b\7I\2\2\u008b\u008c\7\u00da\2\2\u008c\u008d\5.\30\2\u008d"+
		"\u008e\5\32\16\2\u008e\21\3\2\2\2\u008f\u0090\7I\2\2\u0090\u0091\7\u00db"+
		"\2\2\u0091\23\3\2\2\2\u0092\u0093\7I\2\2\u0093\u0094\7\u00dc\2\2\u0094"+
		"\25\3\2\2\2\u0095\u0096\7I\2\2\u0096\u0097\7\u00dd\2\2\u0097\27\3\2\2"+
		"\2\u0098\u0099\7\u00ee\2\2\u0099\31\3\2\2\2\u009a\u009d\5H%\2\u009b\u009d"+
		"\5\4\3\2\u009c\u009a\3\2\2\2\u009c\u009b\3\2\2\2\u009d\u00a0\3\2\2\2\u009e"+
		"\u009c\3\2\2\2\u009e\u009f\3\2\2\2\u009f\33\3\2\2\2\u00a0\u009e\3\2\2"+
		"\2\u00a1\u00a2\7\u00c7\2\2\u00a2\35\3\2\2\2\u00a3\u00a4\7I\2\2\u00a4\u00a5"+
		"\7\u00de\2\2\u00a5\u00a6\5.\30\2\u00a6\u00aa\5\32\16\2\u00a7\u00a9\5\20"+
		"\t\2\u00a8\u00a7\3\2\2\2\u00a9\u00ac\3\2\2\2\u00aa\u00a8\3\2\2\2\u00aa"+
		"\u00ab\3\2\2\2\u00ab\u00ae\3\2\2\2\u00ac\u00aa\3\2\2\2\u00ad\u00af\5\16"+
		"\b\2\u00ae\u00ad\3\2\2\2\u00ae\u00af\3\2\2\2\u00af\u00b0\3\2\2\2\u00b0"+
		"\u00b1\5\26\f\2\u00b1\37\3\2\2\2\u00b2\u00b3\7I\2\2\u00b3\u00b4\7\u00df"+
		"\2\2\u00b4\u00b5\5.\30\2\u00b5\u00b9\5\32\16\2\u00b6\u00b8\5\20\t\2\u00b7"+
		"\u00b6\3\2\2\2\u00b8\u00bb\3\2\2\2\u00b9\u00b7\3\2\2\2\u00b9\u00ba\3\2"+
		"\2\2\u00ba\u00bd\3\2\2\2\u00bb\u00b9\3\2\2\2\u00bc\u00be\5\16\b\2\u00bd"+
		"\u00bc\3\2\2\2\u00bd\u00be\3\2\2\2\u00be\u00bf\3\2\2\2\u00bf\u00c0\5\26"+
		"\f\2\u00c0!\3\2\2\2\u00c1\u00c2\7I\2\2\u00c2\u00c3\7\u00e0\2\2\u00c3\u00c4"+
		"\7.\2\2\u00c4\u00c5\5\30\r\2\u00c5\u00c6\7.\2\2\u00c6#\3\2\2\2\u00c7\u00c8"+
		"\7\u00ca\2\2\u00c8%\3\2\2\2\u00c9\u00ca\7I\2\2\u00ca\u00cb\7\u00e1\2\2"+
		"\u00cb\u00cc\5:\36\2\u00cc\u00cd\7.\2\2\u00cd\u00ce\5\30\r\2\u00ce\u00cf"+
		"\7.\2\2\u00cf\u00d0\5$\23\2\u00d0\'\3\2\2\2\u00d1\u00d2\7\u00ef\2\2\u00d2"+
		")\3\2\2\2\u00d3\u00d4\7\u00f0\2\2\u00d4+\3\2\2\2\u00d5\u00d6\7\u00f1\2"+
		"\2\u00d6-\3\2\2\2\u00d7\u00d8\7\u00f8\2\2\u00d8/\3\2\2\2\u00d9\u00da\7"+
		"\u00ec\2\2\u00da\61\3\2\2\2\u00db\u00dc\7\u00f2\2\2\u00dc\63\3\2\2\2\u00dd"+
		"\u00e4\7\u00f3\2\2\u00de\u00e4\5(\25\2\u00df\u00e4\5*\26\2\u00e0\u00e4"+
		"\5,\27\2\u00e1\u00e4\5\62\32\2\u00e2\u00e4\5J&\2\u00e3\u00dd\3\2\2\2\u00e3"+
		"\u00de\3\2\2\2\u00e3\u00df\3\2\2\2\u00e3\u00e0\3\2\2\2\u00e3\u00e1\3\2"+
		"\2\2\u00e3\u00e2\3\2\2\2\u00e4\u00e7\3\2\2\2\u00e5\u00e3\3\2\2\2\u00e5"+
		"\u00e6\3\2\2\2\u00e6\65\3\2\2\2\u00e7\u00e5\3\2\2\2\u00e8\u00e9\7\u00e8"+
		"\2\2\u00e9\67\3\2\2\2\u00ea\u00eb\7I\2\2\u00eb\u00ec\7\u00e2\2\2\u00ec"+
		"9\3\2\2\2\u00ed\u00ee\7\u00ca\2\2\u00ee;\3\2\2\2\u00ef\u00f0\7I\2\2\u00f0"+
		"\u00f1\7\u00e3\2\2\u00f1\u00fa\5B\"\2\u00f2\u00f7\5> \2\u00f3\u00f4\7"+
		"\32\2\2\u00f4\u00f6\5> \2\u00f5\u00f3\3\2\2\2\u00f6\u00f9\3\2\2\2\u00f7"+
		"\u00f5\3\2\2\2\u00f7\u00f8\3\2\2\2\u00f8\u00fb\3\2\2\2\u00f9\u00f7\3\2"+
		"\2\2\u00fa\u00f2\3\2\2\2\u00fa\u00fb\3\2\2\2\u00fb=\3\2\2\2\u00fc\u00fd"+
		"\5@!\2\u00fd\u00fe\7?\2\2\u00fe\u0100\3\2\2\2\u00ff\u00fc\3\2\2\2\u00ff"+
		"\u0100\3\2\2\2\u0100\u0101\3\2\2\2\u0101\u0102\5D#\2\u0102?\3\2\2\2\u0103"+
		"\u0104\7\u00c7\2\2\u0104A\3\2\2\2\u0105\u0106\7\u00c7\2\2\u0106C\3\2\2"+
		"\2\u0107\u0108\7b\2\2\u0108\u010d\5> \2\u0109\u010a\7\32\2\2\u010a\u010c"+
		"\5> \2\u010b\u0109\3\2\2\2\u010c\u010f\3\2\2\2\u010d\u010b\3\2\2\2\u010d"+
		"\u010e\3\2\2\2\u010e\u0110\3\2\2\2\u010f\u010d\3\2\2\2\u0110\u0111\7\u0090"+
		"\2\2\u0111\u0116\3\2\2\2\u0112\u0116\5:\36\2\u0113\u0116\5J&\2\u0114\u0116"+
		"\5\34\17\2\u0115\u0107\3\2\2\2\u0115\u0112\3\2\2\2\u0115\u0113\3\2\2\2"+
		"\u0115\u0114\3\2\2\2\u0116E\3\2\2\2\u0117\u0118\7I\2\2\u0118\u0119\7\u00e4"+
		"\2\2\u0119G\3\2\2\2\u011a\u011b\7\u00f4\2\2\u011bI\3\2\2\2\u011c\u011d"+
		"\7\u00c8\2\2\u011dK\3\2\2\2\u011e\u011f\7I\2\2\u011f\u0120\7\u00d8\2\2"+
		"\u0120\u0121\5\60\31\2\u0121\u0122\5\64\33\2\u0122M\3\2\2\2\u0123\u0124"+
		"\7I\2\2\u0124\u0125\5\66\34\2\u0125O\3\2\2\2\u0126\u0127\7\u00f6\2\2\u0127"+
		"\u0128\7\u00f5\2\2\u0128Q\3\2\2\2\u0129\u012a\7\u00f6\2\2\u012a\u012b"+
		"\7\u00f5\2\2\u012bS\3\2\2\2\u012c\u012d\7I\2\2\u012d\u012e\7\u00e5\2\2"+
		"\u012e\u012f\5R*\2\u012f\u0130\7\u0099\2\2\u0130\u0131\5P)\2\u0131U\3"+
		"\2\2\2\u0132\u0133\7I\2\2\u0133\u0134\7\u00e6\2\2\u0134\u0135\5X-\2\u0135"+
		"W\3\2\2\2\u0136\u0137\7\u00f7\2\2\u0137Y\3\2\2\2\u0138\u0139\7I\2\2\u0139"+
		"\u013a\7\u00e7\2\2\u013a\u013b\5.\30\2\u013b[\3\2\2\2\u013c\u013d\7\u00e9"+
		"\2\2\u013d]\3\2\2\2\21au\u009c\u009e\u00aa\u00ae\u00b9\u00bd\u00e3\u00e5"+
		"\u00f7\u00fa\u00ff\u010d\u0115";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}