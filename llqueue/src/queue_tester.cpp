#include "Queue.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
  Queue* theQueue = new Queue();
  theQueue->enqueue(30);


  cout << theQueue->dequeue() << endl;
 
 // theQueue;

  return 0;
}
