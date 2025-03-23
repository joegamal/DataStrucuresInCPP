#include<iostream>
using namespace std;

template <class T>
class queueArr {
    int size;
    int count;
    int front;
    T* arr;
    public:
    queueArr();
    ~queueArr();
    void push(T);
    void expand();
    T pop();
    T top();
    bool isEmpty();
};
