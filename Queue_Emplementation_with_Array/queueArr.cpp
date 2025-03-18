#include"queueArr.h"

template <typename T>
queueArr<T>::queueArr(){
    size = 5;
    front = 0;
    count = 0;
    arr = new T[size];
}


template <typename T>
queueArr<T>::~queueArr() {
    delete[] arr;
}


template <typename T>
void queueArr<T>::push(T val){
    if(count == size) expand();
    arr[count++] = val;
    front = count;
}


template <typename T>
void queueArr<T>::expand(){
    size = size + 5;
    T* narr = new T[size];
    for(int i = 0; i < count; i++){
        narr[i] = arr[i];
    }
    delete[] arr;
    arr = narr;
}


template <typename T>
T queueArr<T>::pop(){
    return arr[--front];
}


template <typename T>
T queueArr<T>::top() {
    return arr[front];
}


template <typename T>
bool queueArr<T>::isEmpty(){
    return (count <= 0);
}
