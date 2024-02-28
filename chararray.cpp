// #include<iostream>
// #include<string>
// #include <cstring>
// using namespace std;

// int getlength(char arr[]){
//     int length =0;
//     int i =0;
//     while(arr[i] !='\0'){
//         length++;
//         i++;

//     }
//     return length;
// }
// int main(){
//     // char name[100];
//     // cout<<" apka name kya type kro"<<endl;
//     // cin>>name;
//     // cout <<"apka name     "<<name<<" hai"<<endl;
//     // int k =name[6];//NULL CHAR LAST IN CHAR ARRAY
//     // cout<<"THIS IS NULL CHAR BY DEFAULT ----->"<<k<<endl;

// // ///alag alg valuye dene ke liye
// //     name[0]='s';
// //     name[1]='k';
// //     name[2]='c';
// //     cin>>name[3];
// //     cout<<name[0]<<name[1]<<name[2]<<name[3]<<endl;

// // //space read karane ke liye
// // char arr[100];
// // // cin>>arr;
// // // cout<< getline(cin, arr);
// // cin.getline(arr,  60);
// // cout<<arr;

// char arr[100];
// cin>>arr;
// int l = getlength(arr);
// cout <<"legth of the arr  "<<l<<endl;
// //pre dfind function for length
// cout<<" length of array"<<strlen(arr)<<endl;
//     return 0;
// }


// //reverse a string 
// #include<iostream>
// #include<string>
// #include <cstring>
// using namespace std;
// int getreverse(char string[]){
//  int i=0;
// int n = strlen(string);
//  int j=n-1;
//  while(i<=j){
//  swap(string[i], string[j]);
//  i++;
//  j--;
//  }
 
//  return 

// }

// int main(){
//      char string[100];
//      cin>>string;
//      int revers= getreverse(string );
//      cout<<revers<<endl;


//     return 0;

// }

// //reverse a string 
// #include<iostream>
// #include<string>
// #include <cstring>
// using namespace std;

// void replace(char k[]){
//     int i =0;
//     int j = strlen(k);

//     for(; i<j; i++){
//         if(k[i]==' '){
//             k[i]='@';
            
//         }
//     }
// }
// int main(){
//     char k[100];
//     cin.getline(k,  100);

//     replace(k);
//     cout<<k;
//     return 0;
// }


// //palindrom
// #include<iostream>
// #include<string>
// #include <cstring>
// using namespace std;
// bool palindram(char k[]){
//     int i=0;
//     int j = strlen(k)-1;
//     while(i<=j){
//         if(k[i]!=k[j]){
//             return false;
//         }
//         else{
//             i++;
//             j--;
//         }
//     }
//    return true;   
// }
// int main(){
//     char k [100];
//     cin>>k;
//     cout <<palindram(k)<<endl;
//     return 0;
// }

//convert into upper case
#include<iostream>
#include<string>
#include <cstring>
using namespace std;
void convertIntouppercase(char k[]){
    int n = strlen(k);
    for(int i=0; i<n; i++){
        k[i]=k[i] +'a'-'A';//upper to lopvver
        // k[i]=k[i] -'a'+'A';// lopvver to upper

    }
}
int main(){
    char k [100];
    cin>>k;
    convertIntouppercase(k);
    cout << k<<endl;
    return 0;
}

//predefind function

// #include<iostream>
// #include<string>
// using namespace std;
// //compare  function
// bool comparestring(string a, string b ){
//     if(a.length() != b.length())
//     return false;
//     else{
//         int j=0;
//         for (int i=0; i<a.length(); i++ ){
//             if(a[i]!=b[j]){
//                 return false;
//             }
//             j++;
//         }
//     }
//     return true;
// }
// int main(){
//     // string str;
//     // cin >> str;
//     // cout<<str<<endl;
//     // cout <<"length of string  -> "<<str.length() <<endl;
//     // cout <<"length of string  -> "<<str.size() <<endl;
//     // str.push_back('l');
//     // cout<<str<<endl;
//     // str.pop_back();
//     // cout<<str<<endl;

//     // //subtring
//     // //0  -> jaha se element start karna hai
//     // //6 -> kitne element nikalna  hai
//     // cout<<str.substr(8,6)<<endl;
//     // cout<<str<<endl;

//     // //most imp function
//     // string a = "ramu";
//     // string b ="ramu";
//     // if(a.compare(b)==0){
//     //     cout <<"a and b are exactly same string "<<endl;
//     // }
//     // else{
//     //     cout <<"a and b are not same "<<endl;
//     // }
//     // string x="bjds";
//     // string y="dksd";
//     // cout<<x.compare(y)<<endl;


//     //find function
//     // string sentence ="ram ke do bhai hai";
//     // string target ="raj";
//     // cout<<sentence.find(target)<<endl;
//     // if(sentence.find(target) == std::string::npos){
//     //     cout<<"not found"<<endl;
//     // }

//     //replace funcion
//     string str="this is vishal prajapati";
//     string word ="lala";
//     str.replace(8,6,"kaka");
//     cout<<str<<endl;
//     return 0;
// }