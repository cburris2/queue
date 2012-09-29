#include "Queue.h"
#include <iostream>
#include <assert.h>

Queue::Queue() {
  front =0;
  back =0;
  numOfelements= 0; 

}

Queue::~Queue() {
 // Node* curr;
  while (!isEmpty()){
   dequeue();
 //std::<< cout << front->getValue();
}
}

void Queue::enqueue(int y) {
  
   Node* curr = new Node(y);
   if (front == 0) {
      front = curr;
      back = curr; 
   }
   else {
      back->setNext(curr);
      back = curr;
   }
   numOfelements++;
  // back++;
  

}

int Queue::dequeue() {
  Node* curr2 =front;
  
  assert (numOfelements !=0);
  int result = front->getValue();
  
  front = curr2->getNext();
  delete curr2;
  numOfelements--;
  return result;

}

int Queue::size() {
  if (isEmpty()) {
   return 0;
 }
  else {
   return numOfelements;
 } 
}

bool Queue::isEmpty(){
 if (numOfelements == 0){
  return true;
 }
 else {
  return false;
  }
}

