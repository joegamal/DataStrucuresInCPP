#include<vector>
using namespace std;
struct Node {
    int data;
    vector<Node*> adj ;
};

class graph {
    vector<Node> chain;


public:
    graph();
    ~graph();
    void addNode(int val);
    void addEdge(int val1, int val2);
    void display();
    Node& search(int val);
};