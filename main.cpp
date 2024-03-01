// Christina Forbes 3/1/2024 Assignment 2

#include "functions.h"
using namespace std;

int main() {
  // outputs header for linked list
  cout << setfill('-') << setw(20) << "" << endl;
  cout << "SINGLE LINKED LISTS" << endl;
  cout << setfill('-') << setw(20) << "" << endl << endl;

  printLinkedListExample();
  
  // outputs header for stack
  cout << setfill('-') << setw(20) << "" << endl;
  cout << "STACKS" << endl;
  cout << setfill('-') << setw(20) << "" << endl << endl;

  printStackExample();

  return 0;
}