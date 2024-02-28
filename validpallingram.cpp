// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
//   bool isAnagram(string s, string t) {
//      int i=0;
//           int j =s.length();
//           int l = t.length();
//     if(s.length() !=t.length()){
//         return false;
//     }
//           sort(s.begin(),s.end()); 
//           sort(t.begin(),t.end()); 
//           return s==t;
         
//   }

// int main(){
//     string s= "anagram";
//     string t="nagaraw";
//     cout<<isAnagram(s, t)<<endl;
    
//         return 0;
// }
  

  // CPP code for demonstrating
// string::compare (const string& str) const

#include<iostream>
using namespace std;

void compareOperation(string s1, string s2)
{
	// returns a value < 0 (s1 is smaller than s2)
	if((s1.compare(s2)) < 0)
		cout << s1 << " is smaller than " << s2 << endl;

	// returns 0(s1, is being compared to itself)
	if((s1.compare(s1)) == 0)
		cout << s1 << " is equal to " << s1 << endl;
	else
		cout << "Strings didn't match ";
	
}

// Driver Code
int main()
{
	string s1("Geeks");
	string s2("forGeeks");
	compareOperation(s1, s2);
	
	return 0;
}
