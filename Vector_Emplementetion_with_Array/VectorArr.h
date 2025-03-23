#include<iostream>
using namespace std;

template <typename T>
class VectorArr {
    T* arr;
    int size;
    int count;
    public:
    VectorArr();
    ~VectorArr();
    void expand();
    void add(T);
    T begin();
    T at(int);
    T end();
    bool isEmpty();
};


