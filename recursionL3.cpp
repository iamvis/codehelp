// //checking sorted array
// #include<iostream>
// #include<vector>
// using namespace std;
// bool sorted(vector<int>&a, int n, int i){
//     if(i>=n-1){
//          cout<<"peli If"<<endl;
//         return true;
        
       

//     }
//      if(a[i+1]<a[i]){
//         cout<<"dusri If"<<endl;
//         return false;
        
//     }
//     return sorted(a,n,i+1);
// }
// int main(){
//      vector<int>a={90,20,30,45,50,60};
//     int n=a.size();
//     int i=0;
//     bool j=sorted(a,n,i);
    
//      cout<<j<<endl;
   
    

  
//         return 0;
// }

// ///binary search
// #include<iostream>
// #include<vector>
// using namespace std;
// int  BinarySearch(vector<int>&a, int n, int s, int e,int key){
//     int mid=s +(e-s)/2;
//     if(s>=n){
//         return -1;
//     }
//     if(key == a[mid]){
//         return mid;
//     }
//    else if(key<a[mid]){
//         e=mid-1;
//             mid= s+(e-s)/2;
//        return BinarySearch(a,n, s,e, key );
//     }
//     else{
//         s=mid+1;
//             mid= s+(e-s)/2;
//         return BinarySearch(a,n, s,e, key );

//     }
// }
// int main(){
//     vector<int>a={2, 9 , 45, 46, 50, 69 };
//     int key;
//     cin>>key;
//     int n=a.size()-1;
//     int s=0; 
//     int e=n;
    
//    int y=BinarySearch(a,n,s,e,key);
//    cout<<y<<endl;
//     return 0;
// }


// Subsequence of string

#include<iostream>
#include<vector>
using namespace std;
void SubSequence(string str, string Output, int i ){
    //base case 
    if(i >=str.size()){
        cout<<Output<<endl;
        return; 
    }
    //exclude
    SubSequence(str, Output, i+1);
    //Include
    Output.push_back(str[i]);
    SubSequence(str, Output, i+1);
    
}
int main(){
    string str ="xys";
    string Output ="";

    int i =0;
    SubSequence(str, Output, i);

    return 0;
}