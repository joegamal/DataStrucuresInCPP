#include "queueArr.cpp"

int main() {
    
    queueArr<int> qr;

    qr.push(5);
    qr.push(6);
    qr.push(7);
    qr.push(8);

    qr.push(5);
    qr.push(6);
    qr.push(7);
    qr.push(8);

    qr.push(5);
    qr.push(6);
    qr.push(7);
    qr.push(8);


    for(int i = 0; i < 12; i++) cout<< qr.pop() << " ";
    cout<<endl;




    return 0;
}

