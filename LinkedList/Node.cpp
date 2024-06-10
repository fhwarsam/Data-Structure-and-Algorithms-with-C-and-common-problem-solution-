//
//  Node.cpp
//  DTAonC++
//
//  Created by Farhan Warsame on 4/18/24.
//

#include <stdio.h>
class Node{
public:
    int value;
    Node* next;
    
    Node(int value){
        this->value = value;
        this->next=nullptr;
    }
};
