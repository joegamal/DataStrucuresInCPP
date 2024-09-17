#include <iostream>
#include<list>
using namespace std;

void main(){
    cout << "Hello world\n";

    list<int> ls;
    ls.push_back(5);
    ls.push_back(6);
    ls.push_back(7);
    list<int>::iterator pr = ls.begin();


    //this is the way to access the elements in the list.
    for (size_t i = 0; i < ls.size(); i++){
        cout << *pr + i<<" ";
    }

    // the same methods as the vector.
    // insert push_back  size begin end 
}
