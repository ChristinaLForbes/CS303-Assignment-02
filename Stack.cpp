// Christina Forbes 3/1/2024 Assignment 2

#include "Stack.h"

// adds item to top of stack
void Stack::push(int item) {
  stack.push_back(item);
  return;
}

// gets item at top of stack
int& Stack::top() {
  return stack.back();
}

// removes item from top of stack
void Stack::pop() {
  stack.pop_back();
  return;
}

// checks if stack is empty
bool Stack::empty() const {
  return stack.empty();
}

// returns number of items in stack
size_t Stack::size() const {
  return stack.size();
}

// calculates average (mean) of values in stack
double Stack::findAvg() {
  // stack is empty
  if (empty()) {
    return 0;
  }
  // stack is not empty
  else {
    // calculates sum of values in stack
    double sum = 0;

    for (int i = stack.size() - 1; i >= 0; i--) {
      sum += stack.at(i);
    }

    return sum / stack.size();
  }
}

void Stack::printStack() {
  cout << "Stack: ";

  // outputs each stack item
  for (int i = stack.size() - 1; i >= 0; i--) {
    cout << stack.at(i) << " ";
  }

  cout << endl;
  return;
}