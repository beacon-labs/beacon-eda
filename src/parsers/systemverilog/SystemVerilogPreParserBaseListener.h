
// Generated from SystemVerilogPreParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "SystemVerilogPreParserListener.h"


/**
 * This class provides an empty implementation of SystemVerilogPreParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  SystemVerilogPreParserBaseListener : public SystemVerilogPreParserListener {
public:

  virtual void enterSource_text(SystemVerilogPreParser::Source_textContext * /*ctx*/) override { }
  virtual void exitSource_text(SystemVerilogPreParser::Source_textContext * /*ctx*/) override { }

  virtual void enterCompiler_directive(SystemVerilogPreParser::Compiler_directiveContext * /*ctx*/) override { }
  virtual void exitCompiler_directive(SystemVerilogPreParser::Compiler_directiveContext * /*ctx*/) override { }

  virtual void enterBegin_keywords_directive(SystemVerilogPreParser::Begin_keywords_directiveContext * /*ctx*/) override { }
  virtual void exitBegin_keywords_directive(SystemVerilogPreParser::Begin_keywords_directiveContext * /*ctx*/) override { }

  virtual void enterCelldefine_directive(SystemVerilogPreParser::Celldefine_directiveContext * /*ctx*/) override { }
  virtual void exitCelldefine_directive(SystemVerilogPreParser::Celldefine_directiveContext * /*ctx*/) override { }

  virtual void enterDefault_nettype_directive(SystemVerilogPreParser::Default_nettype_directiveContext * /*ctx*/) override { }
  virtual void exitDefault_nettype_directive(SystemVerilogPreParser::Default_nettype_directiveContext * /*ctx*/) override { }

  virtual void enterDefault_nettype_value(SystemVerilogPreParser::Default_nettype_valueContext * /*ctx*/) override { }
  virtual void exitDefault_nettype_value(SystemVerilogPreParser::Default_nettype_valueContext * /*ctx*/) override { }

  virtual void enterElse_directive(SystemVerilogPreParser::Else_directiveContext * /*ctx*/) override { }
  virtual void exitElse_directive(SystemVerilogPreParser::Else_directiveContext * /*ctx*/) override { }

  virtual void enterElsif_directive(SystemVerilogPreParser::Elsif_directiveContext * /*ctx*/) override { }
  virtual void exitElsif_directive(SystemVerilogPreParser::Elsif_directiveContext * /*ctx*/) override { }

  virtual void enterEnd_keywords_directive(SystemVerilogPreParser::End_keywords_directiveContext * /*ctx*/) override { }
  virtual void exitEnd_keywords_directive(SystemVerilogPreParser::End_keywords_directiveContext * /*ctx*/) override { }

  virtual void enterEndcelldefine_directive(SystemVerilogPreParser::Endcelldefine_directiveContext * /*ctx*/) override { }
  virtual void exitEndcelldefine_directive(SystemVerilogPreParser::Endcelldefine_directiveContext * /*ctx*/) override { }

  virtual void enterEndif_directive(SystemVerilogPreParser::Endif_directiveContext * /*ctx*/) override { }
  virtual void exitEndif_directive(SystemVerilogPreParser::Endif_directiveContext * /*ctx*/) override { }

  virtual void enterFile_directive(SystemVerilogPreParser::File_directiveContext * /*ctx*/) override { }
  virtual void exitFile_directive(SystemVerilogPreParser::File_directiveContext * /*ctx*/) override { }

  virtual void enterFilename(SystemVerilogPreParser::FilenameContext * /*ctx*/) override { }
  virtual void exitFilename(SystemVerilogPreParser::FilenameContext * /*ctx*/) override { }

  virtual void enterGroup_of_lines(SystemVerilogPreParser::Group_of_linesContext * /*ctx*/) override { }
  virtual void exitGroup_of_lines(SystemVerilogPreParser::Group_of_linesContext * /*ctx*/) override { }

  virtual void enterIdentifier(SystemVerilogPreParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(SystemVerilogPreParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterIfdef_directive(SystemVerilogPreParser::Ifdef_directiveContext * /*ctx*/) override { }
  virtual void exitIfdef_directive(SystemVerilogPreParser::Ifdef_directiveContext * /*ctx*/) override { }

  virtual void enterIfndef_directive(SystemVerilogPreParser::Ifndef_directiveContext * /*ctx*/) override { }
  virtual void exitIfndef_directive(SystemVerilogPreParser::Ifndef_directiveContext * /*ctx*/) override { }

  virtual void enterInclude_directive(SystemVerilogPreParser::Include_directiveContext * /*ctx*/) override { }
  virtual void exitInclude_directive(SystemVerilogPreParser::Include_directiveContext * /*ctx*/) override { }

  virtual void enterLevel(SystemVerilogPreParser::LevelContext * /*ctx*/) override { }
  virtual void exitLevel(SystemVerilogPreParser::LevelContext * /*ctx*/) override { }

  virtual void enterLine_directive(SystemVerilogPreParser::Line_directiveContext * /*ctx*/) override { }
  virtual void exitLine_directive(SystemVerilogPreParser::Line_directiveContext * /*ctx*/) override { }

  virtual void enterLine_directive_(SystemVerilogPreParser::Line_directive_Context * /*ctx*/) override { }
  virtual void exitLine_directive_(SystemVerilogPreParser::Line_directive_Context * /*ctx*/) override { }

  virtual void enterMacro_delimiter(SystemVerilogPreParser::Macro_delimiterContext * /*ctx*/) override { }
  virtual void exitMacro_delimiter(SystemVerilogPreParser::Macro_delimiterContext * /*ctx*/) override { }

  virtual void enterMacro_esc_newline(SystemVerilogPreParser::Macro_esc_newlineContext * /*ctx*/) override { }
  virtual void exitMacro_esc_newline(SystemVerilogPreParser::Macro_esc_newlineContext * /*ctx*/) override { }

  virtual void enterMacro_esc_quote(SystemVerilogPreParser::Macro_esc_quoteContext * /*ctx*/) override { }
  virtual void exitMacro_esc_quote(SystemVerilogPreParser::Macro_esc_quoteContext * /*ctx*/) override { }

  virtual void enterMacro_identifier(SystemVerilogPreParser::Macro_identifierContext * /*ctx*/) override { }
  virtual void exitMacro_identifier(SystemVerilogPreParser::Macro_identifierContext * /*ctx*/) override { }

  virtual void enterMacro_name(SystemVerilogPreParser::Macro_nameContext * /*ctx*/) override { }
  virtual void exitMacro_name(SystemVerilogPreParser::Macro_nameContext * /*ctx*/) override { }

  virtual void enterMacro_quote(SystemVerilogPreParser::Macro_quoteContext * /*ctx*/) override { }
  virtual void exitMacro_quote(SystemVerilogPreParser::Macro_quoteContext * /*ctx*/) override { }

  virtual void enterMacro_text(SystemVerilogPreParser::Macro_textContext * /*ctx*/) override { }
  virtual void exitMacro_text(SystemVerilogPreParser::Macro_textContext * /*ctx*/) override { }

  virtual void enterMacro_usage(SystemVerilogPreParser::Macro_usageContext * /*ctx*/) override { }
  virtual void exitMacro_usage(SystemVerilogPreParser::Macro_usageContext * /*ctx*/) override { }

  virtual void enterNounconnected_drive_directive(SystemVerilogPreParser::Nounconnected_drive_directiveContext * /*ctx*/) override { }
  virtual void exitNounconnected_drive_directive(SystemVerilogPreParser::Nounconnected_drive_directiveContext * /*ctx*/) override { }

  virtual void enterNumber(SystemVerilogPreParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(SystemVerilogPreParser::NumberContext * /*ctx*/) override { }

  virtual void enterPragma_directive(SystemVerilogPreParser::Pragma_directiveContext * /*ctx*/) override { }
  virtual void exitPragma_directive(SystemVerilogPreParser::Pragma_directiveContext * /*ctx*/) override { }

  virtual void enterPragma_expression(SystemVerilogPreParser::Pragma_expressionContext * /*ctx*/) override { }
  virtual void exitPragma_expression(SystemVerilogPreParser::Pragma_expressionContext * /*ctx*/) override { }

  virtual void enterPragma_keyword(SystemVerilogPreParser::Pragma_keywordContext * /*ctx*/) override { }
  virtual void exitPragma_keyword(SystemVerilogPreParser::Pragma_keywordContext * /*ctx*/) override { }

  virtual void enterPragma_name(SystemVerilogPreParser::Pragma_nameContext * /*ctx*/) override { }
  virtual void exitPragma_name(SystemVerilogPreParser::Pragma_nameContext * /*ctx*/) override { }

  virtual void enterPragma_value(SystemVerilogPreParser::Pragma_valueContext * /*ctx*/) override { }
  virtual void exitPragma_value(SystemVerilogPreParser::Pragma_valueContext * /*ctx*/) override { }

  virtual void enterResetall_directive(SystemVerilogPreParser::Resetall_directiveContext * /*ctx*/) override { }
  virtual void exitResetall_directive(SystemVerilogPreParser::Resetall_directiveContext * /*ctx*/) override { }

  virtual void enterSource_text_(SystemVerilogPreParser::Source_text_Context * /*ctx*/) override { }
  virtual void exitSource_text_(SystemVerilogPreParser::Source_text_Context * /*ctx*/) override { }

  virtual void enterString_literal(SystemVerilogPreParser::String_literalContext * /*ctx*/) override { }
  virtual void exitString_literal(SystemVerilogPreParser::String_literalContext * /*ctx*/) override { }

  virtual void enterText_macro_definition(SystemVerilogPreParser::Text_macro_definitionContext * /*ctx*/) override { }
  virtual void exitText_macro_definition(SystemVerilogPreParser::Text_macro_definitionContext * /*ctx*/) override { }

  virtual void enterText_macro_usage(SystemVerilogPreParser::Text_macro_usageContext * /*ctx*/) override { }
  virtual void exitText_macro_usage(SystemVerilogPreParser::Text_macro_usageContext * /*ctx*/) override { }

  virtual void enterTime_precision(SystemVerilogPreParser::Time_precisionContext * /*ctx*/) override { }
  virtual void exitTime_precision(SystemVerilogPreParser::Time_precisionContext * /*ctx*/) override { }

  virtual void enterTime_unit(SystemVerilogPreParser::Time_unitContext * /*ctx*/) override { }
  virtual void exitTime_unit(SystemVerilogPreParser::Time_unitContext * /*ctx*/) override { }

  virtual void enterTimescale_directive(SystemVerilogPreParser::Timescale_directiveContext * /*ctx*/) override { }
  virtual void exitTimescale_directive(SystemVerilogPreParser::Timescale_directiveContext * /*ctx*/) override { }

  virtual void enterUnconnected_drive_directive(SystemVerilogPreParser::Unconnected_drive_directiveContext * /*ctx*/) override { }
  virtual void exitUnconnected_drive_directive(SystemVerilogPreParser::Unconnected_drive_directiveContext * /*ctx*/) override { }

  virtual void enterUnconnected_drive_value(SystemVerilogPreParser::Unconnected_drive_valueContext * /*ctx*/) override { }
  virtual void exitUnconnected_drive_value(SystemVerilogPreParser::Unconnected_drive_valueContext * /*ctx*/) override { }

  virtual void enterUndef_directive(SystemVerilogPreParser::Undef_directiveContext * /*ctx*/) override { }
  virtual void exitUndef_directive(SystemVerilogPreParser::Undef_directiveContext * /*ctx*/) override { }

  virtual void enterUndefineall_directive(SystemVerilogPreParser::Undefineall_directiveContext * /*ctx*/) override { }
  virtual void exitUndefineall_directive(SystemVerilogPreParser::Undefineall_directiveContext * /*ctx*/) override { }

  virtual void enterVersion_specifier(SystemVerilogPreParser::Version_specifierContext * /*ctx*/) override { }
  virtual void exitVersion_specifier(SystemVerilogPreParser::Version_specifierContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

