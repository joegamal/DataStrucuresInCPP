#include<iostream>
using namespace std;
int main(){

    int arr[5] = {1,2,3,4,5}; //this is how to initialize an array.

    int x = 5;
    int* att = new int[x]; //this is how to initialize a dynamic array.

    for(int i = 0; i < 5; i++){ // this is how to iterate and to access the elements of the array.
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<arr; // this prints the address of the first element of the array.


     int length = sizeof(arr) / sizeof(arr[0]); // this is how to print the length of the array.
    cout << "The length of the array is: " << length << endl;


    cout<<endl;
    return 0;
}