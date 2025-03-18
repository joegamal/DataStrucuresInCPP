#include<iostream>
using namespace std;

template <typename T>
class stackarr {
    int count;
    int size;
    T* arr;
    public:
    void push(T);
    stackarr();
    ~stackarr();
    T top();
    T pop();
    void expand();
    bool isEmpty();
};

