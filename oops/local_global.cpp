#include<iostream>
using  namespace std;
int x= 90;
void fun(){
    int x=60;
    cout<<x <<endl;
    ::x=40;
    cout <<::x <<endl;
}
int  main(){

    int x=20;
    cout <<x<<endl;//scope me availaBLE SAME VARIABLE PELE pRINT HOGA
    cout<<::x<<endl;//global varibale accis by ::

    {int x=100;
    cout<<x<<endl;}
     fun();
     cout<<::x<<endl;
    return 0;
}