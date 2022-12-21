PYTHON:=python
DB_DIR:=src/database
DB_CLASSES:=design instance net pin port
DB_FILES:=$(addsuffix .cpp, $DB_CLASSES) $(addsuffix .h, $DB_CLASSES)
DB_SRC:=$(addprefix $(DB_DIR)/, $(DB_FILES))
BMG:=../beacon-model-generation/dist/bmg
CONFIG:=$(DB_DIR)/eda.yml

$(DB_SRC): $(CONFIG) $(BMG)
	$(BMG) --config $(CONFIG) --output $(DB_DIR)