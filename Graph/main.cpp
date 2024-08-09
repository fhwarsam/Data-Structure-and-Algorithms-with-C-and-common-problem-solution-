#include "Graph.cpp"
#include <iostream>
int main(){

    std::cout << " Hello " << std::endl;
Graph* graph = new Graph();
graph->addVertex("A");
graph->printGraph();




    return 0;
}