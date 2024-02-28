
// //dutch algo 
// #include<iostream>
// using namespace std;

// void get_me_aray(int*a, int n){
//     int l=0;
//     int h=n-1;
//     while(l<h){
//         if(a[l]<0){
//             l++;
//               cout<<l<<"   =if wali position  "<<endl;
//         cout<<h<<endl;
//         }   
        

//         else if(a[h]>0){
//             h--;
//               cout<<l<<"  =else if wali position  "<<endl;
//         cout<<h<<endl;

//         }
           
//         else{
//             swap(a[l], a[h]);
//             cout<<l<<"   =else wali position  "<<endl;
//         cout<<h<<endl;

//         }
        
//     }
    
// }
// int main(){
//    int a[]={1,3,-3,-6,2};
//    int n=5;
//    get_me_aray(a,n);
//    for(int i=0; i<n; i++){
//     cout <<a[i]<<"  ";
//    }
//    return 0;    
// }

///find duplicate number

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
            // sort(nums.begin(), nums.end());
            // for(int i=0; i<nums.size()-1; i++){
            //     if(nums[i]==nums[i+1]){
            //         return nums[i];
            //     }
               
                
        
            // }
            //  return -1;
            
            //2

            // int ans=-1;
            // for(int i=0; i<nums.size(); i++){
            //     int index=abs(nums[i]);
            //     if(nums[index]<0){
            //         ans =index;
            //         break;
            //     }
                
            //         nums[index] *=-1;
                
            // }
            // return ans;

//             //3
//             while(nums[0] != nums[nums[0]]){
//                 swap(nums[0], nums[nums[0]]);
//             }
//             return nums[0];
            
    
        
//     }
// };

////find missing element from an array with duplicate
// #include<iostream>
// using namespace std;
// // void findMissing(int a[], int n){
//     //vissiting method
//     for(int i=0; i<n;  i++){
//         int index = abs(a[i]);
//         if(a[index -1]>0){
//             a[index -1] *=-1;
//         }
//     }
//     for(int i=0; i<n; i++){
//         cout <<a[i]<<" ";
//     }
//     cout <<endl;


//     for(int i=0; i<n; i++){
//         if(a[i]>0)
//             cout <<i+1<<" ";
                       
//     }
//     cout <<endl;
//         for(int i=0; i<n; i++){
//         cout <<a[i]<<" ";
//     }
//     cout <<endl;
// }

// //by sorting
// void  findMissing(int a[],int n){
//     int i=0;
//     while(i<n){
//         int index =a[i]-1;
//         if(a[i] != a[index]){
//             swap(a[i],a[index]);

//         }
//         else{
//             i++;
//         }
//     }
   
//     for(int i=0; i<n; i++){
//         if(a[i] != i+1){
//             cout <<i+1;
//         }
//         // cout <<a[i]<<" ";
//     }
//     cout <<endl;

// }
// int main(){
//     int n;
// int a[]={1,3,4,3,5};
// n = sizeof(a)/sizeof(int);
//  findMissing(a,n);
//     return 0;
// }

// //first repeating element


// #include<iostream>
// using namespace std;
//  void findMissing(int a[], int n){
//     int i=0;
//     while(i<n){
//         int index =a[i]-1;
//         if(a[i] != a[index]){
//             swap(a[i],a[index]);
//         }
//         else{
//             i++;
//         }
//     }
//     for(int i=0;i<n; i++){
//         if(a[i] !=i+1){
//             cout <<i+1<<" ";
//         }
        
//     }
//  }

// int main(){
//     int n;
// int a[]={1,5,3,4,3,5,6};
// n = sizeof(a)/sizeof(int);
//  findMissing(a,n);
//     return 0;
// }

//common element in 3sorted array

// #include<iostream>
// using namespace std;
// int main(){
//     return
// }

// //wave form matri
// #include<iostream>
// #include<vector>
// using namespace std;
// void  print_wave_matrix(vector<vector<int>>v ){
//     int row_size =v.size();
//     int col_size = v[0].size();

    // cout <<col_size;
    // cout <<row_size;
    // for(int start_col=0; start_col<col_size; start_col++){
    //     //even no. of case ke liye->top to bottom
    //     if((start_col &1)==0){
    //         for(int i =0; i<row_size; i++){
    //             cout <<v[i][start_col]<<" ";
    //         }
    //     }
    //     else{
    //         //oddn no case 
    //         for(int i=row_size-1; i>=0; i--){
    //             cout <<v[i][start_col]<<" ";
    //         }
    //     }
    // }


//       for(int start_row=0; start_row<row_size; start_row++){
//         //even no. of case ke liye->left to right
//         if((start_row &1)==0){
//             for(int i =0; i<col_size; i++){
//                 cout <<v[start_row][i]<<" ";
//             }
//         }
//         else{
//             //oddn no case -> right  to left
//             for(int i=col_size-1; i>=0; i--){
//                 cout <<v[start_row][i]<<" ";
//             }
//         }
//     }

// }


// int main(){
//     vector<vector<int>>v{
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12}
        
//     };
//     print_wave_matrix(v);

//     return 0;
// }


// //spiral print
// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         vector<int>ans;
//         int row=matrix.size();
//         int col=matrix[0].size();
//         int total_element = row*col;

//         int startingRow = 0;
//         int endingcol = col-1;
//         int endingrow =  row-1;
//         int startingcol= 0;

//         int count =0; 
//         while(count < total_element){
//             //print startingrow
//             for(int i=startingcol; i<=endingcol && count<total_element; i++){
//                 ans.push_back(matrix[startingRow][i]);
//                 count++;

//             }
//             startingRow++;
//             // print endngcol
//             for(int i=startingRow; i<=endingrow && count<total_element; i++){
//                 ans.push_back(matrix[i][endingcol]);
//                 count++;

//             }
//             endingcol--;

//             //printing ending row
//             for(int i=endingcol;i>=startingcol && count<total_element; i--){
//                 ans.push_back(matrix[endingrow][i]);
//                 count++;
//             }
//             endingrow--;

//             //print starting col
//             for(int i=endingrow; i>=startingRow && count<total_element; i--){
//                 ans.push_back(matrix[i][startingcol]);
//                 count++;
//             }
//             startingcol++;
//         }
//    return ans; }
// };