#include<iostream>
#include "Node.cpp"
#include "Stack.hpp"

class Stack{
    private:
        Node* top;
        int height;

public:
    Stack(int value){
        top = new Node(value);
        height = 1;

    }
    void printStack(){
        Node* temp = top;
        std::cout << "the values are: ";
        while(temp){
        std::cout << temp->value <<" ";
        temp = temp->next;
    }
    }
    // returns the elements at the top
    Node* getTop(){
        return top;
    }

     // returns the size/height of the stack
    int getHeight(){
        return height;
    }

    // pushes a value to top of the stack
    void push(int value){
        Node* newNode = new Node(value);
        if(height == 0){
            top = newNode;
            height = 1;
            
        }
        else {
            newNode->next = top;
            top = newNode;
            height++;
            
        }
        
    }
    // returns the value of the removed item
    int pop(){
        if(height == 0) return INT_MIN;
        Node* temp = top;
        int poppedValue = top->value;
        top = top->next;
        height--;

        return poppedValue;
    }
};
