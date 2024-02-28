#include<iostream>
using namespace std;
void util(int* p){
    p= p+1;
}
int main(){
    int a=7;
    int* c=&a;
    cout<<&a<<endl;
    c =c+1;

    // cout<<"Before"<<endl;
    // cout<<a<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // util(p);
  
    // cout<<"Before"<<endl;
    // cout<<a<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;
   cout<<a<<endl;
   cout<<&a<<endl;
   cout<<*c<<endl;
    return 0;
}