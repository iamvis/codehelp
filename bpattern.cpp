
// //ractangle 
// #include<iostream>
// using namespace std;
// int main(){
//        // outer loop
//        for(int row=0; row<3; row++){
//         cout << " row ka loop chla" << endl;
        
//         // inner loop
//         for(int col=0; col<5; col++){
//             cout << "*";

//             cout << "itni bar column ka loop chala";
//         }
//         cout << endl;
//     }
//     return 0;

// }

// squre
// #include<iostream>
// using namespace std;
// // row += 1 is same as row =row+1//
// int main(){
//     int n;
//     cin >> n;
//     for(int row=0; row<n; row = row+1){
//         for(int col=0; col<n; col= col+1){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     cout << endl;


//     ///ulta krke dekha col me row rakhi hai
//      for(int col=0; col<n; col= col+1){
//         for(int row=0; row<n; row = row+1){
//             cout << "*";     
//     }
//     cout << endl;
            
//         }


//     return 0;
// }


//holo ractangle


// #include<iostream>
// using namespace std;
// int main(){
//     for(int row=0; row<3; row=row+1){
//          if(row==0 || row==2){
//             for(int col=0; col<5; col=col+1){
//                 cout << "*";
//             }
//          }
         

//          if(row==1){
//             for(int col=0; col<5; col=col+1){
//                 if(col==0 || col==4){
//                     cout << "*";
//                 }
//                 else{
//                     cout << " ";
//                 }
//             }
            
//          }cout <<endl;
        
//     }
//     return 0;
// }


//original code

// #include<iostream>
// using namespace std;
// int main(){

//     int rowcount;
//     int colmcount;
//     cin >> rowcount;
//     cin >> colmcount;

//     //first row or last row -> print 5*
//     for(int row=0; row<rowcount; row=row+1){
//         if(row==0 || row==rowcount-1){
//             for(int col=0; col<colmcount; col=col+1){
//                 cout <<"* ";
//             }
//         }
        
//         else{
//             //remainging middle rows
//             //first star
//             cout << "* ";
//             //spaces
//             for(int col=0;col<colmcount-2; col=col+1){
//                 cout <<"  ";
//             }
//              //last star 
//             cout << "* ";

//             }
//             cout << endl;

//         }

        
//     }

    //half pyramid

    // #include<iostream>
    // using namespace std;
    // int main(){
    //     int n;
    //     cin>> n;
    //     for(int row=0; row<n; row=row+1){
    //         for(int col=0; col<row+1; col=col+1){
    //             cout<<"* ";
    //         }
    //         cout << endl;
    //     }
    //     return 0;
    // }


    // //inverted half pyramid
    // #include<iostream>
    // using namespace std;
    // int main(){
    //     int n;
    //     cin>> n;
    //     for(int row=0; row<n; row++){
    //         for(int col=0; col<n-row; col=col+1){
    //             cout <<"*";
    //         }
    //         cout << endl;
    //     }
    // }
      
    //   //Numeric half pyramid
    //   #include<iostream>
    //   using namespace std;
    //   int main(){
    //     int n;
    //     cin >> n;
    //     for(int row=0; row<n; row=row+1){
    //         for(int col=0; col<row+1; col=col+1){
    //             cout << col+1;
    //         }
    //         cout << endl;
    //     }
    //     cout << endl;
    //     for(int row=0; row<n; row=row+1){
    //         for(int col=0; col<n-row; col=col+1){
    //             cout << col+1;
    //         }
    //         cout << endl;
    //     }
    //   }


// /// full pyramid

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>> n;
//     //outer loop 
//     for(int row =0; row<n; row++){
//        //inner loop
//        // FOR SPACE
//        for(int col=0; col<(n-row-1); col=col+1){
//         cout << "  ";
//        }
       
        
//         // for star
//         for(int col=0; col<row+1; col++){
//             cout << "*   ";
//         }
//         cout << endl;
//     }
// }


// // inverted full pyramid
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>> n;
    // //outer loop 
    // for(int row =0; row<n; row++){
    //    //inner loop
    //    // FOR SPACE
    //    for(int col=0; col<row; col=col+1){
    //     cout << "  ";
    //    }
       
        
    //     // for star
    //     for(int col=0; col<n-row; col++){
    //         cout << "*   ";
    //     }
    //     cout << endl;
    // }
// }


