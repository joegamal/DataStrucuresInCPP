#include<iostream>
using namespace std;
int main(){

    int arr[5] = {1,2,3,4,5}; //this is how to initialize an array.

    for(int i = 0; i < 5; i++){ // this is how to iterate and to access the elements of the array.
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<arr; // this prints the address of the first element of the array.
    cout<<endl;
    return 0;
}