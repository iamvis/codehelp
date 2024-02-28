// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
    
// vector<int> v{0,4,3,2,-1};
// int n=v.size();
// //selction sort
// for(int i=0; i<n-1; i++){
//     int miniIndex =i;
//     for(int j=i+1; j<n; j++){
//         if(v[j]<v[miniIndex]){
//             miniIndex=j;
//         }
  

//     }
//     //swap
//     swap(v[i],v[miniIndex]);


// }

// //printing 
// for(int i =0; i<n; i++){
//     cout<<v[i]<<"  ";
// }cout <<endl;
//     return 0;
// }


///BUBBLE SORT

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){

//     vector<int> v{20, 1, 44, 6,14, 1};
//     int size = v.size();

//     //outer loop
//     for(int i=0; i<size; i++){
//         bool swapped = false;
//         //inner loop
//         for(int j=i+1; j<size; j++){
//             if(v[i]>v[j]){
//                 swapped = true;
//                 swap(v[i], v[j]);
//             }
//             cout<<"round   "<<j<<endl;
//         }
//         if(swapped == false){

//             //swapp ho chuka
//             break;
//         }
       
//     }
   
//     //printing
//     for(int i =0; i<size; i++){
//         cout <<v[i]<<" ";
//     } 
//     cout<<endl;


//     return 0;
// }


// ///sir code

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){

//     vector<int> v{20, 1, 44, 6,14, 1};
//     int size = v.size();

//     //outer loop
//     for(int i=1; i<size; i++){
//         int swapcount  = 0;
//         //inner loop
//         for(int j=0; j<size-i; j++){
//             if(v[j]>v[j+1]){
                
//                 swap(v[j], v[j+1]);
//                 swapcount++;
//             }
           
//         }
         
//         if(swapcount == 0){

//             //swapp ho chuka
//             break;
//         }
      
       
//     }
   
    // //printing
    // for(int i =0; i<size; i++){
    //     cout <<v[i]<<" ";
    // } 
    // cout<<endl;


//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v{10,1,7,6,14,9};
//     int n = v.size();
//     //insertion sort
//     for(int round=1; round<n; round++){
//         //step 1 -> fetch
//         int val = v[round];

//         //step 2 -> compare
//         int j=round-1;
//         for(; j>=0; j--){
//             if(v[j]>val){
//                 //shift
//                 v[j+1]= v[j];

//             }
//             else{
//                 //kuch nhi  karna hai
//                 break;
//             }

//         }
//         //step 4 -> copy
//         v[j+1] = val;
//     }
//         //printing
//     for(int i =0; i<n; i++){
//         cout <<v[i]<<" ";
//     } 
//     cout<<endl;
    
//     return 0;
// }


//diffrent pasir
#include <iostream>
#include <cstdlib>
#include<vector>xcv
using namespace std;
   int findPairs(vector<int>& nums, int k) {
         
     for(int i=0; i<nums.size(); i++){
       
         for(int j=i+1; j<nums.size(); j++){
           if(abs(nums[i]-nums[j])== k) {
           count++;
             } 
         }xfb
          
     }
     return count;
    }
int main(){
    vector<int>nums{1,2,3,4,5};
    int k=1;
    findPairs(nums,k);
    cout <<findPairs<<endl;
    return 0;
}