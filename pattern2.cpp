//solid diamond 


#include<iostream>
using namespace std;
int mian(){
       int n;
    cin>> n;
    //outer loop 
    for(int row =0; row<n; row++){
       //inner loop
       // FOR SPACE
       for(int col=0; col<(n-row-1); col=col+1){
        cout << "  ";
       }
       
        
        // for star
        for(int col=0; col<row+1; col++){
            cout << "*   ";
        }
        cout << endl;
    }
        //outer loop 
    for(int row =0; row<n; row++){
       //inner loop
       // FOR SPACE
       for(int col=0; col<row; col=col+1){
        cout << "  ";
       }
       
        
        // for star
        for(int col=0; col<n-row; col++){
            cout << "*   ";
        }
        cout << endl;
    }
    return 0;
}