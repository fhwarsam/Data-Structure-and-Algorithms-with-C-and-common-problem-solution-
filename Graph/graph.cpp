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

         bool Graph::addEdge(std::string v1, std::string v2){
            if(adjList.count(v1) !=0 && adjList.count(v2) !=0){
                adjList.at(v1).insert(v2);
                adjList.at(v1).insert(v1);
            }

        }

     
};