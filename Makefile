####################################################################################################
# Options
####################################################################################################
PYTHON:=python
DB_DIR:=src/database
DB_CLASSES:=design instance net pin port
DB_FILES:=$(addsuffix .cpp, $DB_CLASSES) $(addsuffix .h, $DB_CLASSES)
DB_SRC:=$(addprefix $(DB_DIR)/, $(DB_FILES))
BMG:=../beacon-model-generation/dist/bmg
CONFIG:=$(DB_DIR)/eda.yml

####################################################################################################
# Default
####################################################################################################

default: $(DB_SRC) verilog_parser systemverilog_parser


####################################################################################################
# Database
####################################################################################################

$(DB_SRC): $(CONFIG) $(BMG)
	$(BMG) --config $(CONFIG) --output $(DB_DIR)


####################################################################################################
# Parsers
####################################################################################################
PARSER_DIR:=src/parsers
ANTLR4=antlr4 -Dlanguage=Cpp 

$(info $(GRAMMER_DIR))

verilog_parser:
	cd $(PARSER_DIR)/verilog; \
	$(ANTLR4) *.g4

systemverilog_parser:
	cd $(PARSER_DIR)/systemverilog; \
	$(ANTLR4) *.g4
