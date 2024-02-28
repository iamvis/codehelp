///680
class Solution {
public:
//  bool pallindrom(string s){
//             int i=0;
//             int j=s.length()-1;
//             bool ans= false;
//             while(i<=j){
//                 if(s[i]==s[j]){
//                     i++;
//                     j--;
//                     ans=true;
//                 }
              
//             }
//             return ans;
//         }

    bool validPalindrome(string s) {
        int i=0;
       
        while(i<s.length()){
          s.pop_back();
          if( palindram(s)!=1){
             return false;
          }
          else{
              s.push_back(s[i]);
              

          }
          i++;
        }

        return true;
       
    }
    bool palindram(string s){
    int i=0;
    int j = s.length()-1;
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
   return true;   
}
        
};