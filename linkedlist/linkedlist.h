//lets kiss

//template<typename T>
struct Node {
    int data;
    Node* next;
};


//template<class T>
class linkedlist {
    Node* first;
    Node* last;
    int count;
    public:
    linkedlist();
    ~linkedlist();
    void add(int val);
    void remove_first();
    void remove_last();
    void remove_at(int index);
    void insert_at(int index, int val);
    int at(int index);
    int first_node();
    int last_node();
};
