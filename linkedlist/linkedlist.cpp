#include "linkedlist.h"
#include <iostream>
#include <stdexcept>
using namespace std;

//template <typename T>
linkedlist::linkedlist() {
    count = 0;
    last = nullptr;
    first = nullptr;
}

//template <typename T>
void linkedlist::add(int val) {
    Node* newN = new Node();
    newN->data = val;
    newN->next = nullptr;

    if (count == 0) {
        first = newN;
        last = newN;
    } else {
        last->next = newN;
        last = newN;
    }

    count++;
}

//template <typename T>
int linkedlist::at(int index) {
    Node* temp;
    temp = first;
    for(int i = 1; i <= index - 1; i++) {
        temp = temp->next;
    }

    return temp->data;
}

//template <typename T>
void linkedlist::insert_at(int index, int val) {
    Node* newN = new Node();
    newN->data = val;
    Node* temp;        //exactly the n'th node 
    Node* nodeBefore;  //the node before the n'th node

    nodeBefore = first;
    temp = first;

    for(int i = 1; i <= index - 1; i++) {
        temp = temp->next;
    }
    for(int i = 1; i <= index - 2; i++) {
        nodeBefore = nodeBefore->next;
    }

    nodeBefore->next = newN;

    newN->next = temp;

    count++;

}

//template <typename T>
void linkedlist::remove_first() {
    Node* temp;

    temp = first->next;
    delete first;
    first = temp;

    count--;
}

//template <typename T>
void linkedlist::remove_last() {
    Node* temp;
    temp = first;
    for(int i = 1; i <= count - 1; i++){
        temp = temp->next;
    }
    delete last;
    last = temp;

    count--;
}

//template <typename T>
void linkedlist::remove_at(int index) {
    Node* nodeBefore;
    Node* nodeAfter;

    nodeBefore = first;
    nodeAfter = first;

    for(int i = 1; i <= index - 2; i++) {
        nodeBefore = nodeBefore->next;
    }

    for(int i = 1; i <= index - 1; i++) {
        nodeAfter = nodeAfter->next;
    }

    delete nodeBefore->next;

    nodeBefore->next = nodeAfter;

    count--;

}


int linkedlist::first_node(){
    return first->data;
}


int linkedlist::last_node(){
    return last->data;
}



//template <typename T>
linkedlist::~linkedlist() {
    while (first != nullptr) {
        Node* temp = first;
        first = first->next;
        delete temp;
    }
    last = nullptr;
    count = 0;
}
