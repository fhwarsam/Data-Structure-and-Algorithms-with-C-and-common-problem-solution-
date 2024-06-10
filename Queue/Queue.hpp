#ifndef queue_hpp
#define queue_hpp
void printQueue();// prints all elements in the queue;
Node* getFirst(); // returns the first node
Node* getLast();// returns the last node
int getLength(); // returns the size/length of the list
void enqueue(int value); // adds items to the queue
int dequeue(); // removes item from the list
#endif