// Christina Forbes 3/1/2024 Assignment 2

#include "functions.h"

void printLinkedListExample() {
  LinkedList<int> list1;
  cout << "Created list" << endl;
  list1.printList();
  cout << endl << endl;

  cout << "List is " << (list1.empty() ? "empty" : "not empty") << endl;
  list1.printList();
  cout << endl << endl;

  list1.push_front(2);
  cout << "Pushed '2' to front of list" << endl;
  list1.printList();
  cout << endl << endl;

  list1.push_front(1);
  cout << "Pushed '1' to front of list" << endl;
  list1.printList();
  cout << endl << endl;

  list1.push_back(5);
  cout << "Pushed '5' to back of list" << endl;
  list1.printList();
  cout << endl << endl;

  list1.push_back(4);
  cout << "Pushed '4' to back of list" << endl;
  list1.printList();
  cout << endl << endl;

  cout << "The front value is '" << list1.front() << "'" << endl;
  list1.printList();
  cout << endl << endl;

  list1.pop_front();
  cout << "Popped front value from list" << endl;
  list1.printList();
  cout << endl << endl;

  cout << "The back value is '" << list1.back() << "'" << endl;
  list1.printList();
  cout << endl << endl;

  list1.pop_back();
  cout << "Popped back value from list" << endl;
  list1.printList();
  cout << endl << endl;

  cout << "List is " << (list1.empty() ? "empty" : "not empty") << endl;
  list1.printList();
  cout << endl << endl;

  cout << "Inserted value '7' at index '1' in list" << endl;
  list1.insert(1, 7);
  list1.printList();
  cout << endl << endl;

  cout << "Inserted value '10' at index '0' in list" << endl;
  list1.insert(0, 10);
  list1.printList();
  cout << endl << endl;

  cout << "Inserted value '3' at index '4' in list" << endl;
  list1.insert(4, 3);
  list1.printList();
  cout << endl << endl;

  list1.remove(1);
  cout << "Removed value at index '1' from list" << endl;
  list1.printList();
  cout << endl << endl;

  list1.remove(5);
  list1.printList();
  cout << endl << endl;

  list1.remove(0);
  cout << "Removed value at index '0' from list" << endl;
  list1.printList();
  cout << endl << endl;

  cout << "Found value '5' at index '" << list1.find(5) << "'" << endl;
  cout << "Note: if index value = list size, then value was not found in list" << endl;
  list1.printList();
  cout << endl << endl;

  cout << "Found value '1' at index '" << list1.find(1) << "'" << endl;
  cout << "Note: if index value = list size, then value was not found in list" << endl;
  list1.printList();
  cout << endl << endl;

  return;
}

void printStackExample() {
  Stack stack1;
  cout << "Created stack" << endl;
  stack1.printStack();
  cout << endl << endl;

  cout << "Stack is " << (stack1.empty() ? "empty" : "not empty") << endl;
  stack1.printStack();
  cout << endl << endl;

  stack1.push(2);
  cout << "Pushed value '2' to top of stack" << endl;
  stack1.printStack();
  cout << endl << endl;

  stack1.push(4);
  cout << "Pushed value '4' to top of stack" << endl;
  stack1.printStack();
  cout << endl << endl;

  stack1.push(7);
  cout << "Pushed value '7' to top of stack" << endl;
  stack1.printStack();
  cout << endl << endl;

  cout << "The top value is '" << stack1.top() << "'" << endl;
  stack1.printStack();
  cout << endl << endl;

  stack1.pop();
  cout << "Popped top value from stack" << endl;
  stack1.printStack();
  cout << endl << endl;

  cout << "Stack is " << (stack1.empty() ? "empty" : "not empty") << endl;
  stack1.printStack();
  cout << endl << endl;

  cout << "Size of stack: " << stack1.size() << endl;
  stack1.printStack();
  cout << endl << endl;

  cout << "Average (mean) of stack values: " << stack1.findAvg() << endl;
  stack1.printStack();
  cout << endl << endl;

  return;
}