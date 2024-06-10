#include<iostream>
#include "Node.cpp"
#include "Queue.hpp"

class Queue{
    private:
        Node* first;
        Node* last;
        int length;

    public:
        Queue(int value){
            Node* newNode = new Node(value);
            first = newNode;
            last = newNode;
            length =1;
            
        }
        // prints all elements in the queue;
        void printQueue(){
            Node* temp = first;
            while(temp ){
                std::cout << temp->value <<" ";
                temp=temp->next;

            }
        }


        // returns the first node
        Node* getFirst(){
            return first;
        } 
        // returns the last node
        Node* getLast(){
            return last;
        }
        // returns the size/length of the list
        int getLength(){
            return length;
        } 

        // adds items to the queue
        void enqueue(int value){
            Node* newNode = new Node(value);
            if(length == 0){
                first= newNode;
                last = newNode;
                length =1;
            }
            else{
                last->next = newNode;
                    last = newNode;}
                length++;
            

        } 

        // removes item from the list
        int dequeue(){
            if(length == 0 )return INT_MIN;
            Node* temp = first;
            int dequeuedValue = first->value;
            if(length == 1){
                first=nullptr;
                last=nullptr;
                length--;
            }
            else{

            first = first->next;
            }
            delete temp;
            length--;
            return dequeuedValue;
        }



};