#include <iostream>
#include <ctime>
 

int main() {
  int start,end,elapsed;
  double sec;
  
   start = clock(); // start ticks
  
   Queue* timedQueue = new Queue();
 
   for (int i=0; i<12; i++) {
    
    timedQueue->enqueue(i);

  } 

  end = clock();
  elapsed = end - start;
  sec = (double) elapsed/CLOCKS_PER_SEC;

  std::cout << "elapsed time: " << seconds << "seconds" << std::endl;
}




