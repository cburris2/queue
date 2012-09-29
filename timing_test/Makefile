BUILD1 = ../aqueue/build
CPP = g++
CPPFLAGS = -Wall -Wextra

aqueue = ../aqueue

all: aqueue_test list_test llqueue_test;

aqueue_test: $(aqueue)/src/Queue.o time_test.cpp 
	$(CPP) $(CPPFLAGS) -o $(aqueue)/build/aqueue_test time_test.cpp $(aqueue)/src/Queue.o



BUILD3 = ../llqueue/build
CPP = g++
CPPFLAGS = -Wall -Wextra


llqueue = ../llqueue


llqueue_test: $(llqueue)/src/Queue.o $(llqueue)/src/Node.o ll_time_test.cpp 
	$(CPP) $(CPPFLAGS) -o $(llqueue)/build/llqueue_test ll_time_test.cpp $(llqueue)/src/Queue.o $(llqueue)/src/Node.o




BUILD2 = ../listqueue/build
CPP = g++
CPPFLAGS = -Wall -Wextra


listqueue = ../listqueue

list_test: $(listqueue)/src/Queue.o list_time_test.cpp 
	$(CPP) $(CPPFLAGS) -o $(listqueue)/build/list_test list_time_test.cpp $(listqueue)/src/Queue.o



clean:

	rm -f *.o
	rm -f $(BUILD1)/*_test      
	rm -f $(BUILD3)/*_test
	rm -f $(BUILD2)/*_test
