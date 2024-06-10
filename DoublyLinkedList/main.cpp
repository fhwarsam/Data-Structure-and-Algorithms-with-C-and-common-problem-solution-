#include <iostream>
#include "DoublyLinkedList.cpp"
//using namespace std;

// This clients code tests the doubly linked list
int main(int argc, const char* argv[]){

    std::cout << " This program compiles from here " << std::endl;
   DoublyLinkedList* dLL = new DoublyLinkedList(4);
   std::cout <<"The first value of the list is: ";
   
   //Test for print method that prints all elements in the list
   dLL->printList();
   
   //Test for getHead method that prints the item at the head of the list
   dLL->getHead();
   
   //Test for the getTail method that prints the item at the tail(last item)
   dLL->getTail();
   
   //Test for getLength method that prints the size of the list
   dLL->getLength();

    //Testing the append method that adds an item at the end of the list
   dLL->append(5);
   std::cout <<"The list is after one item is added at the end: " <<std::endl;
   dLL->printList();

    // Testing the delete last method
    dLL->deleteLast();
    std::cout <<"Deleting the last element from the list: " <<std::endl;
    dLL->printList();

    // Testing when theres only one item in the list
    dLL->deleteLast();
    std::cout <<"Deleting the last element from the list: " <<std::endl;
    dLL->printList();

    // deleting when list is empty becuase we have two elemenet and we run dele
    // delete last twice. Now it should be an empty list
    dLL->deleteLast();
    std::cout <<"Deleting the last element from the list: " <<std::endl;
    dLL->printList();

    //We need to add elements to the list to test for prepend functions that was just created
    // since we have rfemoved all elements in the list to test deletelast() cases
    
    // Adding number 10 at the end
    dLL->append(10);
    // adding number 11 at the end, this after 10 
    dLL->append(11);
    // adding number 12 at the end, coming after 11
    dLL->append(12);
    //Printing the list ---- 10, 11, 12
    std::cout<<" Printing the new list" <<std::endl;
    dLL->printList();
    // Adding 9 at the beginning-- this should come before 10
    dLL->prepend(9);

    // printing after prepending number 9 to the list at the head
        std::cout<<" Printing the new list after adding 9 at the head " <<std::endl;
        dLL->printList();
    
    // adding number 13 at the end, this after 10 
        dLL->append(13);

    // printing after prepending number 9 to the list at the head
        std::cout<<" Printing the new list after adding 13 at the end " <<std::endl;
        dLL->printList();

        // Testing the deleteFirst() method to remove an item at the head
        dLL->deleteFirst();
        // The list after removing the first element
        std::cout<<" Printing the new list after removing at the head  " <<std::endl;
           dLL->printList();

        std::cout<<" Printing an item value at a given positions  " <<std::endl;
           // Testing for get() an item from the given position method
           std::cout<< dLL->get(2)->value <<"\n"; 
           std::cout<< dLL->get(0)->value <<"\n"; 

        // Testing the set method to set the value of existing node
        std::cout<<" setting new value to existing node  " <<std::endl;
        dLL->set(3, 16);

        std::cout<<" Printing an item value at a given positions  " <<std::endl;
        dLL->printList();


        // Test for insert() method that inserts value at any position
        dLL->insert(0, 100);
        std::cout<<" Printing the list after insertiing at position 0  " <<std::endl;
        dLL->printList();
       
        dLL->insert(5, 1000);
         std::cout<<" Printing the list after inserting at the last position  " <<std::endl;
            dLL->printList();

            dLL->insert(3, 100000);
            std::cout<<" Printing the list after inserting at the middle position  " <<std::endl;
            dLL->printList();
            
            // Testing for deleteNode() method that removes a node from any side;
            dLL->deleteNode(0);
            std::cout<<" Printing the list after deleting at the beginning  " <<std::endl;
            dLL->printList();

            // deleting from the middle
            dLL->deleteNode(2);
            std::cout<<" Printing the list after deleting at midlle element  " <<std::endl;
            dLL->printList();

            // deleting from the end
            dLL->deleteNode(4);
            std::cout<<" Printing the list after deleting at end element  " <<std::endl;
            dLL->printList();

    return 0;
}