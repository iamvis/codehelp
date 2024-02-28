// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// // int checkkey(int a[],int size,int key){
// //     int start =0;
// //     int end=size-1;
// //     int mid =(start+end)/2;
// //     while(start<=end){
// //         int element=a[mid];
// //         if(element==key){
// //             return mid;
// //         }
// //         else if(key>element){
           
// //               start =mid+1;
// //         }
// //         else{
            
// //            end =mid-1;
// //         }
// //         mid=(start+end)/2;
       
 
// //     }
// //     return -1;
   
// // }
// int main(){
//     // int key;
//     // cin>>key;
//     // int a[]={1,4,5,6,10,14,18,19};
//     // int size =8;
//     // int indexofkey=checkkey(a,size,key);
//     // if(indexofkey==-1){
//     //     cout <<" key is Not found  ";
//     // }
//     // else{
//     //     cout <<"key is Found at  "<<indexofkey<<endl;
//     // }

//     //implementation og using of vector by function
//     vector<int>v{1,4,5,6,10,14,18,19};
//     if(binary_search(v.begin(), v.end(),19)){
//         cout <<" found"<<endl;
//     }
//     else{
//         cout <<" not found"<<endl;
//     }
//     return 0;
// }

//first ocurance
#include<iostream>
#include<vector>
using namespace std;
int firstocurrance(  vector<int>k,int target){
    int start=0;
    int end=k.size()-1;
    int mid=(start+end)/2;
    int ans=-1;
    while(start<=end){
         if(k[mid]==target){
            ans =mid;
            start =mid+1;
        }
        else if(k[mid]>target){
            end=mid-1;
        }
        else if(k[mid]< target){

         start =mid+1;
        }
        mid=(start+end)/2;
        
    }
    return ans;

}


int main(){
    vector<int>v{1,2,3,4,4,4,4,4,4,4,4,4,7,8,9};
    int target=4;
    int ans= firstocurrance(v,target);
    cout <<" ans is   " << ans <<endl;
    return 0;
}