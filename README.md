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

You can modify the file **main.cpp** anyway you wish
in order to test your member functions. You should take an incremental approach:

1. Implement the **printAll()** method to help examining the content of the list
2. Build a short list using **addFirst** method provided (and therefore bug-free). Display the resulting list.
3. Implement the required member functions one at time, test and debug it on the list you built, before moving on to work on the next function.
   
## Submission

Submit your **SLList.h** file as source code (do not copy it to a word document) on BB. 
