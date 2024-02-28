

#include<iostream>
#include<vector>
using namespace std;
bool isSafe(vector<vector<int>>&m, int row, int col , int i, int j, vector<vector<bool>>&visited){
// check index isa in the array
if(  ///thre condtion
((i>=0 && i< row)&&(j>=0 && i<col)) && 
(m[i][j]==1) &&
 (visited[i][j]==0)
 ){
    return true;
}
else{
    return false;
}

}


void solveMaze(vector<vector<int>>&maze, int row, int col, int i, int j,vector<vector<bool>> &visited, vector<string >&path, string output){
    //base case 
    if(i== row-1 && j==col-1){
        path.push_back(output);
        return;
    }
    //down -----> i+1,j
   if( isSafe(maze, row, col, i+1, j, visited) ){
    visited[i+1][j]=true;
    solveMaze(maze, row, col, i+1, j, visited, path,output+'D');
    //backtracking 
    visited[i+1][j]=false;
   }
    //left -----> i,j-1
        if(isSafe(maze, row, col, i, j-1, visited)){
            visited[i][j-1]=true;
            solveMaze(maze, row , col, i, j-1,visited, path, output+'L');
        ///backtracking
        visited[i][j-1]=false;
        }
    //righ -----> i, j+1
        if(isSafe(maze, row, col, i, j+1, visited)){
            visited[i][j+1]=true;
            solveMaze(maze, row, col, i, j+1, visited, path, output+'R');
            //backtracking 
            visited [i][j+1]=false;
        }
    //up   -----> i-1, j
        if(isSafe(maze, row, col, i-1, j, visited)){
            visited[i-1][j]=true;
            solveMaze(maze, row, col, i-1, j, visited, path , output+'U');
           visited[i-1][j]=false;
         }
        

}



int main(){
int maze[3][3]={{1,0,0},{1,1,0},{1,1,1}};
int col=3;
int row=3;
//visited wala vector bana re Apan Idhar
vector<vector<bool>> visited(row,vector<bool>(col, false));
//src ko pele he visited mark aKR DENGE
visited[0][0]=true;

vector<string>path;
string output="";
solveMaze(maze, row, col, 0, 0, visited, path,output);
  //printing result 
  for(auto i : path){
      cout<<i<<" ";
  }
  cout<<endl;
    return 0;
}