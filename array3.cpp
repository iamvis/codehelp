// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//      cin>>n;
//     int kalu[n][n];
   
  
//    cout<<"enter the 2d array"<<endl;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cin>>kalu[i][j];
//         }
        
//     }cout <<endl;

//     //printing 
//      for(int i=0; i<n; i++){
//         int sum =0;
//         for(int j=0; j<n; j++){
//             sum=sum+ kalu[j][i];
//             cout << kalu[j][i]<<" ";
//         }cout <<"sum is -> "<<sum<<endl;
//     }cout <<endl;

//     return 0;
// }


//linear search
// #include<iostream>
// using namespace std;
// bool find_key(int l[3][3],int key){
//     int k=false;
//     for(int i=0; i<3;i++){
//         for(int j=0; j<3; j++){
//             if(key ==l[i][j]){
//              k=true;   
//             }
            
//         }
//     }
//     return k;
// }
// int main(){
//     // int a;
//     // int b;
//     // cout <<"enter a"<<endl;
//     // cin>>a;
//     //   cout <<"enter b"<<endl;
//     // cin>>b;
//     int l[3][3]={{1,2,3},{4,5,6},{5,6,7}};
//     int key;
//     cin>>key;
//     int key_ye_hai =find_key(l,key);
//     if(key_ye_hai){
//         cout <<"key found"<<endl;
//     }
//     else{
//         cout <<"key not found"<<endl;
//     }
//     return 0;

// }
  
// //maimum or minumus finding
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int maxi_find(int l[3][3]){
//     int mausi=INT_MIN;
//     for(int i=0; i<3;i++){
//         for(int j=0; j<3; j++){
//            if(l[i][j]>INT_MIN){
//             mausi=l[i][j];
//            }
            
//         }
//     }
//     return mausi;
// }
// int main(){
   
//     int l[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int maxmum = maxi_find(l);
//     cout <<"maximum value of the 2d array -> "<<maxmum<<endl;
//    return 0;

// }
  


// // minumus finding
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int mini_find(int l[3][3]){
//     int mausi=INT_MAX;
//     for(int i=0; i<3;i++){
//         for(int j=0; j<3; j++){
//            if(l[i][j]<mausi){
//             mausi=l[i][j];
//            }
            
//         }
//     }
//     return mausi;
// }
// int main(){
   
//     int l[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int minmum = mini_find(l);
//     cout <<"maximum value of the 2d array -> "<<minmum<<endl;
//    return 0;

// }
  


#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main(){
    vector<vector<int>> arr(5,vector<int>(5,-8));
    //print
    for(int i=0;i<5; i++){
        for(int j=0; j<5; j++){
            cout <<arr[i][j]<<" ";
        }cout <<endl;
    }
    return 0;
}


