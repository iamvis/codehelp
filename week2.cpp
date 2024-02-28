
// //hlloww half pyramid
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//       cin>> n;
//     for(int row=0; row<n;row++){

//         for(int col=0; col<row+1; col++){
//                 if(col==0 ){
//             cout<<"1 ";
//         }
//       else if(row==col || row==n-1){
//         cout << col+1 <<" ";
//       }
//         else{

//            cout<<"  ";

//         }

//     } cout<< endl;

// }
// return 0;
// }

// //hlloww inverted half pyramid
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//       cin>> n;
//     for(int row=0; row<n;row++){

//         for(int col=0; col<n-row; col++){

//                 if(col==0 ){
//             cout<<row+1<<" ";
//         }
//       else if( row==0){
//         cout << col+1 <<" ";
//       }
//       else if(col==n-row-1){
//         cout <<"5";
//       }
//         else{

//            cout<<"  ";

//         }

//     } cout<< endl;

// }
// return 0;
// }

////full pyramid
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
// for(int row=0; row<n; row++){
//   for(int col=0; col<n-1-row; col++){
//     cout <<"  ";

//   }
//   for(int col=0; col<row+1; col++){
//     cout<<col+1<<" ";
//   }
//   for(int col=row+1; col>1; col--){
//     cout << col-1<<" ";
//   }
//   cout<<endl;
// }
//   return 0;
// }

// ////half diamond
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
// for(int row=0; row<n; row++){

//      for(int col=0; col<row+1; col++){
//     cout <<"* ";
//     }cout << endl;
//   }

//  for(int row=0; row<n; row++){
//  // for(int col=0; col<n-row-1; col++){}
//   for(int col=n-row-1; col>0; col--){
//   cout <<"* ";
//   }
//  cout << endl;
//  }

// return 0;

//   }

// // Full diamond
// #include <iostream>
// using namespace std;
// int main()
// {

//   int n;
//   cin >> n;

//  for(int row=0; row<n; row++){
//     for(int col=0; col<n-1-row; col++){
//       cout <<"  ";

//     }
//     for(int col=0; col<row+1; col++){
//       cout<<"k ";
//      }
//     for(int col=row+1; col>1; col--){
//       cout << "k ";
//     }
//     cout<<endl;
//   }
//   for(int row=0; row<n; row++){
//     // for(int col=row+1; col>1; col--){
//     //   cout << "* ";
//     // }
//     // cout<< endl;
//     for(int col=0; col<n; col++){
//        if(col<=row){
//         cout << "  ";

//        }
//        else{
//           cout << "k ";
//         }

//     }
//     for(int col=0; col<n-row-2; col++){
//       cout<<"k ";
//     }

//   cout <<endl;
//   }

//   return 0;
// }

// fancypattern 1
// my method
//  #include<iostream>
//  using namespace std;
//  int main(){
//    int n;
//    cin>>n;
//    for(int row=0; row<n; row++ ){

//     for(int col=0; col<n-row+3; col++){
//       cout << "*";

//     }
//     for(int col=0; col<row+1; col++){
//       cout << row+1<<"*";
//     }
//   for(int col=row+1; col<2*n-2; col++){
//     cout << "*";
//   }
//     cout <<endl;
//   }
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cin >> n;
//   if (n > 9)
//   {
//     cout << " please enter the value which is smaller then 9 or eual to 9";
//       return 0;
//   }
//   else{

//   for (int row = 0; row < n; row++)
//   {
//     int start_num_index = 8 - row;
//     int num = row + 1;
//     int count_num = num;

//     for (int col = 0; col < 17; col++)
//     {
//       if (col == start_num_index && count_num > 0)
//       {
//         cout << num;
//         start_num_index += 2;
//         count_num--;
//       }
//       else
//       {
//         cout << "*";
//       }
//     }
//     cout << endl;
//   }
// }

// }

// f2
// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cin >> n;
//   int count=1;

//   for (int row = 0; row < n; row++)
//   {

//     for (int col = 0; col <= row; col++)
//     {
//       cout << count;
//       count++;
//       if(col<row){
//         cout <<"*";
//       }
//     }
//     cout << endl;
//   }
//   int niche_count=count-n;
//   for(int row=0; row<n; row++){
//     int k=niche_count;

//     for(int col=0;col<=n-row-1; col++){
//       cout <<k;
//     k++;
//     if(col<n-row-1){
//       cout <<"*";
//     }

//     }
//     niche_count=niche_count-(n-row-1);
//     cout <<endl;
//   }
//   return 0;
// }

// //3
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   for(int row=0; row<n; row++){
//     int cond=row<=n/2 ? 2*row:  2*(n-row-1);
//     for(int col=0; col<=cond; col++){
//       if(col<=cond/2){
//         cout<<col+1;
//       }
//       else{
//         cout <<cond-col;
//       }

//     }
//     cout <<endl;
//   }
//   return 0;
// }

// //floyds triangle pattern
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int count=1;

// for(int row=0;row<n; row++){

//   for(int col=0; col<row+1; col++){
//     cout <<count<<" ";
//     count++;
//   }
//   cout <<endl;
// }
// }

// //pascals triangl pattern

// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   for(int i=1; i<=n; i++){
//     int c=1;
//     for(int j=1; j<=i; j++){
//       cout << c<< " ";
//       c=(c*(i-j)/j);
//     }
//     cout <<endl;
//   }
//     return 0;
// }

// butter flydtructure
// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cin >> n;
//   for(int row=0; row<2*n; row++){
//     int cond=row<n ? row:0;
//     int space_count = row<n ? 2*(n-cond-1): 0;

//     for(int col=0; col<2*n; col++){
//       if(col<= cond){
//         cout<<"* ";
//       }

//       else if(space_count >0){
//         cout <<"  ";
//         space_count--;
//       }
//       else{
//         cout <<"* ";
//       }
      
//     }
//     cout <<endl;
//   }
//   return 0;
// }

// //area of circle
// #include<iostream>
// using namespace std;
// float circle_area(float r){
//   float area= 3.14*r*r;
//   return area;
// }
// int main(){
  
//   float r;
//   cin>>r;
// float area= circle_area(r);
//   cout << "area of circle=  "<<area;
  
//   return 0;
// }

//even odd
// #include<iostream>
// using namespace std;
// string state(int num){
//   if((num%2)==0){
//     return "even";

//   }
//   else{
//     return "odd";
//   }
// }
// int main(){
//   int num;
//   cin>>num;
//   string number= state(num);
//   cout <<" number is = " <<number;
//   return 0;
// }


// // factorial
// #include<iostream>
// using namespace std;
// int factorial_machine(int number){
//   int fac=1;
//   for(int i=1; i<=number; i++){
//     fac=fac*i;
//   }
//   return fac;
// }
// int main(){
//   int number;
//   cout <<"enter the number = ";
//   cin>>number;
//   int factorial=factorial_machine(number);
//   cout <<"this is the factorial ="<<factorial;

//   return 0;
// }

// // check prme or not
// #include<iostream>
// using namespace std;
// bool check_prime(int n){
//   int i=2;
//   for(int i=2; i<n; i++)
//   {
//     if(n%i==0){
//       return false;
//     }
//   }
//   return true;
// }
// int main(){
//   int n;
//   cin>>n;
//   bool is_prime = check_prime(n);
//   if(is_prime){
//     cout << " n is prime";
//   }
//   else{
//     cout <<" n is non prime";
//   }
//   return 0;
// }



// // 1 to n prime number

// #include<iostream>
// using namespace std;
// bool check_prime(int n){
//   int i=2;
//   for(int i=2; i<n; i++)
//   {
//     if(n%i==0){
//       return false;
//     }
//   }
//   return true;
// }
// int main(){
//   int n;
//   cin>>n;
//   for(int i=2; i<=n; i++){
//     bool is_prime = check_prime(i);
//   if(is_prime){
//     cout << i<<" ";
//   }

//   }
  
//   return 0;
// }

//reverse integer
#include<iostream>
using namespace std;

int main(){

  return 0;

}