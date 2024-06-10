#ifndef GRAPH_HPP
#define GRAPH_HPP
#include<iostream>
#include<unordered_map>
#include<unordered_set>

class Graph {

private:
    std::unordered_map<std::string, std::unordered_set<std::string> > adjList;
public:
    bool addVertex(std::string vertex);
    void printGraph();
};
#endif