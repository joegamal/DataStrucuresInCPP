
struct Node
{
    int data;
    Node* left;
    Node* right;
};

class tree
{
    Node* root;
    int count;
public:
    tree();
    ~tree();
    void add(int val);
    Node* search(Node* c,int val);
    void checkNode(Node* c, int val);
    void deleteNode(Node* c);
};  