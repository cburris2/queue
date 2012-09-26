BUILD = ../build
CPP = g++
CPPFLAGS = -Wall -Wextra

main: queue_tester.cpp Queue.o Node.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/main queue_tester.cpp Queue.o Node.o

Queue.o: Queue.h Queue.cpp 
	$(CPP) $(CPPFLAGS) -c Queue.cpp 

clean:
	rm -f *.o
	rm -f *~
	rm -f $(BUILD)/main
