// #include<iostream>
// #include<vector>
// using namespace std;

// int finde_pivot( vector<int>v){
//     int s=0;
//     int e =v.size()-1;
//     int mid = s+ (e-s)/2;
//     while(s<=e){
//         if(v[mid+1]<v.size() && v[mid]>v[mid+1]){
//             return mid;
//         }
//         else if(v[mid -1]>=-0 && v[mid -1]>v[mid]){
//             return mid-1;
//         }
//         //first and last position 
//         else if(v[s]>=v[mid]){
//             e=mid-1;
//         }
//         else {
//             s= mid+1;
//         }
//         mid =s+(e-s)/2;
     
//     }
//      return -1;
   
// }
// int main(){
//     vector<int>v{3,4,5,6,7,1,2};
   
//     int pivot = finde_pivot(v);
//     cout << v[pivot]<<endl;

//     return 0;
// }

///squre root
#include<iostream>
using namespace std;
int find_squre_root(int n){
    int target =n;
    int s =0;
    int e = n;
    int mid = s+(e-s)/2;
    int ans =-1;
    while(s<=e){
        if(mid* mid == target){
            return mid;
        }
        if(mid*mid >target){
            e = mid-1;

        }
        else {
            ans = mid;
            s = mid+1;
        }
        mid = s+(e-s)/2;
        

    }
    return ans;

}
int main(){
    int n;
    cout <<" enter the number "<<endl;
    cin >>n;
     int ans = find_squre_root(n);
     cout <<" ans is  "<<ans<<endl;
     return 0;
}