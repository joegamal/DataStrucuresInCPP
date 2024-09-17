#include <iostream>
#include<deque>
using namespace std;

void main(){
    cout << "Hello world\n";
    
    deque<int> orr;
    orr.push_back(5);
    orr.push_back(6);
    orr.push_back(7);
    orr.push_back(8);
    for (size_t i = 0; i < orr.size(); i++){
        cout << orr[i]<<" ";   // the way to access the elements is as array.
    }
    cout << endl;

    // the same methods as vector and list.
    //begin end insert push_back pop_back clear size.

    deque<int>::iterator pr = orr.begin();

    orr.insert(pr + 2, 5080);

    for (size_t i = 0; i < orr.size(); i++) {
        cout << orr[i] << " ";   
    }
    cout << endl;
}
