// #include<iostream>
// #include<vector>
// using namespace std;

// //print wala function
// void printSolution(vector<vector<char>>&board,  int &n){
//     cout<<endl;
// for(int i=0; i<board.size(); i++){
//     for(int j=0; j<board.size(); j++){
        
//         cout<<board[i][j]<<" ";
//     }
//     cout<<endl;

// }
// cout<<endl<<endl;
// }

// /// safe wla function
// bool isSafe(vector<vector<char>> &board,int col,
//  int row, int& n){

// /// 3 condition check karna hai
// // 1. piche ki row
// int i= row; 
// int j=col;
// while( j>=0){
//     if(board[i][j]=='Q'){
//         return false;
//     }
//      j--;
     
// } 
// // 2. uper wla diagonal 
//  i = row;
//  j = col;
// while( i>=0 && j>=0){
//     if(board[i][j]=='Q'){
//         return false;
//     }
//     i--;
//     j--;
// }

// // 3. niche wala diagonal
//  i= row;
//  j = col;
// while(i<n && j>=0){
//     if(board[i][j]=='Q'){
//         return false;
//     }
//     i++;
//     j--;
    
// }
// return true;
// }

// //solvce wala function
// void solve(vector<vector<char>>&board, int col,int& n){
//   //base case 
//   if(col >= n){
//     printSolution(board, n);
//     return;

//   }

//   //har row ke liye check karenge
//   for(int row=0; row<n; row++){
//     if(isSafe(board, col, row,n)){
//         //to dal do bhia
//      board[row][col]='Q';

//      //recursive call fake ke mara
//      solve(board, col+1, n);

//      //sabut mitane ke liye backtraking ka use karenge
//          board[row][col]='-';

//     }
//   }
// }

// int main(){
//     int n=4;
//     vector<vector<char>>board(n, vector<char>(n,'-'));

//     int col =0;
//     solve(board, col, n);

//     return 0;
// }





//////  Optimised Approach/////



#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

unordered_map<int,bool>rowCheck;
unordered_map<int, bool>upper_left_diagonal;
unordered_map<int, bool>bottam_left_diagonal;

//print wala function
void printSolution(vector<vector<char>>&board,  int &n){
    for(int i=0; i<board.size(); i++){
    for(int j=0; j<board.size(); j++){
     cout<<board[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl<<endl;
}

/// safe wla function
bool isSafe(vector<vector<char>> &board,int col,
 int row, int& n){

   if(rowCheck[row]==true) return false;
   if(upper_left_diagonal[(n-1)+col-row]==true) return false;
   if(bottam_left_diagonal[row+col]==true) return false;

   return true;
}

//solvce wala function
void solve(vector<vector<char>>&board, int col,int& n){
  //base case 
  if(col >= n){
    printSolution(board, n);
    return;
  }

  //har row ke liye check karenge
  for(int row=0; row<n; row++){
    if(isSafe(board, col, row,n)){
        //to dal do bhia
     board[row][col]='Q';
     rowCheck[row]= true;
     upper_left_diagonal[(n-1)+col-row]=true;
     bottam_left_diagonal[row+col]=true;

     //recursive call fake ke mara
     solve(board, col+1, n);

     //sabut mitane ke liye backtraking ka use karenge
         board[row][col]='.';
         rowCheck[row]= false;
         upper_left_diagonal[(n-1)+col-row]=false;
         bottam_left_diagonal[row+col]=false;
    }
  }
}

int main(){
    int n=4;
    vector<vector<char>>board(n, vector<char>(n,'.'));
    int col =0;
    solve(board, col, n);
    return 0;
}