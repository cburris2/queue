BUILD = ./build
TEST = ./test
LIB = ./lib
SRC = ./src

CPP = g++
CPPFLAGS = -Wall -Wextra

all: $(BUILD)/main $(TEST)/list_test

$(BUILD)/main: $(SRC)/Queue.cpp $(SRC)/Queue.o
	cd $(SRC); $(MAKE)

$(TEST)/list_test: $(TEST)/Queue.cpp $(SRC)/Queue.o
	cd $(TEST); $(MAKE)

clean:
	cd $(SRC); $(MAKE) clean
	cd $(TEST); $(MAKE) clean

