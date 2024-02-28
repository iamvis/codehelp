// #include<iostream>
// #include<string>
// #include<limits.h>
// using namespace std;
// void reverse(string &s ,int i,int j){
//     //base case 

//     if(i>j) return ;

//     //ek case
//     swap(s[i], s[j]);
//     return reverse(s,i+1, j-1);

// }


// int main(){
//     string s="kaludada";
//     reverse(s,0,s.size()-1);
//     cout<<s<<endl;
//     return 0;
// }


///valid palindrom
// #include<iostream>
// #include<string>

// using namespace std;
// bool palindrom(string &s ,int i,int j){
//     //base case 
//     if(i>=j){
//         return true;
//     }
//     //ek case
//     if(s[i]!=s[j]){
//       return false;  
//     }
//     return palindrom(s,i+1,j-1);

// }

// int main(){
//     string s;
//     cin>>s;
//     cout<<palindrom(s,0,s.size()-1);
 
//     return 0;
//}


// //print all substring
// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;

// void substring(vector<int> &num ,int i,int j){

//     //base case 
//     if(j>=num.size()){
//         return ;
//     }
//     //ek case
//     for(int k=i;k<=j;k++){
//         cout<<num[k]<<" ";
//     }
//     cout<<"    itration khtm"<<endl;

//   substring(num, i, j+1);
  
// }

// void subray(vector<int>&num){
//     for(int i=0;i<num.size(); i++){
//         int j=i;
//         substring(num,i,j);
//         cout<<endl;
//     }
// }
// int main(){
//     vector<int>num{7,1,5,3,6,4};
//     subray(num);
//     return 0;
// } 



//121 //secound irtration not working
#include<iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxFinder(vector<int>& prices, int i, int &minPrice, int& maxProfit) {
        // base case
        if (i == prices.size()) return 0;
        // ek solve kro
        if (prices[i] < minPrice)
            minPrice = prices[i];
            cout<<minPrice<<endl;
        int todayProfit = prices[i] - minPrice;
        if (todayProfit > maxProfit)
            maxProfit = todayProfit;
        // recursive
        // Update the return value here
        return max(maxFinder(prices, i + 1, minPrice, maxProfit), maxProfit);
    }

    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = INT_MIN;
        int k = maxFinder(prices, 0, minPrice, maxProfit);

        return k;
    }
};

int main() {
    Solution solution;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int result = solution.maxProfit(prices);
    cout << "Maximum Profit: " << result << endl;
    return 0;
}