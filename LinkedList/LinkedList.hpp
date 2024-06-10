//
//  LinkedList.hpp
//  DTAonC++
//
//  Created by Farhan Warsame on 4/18/24.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <stdio.h>
void append(int value); // append a value at the end of the list
void prepend(int value); // add value at the beginning of the lsit
bool set(int index, int value); // insert/add a value at a given position(index).
void printList(); // prints all the elements in the list
void getHead();// returns the value at the beginning
void getTail();// returns the value at end
void getLength(); // returns the size or the length of the list
void deleteLast();// This removes items from the last position
void deleteFirst();// This removes items from the first position
Node* get(int index);// This removes items from the first position
bool inset(int index, int value); // insert/add a value at a given position(index).
void deleteNode(int index); // deleting a node at any given position(index).
void reverse(); // Reversing the linked list entirely.
Node* findMiddleNode(); //This function returns a node at the middle.
bool hasLoop(); //checks if there is a loop in the linked list.
Node* findKthFromEnd(int k); //This function returns a node at specified position.

// This functions partitions the list with one partion
 //containing all the values < x and partion two contains all the values > x
void partitionList(int x);
#endif /* LinkedList_hpp */
