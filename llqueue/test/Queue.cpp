#include "gtest/gtest.h"
#include "../src/Queue.h"
#include <iostream>



/*TEST(QueueTest, enqueue) {
  Queue* q = new Queue();
   q->enqueue(1);
   q->enqueue(2);
   q->enqueue(3);
  

  EXPECT_EQ(1, q->dequeue());
  
//  std::cout<< "The queue has" << enqueue(21) << "elements" <<std::endl; 
  delete q;
}*/

TEST(QueueTest, Size) {

 Queue* m = new Queue();
// m->size();
 
  m->enqueue(1);
 // m->enqueue(2);
 // m->enqueue(3);
 // m->size();
 // std::cout<< "The queue has" << back << front << "elements" <<std::endl; 


 EXPECT_EQ(1, m->size());
 delete m;
} 
 



/* TEST(QueueTest, dequeue){

 Queue* r = new Queue();
 r->dequeue();

 delete r;


} */ //  uncomment to test dequeue on empty queue method will abort when tested

