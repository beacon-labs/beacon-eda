
// Generated from SystemVerilogPreParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "SystemVerilogPreParserVisitor.h"


/**
 * This class provides an empty implementation of SystemVerilogPreParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  SystemVerilogPreParserBaseVisitor : public SystemVerilogPreParserVisitor {
public:

  virtual std::any visitSource_text(SystemVerilogPreParser::Source_textContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompiler_directive(SystemVerilogPreParser::Compiler_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBegin_keywords_directive(SystemVerilogPreParser::Begin_keywords_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCelldefine_directive(SystemVerilogPreParser::Celldefine_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefault_nettype_directive(SystemVerilogPreParser::Default_nettype_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefault_nettype_value(SystemVerilogPreParser::Default_nettype_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElse_directive(SystemVerilogPreParser::Else_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElsif_directive(SystemVerilogPreParser::Elsif_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnd_keywords_directive(SystemVerilogPreParser::End_keywords_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEndcelldefine_directive(SystemVerilogPreParser::Endcelldefine_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEndif_directive(SystemVerilogPreParser::Endif_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFile_directive(SystemVerilogPreParser::File_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFilename(SystemVerilogPreParser::FilenameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGroup_of_lines(SystemVerilogPreParser::Group_of_linesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifier(SystemVerilogPreParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfdef_directive(SystemVerilogPreParser::Ifdef_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfndef_directive(SystemVerilogPreParser::Ifndef_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInclude_directive(SystemVerilogPreParser::Include_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLevel(SystemVerilogPreParser::LevelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLine_directive(SystemVerilogPreParser::Line_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLine_directive_(SystemVerilogPreParser::Line_directive_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMacro_delimiter(SystemVerilogPreParser::Macro_delimiterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMacro_esc_newline(SystemVerilogPreParser::Macro_esc_newlineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMacro_esc_quote(SystemVerilogPreParser::Macro_esc_quoteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMacro_identifier(SystemVerilogPreParser::Macro_identifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMacro_name(SystemVerilogPreParser::Macro_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMacro_quote(SystemVerilogPreParser::Macro_quoteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMacro_text(SystemVerilogPreParser::Macro_textContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMacro_usage(SystemVerilogPreParser::Macro_usageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNounconnected_drive_directive(SystemVerilogPreParser::Nounconnected_drive_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber(SystemVerilogPreParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPragma_directive(SystemVerilogPreParser::Pragma_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPragma_expression(SystemVerilogPreParser::Pragma_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPragma_keyword(SystemVerilogPreParser::Pragma_keywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPragma_name(SystemVerilogPreParser::Pragma_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPragma_value(SystemVerilogPreParser::Pragma_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitResetall_directive(SystemVerilogPreParser::Resetall_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSource_text_(SystemVerilogPreParser::Source_text_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitString_literal(SystemVerilogPreParser::String_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitText_macro_definition(SystemVerilogPreParser::Text_macro_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitText_macro_usage(SystemVerilogPreParser::Text_macro_usageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTime_precision(SystemVerilogPreParser::Time_precisionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTime_unit(SystemVerilogPreParser::Time_unitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTimescale_directive(SystemVerilogPreParser::Timescale_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnconnected_drive_directive(SystemVerilogPreParser::Unconnected_drive_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnconnected_drive_value(SystemVerilogPreParser::Unconnected_drive_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUndef_directive(SystemVerilogPreParser::Undef_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUndefineall_directive(SystemVerilogPreParser::Undefineall_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVersion_specifier(SystemVerilogPreParser::Version_specifierContext *ctx) override {
    return visitChildren(ctx);
  }


};

