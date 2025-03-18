#include "stackarr.cpp"

int main(){

    stackarr<int> st;

    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(8);
    st.push(8);
    st.push(8);
    st.push(8);
    st.push(8);
    st.push(8);
    st.push(8);
    st.push(8);


    for(int i = 0; i < 12; i++){
        cout<< st.pop() << " ";
    }
    cout<<endl;

    return 0;
}