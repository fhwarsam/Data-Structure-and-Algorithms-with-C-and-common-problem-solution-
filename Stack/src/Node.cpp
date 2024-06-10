#include<iostream>
// Node used for implementing the stack data structire
class Node{
    public:
        int value;
        Node* next;
Node(int value){
    this->value = value;
    next = nullptr;
}
};