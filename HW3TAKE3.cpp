// HW3TAKE3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Header.h"


int main()
{

    Single_Linked_List<int> list;
    list.push(2);
    list.push(1);
    list.push(3);
    list.push(23);
    list.push(87);
    list.push(45);
    list.push(4);

    std::cout << "Sorted List: ";
   
    list.insertion_sort();

    list.printList();


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
