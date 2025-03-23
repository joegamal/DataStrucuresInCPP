#include "VectorArr.h"

template<typename T>
VectorArr<T>::VectorArr(){
    size = 5;
    count = 0;
    arr = new T[size];
}


template<typename T>
VectorArr<T>::~VectorArr(){
    delete[] arr;
}

template<typename T>
void VectorArr<T>::add(T val){
    if(count == size){
        expand();
    }
    arr[count++] = val;
}



template<typename T>
void VectorArr<T>::expand(){
    size += size;
    T* newArr = new T[size];
    for(int i = 0; i < count; i++){
        newArr[i] = arr[i];
    }

    delete[] arr;
    arr = newArr;
}


template<typename T>
bool VectorArr<T>::isEmpty(){
    return ( count == 0);   
}

template<typename T>
T VectorArr<T>::begin(){
    return arr[0];
}



template<typename T>
T VectorArr<T>::end(){
    return arr[count - 1];
}


template<typename T>
T VectorArr<T>::at(int index) {
    return arr[index];
}







































