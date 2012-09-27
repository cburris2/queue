#include "Queue.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
  Queue* theQueue = new Queue();
  cout << "que has been created" << endl;
  theQueue->enqueue(30);

  cout << "enqueue happens " << endl;

  cout << theQueue->dequeue() << endl;
 
    
  cout << "dequeue happens " << endl;

  return 0;
}
