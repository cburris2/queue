#ifndef __QUEUE_H__
#define __QUEUE_H__
#include "Node.h"
class Queue {
 private:
  int numOfelements;  
  Node* front;
  Node* back;
 
  
 public:
  Queue();
  ~Queue(); //destructor
  void enqueue(int y);
  int dequeue();
  
  int size();
  bool isEmpty();
};


#endif
