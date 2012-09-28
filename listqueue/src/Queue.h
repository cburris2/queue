#ifndef __QUEUE_H__
#define __QUEUE_H__
#include <list>

class Queue {
 private:
  std::list<int> theQueue; 
  
 public:
  Queue();
  
  void enqueue(int x);
  int dequeue();
  int size();
  bool isEmpty();
};


#endif
