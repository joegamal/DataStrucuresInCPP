#include <iostream>
#include<queue>
using namespace std;

void main(){
    cout << "Hello world\n";

    queue<int> q;
    
    q.push(5);
    q.push(7);
    q.push(4444);

    //the queue is a first in first out data structure.

    cout << q.front();

    // you cannot access the elements.

}
