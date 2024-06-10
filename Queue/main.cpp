#include<iostream>
#include "Queue.cpp"

int main(){

std::cout << "Test.... Test..... Test \n";
Queue* queue = new Queue(10);
std::cout <<" The element are: ";
queue->printQueue();
std::cout<< "Element at the first position: "<<queue->getFirst()->value << " \n";
std::cout<< "Element at last position " << queue->getLast()->value << " \n";
std::cout<< "The lenght of the queue is: " << queue->getLength() << " \n";

queue->enqueue(11);
queue->enqueue(12);
queue->enqueue(13);

std::cout <<" The element are: ";
queue->printQueue();
std::cout<< "\n Element at the first position: "<<queue->getFirst()->value << " \n";
std::cout<< "Element at last position " << queue->getLast()->value << " \n";
std::cout<< "The lenght of the queue is: " << queue->getLength() << " \n";
queue->dequeue();

std::cout << "new Test.... New Test.....New  Test \n";
std::cout <<" The element are: ";
queue->printQueue();
std::cout<< "\n The lenght of the queue is: " << queue->getLength() << " \n";

    return 0;
}