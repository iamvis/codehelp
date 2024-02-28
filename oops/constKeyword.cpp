// #include<iostream>
// using namespace std;
// int  main(){

//     //<--------1------->//
// //     const int x=5; ///x is constant
// //     //initialization can be done 
// //     //but we can not re-assign a value
// //    // x=10;
// //     cout<<x<<endl;

// // //<------2------>
// // const int  *a = new int (2); ///CONST data, Non - CONST Pointer
// // int const *b = new int(98); // SImiler as above
// // cout <<*a<<"   " <<*b<<endl;
// // //*a = 60;//int will error because of in *a data is const
// // int c = 40;
// // a = &c;
// // cout <<*a<<endl;


// // //<-----3------>
// // //CONST Pointer, but NON-CONst data
// // int *const a= new int(3);
// // cout <<*a<<endl;
// // int b =90;
// // *a= b;
// // cout <<*a<<endl;
// // //a=&b;//because pointer is const ---->error dega
 
// //  //<-------4------>
// //  //CONST Pointer and CONST Data
// //   const int *const a= new int (100);
// //   cout <<&a<<endl;
// //   cout <<a<<endl;
// //   cout <<*a<<endl;
// //   int b= 200;
// //   *a =b;//--->error
// //   a=&b;//---->error


//     return 0;
// }



// FUNCTION KE sath CONST ki Ramayan

#include<iostream>
using namespace std;
class  abc{
int x;
int *y;
int z;

public:

abc(){
    x=0;
    y= new int(0);
}

abc(int _x, int _y, int _z=7/*default Argument*/){
    x=_x;
    y= new int(_y);
    z=_z;
}
//get function
int getX() const
{
    return x;

}

//set function
void setX(int _val){
    x=_val;

}
   


   //get function
int getY()const{
    return *y;

}

//set function
void setY(int _val){
    *y=_val;
    
}

   //get function
int getZ()const{
    return z;

}

//set function
void setZ(int _z){
    z=_z;
    
}


};

void print(const abc  &a){
    cout<<a.getX()<<" "<<a.getY()<<endl<<a.getZ()<<endl;
}

int  main(){
   abc a(1,2);
   print(a);
   cout<<a.getX()<<endl;
   cout<<a.getY()<<endl;
    
    return 0;

}