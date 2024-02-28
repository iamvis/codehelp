// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//      //creating vector
//      vector<int>ar;
//      int ans=(sizeof(ar)/sizeof(int));
//      cout <<ans<<endl;
//      cout << ar.size()<<endl;
//      cout <<ar.capacity()<<endl;

//      ///insert
//      ar.push_back(7);
//      ar.push_back(9);
//      ar.push_back(3);

//      //printing
//      for(int i=0; i<ar.size(); i++){
//         cout <<ar[i]<<" ";
//      }
//      cout <<endl;
//      ar.pop_back();
//      ar.pop_back();
//           for(int i=0; i<ar.size(); i++){
//         cout <<ar[i]<<" ";
//      }
//      cout <<endl;
//      int n;
//      cout <<" enter the value of n  "<<endl;
//      cin>>n;
//      vector<int>krr(n,33);
//      cout << "size of arry= "<<krr.size()<<endl;
//      cout << "capacity of arry= "<<krr.capacity()<<endl;
//          for(int i=0; i<krr.size(); i++){
//         cout <<krr[i]<<" ";
//      }
//      cout <<endl;
//      vector<int>ramu{10,30,50, 20, 50};
//      for(int i=0; i<ramu.size(); i++){
//         cout <<ramu[i]<<"  ";
//      }
//      cout << endl;

//     return 0;
// }

// //find unique element
// #include <iostream>
// #include <vector>
// using namespace std;
// int check_unique(vector<int> arr)
// {
//    int ans = 0;
//    for (int i = 0; i < arr.size(); i++)
//    {
//       //xor operator will give same in zero
//       // and different in the value
//       ans = ans ^ arr[i]; 
//    }
//    return ans;
// }

// int main()
// {
//    int n;
//    cin >> n;
//    vector<int> arr(n);
//    for (int i = 0; i < arr.size(); i++)
//    {
//       cin >> arr[i];
//    }
//    int unique = check_unique(arr);
//    cout << "unique element is =  " << unique << endl;

//    return 0;
// }


// //union of two array
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//    vector<int>a{2,4,6,8,9};
//    int sizea=5;
//    vector<int>k{1,3,7};
//    int sizeb=3;
//    vector<int >ans;


   
//    //push a ke element
//    for(int i=0; i<a.size(); i++){
//       ans.push_back(a[i]);
//    }
//    //push k ke element
//    for(int i=0; i<k.size(); i++){
//       ans.push_back(k[i]);
//    }

//    //prinnting
//    for(int i=0; i<ans.size(); i++){
//       cout <<ans[i]<<" ";
//    }
//    return 0;
// }



////intersection

// #include<iostream> 
// #include<vector>
// #include<limits.h>

// // using namespace std; 
// // int main(){
//    vector<int>kalu{3,5,76,7,2,4,4,4};
//    vector<int>shyamu{ 2,6,68,9,4,4};
//    vector<int>ans;
//    //outer loop on kalu vector
//    for(int i=0; i<kalu.size(); i++){
      
//       int element = kalu[i];
//       //for everuy element, run loop on brr
//       for(int j=0; j<shyamu.size(); j++){
//          if(element == shyamu[j]){
//             shyamu[j]=INT_MIN;
//             ans.push_back(element);
            
//          }

//       }
//    }
//    ///prnt
//    for(int i=0; i<ans.size(); i++){
//       cout <<ans[i]<<" ";
//    }

   
//    return 0;

// }

//fnd pair sum



#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<int>arr{10,20,40,60,70};
   //print all the pairs
   //outer loop till traverse for each element
   for(int i=0; i<arr.size(); i++){
      int element = arr[i];
      //for every element, will traverse on aage wale elemnts
      for(int j=i+1; j<arr.size(); j++){
         cout <<"(" << element<<","<<arr[j]<<")"<<endl;
      }
   }

}