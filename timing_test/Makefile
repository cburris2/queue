BUILD1 = ../aqueue/build
CPP = g++
CPPFLAGS = -Wall -Wextra

aqueue = ../aqueue





aqueue_test: $(aqueue)/Queue.o time_test.cpp 
	$(CPP) $(CPPFLAGS) -o $(BUILD)/aqueue_test time_test.cpp $(aqueue)/Queue.o



BUILD2 = ../listqueue/build
CPP = g++
CPPFLAGS = -Wall -Wextra


listqueue = ../listqueue


//all: aqueue_test list_test llqueue_test

list_test: $(listqueue)/Queue.o time_test.cpp 
	$(CPP) $(CPPFLAGS) -o $(BUILD)/list_test time_test.cpp $(listqueue)/Queue.o



BUILD3 = ../aqueue/build
CPP = g++
CPPFLAGS = -Wall -Wextra


llqueue = ../llqueue



llqueue_test: $(llqueue)/Queue.o time_test.cpp 
	$(CPP) $(CPPFLAGS) -o $(BUILD)/llqueue_test time_test.cpp $(llqueue)/Queue.o

clean:

  rm -f *.o
  rm -f $(BUILD1)/*_test
        
  rm -f $(BUILD2)/*_test
  rm -f $(BUILD3)/*_test
