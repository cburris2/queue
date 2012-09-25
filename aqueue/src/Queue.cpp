#include "Queue.h"
#include <iostream>
#include <assert.h>

Queue::Queue(int initialSize) {
  arrayQueue = new int[initialSize];
  front = 0;
  back =0;
  capacity = initialSize;
  sizeOfarray = 0;
//  doubleCapacity = 20;
}

Queue::~Queue() {
  delete[] arrayQueue;
}

void Queue::enqueue(int value) {
   
  if (sizeOfarray == capacity)  {
     doubleCapacity=capacity*2;
    
    int* theQueue = new int[doubleCapacity];  // create new stack twice as big
    for (int i=0; i<=capacity; i++) {
     
      theQueue[i] = arrayQueue[i];
     }
   
   delete[] arrayQueue;
   arrayQueue = theQueue;  
   capacity = doubleCapacity;
 
   }
 
  // assert(back != capacity);
   
    if (isQuarter()) {  
    
   int* newQueueh = new int[capacity/2];  // create new queue half as big
    for (int i =1; i<=capacity; i++) {
     
      newQueueh[i] = arrayQueue[i];
     }
   capacity = doubleCapacity;
   delete [] arrayQueue;
   newQueueh = arrayQueue;


 }  
    back= (back+1)%capacity;
    arrayQueue[back] = value;
    sizeOfarray++;
   

 }


int Queue::dequeue() {
   if (!isEmpty()){
   int result = arrayQueue[front+1];
   front = (front+1)%capacity; 
   sizeOfarray--;   
   return result;
 }
 else {
  
 std::cout << "Method Invalid: Queue is Empty" << std::endl;
 
  }
  

}

int Queue::peek() {
 if (!isEmpty()){
  
  return arrayQueue[back-1];
  }
  else{
  std::cout << "Queue is Empty" << std::endl;
  }
}

int Queue::size() {
  if (isEmpty()) {
  return 0;
 }
  else {
   return sizeOfarray;
 } 
}

bool Queue::isEmpty(){
 if (front == back){
  return true;
 }
 else {
  return false;
  }
}
bool Queue::isFull(){
 if (capacity == sizeOfarray){

  return true;

}
 else {
  return false;
  }
}
bool Queue::isQuarter(){
 if(capacity/4 == back){
  return true;
  }
 else {
  return false;
  }
}


