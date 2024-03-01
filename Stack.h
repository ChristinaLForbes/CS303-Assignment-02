// Christina Forbes 3/1/2024 Assignment 2

#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
  vector<int> stack;
public:
  void push(int item);
  int& top();
  void pop();
  bool empty() const;
  size_t size() const;
  double findAvg();
  void printStack();
};