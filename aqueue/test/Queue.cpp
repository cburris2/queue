#include "gtest/gtest.h"
#include "../src/Queue.h"

TEST(QueueTest, enqueue) {
  Queue* q = new Queue(4);
  q->enqueue(1);
  q->enqueue(2);
  q->enqueue(3);
  

  EXPECT_EQ(1, q->dequeue());

  
  delete q;
}

TEST(QueueTest, Size) {

 Queue* m = new Queue(10);
 m->size();
 
  m->enqueue(1);
  m->enqueue(2);
  m->enqueue(3);
  m->size();
  // std::cout<<("The queue has")<< m.size() << "elements" <<std::endl; 


 EXPECT_EQ(3, m->size());
 delete m;
}
 



/* TEST(QueueTest, dequeue){

 Queue* r = new Queue(10);
 r->dequeue();

 delete r;


} */ //  uncomment to test dequeue on empty queue method will abort when tested

