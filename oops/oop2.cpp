
// //******ENCAPSULATION*********//
// #include<iostream>
// using namespace std;
// class human{
//   public:
//   int weigth;
//   int age;

//   void eat(){
//     cout<<"eatting"<<endl;
//   }
// };
// int main(){

//     return 0;
// }


// //****** PERFECT ENCAPSULATION*********//
// #include<iostream>
// using namespace std;
// class human{
//   private:
//   int weigth;
//   int age;

//  public:
//   void eat(){
//     cout<<"eatting"<<endl;
//   }
//   //private hai is liye getter  and setter use karenge
//   int  getAge(){
//     return this->age;
//   }

//    void setAge(int age){
//     this->age=age;
//    }
// };
// int main(){
//    human kalu;
//     return 0;
// }






//// INHERITENCE





// //1 simple/single inheritence
// #include<iostream>
// using namespace std;
// //class 1
// class Animal {
//   public:
//   //data member
//   int age ;
//   int weight;

//   //data function
//   void eat(){
//          cout<<" Eating"<<endl;
//          cout<<"eat wala function call hua: "<<age+weight<<endl;
//   }
// };

// //derived class
// class human:public Animal{

// };

// int main(){
//  human tiger;
//   tiger.age=35;
//   tiger.weight= 107;
//   tiger.eat();

//   return 0;
// }





// //2 multilevel inheritence
// #include<iostream>
// using namespace std;
// //class 1
// class A {
//   public:
//   //data member
//   int age ;
//   int weight;

//   //data function
//   void eat(){
//          cout<<" Eating"<<endl;
//          cout<<"eat wala function call hua: "<<age+weight<<endl;
//   }
// };

// //derived class
// class B:public A{
//   public:
//   int k;
//    void kalu(){
//     cout<<"kalu class B ka aya"<<endl;
//    }

// };
// class C: public B{

// };

// int main(){
//  C tiger;
//   tiger.age=35;
//   tiger.weight= 107;
//   tiger.eat();

//   return 0;
// }



// //3 multiple inheritence
// #include<iostream>
// using namespace std;
// //class 1
// class A {
//   public:
//   //data member
//   int age ;
//   int weight;

//   //data function
//   void eat(){
//          cout<<" Eating"<<endl;
//          cout<<"eat wala function call hua: "<<age+weight<<endl;
//   }
// };

// //derived class
// class B{
//   public:
//   int k;
//    void kalu(){
//     cout<<"kalu class B ka aya"<<endl;
//    }

// };

// class C:  public A , public B{

// };



// int main(){
//  C tiger;
//   tiger.age=35;
//   tiger.weight= 107;
//   tiger.eat();
//   tiger.kalu();

//   return 0;
// }




// //4 heirarchical inheritence
// #include<iostream>
// using namespace std;
// //class 1
// class A {
//   public:
//   //data member
//   int age ;
//   int weight;

//   //data function
//   void eat(){
//          cout<<" Eating"<<endl;
//          cout<<"eat wala function call hua: "<<age+weight<<endl;
//   }
// };

// //derived class
// class B{
//   public:
//   int k;
//    void kalu(){
//     cout<<"kalu class B ka aya"<<endl;
//    }

// };

// class C:  public A , public B{
//   public:
// void func(){
//   cout<<"C ka function"<<endl;
// }
// };


// class D: public C{

// };



// int main(){
//  D tiger;
//   tiger.age=35;
//   tiger.weight= 107;
//   tiger.eat();
//   tiger.kalu();
//   tiger.func();

//   return 0;
// }



///heirarchiocal ko samjhna chutiyapa hai
