// Christina Forbes 3/1/2024 Assignment 2

#pragma once
#include <iostream>
#include <stdexcept>
using namespace std;

template<typename T>
struct Node {
  T data;
  Node* next;
};

template<typename T>
class LinkedList {
private:
  Node<T>* head;
  Node<T>* tail;
  int num_items;
public:
  // constructor
  LinkedList();
  // destructor
  ~LinkedList();

  // functions
  void push_front(T item);
  void push_back(T item);
  void pop_front();
  void pop_back();
  T& front();
  T& back();
  bool empty() const;
  void insert(size_t index, T item);
  bool remove(size_t index);
  size_t find(T item);
  void printList();
};

// creates list
template<typename T>
LinkedList<T>::LinkedList() {
  head = nullptr;
  tail = nullptr;
  num_items = 0;
}

// deletes all list nodes
template<typename T>
LinkedList<T>::~LinkedList() {
  while (head != nullptr) {
    Node<T>* current = head;
    head = head->next;
    delete current;
  }

  tail = nullptr;
  num_items = 0;
}

template<typename T>
void LinkedList<T>::push_front(T item) {
  // creates node
  Node<T>* newNode = new Node<T>;
  newNode->data = item;
  newNode->next = nullptr;
  
  // list is empty
  if (empty()) {
    head = newNode;
    tail = newNode;
  }
  // list is not empty
  else {
    newNode->next = head;
    head = newNode;
  }

  num_items++;
  return;
}

template<typename T>
void LinkedList<T>::push_back(T item) {
  // creates node
  Node<T>* newNode = new Node<T>;
  newNode->data = item;
  newNode->next = nullptr;

  // list is empty
  if (empty()) {
    head = newNode;
    tail = newNode;
  }
  // list is not empty
  else {
    tail->next = newNode;
    tail = newNode;
  }

  num_items++;
  return;
}

template<typename T>
void LinkedList<T>::pop_front() {
  // list is empty
  if (empty()) {
    cout << "List is empty. No front value to remove" << endl;
  }
  // list contains 1 item
  else if (head == tail) {
    delete head;
    head = nullptr;
    tail = nullptr;
    num_items = 0;
  }
  // list contains more than 1 item
  else {
    Node<T>* del = head;
    head = head->next;
    delete del;
    num_items--;
  }
  return;
}

template<typename T>
void LinkedList<T>::pop_back() {
  // list is empty
  if (empty()) {
    cout << "List is empty. No back value to remove" << endl;
  }
  // list contains 1 item
  else if (head == tail) {
    delete head;
    head = nullptr;
    tail = nullptr;
    num_items = 0;
  }
  // list contains more than 1 item
  else {
    Node<T>* current = head;

    while (current->next != tail) {
      current = current->next;
    }

    Node<T>* del = tail;
    current->next = nullptr;
    tail = current;
    delete del;
    num_items--;
  }
  return;
}

template<typename T>
T& LinkedList<T>::front() {
  try {
    // list is empty
    if (empty()) {
      throw runtime_error("List is empty. No front value to return");
    }
    // list is not empty
    else {
      return head->data;
    }
  }
  catch (runtime_error& e) {
    cout << e.what() << endl;
  }
}

template<typename T>
T& LinkedList<T>::back() {
  try {
    // list is empty
    if (empty()) {
      throw runtime_error("List is empty. No back value to return");
    }
    // list is not empty
    else {
      return tail->data;
    }
  }
  catch (runtime_error& e) {
    cout << e.what() << endl;
  }
}

template<typename T>
bool LinkedList<T>::empty() const {
  return (head == nullptr);
}

template<typename T>
void LinkedList<T>::insert(size_t index, T item) {
  // inserts item at front of list
  if (index == 0) {
    push_front(item);
  }
  // inserts item at end of list
  else if (index >= num_items) {
    push_back(item);
  }
  // inserts item in middle of list
  else {
    // creates node
    Node<T>* newNode = new Node<T>;
    newNode->data = item;
    newNode->next = nullptr;

    size_t currentIndex = 0;
    Node<T>* current = head;

    while ((currentIndex + 1) != index) {
      current = current->next;
      currentIndex++;
    }

    newNode->next = current->next;
    current->next = newNode;
    num_items++;
  }
  return;
}

template<typename T>
bool LinkedList<T>::remove(size_t index) {
  // list is empty
  if (empty()) {
    cout << "List is empty. Unable to remove value at index '" << index << "'" << endl;
    return false;
  }
  // index is invalid
  else if (index >= num_items) {
    cout << "Invalid index. Unable to remove value at index '" << index << "'" << endl;
    return false;
  }
  else {
    // removes front item from list
    if (index == 0) {
      pop_front();
    }
    // removes back item from list
    else if (index == num_items - 1) {
      pop_back();
    }
    // removes item from middle of list
    else {
      size_t currentIndex = 0;
      Node<T>* current = head;

      while ((currentIndex + 1) != index) {
        current = current->next;
        currentIndex++;
      }

      Node<T>* del = current->next;
      current->next = current->next->next;
      delete del;
      num_items--;
    }
    return true;
  }
}

template<typename T>
size_t LinkedList<T>::find(T item) {
  // list is empty
  if (empty()) {
    cout << "List is empty. Unable to find item" << endl;
    return num_items;
  }
  // list is not empty
  else {
    size_t currentIndex = 0;
    Node<T>* current = head;

    // searches list for item
    while (current != nullptr && current->data != item) {
      current = current->next;
      currentIndex++;
    }

    // returns index of item, if found; returns size of list, if not found
    return currentIndex;
  }
}

template<typename T>
void LinkedList<T>::printList() {
  cout << "List: ";

  Node<T>* current = head;

  // outputs each list item
  while (current != nullptr) {
    cout << current->data << " ";
    current = current->next;
  }

  cout << endl;
  return;
}