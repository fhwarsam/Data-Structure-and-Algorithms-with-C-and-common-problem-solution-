//
//  LinkedList.cpp
//  DTAonC++
//
//  Created by Farhan Warsame on 4/18/24.
//

#include "Node.cpp"
#include "LinkedList.hpp"
#include <iostream>

class LinkedList {
private:
    Node* head;
    Node* tail;
    int length;
    
public:
    LinkedList(int value){
        Node* newNode = new Node(value);
        head= newNode;
        tail = newNode;
        length += 1;
    }
    
    ~LinkedList(){
        Node* temp = head;
        while(head){
            head = head ->next;
            delete temp;
            temp = head;
        }
    }
    // append a value at the end of the list
    void append(int value){
        Node* newHead = new Node(value);
        if(length ==0){
            head = newHead;
            tail = newHead;
        }
        else{
            tail->next = newHead;
            tail = newHead;
        }
        length++;
    }
    // add value at the beginning of the lsit
    void prepend(int value){
        Node* newNode = new Node(value);
        if(length == 0){
            head = newNode;
            tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
        length++;
    }
    
       void printList(){
        Node* temp = head;
        while(temp){
            std::cout << temp->value <<std::endl;
            temp = temp->next;
            
        }
    }
    // returns the value at the beginning
    void getHead(){
        std::cout <<" Head Value: "<< head->value <<std::endl;
    }
    
    // returns the value at end
    void getTail(){
        std::cout <<" Tail value: "<< tail->value <<std::endl;
    }
    // returns the size or the length of the list
    void getLength(){
        std::cout <<" Length: " << length <<std::endl;
    }
    
    // This removes items from the last position
    void deleteLast(){
        Node* temp = head;
    
        if(length == 0){return; }
        if(length ==1){
            head = nullptr;
            tail = nullptr;
        }else{
            Node* pre = head;
            while(temp->next){
                pre=temp;
                temp = temp->next;
            }
            tail = pre;
            tail->next = nullptr;
            
            
        }
        delete temp;
        length--;

    }
    // This removes items from the last position
    void deleteFirst(){
        if(length ==0) return;
        Node* temp = head;
        if(length == 1){
            head =nullptr;
            tail = nullptr;
        }
        else{
            head = head->next;
            temp = nullptr;
        }
        delete temp;
        length--;
    }
    
    // This removes items from the first position
    Node* get(int index){        
        if(index < 0|| index >= length)
        {return nullptr;}
        Node* temp = head;
        for(int i=0; i<index; i++){
            temp = temp->next;
        }
        return temp;
    }
    
    // insert/add a value at a given position(index).
    bool set(int index, int value){
        if(index < 0 || index >= length){
            return false;
        }
        Node* temp = get(index);
        if(temp){
            temp->value =value;
            return true;
        }
        return false;
    }
    
    // insert/add a value at a given position(index).
    bool inset(int index, int value){
        if(index < 0 || index >= length)
        { return false;}
        if (index == 0) {
            prepend(value);
            return true;
        }
        if (index==length) {
            append(value);
            return true;
        }
        Node* newNode = new Node(value);
        Node* temp = get(index -1);
        newNode->next = temp->next;
        temp->next = newNode;
        length++;
        return  true;
       }
    
    // deleting a node at any given position(index).
    void deleteNode(int index){
        if(index < 0 || index >= length) return;
        if(index == 0) return deleteLast();
        if(index == length-1) return deleteLast();
        
        Node* prev = get(index -1);
        Node* temp = prev->next;
        
        prev->next = temp->next;
        delete temp;
        length--;
    }
    
    // Reversing the linked list entirely.
    //We need three nodes to keep track of node changes
    void reverse(){
        Node* temp = head;
        head = tail;
        tail = head; // head link is kept by the temporary node
        Node* after = temp->next;
        Node* before = nullptr;
        
        // We need to loop through the entire list and flip 
        //every entry to the one before it
        
        for (int i=0; i<length; i++) {
            after = temp->next;
            temp->next = before;
            before = temp;
            temp = after;
            
        }
    }
    
    //Leetcode problems questoin 1
    //This function returns a node at the middle.
    Node* findMiddleNode(){
        if(length%2==0){
            return get(length/2-1);
        }
        else return get(length/2 );
    }

    //checks if there is a loop in the linked list.
    // The idea is, if faster node reaches the slower node its a circle
    bool hasLoop(){
        Node* faster = head;
        Node* slower = head;
        while(faster->next != nullptr && faster->next->next != nullptr ){
            faster =faster->next->next;
            slower = slower->next;
            if(faster == slower)
                return true;
        }
        return false;
    }
    
    //This function returns a node at the middle.
    Node* findKthFromEnd(int k){
        if(k> length ) return nullptr;
        
        return get(length -k );
    }
    
    // This functions partitions the list with one partion
     //containing all the values < x and partion two contains all the values > x
    void partitionList(int x){
        if(head) return;
        Node* chain1 = head;
        Node* chain2 = head;
        int val = head->value;
    }
};


