#ifndef stack_hpp
#define stack_hpp
// The functions that are going to be placed here are the 
// functions that are going to be implemented 

void printStack(); // prints all the items in the stack
Node* getTop();// returns the elements at the top
int getHeight(); // returns the size/height of the stack
void push(int value);// pushes a value to top of the stack
int pop();// returns the value of the removed item
#endif