#include<iostream>
using namespace std;
////add of two num
// int sum(int a, int b){

//     return a+b;
    
    
// }

// int main(){
//     int a;
//     int b;
//     cin>>a>>b;
    
//     int k=sum(a,b);
// cout << k;

    
    

// }


/// max of three num

int getmax (int a, int b, int c){
    if(a>b){
        if(a>c){
            return a;
        }
        else if(b>a){
            return b;
        }
    }
    else if(b>c){
        return b;
    }
    else{
        return c;
    }
    
}


int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int max=getmax(a,b,c);
    cout << max;
    return 0;

}