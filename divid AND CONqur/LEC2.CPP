// ///---------------> QUICK SORT <------------///

// #include<iostream>
// using namespace std;

// int partition(int arr[], int s, int e){
//     //step1 -----> select pivot element
//     int pivot_Index = s;
//     int pivotElement = arr[s];

//     ///step2 :: ---> count kro
//     int count=0;
//     for(int i=s+1; i<=e; i++){
//         if(pivotElement>= arr[i]){
//             count++;
//         }
//     }

//         ////step2:: 2 ----> swap
//         int right_index_Pivot=s+count;
//         swap(arr[pivot_Index],arr[right_index_Pivot]);
//         pivot_Index=right_index_Pivot;


//         ///step3---->left me  chote and right me bade
//         int i=s;
//         int j= e;
//         while(i<pivot_Index && j>pivot_Index){
//             while(arr[i]<=pivotElement){
//                 i++;
//             }
//             while(arr[j]>pivotElement){
//                 j--;
//             }


//             //jab element glat side ho
//             if(i<pivot_Index && j>pivot_Index){
//                 swap(arr[i], arr[j]);
              
//             }
//               }
//         return pivot_Index;
       
//     }
     



// void quickSort(int arr[], int s, int e){
// //base case 
// if(s>=e){
//     return;
// } 
// //partition logic
// int p=partition(arr,s, e);

// //recursive call
// //left
// quickSort(arr, s,p-1);

// //right
// quickSort(arr, p+1, e);

// }
// int main(){
//     int arr[]={8,1,1,3,4,20,50,50};
//     int n=8;
//     int s=0;
//     int e=n-1;
//     quickSort(arr,s,e);
//     for(int i=0; i<=e; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }





/////----------> BACKTRACKING  <-------//

#include<iostream>
using namespace std;
void printPermutation(string &str, int i){
    //base case 
    if(i>= str.size()){
        cout<<str<<" ";
        return;
    }
    //recursive call
     for(int j=i; j<str.size(); j++){
        swap(str[i], str[j]);

        // re call
        printPermutation(str, i+1);

        //original string recreate karenge
        swap(str[i], str[j]);
     }
}
int main(){
    string str="abc";
    int i=0;
    printPermutation(str, i);
    return 0;
}