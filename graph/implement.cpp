#include<iostream>
#include"graph.cpp"
using namespace std;


int main() {

    graph graf;

    graf.addNode(5);
    graf.addNode(6);
    graf.addNode(7);
    graf.addNode(8);
    graf.addNode(9);
    graf.addNode(10);

    graf.addEdge(5,10);
    graf.addEdge(5,6);
    graf.addEdge(5,8);

    graf.display();

    return 0;
}