#include<iostream>
#include"graph.hpp"
int main(){
Graph* gp = new Graph(); 
gp->addVertex("A");
gp->printGraph();
//std::cout << "Hello graph" ;


    return 0;
}