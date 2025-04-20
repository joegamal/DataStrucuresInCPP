#include"linkedlist.cpp"

#include<iostream>

using namespace std;

int main(){

    linkedlist linkedlist;

    linkedlist.add(1);
    linkedlist.add(2);
    linkedlist.add(3);
    linkedlist.add(5);
    linkedlist.add(6);
    linkedlist.add(7);
    linkedlist.add(8);
    linkedlist.add(9);
    linkedlist.add(10);

    cout << linkedlist.first_node() << endl;
    cout << linkedlist.last_node() << endl;

    


    return 0;
}