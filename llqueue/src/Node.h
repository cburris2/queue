#ifndef __NODE_H__
#define __NODE_H__

class Node {
 private:          // private methods
  Node* next;
  int value;

 public:           // public methods
  Node(int x); //constructor
  ~Node();     //destructor
  void setNext(Node* n);
  int getValue();
  Node* getNext();
  };


#endif
