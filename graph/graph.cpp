
#include "graph.h"
#include<iostream>
using namespace std;



graph::graph(){}


void graph::addNode(int val){
    Node node;
    node.data = val;
    chain.push_back(node);
}

void graph::addEdge(int u, int v){
    search(u).adj.push_back(&search(v));
    search(v).adj.push_back(&search(u));
}


Node& graph::search(int val){
    vector<Node>::iterator it = chain.begin();
    for (auto& node : chain) {
        if (node.data == val) {
            return node;
        }
    }
    throw std::runtime_error("Node not found");
}


void graph::display() {
    for (auto& node : chain) {
        cout << node.data << " -> ";
        for (auto neighbor : node.adj) {
            cout << neighbor->data << " ";
        }
        cout << endl;
    }
}


graph::~graph(){

}