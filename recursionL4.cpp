
// // coin exchange problem
// #include<iostream>
// #include<vector>
// #include<limits.h>
// using namespace std;
// int findNumber(vector<int>&arr, int target){
//     int mini =INT_MAX;
 
//     //base case 
//     if(target ==0){
//         return 0;
//     }
//     if(target<0){
//         return INT_MAX;
//     }

//     //ek case solve karna hai
//     for(int i=0; i<arr.size(); i++){
//         int ans =findNumber(arr, target-arr[i]);
//          if( ans != INT_MAX)
//           mini=min(mini, ans+1);
//     }
//     return mini;

// }
// int main(){
//     vector<int>arr{1,2};
//     int target =9;
//     int f=findNumber(arr, target);
//     cout <<f<<endl;
//     return 0;
// }


///cut into segments
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int Segments(int length, int x, int y, int z){
    //base case
    if(length == 0){
        return 0;
    }
    // ek case solve karunga
    int a=0;
    
    if(length-x >0){
        a= Segments(length-x  , x,y,z)+1;
    }  
    
    int b=0;
    if(length -y >0){
        b= Segments(length-y, x,y,z) +1;
    }

    int c=0;
    if(length-z >0){
        c=  Segments(length-z, x,y,z) +1;
    }
    int maxi;
    maxi = max(a, max(b,c));
    return maxi;



}
int main(){
    int length;
    cout<<"enter length"<<endl;
    cin>>length;
    int x, y,z;
     cout<<"x : y: z"<<endl;
     cin>>x>>y>>z;
     int f = Segments(length, x, y,z );
   
    cout <<f<<endl;
    return 0;
}