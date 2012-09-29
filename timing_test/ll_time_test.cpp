#include <iostream>
#include <ctime>


#include "../llqueue/src/Queue.h"



int main() {
  int start,end,elapsed;
  double sec;
 
   
   start = clock(); // start ticks
  
   Queue* timedQueue = new Queue();
 
   for (long i=0; i<9999999; i++) {
    
    timedQueue->enqueue(i);

  } 


   for (long i=0; i<9999999; i++) {
    
    timedQueue->dequeue();

  } 


  end = clock();
  elapsed = end - start;
  sec = (double) elapsed/CLOCKS_PER_SEC;

  std::cout << "elapsed time: " << sec << "seconds" << std::endl;
}




