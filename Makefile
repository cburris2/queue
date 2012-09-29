BUILD = ./aqueue/build
TEST = ./aqueue/test
LIB = ./aqueue/lib
SRC = ./aqueue/src

CPP = g++
CPPFLAGS = -Wall -Wextra

all: $(BUILD)/main $(TEST)/aqueue_test

$(BUILD)/main: $(SRC)/Queue.cpp $(SRC)/Queue.o
	cd $(SRC); $(MAKE)

$(TEST)/aqueue_test: $(TEST)/Queue.cpp $(SRC)/Queue.o
	cd $(TEST); $(MAKE)





BUILD = ./llqueue/build
TEST = ./llqueue/test
LIB = ./llqueue/lib
SRC = ./llqueue/src

CPP = g++
CPPFLAGS = -Wall -Wextra

all: $(BUILD)/main $(TEST)/llqueue_test

$(BUILD)/main: $(SRC)/Queue.cpp $(SRC)/Queue.o
	cd $(SRC); $(MAKE)

$(TEST)/llqueue_test: $(TEST)/Queue.cpp $(SRC)/Queue.o
	cd $(TEST); $(MAKE)





BUILD = ./listqueue/build
TEST = ./listqueue/test
LIB = ./listqueue/lib
SRC = ./listqueue/src

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

