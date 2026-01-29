# CISC2200  Lab2

In this lab assignment, we practice **working with linked list**, **working with class template**,
and **understanding testcases**.

## Download starter code

From your terminal (mac or WSL/Ubunto) window, you can use the following command to download it:
```
git clone https://github.com/CISC2200-Spring2026/lab2.git
```

## Programming Environment Setup
If you haven't done so already, please refer to lab1 and links provided in the BB to set up programming environment. 
Alternatively, you can use servers at CIS department. If you need help reset your password, please email the instructor.

**Please follow these tutorials closely and carefully.**

## Requirements

The class  **SLList** as studied in the class is defined in the **SLList.h** provided. Note that this version does not introduce sentinel node, but 
already implements the idea of using **count** to remember the length of the list. 

Please implement the following member functions, **iteratively (i.e., without using recursion)** in the **SLList.h**. The pseudocode for these
linked list manipulation will be discussed in class.

0. Add a member function **printAll()** to display to the terminal the items stored in the list.
1. Implement **removeFirst()** member function
2. Implement **addLast()**  member function, note that the slide has the code, please make sure you understand it. 
3. Implement **get(i)** member function, which return the i-th element in the list: for i=1, it returns the first element, and so on. Similar to the **getFirst()**, the function should return the reference of the **item** field.
   

## Hints

The **main.cpp** provided in this repository tests the above member functions and checks to see if the returned value or the list is changed as
expected by the function. For example, the following code snippet first create a list **K** passing an existing list **L** as parameter, which leads to the copy constructor being called.
It subsequently checks if the two lists have same size or not, and whether the list **K**'s first element and last element have values as expected.
```
 //test copy constructor
  ds::SLList<int> *K = new ds::SLList<int>(L);

  if (L.size() != K->size() ||
     K->get(0) != nums[0] ||
     K->get(SIZE - 1) != nums[SIZE - 1])
  {
      cout <<"failed copy constructor test\n";
  }
  else
          cout <<"passed copy constructor test\n";
```

You can modify the file **main.cpp** anyway you wish
in order to test your member functions. You should take an incremental approach:

1. Implement the **display()** method to help examining the content of the list
2. Build a short list using **addFirst**, **addLast** methods that are provided (and therefore bug-free). Display the resulting list.
3. Implement the required member functions one at time, test and debug it on the list you built, before moving on to work on the next function.
   
## Submission

Submit your **SLList.h** file as source code (do not copy it to a word document) on BB. 
