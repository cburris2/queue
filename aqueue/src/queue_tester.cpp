#include "Queue.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
  Queue* arrayQueue = new Queue(3);
  arrayQueue->enqueue(5);
  arrayQueue->enqueue(10);
  arrayQueue->enqueue(15);
  arrayQueue->enqueue(15);
  arrayQueue->enqueue(5);
  arrayQueue->enqueue(10);
  arrayQueue->enqueue(15);
  arrayQueue->enqueue(15);
  

  

  
  arrayQueue->enqueue(15);
  arrayQueue->enqueue(15);
  
  arrayQueue->enqueue(15);
  
  arrayQueue->enqueue(15);

  

  cout << arrayQueue->dequeue() << endl;
  cout << arrayQueue->dequeue() << endl;
  cout << arrayQueue->dequeue() << endl;

  cout << arrayQueue->dequeue() << endl;
  cout << arrayQueue->dequeue() << endl;

  cout << arrayQueue->dequeue() << endl;



  cout << arrayQueue->dequeue() << endl;


  cout << arrayQueue->dequeue() << endl;

  delete arrayQueue;

  return 0;
}
