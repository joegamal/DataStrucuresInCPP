#include <iostream>
#include<stack>
using namespace std;

void main(){
    cout << "Hello world\n";

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    // you cannot access elements in a stack.


    // the stack is a lifo data strucure that the first element gets the last and the last is the first one to get out.
    cout << st.top() << endl;

    st.pop(); // deletes the last element.

    cout << st.top();
}
