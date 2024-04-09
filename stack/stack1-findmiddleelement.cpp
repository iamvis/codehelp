#include<iostream>
#include<stack>

using namespace std;

void findMiddleElement(stack<int>&st, int &totalsize){
//base case
if(st.size()==(totalsize/2)+1){
    cout<<"Middle Element is:     "<<st.top()<<endl;
    return;
}

int temp= st.top();
st.pop();

//recuresive call mar do bidu
findMiddleElement(st, totalsize);

//backtracking
st.push(temp);
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    st.push(80);

  
    int totalsize= st.size();
    findMiddleElement(st, totalsize);

    return 0;
}