
// Generated from SystemVerilogPreParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "SystemVerilogPreParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by SystemVerilogPreParser.
 */
class  SystemVerilogPreParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SystemVerilogPreParser.
   */
    virtual std::any visitSource_text(SystemVerilogPreParser::Source_textContext *context) = 0;

    virtual std::any visitCompiler_directive(SystemVerilogPreParser::Compiler_directiveContext *context) = 0;

    virtual std::any visitBegin_keywords_directive(SystemVerilogPreParser::Begin_keywords_directiveContext *context) = 0;

    virtual std::any visitCelldefine_directive(SystemVerilogPreParser::Celldefine_directiveContext *context) = 0;

    virtual std::any visitDefault_nettype_directive(SystemVerilogPreParser::Default_nettype_directiveContext *context) = 0;

    virtual std::any visitDefault_nettype_value(SystemVerilogPreParser::Default_nettype_valueContext *context) = 0;

    virtual std::any visitElse_directive(SystemVerilogPreParser::Else_directiveContext *context) = 0;

    virtual std::any visitElsif_directive(SystemVerilogPreParser::Elsif_directiveContext *context) = 0;

    virtual std::any visitEnd_keywords_directive(SystemVerilogPreParser::End_keywords_directiveContext *context) = 0;

    virtual std::any visitEndcelldefine_directive(SystemVerilogPreParser::Endcelldefine_directiveContext *context) = 0;

    virtual std::any visitEndif_directive(SystemVerilogPreParser::Endif_directiveContext *context) = 0;

    virtual std::any visitFile_directive(SystemVerilogPreParser::File_directiveContext *context) = 0;

    virtual std::any visitFilename(SystemVerilogPreParser::FilenameContext *context) = 0;

    virtual std::any visitGroup_of_lines(SystemVerilogPreParser::Group_of_linesContext *context) = 0;

    virtual std::any visitIdentifier(SystemVerilogPreParser::IdentifierContext *context) = 0;

    virtual std::any visitIfdef_directive(SystemVerilogPreParser::Ifdef_directiveContext *context) = 0;

    virtual std::any visitIfndef_directive(SystemVerilogPreParser::Ifndef_directiveContext *context) = 0;

    virtual std::any visitInclude_directive(SystemVerilogPreParser::Include_directiveContext *context) = 0;

    virtual std::any visitLevel(SystemVerilogPreParser::LevelContext *context) = 0;

    virtual std::any visitLine_directive(SystemVerilogPreParser::Line_directiveContext *context) = 0;

    virtual std::any visitLine_directive_(SystemVerilogPreParser::Line_directive_Context *context) = 0;

    virtual std::any visitMacro_delimiter(SystemVerilogPreParser::Macro_delimiterContext *context) = 0;

    virtual std::any visitMacro_esc_newline(SystemVerilogPreParser::Macro_esc_newlineContext *context) = 0;

    virtual std::any visitMacro_esc_quote(SystemVerilogPreParser::Macro_esc_quoteContext *context) = 0;

    virtual std::any visitMacro_identifier(SystemVerilogPreParser::Macro_identifierContext *context) = 0;

    virtual std::any visitMacro_name(SystemVerilogPreParser::Macro_nameContext *context) = 0;

    virtual std::any visitMacro_quote(SystemVerilogPreParser::Macro_quoteContext *context) = 0;

    virtual std::any visitMacro_text(SystemVerilogPreParser::Macro_textContext *context) = 0;

    virtual std::any visitMacro_usage(SystemVerilogPreParser::Macro_usageContext *context) = 0;

    virtual std::any visitNounconnected_drive_directive(SystemVerilogPreParser::Nounconnected_drive_directiveContext *context) = 0;

    virtual std::any visitNumber(SystemVerilogPreParser::NumberContext *context) = 0;

    virtual std::any visitPragma_directive(SystemVerilogPreParser::Pragma_directiveContext *context) = 0;

    virtual std::any visitPragma_expression(SystemVerilogPreParser::Pragma_expressionContext *context) = 0;

    virtual std::any visitPragma_keyword(SystemVerilogPreParser::Pragma_keywordContext *context) = 0;

    virtual std::any visitPragma_name(SystemVerilogPreParser::Pragma_nameContext *context) = 0;

    virtual std::any visitPragma_value(SystemVerilogPreParser::Pragma_valueContext *context) = 0;

    virtual std::any visitResetall_directive(SystemVerilogPreParser::Resetall_directiveContext *context) = 0;

    virtual std::any visitSource_text_(SystemVerilogPreParser::Source_text_Context *context) = 0;

    virtual std::any visitString_literal(SystemVerilogPreParser::String_literalContext *context) = 0;

    virtual std::any visitText_macro_definition(SystemVerilogPreParser::Text_macro_definitionContext *context) = 0;

    virtual std::any visitText_macro_usage(SystemVerilogPreParser::Text_macro_usageContext *context) = 0;

    virtual std::any visitTime_precision(SystemVerilogPreParser::Time_precisionContext *context) = 0;

    virtual std::any visitTime_unit(SystemVerilogPreParser::Time_unitContext *context) = 0;

    virtual std::any visitTimescale_directive(SystemVerilogPreParser::Timescale_directiveContext *context) = 0;

    virtual std::any visitUnconnected_drive_directive(SystemVerilogPreParser::Unconnected_drive_directiveContext *context) = 0;

    virtual std::any visitUnconnected_drive_value(SystemVerilogPreParser::Unconnected_drive_valueContext *context) = 0;

    virtual std::any visitUndef_directive(SystemVerilogPreParser::Undef_directiveContext *context) = 0;

    virtual std::any visitUndefineall_directive(SystemVerilogPreParser::Undefineall_directiveContext *context) = 0;

    virtual std::any visitVersion_specifier(SystemVerilogPreParser::Version_specifierContext *context) = 0;


};

