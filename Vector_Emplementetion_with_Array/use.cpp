#include "VectorArr.cpp"

int main(){
    
    VectorArr<int> vr;


    vr.add(5);
    vr.add(6);
    vr.add(7);
    vr.add(8);
    vr.add(9);
    vr.add(10);
    vr.add(11);


    cout<< vr.begin() << endl;

    cout<<vr.end()<< endl;

    for(int i = 0; i < 7; i++){
        cout<< vr.at(i)<<" ";
    }
    cout << endl;



    return 0;
}
