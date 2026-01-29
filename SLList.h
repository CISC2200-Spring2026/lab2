#include <iostream>
class IntNode {
public:
  int item;
  IntNode *next;

  IntNode(int f, IntNode *r) {
    item = f;
    next = r;
  }
};

class SLList {
private:
  IntNode * first;
  int count;

public:
  /**
   * @brief Construct a new empty list
   *
   */
  SLList() {
    count = 0;
    first = NULL;
  }
  /**
   * @brief Construct a new SLLIst object
   *
   * @param x the first element
   */
  SLList(int x) {
    addFirst(x);
  }

  /**
   * @brief Prepend the list with item x
   *
   */
  void addFirst(int x) {
    count = count + 1;
    first = new IntNode(x, first);
  }

  /**
   * @brief Get the sentinel object
   *
   * @return int& the sentinel element in list
   */
  int &getFirst() { return first->item; }

  /**
   * @brief Append the list with given item x
   *
   * @param x the item
   */
  void addLast(int x) {
    //Todo by you
  }

  /* display all items in the list one by one */
  void printAll(){
    //Todo by you 
  }

  /* This member function assumes that the list is not empty 
    it remove the first element from the list
    Note that you need to deallcoate the memory used for the first
    element, and make "first" point to the second node */
  void removeFirst () {
     //Todo by you 
  }

  /* this member function assumes that i is valid,
   i.e., i=1, and i<=count */
  int &get(int i) {
     //Todo by you 
  }

  int size() { return count; }
};
