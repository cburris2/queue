#include "Queue.h"
#include <iostream>
#include <assert.h>
#include <list>

Queue::Queue() {

} 


void Queue::enqueue(int x)  {
  theQueue.push_back(x);   
 

}

int Queue::dequeue() {
 int result = theQueue.front(); 
 theQueue.pop_front();
 return result;

}

int Queue::size() {
  if (isEmpty()) {
  return 0;
 }
  else {
   return theQueue.size();
 } 
}

bool Queue::isEmpty(){
 if (theQueue.size()==0){
  return true;
 }
 else {
  return false;
  }
}

