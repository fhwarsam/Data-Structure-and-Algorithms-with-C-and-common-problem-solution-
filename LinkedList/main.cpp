//
//  main.cpp
//  DTAonC++
//
//  Created by Farhan Warsame on 4/18/24.
//


#include <iostream>
#include "LinkedList.cpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    LinkedList* list = new LinkedList(11);
    list->append(3);
    list->append(23);
    list->append(7);
    list->append(4);
    list->append(9);
    std::cout <<"The list elements: "<<std::endl;
   list->printList();
    list->getLength();
    list->getHead();
    list->getTail();
    list->deleteLast();
    list->printList();
    list->prepend(60);
    std::cout <<"Affer aadding new item at the beginning" <<std::endl;
    list->printList();
    list->deleteFirst();
    std::cout <<"Affer deleting item at the beginning" <<std::endl;
    list->printList();
//    std::cout <<"Testing on empty list" <<std::endl;
//    list->deleteFirst();
    std::cout <<" returning the new node values ";
    std::cout<<list->get(4)->value <<std::endl;
    list->set(2, 90);
    std::cout <<"Affer setting the value of index 2" <<std::endl;
    list->printList();
    
    list->inset(3, 89);
    std::cout <<"Affer inserting a value at index 3" <<std::endl;
    list->printList();
    list->inset(0, 900);
    list->inset(6, 200);
    std::cout <<"Affer inserting values at the beging and the end" <<std::endl;
    list->printList();
    list->inset(7, 2000);
    list->deleteNode(5);
    std::cout <<"Affer deleting the node at index 5" <<std::endl;
    list->printList();
    list->reverse();
    std::cout <<"reversed list " <<std::endl;
    list->printList();
    std::cout <<"Middle element is return ";
    std::cout<< list->findMiddleNode()->value <<std::endl;
    list->printList();
    std::cout<< list->hasLoop() << std::endl;
    std::cout<<" The value of k positions from the end is: ";
    std::cout << list->findKthFromEnd(2)->value <<std::endl;
    return 0;
}
