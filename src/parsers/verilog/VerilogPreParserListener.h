
// Generated from VerilogPreParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "VerilogPreParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by VerilogPreParser.
 */
class  VerilogPreParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterSource_text(VerilogPreParser::Source_textContext *ctx) = 0;
  virtual void exitSource_text(VerilogPreParser::Source_textContext *ctx) = 0;

  virtual void enterCompiler_directive(VerilogPreParser::Compiler_directiveContext *ctx) = 0;
  virtual void exitCompiler_directive(VerilogPreParser::Compiler_directiveContext *ctx) = 0;

  virtual void enterBegin_keywords_directive(VerilogPreParser::Begin_keywords_directiveContext *ctx) = 0;
  virtual void exitBegin_keywords_directive(VerilogPreParser::Begin_keywords_directiveContext *ctx) = 0;

  virtual void enterCelldefine_directive(VerilogPreParser::Celldefine_directiveContext *ctx) = 0;
  virtual void exitCelldefine_directive(VerilogPreParser::Celldefine_directiveContext *ctx) = 0;

  virtual void enterDefault_nettype_directive(VerilogPreParser::Default_nettype_directiveContext *ctx) = 0;
  virtual void exitDefault_nettype_directive(VerilogPreParser::Default_nettype_directiveContext *ctx) = 0;

  virtual void enterDefault_nettype_value(VerilogPreParser::Default_nettype_valueContext *ctx) = 0;
  virtual void exitDefault_nettype_value(VerilogPreParser::Default_nettype_valueContext *ctx) = 0;

  virtual void enterElse_directive(VerilogPreParser::Else_directiveContext *ctx) = 0;
  virtual void exitElse_directive(VerilogPreParser::Else_directiveContext *ctx) = 0;

  virtual void enterElsif_directive(VerilogPreParser::Elsif_directiveContext *ctx) = 0;
  virtual void exitElsif_directive(VerilogPreParser::Elsif_directiveContext *ctx) = 0;

  virtual void enterEnd_keywords_directive(VerilogPreParser::End_keywords_directiveContext *ctx) = 0;
  virtual void exitEnd_keywords_directive(VerilogPreParser::End_keywords_directiveContext *ctx) = 0;

  virtual void enterEndcelldefine_directive(VerilogPreParser::Endcelldefine_directiveContext *ctx) = 0;
  virtual void exitEndcelldefine_directive(VerilogPreParser::Endcelldefine_directiveContext *ctx) = 0;

  virtual void enterEndif_directive(VerilogPreParser::Endif_directiveContext *ctx) = 0;
  virtual void exitEndif_directive(VerilogPreParser::Endif_directiveContext *ctx) = 0;

  virtual void enterFilename(VerilogPreParser::FilenameContext *ctx) = 0;
  virtual void exitFilename(VerilogPreParser::FilenameContext *ctx) = 0;

  virtual void enterGroup_of_lines(VerilogPreParser::Group_of_linesContext *ctx) = 0;
  virtual void exitGroup_of_lines(VerilogPreParser::Group_of_linesContext *ctx) = 0;

  virtual void enterIdentifier(VerilogPreParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(VerilogPreParser::IdentifierContext *ctx) = 0;

  virtual void enterIfdef_directive(VerilogPreParser::Ifdef_directiveContext *ctx) = 0;
  virtual void exitIfdef_directive(VerilogPreParser::Ifdef_directiveContext *ctx) = 0;

  virtual void enterIfndef_directive(VerilogPreParser::Ifndef_directiveContext *ctx) = 0;
  virtual void exitIfndef_directive(VerilogPreParser::Ifndef_directiveContext *ctx) = 0;

  virtual void enterInclude_directive(VerilogPreParser::Include_directiveContext *ctx) = 0;
  virtual void exitInclude_directive(VerilogPreParser::Include_directiveContext *ctx) = 0;

  virtual void enterLevel(VerilogPreParser::LevelContext *ctx) = 0;
  virtual void exitLevel(VerilogPreParser::LevelContext *ctx) = 0;

  virtual void enterLine_directive(VerilogPreParser::Line_directiveContext *ctx) = 0;
  virtual void exitLine_directive(VerilogPreParser::Line_directiveContext *ctx) = 0;

  virtual void enterMacro_delimiter(VerilogPreParser::Macro_delimiterContext *ctx) = 0;
  virtual void exitMacro_delimiter(VerilogPreParser::Macro_delimiterContext *ctx) = 0;

  virtual void enterMacro_esc_newline(VerilogPreParser::Macro_esc_newlineContext *ctx) = 0;
  virtual void exitMacro_esc_newline(VerilogPreParser::Macro_esc_newlineContext *ctx) = 0;

  virtual void enterMacro_esc_quote(VerilogPreParser::Macro_esc_quoteContext *ctx) = 0;
  virtual void exitMacro_esc_quote(VerilogPreParser::Macro_esc_quoteContext *ctx) = 0;

  virtual void enterMacro_identifier(VerilogPreParser::Macro_identifierContext *ctx) = 0;
  virtual void exitMacro_identifier(VerilogPreParser::Macro_identifierContext *ctx) = 0;

  virtual void enterMacro_name(VerilogPreParser::Macro_nameContext *ctx) = 0;
  virtual void exitMacro_name(VerilogPreParser::Macro_nameContext *ctx) = 0;

  virtual void enterMacro_quote(VerilogPreParser::Macro_quoteContext *ctx) = 0;
  virtual void exitMacro_quote(VerilogPreParser::Macro_quoteContext *ctx) = 0;

  virtual void enterMacro_text(VerilogPreParser::Macro_textContext *ctx) = 0;
  virtual void exitMacro_text(VerilogPreParser::Macro_textContext *ctx) = 0;

  virtual void enterMacro_usage(VerilogPreParser::Macro_usageContext *ctx) = 0;
  virtual void exitMacro_usage(VerilogPreParser::Macro_usageContext *ctx) = 0;

  virtual void enterNounconnected_drive_directive(VerilogPreParser::Nounconnected_drive_directiveContext *ctx) = 0;
  virtual void exitNounconnected_drive_directive(VerilogPreParser::Nounconnected_drive_directiveContext *ctx) = 0;

  virtual void enterNumber(VerilogPreParser::NumberContext *ctx) = 0;
  virtual void exitNumber(VerilogPreParser::NumberContext *ctx) = 0;

  virtual void enterPragma_directive(VerilogPreParser::Pragma_directiveContext *ctx) = 0;
  virtual void exitPragma_directive(VerilogPreParser::Pragma_directiveContext *ctx) = 0;

  virtual void enterPragma_expression(VerilogPreParser::Pragma_expressionContext *ctx) = 0;
  virtual void exitPragma_expression(VerilogPreParser::Pragma_expressionContext *ctx) = 0;

  virtual void enterPragma_keyword(VerilogPreParser::Pragma_keywordContext *ctx) = 0;
  virtual void exitPragma_keyword(VerilogPreParser::Pragma_keywordContext *ctx) = 0;

  virtual void enterPragma_name(VerilogPreParser::Pragma_nameContext *ctx) = 0;
  virtual void exitPragma_name(VerilogPreParser::Pragma_nameContext *ctx) = 0;

  virtual void enterPragma_value(VerilogPreParser::Pragma_valueContext *ctx) = 0;
  virtual void exitPragma_value(VerilogPreParser::Pragma_valueContext *ctx) = 0;

  virtual void enterResetall_directive(VerilogPreParser::Resetall_directiveContext *ctx) = 0;
  virtual void exitResetall_directive(VerilogPreParser::Resetall_directiveContext *ctx) = 0;

  virtual void enterSource_text_(VerilogPreParser::Source_text_Context *ctx) = 0;
  virtual void exitSource_text_(VerilogPreParser::Source_text_Context *ctx) = 0;

  virtual void enterString_(VerilogPreParser::String_Context *ctx) = 0;
  virtual void exitString_(VerilogPreParser::String_Context *ctx) = 0;

  virtual void enterText_macro_definition(VerilogPreParser::Text_macro_definitionContext *ctx) = 0;
  virtual void exitText_macro_definition(VerilogPreParser::Text_macro_definitionContext *ctx) = 0;

  virtual void enterText_macro_usage(VerilogPreParser::Text_macro_usageContext *ctx) = 0;
  virtual void exitText_macro_usage(VerilogPreParser::Text_macro_usageContext *ctx) = 0;

  virtual void enterTime_precision(VerilogPreParser::Time_precisionContext *ctx) = 0;
  virtual void exitTime_precision(VerilogPreParser::Time_precisionContext *ctx) = 0;

  virtual void enterTime_unit(VerilogPreParser::Time_unitContext *ctx) = 0;
  virtual void exitTime_unit(VerilogPreParser::Time_unitContext *ctx) = 0;

  virtual void enterTimescale_directive(VerilogPreParser::Timescale_directiveContext *ctx) = 0;
  virtual void exitTimescale_directive(VerilogPreParser::Timescale_directiveContext *ctx) = 0;

  virtual void enterUnconnected_drive_directive(VerilogPreParser::Unconnected_drive_directiveContext *ctx) = 0;
  virtual void exitUnconnected_drive_directive(VerilogPreParser::Unconnected_drive_directiveContext *ctx) = 0;

  virtual void enterUnconnected_drive_value(VerilogPreParser::Unconnected_drive_valueContext *ctx) = 0;
  virtual void exitUnconnected_drive_value(VerilogPreParser::Unconnected_drive_valueContext *ctx) = 0;

  virtual void enterUndef_directive(VerilogPreParser::Undef_directiveContext *ctx) = 0;
  virtual void exitUndef_directive(VerilogPreParser::Undef_directiveContext *ctx) = 0;

  virtual void enterVersion_specifier(VerilogPreParser::Version_specifierContext *ctx) = 0;
  virtual void exitVersion_specifier(VerilogPreParser::Version_specifierContext *ctx) = 0;


};

