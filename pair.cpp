#include<iostream>
using namespace std;
int main(){
    // pair declaration and accessing 
    pair<int,int> par = {1,2};
    cout << "First element: " << par.first << endl;
    cout << "Second element: " << par.second << endl;


    // nested pairs 
    pair<int,pair<int,int>> np = {1,{2,3}};
    cout << "First element: " << np.first << endl;
    cout << "Second element: " << np.second.first << endl;
    cout << "Third element: " << np.second.second << endl;
    return 0;
}