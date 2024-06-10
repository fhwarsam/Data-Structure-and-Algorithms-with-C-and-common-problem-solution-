#ifndef DoublyLinkedList_hpp
#define DoublyLinkedList_hpp



void printList(); // This is the method that prints all the values.
Node* getHead(); // This prints the value at the head.
Node* getTail(); // This prints the value at the tail of the list.
int getLength(); // This prints the length of the list 
void append(int value);// adds node to the end of the 
void deleteLast();// Delete the last element by disconnecting from the tail. 
void prepend(int value);// adding element at head, beginning of the list;
void deleteFirst();// Delete the first item in the list;
Node* get(int index);// Method to get a node at a given position
bool set(int index, int value);// set the value of the givemn position to a new value
bool insert(int index, int value);// set the value of the givemn position to a new value
void deleteNode(int index);// delete a node at any position
void swapFirst(); // swaps the first element with the last one
void reverse(); // reverses a doubly linked list
bool isPalindrome(); // checks if the list is palindrome


#endif



