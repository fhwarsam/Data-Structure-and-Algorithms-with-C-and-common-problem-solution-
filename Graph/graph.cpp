#include "graph.hpp"

bool Graph::addVertex(std::string vertex){
    if(adjList.count(vertex) == 0){
        adjList[vertex];
        return true;
    }
    return false;

}
     void Graph::printGraph(){
        for(auto [vertex, edges] : adjList){
            std::cout << vertex << " [ ";
            for(auto edge : edges){
                std::cout << edge <<"  ";
            }
            std::cout << " ] \n";
        }

     
}