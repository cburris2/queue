#include "Queue.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
  Queue* arrayQueue = new Queue(10);
  arrayQueue->enqueue(5);
  arrayQueue->enqueue(10);
  arrayQueue->enqueue(25);
  arrayQueue->enqueue(35);
/*  arrayQueue->enqueue(45);
  arrayQueue->enqueue(70);
  arrayQueue->enqueue(85);
  arrayQueue->enqueue(95);
  

  

  
  arrayQueue->enqueue(105);
  arrayQueue->enqueue(115);
  
  arrayQueue->enqueue(125);
  
  arrayQueue->enqueue(135);

  */

  cout << arrayQueue->dequeue() << endl;
  cout << arrayQueue->dequeue() << endl;
  cout << arrayQueue->dequeue() << endl;
/*
  cout << arrayQueue->dequeue() << endl;
  cout << arrayQueue->dequeue() << endl;

  cout << arrayQueue->dequeue() << endl;


  cout << arrayQueue->dequeue() << endl;
  cout << arrayQueue->dequeue() << endl;
  cout << arrayQueue->dequeue() << endl;

  cout << arrayQueue->dequeue() << endl;
  cout << arrayQueue->dequeue() << endl;


  cout << arrayQueue->dequeue() << endl;

*/
  cout << arrayQueue->dequeue() << endl;

  delete arrayQueue;

  return 0;
}
