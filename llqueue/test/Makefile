BUILD = ../build
TEST = ../test
LIB = ../lib
SRC = ../src
GTEST = $(LIB)/gtest-1.6.0
GTEST_MAINA = $(GTEST)/make/gtest_main.a

GTEST_INCLUDES = -I$(GTEST) -I$(GTEST)/include

CPP = g++
CPPFLAGS = -Wall -Wextra

#llqueue: Queue.cpp $(SRC)/Queue.o $(GTEST_MAINA)
#	$(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o llqueue_test $^

llqueue_test: Queue.cpp $(SRC)/Queue.o $(SRC)/Node.o $(GTEST_MAINA)
	$(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o llqueue_test Queue.cpp $(SRC)/Queue.o $(SRC)/Node.o $(GTEST_MAINA)

$(GTEST_MAINA): $(GTEST)/src/*.cc $(GTEST)/src/*.h
	cd $(GTEST)/make; make

clean:
	rm -f llqueue_test
	rm -f $(GTEST_MAINA)
	cd $(GTEST)/make; $(MAKE) clean


