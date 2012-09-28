#include "Queue.h"
#include <iostream>
#include <assert.h>

Queue::Queue(int initialSize) {
  arrayQueue = new int[initialSize];
  front = 0;
  back = 0;
  capacity = 10;
  numElements = 0;

}

Queue::~Queue() {
  delete[] arrayQueue;
}

void Queue::enqueue(int value) {
 

 // std::cout << "Inside enqueue:before if" << std::endl;
   if (numElements == capacity)  {
     
 /*    if (front > back) {  // deals with special case 
         
       int* theQueue = new int[doubleCapacity]; 
      for (int i=front; i<=capacity; i++) {
         theQueue[i] =arrayQueue[i];
        } 
      for (int i=back; i<front; i++) {
         theQueue[i] =arrayQueue[i];
        }      
          
        delete[] arrayQueue;
        arrayQueue = theQueue;       
        capacity = doubleCapacity ; 
        front = 0;
        back = numElements;
} */
// if (front < back) {
    doubleCapacity=capacity*2;
    std::cout << "Inside enqueue: in else before for" << std::endl;
   int* theQueue = new int[doubleCapacity];  // create new stack twice as big
    for (int i=0; i<=capacity; i++) {
      theQueue[i] = arrayQueue[i];
     }
     
     back = numElements;  
     //delete[] arrayQueue;
     arrayQueue = theQueue;        
     capacity = doubleCapacity;     
  // } 
    // assert(back != capacity);
/*   
  std::cout << "Enqueue:before Quarter " << capacity << std::endl;
   if (isQuarter()) {  
     quarterCapacity=capacity/4;
     std::cout << "Enqueue:before Quarter " << capacity << std::endl;
    int* newQueueh = new int[quarterCapacity+1];  // create new queue half as big
   for (int i =1; i<=capacity; i++) {
      newQueueh[i] = arrayQueue[i];
     }
     capacity = quarterCapacity+1;
     delete [] arrayQueue;
     newQueueh = arrayQueue;
 }  
   */   
}
 // std::cout << "Inside enque:before back is set " << std::endl;
  std::cout << "back is = " << back <<"cap is " << capacity << std::endl;
      arrayQueue[back] = value;
      back = (back+1)% capacity;
      numElements++;   
  std::cout << "Inside enque:after back is set"<< back << std::endl;

}

int Queue::dequeue(){

 assert(!isEmpty());  
 // int result = arrayQueue[front+1];
  int result = arrayQueue[front];
  
     front = (front+1)% capacity;
     	 
     numElements--;   
  

//  std::cout << "after dequeue front= "<< front << std::endl;
     return result;

//  std::cout << "after dequeue front= "<< front << std::endl;
}

int Queue::size() {
  if (isEmpty()) {
    return 0;
 }
  else {
    return numElements;
 } 
}

bool Queue::isEmpty(){
  if (numElements == 0){
     return true;
 }
 else {
     return false;
  }
}
bool Queue::isFull(){
  if (capacity == numElements){

    return true;

}
 else {
    return false;
  }
}
bool Queue::isQuarter(){
  if((float)(numElements/capacity) < .25) {
     return true;
  }
 else {
     return false;
  }
}


