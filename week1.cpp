// //multiple two number
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin>> a>>b;
//     cout << a*b;
//     return 0;
// }

////find perimeter of triangle

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     int p;
//     p= a+b+c;
//     cout << p;
//     return 0;
// }

// //find simple intrest
// #include<iostream>
// using namespace std;
// int main(){
//     int p,r,t;
//     cin>>p>>r>>t;
//     int simple_intreste;
//     simple_intreste = (p*r*t)/100;
//     cout << simple_intreste;
// }

// //print counting from Nto1
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>> n;

//     for(int count=n; count>0; count=count-1){
//         cout<< count<<endl;

//     }

//     return 0;
// }

// //find factorial

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//    int  fact =1;
//     cin>> n;
//     // by while loop
//   while(n>=1){
//     fact= fact*n;
//     n--;

// }

// cout<< "fact by while loop= "<<fact <<endl;
// //by for loop
// for(int i =n; i>0; i=i-1){
//     fact = fact*n;
//     n=n-1;
// }
// cout << "fact by for loop= " << fact;
//     return 0;
// }

// // check a number is prime or not
// #include<iostream>
// using namespace std;
// int main(){
//     int num;

//     cin>> num;

//         if((num%2)!=0){
//             cout <<" num is prime ";

//         }

//     else{
//             cout << " num is not prime ";
//         }
//     return 0;
// }

// //CHECK triangle is valid
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cin >>a>>b>>c;
//     if((a+b)>c||(b+c)>a||(a+c)>b){
//         cout << "the givern vale are the  sids of triangle "<< endl;

//     }
//     else{
//     cout << "not triangle"<< endl;
//     }

//     return 0;
// }

// print only even number
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int n;
//      cin>> n;

//         for(int i =0; i<=n; i++){
//             if((i%2)==0){
//                 cout << i<< endl;
//             }
//         }

// return 0;
// }

//
// maximum of three num

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     cin >> a >> b >> c;

//     if (a > b)
//     {

//         if (a > c)
//         {
//             cout << a << endl;
//         }
//     }
//     else if (b > c)
//     {
//         cout << b << endl;
//     }

//     else
//     {
//         cout << c << endl;
//     }

//     return 0;
// }


// //hollow squre pattern
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row=row+1){
      
//             if(row==0 || row==n-1){
//                 for(int col=0; col<n; col++){
//                     cout << "* ";
                    

//                 }
              

//             }
//             else {
//                 cout<< "* ";
//                 for(int col=0 ; col<n-2; col=col+1){
//                     cout <<"  ";
//                 }
//                 cout<<"* ";
                 
//             }
           
            
//          cout << endl;
//         }
       
    
//     return 0;

// }
///hollow inverted

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>> n;
//     for(int row=0; row<n; row=row+1){
//       for(int col=0; col<n; col=col+1){
//         if(row==0||col==0|| col==n-row-1){
//             cout<< "* ";
//         }
//         else{
//             cout << "  ";
//         }
        
            
//             }
//             cout << endl;
             
//            }
//     return 0;
//     }

///full pyramid
// #include<iostream>
// using namespace std;
// int main(){
    
//     int n;
//     cin >> n;
    
    
    
   
//     for(int row=0; row<n; row=row+1){
//          int k=0;
//         for(int col=0; col<(2*n-1); col=col+1){
           
//            if(col<(n-row-1)){
//             cout << " ";
//            }
//             else if(k<2*row+1){
//                 cout << "*";
//                 k++;
//             }
//             else{
//                 cout << " ";
//             }
            

        
         
//         }
//           cout <<  endl;
      
        
//     }
//     return 0;
//      }


// #include<iostream>
// using namespace std;
// int main(){
    
//     int n;
//     cin >> n;
    
    
    
   
//     for(int row=0; row<n; row=row+1){
//          int k=0;
//         for(int col=0; col<(2*n-1); col=col+1){
           
//            if(col<(n-row-1)){
//             cout << " ";
//            }
//             else if(k<2*row+1 ){
//                 if(k==2*row || k==0 || row==n-1){
//                      cout << "*";

//                 }
//                 else{
//                     cout << " ";
//                 }
//                 k++;
               
//             }
//             else{
//                 cout << " ";
//             }
            

        
         
//         }
//           cout <<  endl;
      
        
//     }
//     return 0;
//      }


