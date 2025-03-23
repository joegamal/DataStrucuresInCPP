#include"stackarr.h"
 

template <typename T>
stackarr<T>::stackarr() {
    size = 5;
    arr = new T[size];
    count = 0;
}

template <typename T>
stackarr<T>::~stackarr(){
    delete[] arr;
}


template <typename T>
T stackarr<T>::top() {
    return arr[count - 1];
}

template <typename T>
T stackarr<T>::pop() {
    return arr[--count];
}

template<typename T>
void stackarr<T>::expand(){
    size += 5;
    T* newarr = new T[size]; 
    for(int i = 0; i < count; i++) {
        newarr[i] = arr[i];
    }
    delete[] arr;
    arr = newarr;
}


template <typename T>
bool stackarr<T>::isEmpty() {
    return (count <= 0);
}

template < typename T>
void stackarr<T>::push(T val) {
    if(count == size) expand();
    arr[count++] = val;
   
}
