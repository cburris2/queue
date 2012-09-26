#include "Node.h"
#include <iostream>
#include <assert.h>

Node::Node(int x) {
 next = 0;
 value = 0; 
 }

Node::~Node() {

}
void Node::setNext(Node* n) {
  next = n; 
}


int Node::getValue() {
  return value; 
  }

Node* Node::getNext() {
 return next;
  }
 

  



