
// Generated from VerilogPreParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "VerilogPreParserListener.h"


/**
 * This class provides an empty implementation of VerilogPreParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  VerilogPreParserBaseListener : public VerilogPreParserListener {
public:

  virtual void enterSource_text(VerilogPreParser::Source_textContext * /*ctx*/) override { }
  virtual void exitSource_text(VerilogPreParser::Source_textContext * /*ctx*/) override { }

  virtual void enterCompiler_directive(VerilogPreParser::Compiler_directiveContext * /*ctx*/) override { }
  virtual void exitCompiler_directive(VerilogPreParser::Compiler_directiveContext * /*ctx*/) override { }

  virtual void enterBegin_keywords_directive(VerilogPreParser::Begin_keywords_directiveContext * /*ctx*/) override { }
  virtual void exitBegin_keywords_directive(VerilogPreParser::Begin_keywords_directiveContext * /*ctx*/) override { }

  virtual void enterCelldefine_directive(VerilogPreParser::Celldefine_directiveContext * /*ctx*/) override { }
  virtual void exitCelldefine_directive(VerilogPreParser::Celldefine_directiveContext * /*ctx*/) override { }

  virtual void enterDefault_nettype_directive(VerilogPreParser::Default_nettype_directiveContext * /*ctx*/) override { }
  virtual void exitDefault_nettype_directive(VerilogPreParser::Default_nettype_directiveContext * /*ctx*/) override { }

  virtual void enterDefault_nettype_value(VerilogPreParser::Default_nettype_valueContext * /*ctx*/) override { }
  virtual void exitDefault_nettype_value(VerilogPreParser::Default_nettype_valueContext * /*ctx*/) override { }

  virtual void enterElse_directive(VerilogPreParser::Else_directiveContext * /*ctx*/) override { }
  virtual void exitElse_directive(VerilogPreParser::Else_directiveContext * /*ctx*/) override { }

  virtual void enterElsif_directive(VerilogPreParser::Elsif_directiveContext * /*ctx*/) override { }
  virtual void exitElsif_directive(VerilogPreParser::Elsif_directiveContext * /*ctx*/) override { }

  virtual void enterEnd_keywords_directive(VerilogPreParser::End_keywords_directiveContext * /*ctx*/) override { }
  virtual void exitEnd_keywords_directive(VerilogPreParser::End_keywords_directiveContext * /*ctx*/) override { }

  virtual void enterEndcelldefine_directive(VerilogPreParser::Endcelldefine_directiveContext * /*ctx*/) override { }
  virtual void exitEndcelldefine_directive(VerilogPreParser::Endcelldefine_directiveContext * /*ctx*/) override { }

  virtual void enterEndif_directive(VerilogPreParser::Endif_directiveContext * /*ctx*/) override { }
  virtual void exitEndif_directive(VerilogPreParser::Endif_directiveContext * /*ctx*/) override { }

  virtual void enterFilename(VerilogPreParser::FilenameContext * /*ctx*/) override { }
  virtual void exitFilename(VerilogPreParser::FilenameContext * /*ctx*/) override { }

  virtual void enterGroup_of_lines(VerilogPreParser::Group_of_linesContext * /*ctx*/) override { }
  virtual void exitGroup_of_lines(VerilogPreParser::Group_of_linesContext * /*ctx*/) override { }

  virtual void enterIdentifier(VerilogPreParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(VerilogPreParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterIfdef_directive(VerilogPreParser::Ifdef_directiveContext * /*ctx*/) override { }
  virtual void exitIfdef_directive(VerilogPreParser::Ifdef_directiveContext * /*ctx*/) override { }

  virtual void enterIfndef_directive(VerilogPreParser::Ifndef_directiveContext * /*ctx*/) override { }
  virtual void exitIfndef_directive(VerilogPreParser::Ifndef_directiveContext * /*ctx*/) override { }

  virtual void enterInclude_directive(VerilogPreParser::Include_directiveContext * /*ctx*/) override { }
  virtual void exitInclude_directive(VerilogPreParser::Include_directiveContext * /*ctx*/) override { }

  virtual void enterLevel(VerilogPreParser::LevelContext * /*ctx*/) override { }
  virtual void exitLevel(VerilogPreParser::LevelContext * /*ctx*/) override { }

  virtual void enterLine_directive(VerilogPreParser::Line_directiveContext * /*ctx*/) override { }
  virtual void exitLine_directive(VerilogPreParser::Line_directiveContext * /*ctx*/) override { }

  virtual void enterMacro_delimiter(VerilogPreParser::Macro_delimiterContext * /*ctx*/) override { }
  virtual void exitMacro_delimiter(VerilogPreParser::Macro_delimiterContext * /*ctx*/) override { }

  virtual void enterMacro_esc_newline(VerilogPreParser::Macro_esc_newlineContext * /*ctx*/) override { }
  virtual void exitMacro_esc_newline(VerilogPreParser::Macro_esc_newlineContext * /*ctx*/) override { }

  virtual void enterMacro_esc_quote(VerilogPreParser::Macro_esc_quoteContext * /*ctx*/) override { }
  virtual void exitMacro_esc_quote(VerilogPreParser::Macro_esc_quoteContext * /*ctx*/) override { }

  virtual void enterMacro_identifier(VerilogPreParser::Macro_identifierContext * /*ctx*/) override { }
  virtual void exitMacro_identifier(VerilogPreParser::Macro_identifierContext * /*ctx*/) override { }

  virtual void enterMacro_name(VerilogPreParser::Macro_nameContext * /*ctx*/) override { }
  virtual void exitMacro_name(VerilogPreParser::Macro_nameContext * /*ctx*/) override { }

  virtual void enterMacro_quote(VerilogPreParser::Macro_quoteContext * /*ctx*/) override { }
  virtual void exitMacro_quote(VerilogPreParser::Macro_quoteContext * /*ctx*/) override { }

  virtual void enterMacro_text(VerilogPreParser::Macro_textContext * /*ctx*/) override { }
  virtual void exitMacro_text(VerilogPreParser::Macro_textContext * /*ctx*/) override { }

  virtual void enterMacro_usage(VerilogPreParser::Macro_usageContext * /*ctx*/) override { }
  virtual void exitMacro_usage(VerilogPreParser::Macro_usageContext * /*ctx*/) override { }

  virtual void enterNounconnected_drive_directive(VerilogPreParser::Nounconnected_drive_directiveContext * /*ctx*/) override { }
  virtual void exitNounconnected_drive_directive(VerilogPreParser::Nounconnected_drive_directiveContext * /*ctx*/) override { }

  virtual void enterNumber(VerilogPreParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(VerilogPreParser::NumberContext * /*ctx*/) override { }

  virtual void enterPragma_directive(VerilogPreParser::Pragma_directiveContext * /*ctx*/) override { }
  virtual void exitPragma_directive(VerilogPreParser::Pragma_directiveContext * /*ctx*/) override { }

  virtual void enterPragma_expression(VerilogPreParser::Pragma_expressionContext * /*ctx*/) override { }
  virtual void exitPragma_expression(VerilogPreParser::Pragma_expressionContext * /*ctx*/) override { }

  virtual void enterPragma_keyword(VerilogPreParser::Pragma_keywordContext * /*ctx*/) override { }
  virtual void exitPragma_keyword(VerilogPreParser::Pragma_keywordContext * /*ctx*/) override { }

  virtual void enterPragma_name(VerilogPreParser::Pragma_nameContext * /*ctx*/) override { }
  virtual void exitPragma_name(VerilogPreParser::Pragma_nameContext * /*ctx*/) override { }

  virtual void enterPragma_value(VerilogPreParser::Pragma_valueContext * /*ctx*/) override { }
  virtual void exitPragma_value(VerilogPreParser::Pragma_valueContext * /*ctx*/) override { }

  virtual void enterResetall_directive(VerilogPreParser::Resetall_directiveContext * /*ctx*/) override { }
  virtual void exitResetall_directive(VerilogPreParser::Resetall_directiveContext * /*ctx*/) override { }

  virtual void enterSource_text_(VerilogPreParser::Source_text_Context * /*ctx*/) override { }
  virtual void exitSource_text_(VerilogPreParser::Source_text_Context * /*ctx*/) override { }

  virtual void enterString_(VerilogPreParser::String_Context * /*ctx*/) override { }
  virtual void exitString_(VerilogPreParser::String_Context * /*ctx*/) override { }

  virtual void enterText_macro_definition(VerilogPreParser::Text_macro_definitionContext * /*ctx*/) override { }
  virtual void exitText_macro_definition(VerilogPreParser::Text_macro_definitionContext * /*ctx*/) override { }

  virtual void enterText_macro_usage(VerilogPreParser::Text_macro_usageContext * /*ctx*/) override { }
  virtual void exitText_macro_usage(VerilogPreParser::Text_macro_usageContext * /*ctx*/) override { }

  virtual void enterTime_precision(VerilogPreParser::Time_precisionContext * /*ctx*/) override { }
  virtual void exitTime_precision(VerilogPreParser::Time_precisionContext * /*ctx*/) override { }

  virtual void enterTime_unit(VerilogPreParser::Time_unitContext * /*ctx*/) override { }
  virtual void exitTime_unit(VerilogPreParser::Time_unitContext * /*ctx*/) override { }

  virtual void enterTimescale_directive(VerilogPreParser::Timescale_directiveContext * /*ctx*/) override { }
  virtual void exitTimescale_directive(VerilogPreParser::Timescale_directiveContext * /*ctx*/) override { }

  virtual void enterUnconnected_drive_directive(VerilogPreParser::Unconnected_drive_directiveContext * /*ctx*/) override { }
  virtual void exitUnconnected_drive_directive(VerilogPreParser::Unconnected_drive_directiveContext * /*ctx*/) override { }

  virtual void enterUnconnected_drive_value(VerilogPreParser::Unconnected_drive_valueContext * /*ctx*/) override { }
  virtual void exitUnconnected_drive_value(VerilogPreParser::Unconnected_drive_valueContext * /*ctx*/) override { }

  virtual void enterUndef_directive(VerilogPreParser::Undef_directiveContext * /*ctx*/) override { }
  virtual void exitUndef_directive(VerilogPreParser::Undef_directiveContext * /*ctx*/) override { }

  virtual void enterVersion_specifier(VerilogPreParser::Version_specifierContext * /*ctx*/) override { }
  virtual void exitVersion_specifier(VerilogPreParser::Version_specifierContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

