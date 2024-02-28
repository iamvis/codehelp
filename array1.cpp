// #include<iostream>
// using namespace std;
// bool find(int ar[], int size, int key){
//   for(int i=0; i<size; i++){
//        if(key==ar[i]){
//         return true;
//     }
    
        
  

//     }
//     return false;
// }
// int main(){
//     // int a[5];
//     // cout <<"enter ther array element"<<endl;
//     // for(int i=0; i<5; i++){
//     //     cin >>a[i];
//     // }
//     // //printing
//     //  for(int i=0; i<5; i++){
//     //     cout <<a[i]<<" ";
//     // }
//     // int a[5]={2,4,6,8,10};
//     // for(int i=0; i<5; i++){
//     //     a[i]=1;
//     //     cout <<a[i]<<endl;
//     // }

//     int ar[5]={2,5,3,6,1};
//     int size=5;
//     cout <<"enter the key" <<endl;
//     int key;
//     cin>>key;
//     if(find(ar, size,key)){
//         cout <<"found" ;
//     }
//     else{
//         cout <<" not fond";
//     }
    


//     return 0;
// }

// //find the 0s and 1s
// #include<iostream>
// using namespace std;
// int main(){
//     int a[]={0,0,1,0,1,1,1,0,0,88 , 11, 11, 11};
//     int size=13;
//     int numzero=0;
//     int  numone =0;
//     int num11=0;
//     for(int i=0; i<size; i++){
    
//         if(a[i]==0){
//             numzero++;

//         }
//         if(a[i]==1){
//             numone++;
//         }
//         if(a[i]==11){
//             num11++;
//         }
//     }
//     cout <<"totle count of zero= "<<numzero<<endl;
//     cout <<"totle count of one= "<<numone<<endl;
//     cout <<"totle count of eleone= "<<num11<<endl;
    
    
// return 0;}

// //maximum of number
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int main(){
//     int a[7]= {2, 4 , 1, 6,  8, 9, 0};
//     int size=7;
//     int max=INT_MIN;
//     for(int i=0; i<size; i++){
//         if(a[i]>max){
//             max = a[i];
//         }


//     }
//     cout << max;
//     return 0;

// }


///printing exxtreme
#include<iostream>

using namespace std;
int main(){
    int arr[9]={23,33,4 ,2, 44,11,6,9 };
int size=8;
int start=0; 
int end =size-1;
// while(true){
//     if(start>end)
//         break;
//         cout <<arr[start]<<" ";
//         cout <<arr[end]<<" ";
//         start++;
//         end--;
        
    
// }

//reverse the  array
while(start<=end){
    swap(arr[start], arr[end]);
    start++;
    end--;
}
for(int i=0; i<size; i++){
    cout <<arr[i] <<" ";
}

    return 0;
    }
