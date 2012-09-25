#ifndef __QUEUE_H__
#define __QUEUE_H__

class Queue {
 private:
  int* arrayQueue;
  int front;
  int back;
  int capacity;
  int sizeOfarray;
  int doubleCapacity;
  bool isQuarter();
  bool isFull();
 public:
  Queue(int initialSize = 10);
  ~Queue(); //destructor
  void enqueue(int value);
  int dequeue();
  int peek();
  int size();
  bool isEmpty();
};


#endif
