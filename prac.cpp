// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count=1;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<row+1;col++){
//             cout<<count;
//             count ++;
//             if(col!=row){
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
//     for(int row=0;row<n;row++){
//         for(int col=0;col<row+col-n;col++){
//             cout<<count;
//             count ++;
//             if(col!=n-row-1){
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
    
    
//     return 0;
// }

 
 
//string printing
 #include<iostream>
 #include<string>
 #include<cstring>
using namespace std;
void substring(char s[],int n){
for(int i=1; i<=n; i++){

    //starting point
    for(int j=0; j<=n-i; j++){
       
        //chr from current
        //start to cuurent ending
        //point
        int l=j+i-1;
        for(int k =j; k<=l; k++){
            cout<<s[k];
            cout<<endl;
        }

    }
}
}
int main(){
    char s[]="kalu";
    int n=4;

    substring(s,n);
    return 0;
    }


// // C++ program to print all possible
// // substrings of a given string
 
// #include<bits/stdc++.h>
// using namespace std;
 
// // Function to print all sub strings
// void subString(char str[], int n)
// {
//     // Pick starting point
//     for (int len = 1; len <= n; len++)
//     {   
//         // Pick ending point
//         for (int i = 0; i <= n - len; i++)
//         {
//             //  Print characters from current
//             // starting point to current ending
//             // point. 
//             int j = i + len - 1;           
//             for (int k = i; k <= j; k++)
//                 cout << str[k];
             
//             cout << endl;
//         }
//     }
// }
 
// // Driver program to test above function
// int main()
// {
//     char str[] = "abc";
//     subString(str, strlen(str));
//     return 0;
// }