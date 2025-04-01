#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(): next(nullptr) {  }  
};

class LinkedList {
    private:  
    Node* head;
    Node* tail;
    int count;

    public:
    LinkedList() : head(nullptr), tail(nullptr), count (0) {  }

    ~LinkedList() {
        Node* temp;
        while(head) {
            temp = head;
            head = head->next;
            delete temp;
        }
        
    }

    void insert(int val) {
        Node* node = new Node();
        node->next = nullptr;
        node->data = val;

        if(count == 0) {
            tail = node;
            head = node;
        }else {
            if (tail) {
                tail->next = node;
            }
        }
        
        tail = node;

        count++;
    }


    void insertAt(int index, int val){
        if(index < count) {
            Node* nodeBefore = head;
            Node* nodeAfter;
            for(int i = 0; i < index; i++){
                nodeBefore = nodeBefore->next;
            }

            Node* newnode = new Node();

            newnode->data = val;

            newnode->next = nodeBefore->next;

            nodeBefore->next = newnode;

            count++;

        }
    }

    Node* at(int index) {
        Node* point = head;
        for(int i = 0; i < index; i++){
            point = point->next;
        }

        return point;

    }

    void deleteAt(int index) {

        Node* temp = head;
        Node* nextnode;
        Node* before;
        for(int i = 1; i <= index; i++) {
            if(i == index - 1) {
                before = temp;
            }
            temp = temp->next;
        }
        nextnode = temp->next;

        before->next = nextnode;

        delete temp;
    }

};

int main(){

    LinkedList lst ;

    lst.insert(1);
    lst.insert(2);
    lst.insert(3);
    lst.insert(5);
    lst.insert(4);
    lst.insert(5);
    lst.insertAt(3, 10000);

    lst.deleteAt(4);

    for(int i = 0; i < 6; i++){
        cout<<lst.at(i)->data << endl << lst.at(i)->next << endl <<endl;  
    }

    return 0;
}