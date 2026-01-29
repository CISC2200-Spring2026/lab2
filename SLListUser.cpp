#include <iostream>
#include "SLList.h"
using namespace std;

int main() {
  SLList aList = SLList();
  aList.addFirst(10);
  aList.addFirst(5);
  aList.addFirst(0);
  cout << aList.size();

  //Test your member functions one by one... 
  return 0;
}
