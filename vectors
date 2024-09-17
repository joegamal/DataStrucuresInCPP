#include <iostream>
#include<vector>
#include <typeinfo>
using namespace std;

void main(){
    cout << "Hello World!\n";
    vector<int> v;
    v.push_back(5);
    v.push_back(8);   // push back add an element from the right.
    v.push_back(7);
    v.emplace_back(85);  //emplace back is as push back but faster.
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i]<<" ";
    }// accessing the elements in vector is as array.
    cout << endl;

    // iterators

    vector<int>::iterator vptr = v.begin();  //this makes a pointer to the first element in the v vector.
    cout << *vptr<<endl;   

    cout << *++vptr << endl;  // if you print *vptr++ it will print also 5.  but this prints the next element in the vector.

    vector<int>::iterator eptr = v.end();


    //cout << *eptr << endl; the .end() gives you the memory adress of the place after the last element.
    

    cout << *--eptr << endl; // by this way it gives you the last element in the vector.

    //vector<int>::iterator vp = v.rbegin();  I dont know why this not working.

    cout << v.back()<<endl;  // this gives the last element.


    cout << v.at(2) <<endl; // this gives the specfic index. 

    auto p = 2458;
    cout << p << " ";
    cout << typeid(p).name() << endl;  // this prints the type of the data type variable.

    int x = v.size(); // this is the integer of the lenght of the victor.

    v.pop_back();  // this delete the last element.
    cout<< v.back() <<endl;  

    v.insert(v.begin(), 5000);
    cout << *v.begin() << endl;   // this insert at index then the value.


    v.clear();  // this erase all the vector.

    v.empty();  // this returns a boolean value if empty.
}
