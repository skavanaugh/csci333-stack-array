#include "Stack.h"
#include <iostream>

Stack::Stack(int initialSize) {
  theStack = new int[initialSize];
  top = 0;
  arraySize = initialSize;
}

Stack::~Stack() {
  delete[] theStack;
}

void Stack::push(int value) {
  //if theStack is full
  // create new stack twice as big
  // copy all elements to new stack
  // delete old stack
  // point old stack pointer to new stack

  if (size() >= arraySize) {
    int* newStack = new int[2*arraySize];
    for (int i = 0; i < size(); i++) {
      newStack[i]=theStack[i];
    }
    delete[] theStack;
    theStack = newStack;
    arraySize = 2*arraySize;   
  }
  theStack[top] = value;
  top++;
}

int Stack::pop() {
  top--;
  return theStack[top];
}

int Stack::peek() {
  return theStack[top-1];
}

int Stack::size() {
  return top;
}
