#include "Node.cpp"
#include "DoublyLinkedList.hpp"
#include <iostream>
class DoublyLinkedList
{
private:
    int value;
    Node* head;
    Node* tail;
    int length;
    
public:
    DoublyLinkedList(int value){
    Node* newNode = new Node(value);
    head = newNode;
    tail = newNode;
    length = 1;
    }
    // This is the method that prints all the values;
    void printList(){
        Node* temp = head;
        while (temp)
        {std::cout << temp->value << std::endl;
        temp = temp->next;
        }
        
    } 

 // This prints the value at the head.
    Node* getHead(){
        return head;
    }
    // This prints the value at the tail of the list.
    Node* getTail(){
        return tail;
    } 

    // This prints the length of the list
    int getLength(){
            return length;
    }  

    // adds node to the end of the 
    void append(int value){
        Node* newNode = new Node(value);
        if(length == 0){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            newNode->prev = tail;
            tail=newNode;
            }
            
            length++;

        
    }
    // Delete the last element by disconnecting from the tail. 
    void deleteLast(){
        Node* temp = tail;

        if(length == 0) return;
        if(length ==1){
            head =nullptr;
            tail=nullptr;
        }
        else{
            tail = tail->prev;
            tail->next = nullptr;
        }
        delete temp;
        length--;
    }

    // adding element at head, beginning of the list;
    void prepend(int value){
        Node* newNode = new Node(value);
        if(length ==0){
            head = newNode;
            tail = newNode;
        }
        else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        length++;
    }
    // Delete the first item in the list;
    void deleteFirst(){
        Node* temp = head;
        if(length == 0) return;
        if(length ==1){
            head=nullptr;
            tail=nullptr;
        }else{
            head = head->next;
            head->prev = nullptr;

        }
        delete temp;
        length--;
    }

    // Method to get a node at a given position
    // Get implemented same as single linked list works for doubly linked list too.
    // But there is optimizations process where if index number is in the upper half 
    // of the list it can be started at the tail and moved backwards.
    Node* get(int index){
        Node* temp = nullptr;
        if(index <0 || index >= length){
            return nullptr;
        }
        if(index < (length/2)){
            temp = head;
            for(int i =0; i< index; i++){
                temp = temp->next;
            }
        }else {
            temp = tail;
            for(int i = length-1; i > index; i--){
                temp = temp->prev;
            }
        }

    return temp;
    }

    // set the value of the given position to a passed in new value
    bool set(int index, int value){
        //if(index <0 || index >= length) return false;
        Node* temp = get(index);
        while (temp){
            temp->value = value;
            return true;
        }
        return false;
        
        
    }

    // set the value of the givemn position to a new value
    bool insert(int index, int value){
        if(index < 0 || index > length) return false;
        if(index == 0){
            prepend(value);
            return true;
        }
        if(index == length){
            append(value);
            return true;
        }
        Node* newNode=new Node(value);
        Node* before = get(index -1);
        Node* after = before->next;

        newNode->prev =before;
        newNode->next = after;
        after->prev = newNode;
        before->next = newNode;

        length++;
        return true;
    }

// delete a node at any position
    void deleteNode(int index){
        if(index < 0 || index >=length) return;
        if(index == 0)return deleteFirst();
        if(index == length-1) return deleteLast();

        Node* temp = get(index);
        temp->next->prev = temp->prev;
        temp->prev->next = temp->next;
        delete temp;
        length--;
    }

};
