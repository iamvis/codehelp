// #include<iostream>
// using namespace std;
// int bs(int a[], int start, int end, int x){
  
//     while(start<=end){
//           int mid= (start+end)/2;
//         if(a[mid]==x){
//             return mid;
//         }
//         else if(x>a[mid]){
//             start = mid+1;
//         }
//         else{
//             end = mid-1;

            
//         }
        
//     }
//     return -1;
// }
// int expSearch(int a[], int n, int x){
//     if(a[0]==x) return 0;
//     int i=1;
//     while(i<n && a[i] <x){
//         i=i*2;  //i*=2 // i= i<<1;
//     }
//     cout << i <<"   dkk"<<endl;
//     cout <<n-1 <<"   k"<<endl;
//     cout <<i/2 <<"   l"<<endl;
//     return bs(a, i/2, min(i, n-1), x);
    

// }
// int main(){
//     int a[]={3,4,5,6,11,13,13,15,56,70, 94, 100,};
//     int n = sizeof(a)/sizeof(int);
//     int x=13;
//     int ans = expSearch(a, n, x);
//     cout <<ans;

//     return 0;
//}



// #include<iostream>
// using namespace std;
// int bs(int a[], int start, int end, int x){
  
//     while(start<=end){
//           int mid= (start+end)/2;
//         if(a[mid]==x){
//             return mid;
//         }
//         else if(x>a[mid]){
//             start = mid+1;
//         }
//         else{
//             end = mid-1;

            
//         }
        
//     }
//     return -1;
// }
// int expSearch(int a[],  int x){
    
//     int i=0;
//     int j=1;
//     while(a[j] <x){
//        // i=i*2;  //i*=2 // i= i<<1;
//        i=j;
//        j=j*2;
//     }
   
//     return bs(a, i, j, x);
    

// }
// int main(){
//     int a[]={3,4,5,6,11,13,15,56,70, 94, 100,};
  
//     int x=13;
//     int ans = expSearch(a, x);
//     cout <<ans;

//     return 0;
// }


///book allocation problem

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isPossible(vector<long long int>trees, long long int m, long long int mid){
	long long int woodcollected =0;
	for(long long int i=0; i<trees.size(); i++){
	if(trees[i] > mid){
		woodcollected =woodcollected+ trees[i] -mid;
	}
	}
	return woodcollected >=m;
}

long long int MaxSawBladeHeight(vector<long long int>trees, long long int m){
	long long int start=0, end;
	
    end = *max_element(trees.begin(), trees.end());
   
    long long int  ans =-1;
    while(start<=end){
         long long int mid = start+(end-start)/2;
    	if(isPossible(trees, m,mid)){
    		ans =mid;
    		start = mid +1;
    	}
    	else{
    		end = mid-1;
    	}
        mid = start+(end-start)/2;
    	
    }
    return ans;
}

int main() {
	long long int n, m;
	cin>>n>>m;
	vector<long long int > trees;
	while(n--){
		long long int height;
        cin>>height;
		trees.push_back(height);
	}
	cout <<MaxSawBladeHeight(trees, m)<<endl;
	return 0;
}