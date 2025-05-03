#include "tree.cpp"
#include <iostream>

using namespace std;

int main()
{

    tree* tr = new tree();
    tr->add(10);
    tr->add(20);
    tr->add(30);
    tr->add(40);
    tr->add(50);
    tr->add(60);
    tr->add(70);
    tr->add(80);
    tr->add(90);
    tr->add(100);

    delete tr;



    return 0;
}