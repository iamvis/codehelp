// //sinmple code
// #include<iostream>
// #include<string>
// #include<limits.h>

// using namespace std;

// int lastOcur(string &str, char target) {
//     for(int i = str.length() - 1; i >= 0; i--) {
//         if(str[i] == target) {
//             return i;
//         }
//     }
//     return -1;
// }

// int main() {
//     string str = "abcddefg";
//     char target = 'd';  // Change target to char
//     int result = lastOcur(str, target);
//     cout << "Last occurrence index: " << result << endl;

//     return 0;
// }



//recursive code
#include<iostream>
#include<string>
#include<limits.h>

using namespace std;

void lastOcur(string &str, char target ,int i,  int &updatedIndex) {
//   ///right to left
//     //base condition
//     if(index==-1) return -1;

//     if(str[index]==target) return index;

//     //recursive function
    
//     return lastOcur(str, target,index-1);
    

    ///left to right
       //base condition
      
       
    if(i>=str.length()) return;


    if(str[i]==target)
        updatedIndex=i;
        

    //recursive functionclas
    return lastOcur(str, target,i+1,updatedIndex);
    
}

int main() {
    string str = "abcddefg";
    char target = 'd';  // Change target to char
     int updatedIndex=-1;
    lastOcur(str, target,0,updatedIndex);
    cout << "Last occurrence index: " << updatedIndex << endl;

    return 0;
}
