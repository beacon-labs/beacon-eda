
// Generated from SystemVerilogPreParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "SystemVerilogPreParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by SystemVerilogPreParser.
 */
class  SystemVerilogPreParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterSource_text(SystemVerilogPreParser::Source_textContext *ctx) = 0;
  virtual void exitSource_text(SystemVerilogPreParser::Source_textContext *ctx) = 0;

  virtual void enterCompiler_directive(SystemVerilogPreParser::Compiler_directiveContext *ctx) = 0;
  virtual void exitCompiler_directive(SystemVerilogPreParser::Compiler_directiveContext *ctx) = 0;

  virtual void enterBegin_keywords_directive(SystemVerilogPreParser::Begin_keywords_directiveContext *ctx) = 0;
  virtual void exitBegin_keywords_directive(SystemVerilogPreParser::Begin_keywords_directiveContext *ctx) = 0;

  virtual void enterCelldefine_directive(SystemVerilogPreParser::Celldefine_directiveContext *ctx) = 0;
  virtual void exitCelldefine_directive(SystemVerilogPreParser::Celldefine_directiveContext *ctx) = 0;

  virtual void enterDefault_nettype_directive(SystemVerilogPreParser::Default_nettype_directiveContext *ctx) = 0;
  virtual void exitDefault_nettype_directive(SystemVerilogPreParser::Default_nettype_directiveContext *ctx) = 0;

  virtual void enterDefault_nettype_value(SystemVerilogPreParser::Default_nettype_valueContext *ctx) = 0;
  virtual void exitDefault_nettype_value(SystemVerilogPreParser::Default_nettype_valueContext *ctx) = 0;

  virtual void enterElse_directive(SystemVerilogPreParser::Else_directiveContext *ctx) = 0;
  virtual void exitElse_directive(SystemVerilogPreParser::Else_directiveContext *ctx) = 0;

  virtual void enterElsif_directive(SystemVerilogPreParser::Elsif_directiveContext *ctx) = 0;
  virtual void exitElsif_directive(SystemVerilogPreParser::Elsif_directiveContext *ctx) = 0;

  virtual void enterEnd_keywords_directive(SystemVerilogPreParser::End_keywords_directiveContext *ctx) = 0;
  virtual void exitEnd_keywords_directive(SystemVerilogPreParser::End_keywords_directiveContext *ctx) = 0;

  virtual void enterEndcelldefine_directive(SystemVerilogPreParser::Endcelldefine_directiveContext *ctx) = 0;
  virtual void exitEndcelldefine_directive(SystemVerilogPreParser::Endcelldefine_directiveContext *ctx) = 0;

  virtual void enterEndif_directive(SystemVerilogPreParser::Endif_directiveContext *ctx) = 0;
  virtual void exitEndif_directive(SystemVerilogPreParser::Endif_directiveContext *ctx) = 0;

  virtual void enterFile_directive(SystemVerilogPreParser::File_directiveContext *ctx) = 0;
  virtual void exitFile_directive(SystemVerilogPreParser::File_directiveContext *ctx) = 0;

  virtual void enterFilename(SystemVerilogPreParser::FilenameContext *ctx) = 0;
  virtual void exitFilename(SystemVerilogPreParser::FilenameContext *ctx) = 0;

  virtual void enterGroup_of_lines(SystemVerilogPreParser::Group_of_linesContext *ctx) = 0;
  virtual void exitGroup_of_lines(SystemVerilogPreParser::Group_of_linesContext *ctx) = 0;

  virtual void enterIdentifier(SystemVerilogPreParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(SystemVerilogPreParser::IdentifierContext *ctx) = 0;

  virtual void enterIfdef_directive(SystemVerilogPreParser::Ifdef_directiveContext *ctx) = 0;
  virtual void exitIfdef_directive(SystemVerilogPreParser::Ifdef_directiveContext *ctx) = 0;

  virtual void enterIfndef_directive(SystemVerilogPreParser::Ifndef_directiveContext *ctx) = 0;
  virtual void exitIfndef_directive(SystemVerilogPreParser::Ifndef_directiveContext *ctx) = 0;

  virtual void enterInclude_directive(SystemVerilogPreParser::Include_directiveContext *ctx) = 0;
  virtual void exitInclude_directive(SystemVerilogPreParser::Include_directiveContext *ctx) = 0;

  virtual void enterLevel(SystemVerilogPreParser::LevelContext *ctx) = 0;
  virtual void exitLevel(SystemVerilogPreParser::LevelContext *ctx) = 0;

  virtual void enterLine_directive(SystemVerilogPreParser::Line_directiveContext *ctx) = 0;
  virtual void exitLine_directive(SystemVerilogPreParser::Line_directiveContext *ctx) = 0;

  virtual void enterLine_directive_(SystemVerilogPreParser::Line_directive_Context *ctx) = 0;
  virtual void exitLine_directive_(SystemVerilogPreParser::Line_directive_Context *ctx) = 0;

  virtual void enterMacro_delimiter(SystemVerilogPreParser::Macro_delimiterContext *ctx) = 0;
  virtual void exitMacro_delimiter(SystemVerilogPreParser::Macro_delimiterContext *ctx) = 0;

  virtual void enterMacro_esc_newline(SystemVerilogPreParser::Macro_esc_newlineContext *ctx) = 0;
  virtual void exitMacro_esc_newline(SystemVerilogPreParser::Macro_esc_newlineContext *ctx) = 0;

  virtual void enterMacro_esc_quote(SystemVerilogPreParser::Macro_esc_quoteContext *ctx) = 0;
  virtual void exitMacro_esc_quote(SystemVerilogPreParser::Macro_esc_quoteContext *ctx) = 0;

  virtual void enterMacro_identifier(SystemVerilogPreParser::Macro_identifierContext *ctx) = 0;
  virtual void exitMacro_identifier(SystemVerilogPreParser::Macro_identifierContext *ctx) = 0;

  virtual void enterMacro_name(SystemVerilogPreParser::Macro_nameContext *ctx) = 0;
  virtual void exitMacro_name(SystemVerilogPreParser::Macro_nameContext *ctx) = 0;

  virtual void enterMacro_quote(SystemVerilogPreParser::Macro_quoteContext *ctx) = 0;
  virtual void exitMacro_quote(SystemVerilogPreParser::Macro_quoteContext *ctx) = 0;

  virtual void enterMacro_text(SystemVerilogPreParser::Macro_textContext *ctx) = 0;
  virtual void exitMacro_text(SystemVerilogPreParser::Macro_textContext *ctx) = 0;

  virtual void enterMacro_usage(SystemVerilogPreParser::Macro_usageContext *ctx) = 0;
  virtual void exitMacro_usage(SystemVerilogPreParser::Macro_usageContext *ctx) = 0;

  virtual void enterNounconnected_drive_directive(SystemVerilogPreParser::Nounconnected_drive_directiveContext *ctx) = 0;
  virtual void exitNounconnected_drive_directive(SystemVerilogPreParser::Nounconnected_drive_directiveContext *ctx) = 0;

  virtual void enterNumber(SystemVerilogPreParser::NumberContext *ctx) = 0;
  virtual void exitNumber(SystemVerilogPreParser::NumberContext *ctx) = 0;

  virtual void enterPragma_directive(SystemVerilogPreParser::Pragma_directiveContext *ctx) = 0;
  virtual void exitPragma_directive(SystemVerilogPreParser::Pragma_directiveContext *ctx) = 0;

  virtual void enterPragma_expression(SystemVerilogPreParser::Pragma_expressionContext *ctx) = 0;
  virtual void exitPragma_expression(SystemVerilogPreParser::Pragma_expressionContext *ctx) = 0;

  virtual void enterPragma_keyword(SystemVerilogPreParser::Pragma_keywordContext *ctx) = 0;
  virtual void exitPragma_keyword(SystemVerilogPreParser::Pragma_keywordContext *ctx) = 0;

  virtual void enterPragma_name(SystemVerilogPreParser::Pragma_nameContext *ctx) = 0;
  virtual void exitPragma_name(SystemVerilogPreParser::Pragma_nameContext *ctx) = 0;

  virtual void enterPragma_value(SystemVerilogPreParser::Pragma_valueContext *ctx) = 0;
  virtual void exitPragma_value(SystemVerilogPreParser::Pragma_valueContext *ctx) = 0;

  virtual void enterResetall_directive(SystemVerilogPreParser::Resetall_directiveContext *ctx) = 0;
  virtual void exitResetall_directive(SystemVerilogPreParser::Resetall_directiveContext *ctx) = 0;

  virtual void enterSource_text_(SystemVerilogPreParser::Source_text_Context *ctx) = 0;
  virtual void exitSource_text_(SystemVerilogPreParser::Source_text_Context *ctx) = 0;

  virtual void enterString_literal(SystemVerilogPreParser::String_literalContext *ctx) = 0;
  virtual void exitString_literal(SystemVerilogPreParser::String_literalContext *ctx) = 0;

  virtual void enterText_macro_definition(SystemVerilogPreParser::Text_macro_definitionContext *ctx) = 0;
  virtual void exitText_macro_definition(SystemVerilogPreParser::Text_macro_definitionContext *ctx) = 0;

  virtual void enterText_macro_usage(SystemVerilogPreParser::Text_macro_usageContext *ctx) = 0;
  virtual void exitText_macro_usage(SystemVerilogPreParser::Text_macro_usageContext *ctx) = 0;

  virtual void enterTime_precision(SystemVerilogPreParser::Time_precisionContext *ctx) = 0;
  virtual void exitTime_precision(SystemVerilogPreParser::Time_precisionContext *ctx) = 0;

  virtual void enterTime_unit(SystemVerilogPreParser::Time_unitContext *ctx) = 0;
  virtual void exitTime_unit(SystemVerilogPreParser::Time_unitContext *ctx) = 0;

  virtual void enterTimescale_directive(SystemVerilogPreParser::Timescale_directiveContext *ctx) = 0;
  virtual void exitTimescale_directive(SystemVerilogPreParser::Timescale_directiveContext *ctx) = 0;

  virtual void enterUnconnected_drive_directive(SystemVerilogPreParser::Unconnected_drive_directiveContext *ctx) = 0;
  virtual void exitUnconnected_drive_directive(SystemVerilogPreParser::Unconnected_drive_directiveContext *ctx) = 0;

  virtual void enterUnconnected_drive_value(SystemVerilogPreParser::Unconnected_drive_valueContext *ctx) = 0;
  virtual void exitUnconnected_drive_value(SystemVerilogPreParser::Unconnected_drive_valueContext *ctx) = 0;

  virtual void enterUndef_directive(SystemVerilogPreParser::Undef_directiveContext *ctx) = 0;
  virtual void exitUndef_directive(SystemVerilogPreParser::Undef_directiveContext *ctx) = 0;

  virtual void enterUndefineall_directive(SystemVerilogPreParser::Undefineall_directiveContext *ctx) = 0;
  virtual void exitUndefineall_directive(SystemVerilogPreParser::Undefineall_directiveContext *ctx) = 0;

  virtual void enterVersion_specifier(SystemVerilogPreParser::Version_specifierContext *ctx) = 0;
  virtual void exitVersion_specifier(SystemVerilogPreParser::Version_specifierContext *ctx) = 0;


};

