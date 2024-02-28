//  #include<iostream>
//  using namespace std;
//  void print(int array[], int n, int i){
//     ///base case
//     if(i>=n){
//         return ;
//     }
//         //recuirsive function
//     print(array, n , i+1);

//     //processing
//     cout<<array[i]<<" ";


    

//  }
//  int main(){
//     int array[5]={10,20,30,40,50};
//     int n=5;
//     int i=0;
//     print(array, n, i);
//     return 0;
//  }

 #include<iostream>
 #include<limits.h>
 using namespace std;
 void maximum(int array[], int n , int i, int& max){ // yaha per copy se kaam na chelga isliye rference lena padega
    if(i>= n){
        return;
        }

   else if(max < array[i]){
        max= array[i];
    }

    maximum(array, n, i+1, max);
  

 }
 int main(){
     int array[5]={10,20,30,40,50};
     int n=5;
     int i=0;
     int max=INT_MIN;
     maximum(array, n, i, max);
     cout<<"maximu: "<<max<<endl;
    return 0;
 }