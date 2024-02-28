// #include<iostream>
// using namespace std;
// int findTarget(int arr[], int size, int target){
//     int s =0;
//     int e = size-1;
//     int mid = s=(e-s)/2;
//     int ans =-1;
//     while(s<=e){
//         //equal ka case
//         if(arr[mid]==target){
//             return mid;

//         }
//         if(arr[mid-1]==target){
//             return mid-1;
//         }
//         if(arr[mid+1]==target){
//             return mid+1;
//         }
//         // less then ka case me
//         // if(arr[mid]>target){
//         //     e = mid-1;
//         // }
//         // if(arr[mid-1]>target){
//         //     e = (mid-1)-1;

//         // }
//         // if(arr[mid +1]>target){
//         //     e = mid;
//         // }

//      // WE CAN ALSO WRITE
//      if(arr[mid]>target){
//         e= mid-2;
//      }
//         //greater then ke case me
//         // if(arr[mid]<target){
//         //     s= mid+1;
//         // }
//         // if(arr[mid-1]<target){
//         //     s = (mid-1)-1;

//         // }
//         // if(arr[mid+1]<target){
//         //     s= mid+1+1;

//         // }
//         if(arr[mid]<target){
//             s= mid+2;
//         }
//         mid= s+(e-s)/2;

//     }
//     return ans;
// }
// int main(){
//     int target;
//     cout <<" enter the target value"<<endl;
//     cin >> target;
//     int arr[]={10, 3, 40, 20, 50, 80, 70};
//     int size =7;
//     int final_answer = findTarget(arr, size , target);
//     cout << final_answer;

//     return 0;
// }

/// dividend

// #include<iostream>
// using namespace std;
// int solver(int dividend , int divisor){
//     int s=0;
//     int e= abs(dividend);
//     int mid= s+(e-s)/2;
//     int ans_store = 0;
//     while(s<=e){
//         if(abs(mid*divisor) == abs( dividend)){
//             return mid;
//             cout << " mid ki ramayan  chal ri"<<endl;

//         }
//         if(abs(mid*divisor)>abs(dividend0)){
//             e=mid-1;
//             cout << "chote mid ki ramayan  chal ri"<<endl;

//         }
//         else{
//             ans_store= mid;
//             s=mid+1;
//             cout << "bade  mid ki ramayan  chal ri"<<endl;
//         }
//         mid= s+(e-s)/2;
//          cout << " mid ki ramayan  chal ri"<<endl;
//     }
//     return ans_store;
// }
// int main(){
//     int dividend =30;
//     int divisor = 4;
//     int ans = solver( dividend, divisor);
//     cout <<ans;
//     return 0;
// }

// odd occuring element in array
#include <iostream>
#include <vector>
using namespace std;
int findOddocur(vector<int> k)
{
    int s = 0;
    int e = k.size() - 1;
    int mid = s + (e - s) / 2;
    
    while (s <= e)
    {
        if (s == e)
        {
            // SINGLE ELMENT
            return s;
        }
        // 2 case -> mid may be even or odd
        if (mid % 2 == 0)
        {
            // even wala case
            if (k[mid] == k[mid + 1])
            {
                s = mid + 2;
            }
            else
            {
                e = mid;
            }
        }
        else
        {
            // oddd wala case
            if (k[mid - 1] == k[mid])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{

    vector<int> v{1, 1, 2, 2, 3, 3, 4, 4, 3, 5, 5, 600, 600, 4, 4};
    int ans = findOddocur(v);
    cout << "ans is  " << ans << endl;
    cout << "value is  " << v[ans] << endl;
    return 0;
}