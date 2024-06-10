#include <iostream>
#include "Stack.cpp"


int main(){

std::cout << "Hello Stack \n";
std::cout << INT_MIN <<" \n";


Stack* stack = new Stack(0);
//Test for printstack method that is expected 
//to show all the items in the list.
    stack->printStack();
   
   // Test for getTop method to show whats on top;
   // and then prints its value
   std::cout <<" \n The value at the top is: "<< stack->getTop()->value << "\n";
   
   // Test for the height function to show how many
   // elements are in the list and then prints its value
   std::cout << "The size of the stack is: " << stack->getHeight() << "\n";

   stack->push(1);

   std::cout<< "Printing the value after pushing an element \n";
   stack->printStack();
   std::cout << "\n The size of the stack is: " << stack->getHeight() << "\n";
   std::cout <<" The value at the top is: "<< stack->getTop()->value << "\n";

    std::cout << stack->pop() << " \n";


    return 0;
}