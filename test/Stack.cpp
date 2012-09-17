#include "gtest/gtest.h"
#include "../src/Stack.h"

TEST(StackTest, Push) {
  Stack* s = new Stack();
  s->push(6);

  EXPECT_EQ(6, s->peek());
  delete s;
}

TEST(StackTest, NewArray) {
  Stack* s = new Stack(2);
  EXPECT_EQ(0,s->size());
  s->push(1);
  EXPECT_EQ(1,s->size());
  s->push(2);
  EXPECT_EQ(2,s->size());
  s->push(3);
  EXPECT_EQ(3,s->size());
  s->push(4);
  EXPECT_EQ(4,s->size());
  EXPECT_EQ(4,s->peek());

}

