#include "Stack.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
  Stack* stack = new Stack(2);
  stack->push(5);
  stack->push(10);
  stack->push(15);
  stack->push(20);
  stack->push(25);

  cout << stack->pop() << endl;
  cout << stack->pop() << endl;
  cout << stack->pop() << endl;

  delete stack;

  return 0;
}
