#include<iostream>
using namespace std;

class A{
    private:
    int x;

    public:
    //cunstructor
    A(int _val) : x(_val){};

    int  getX()const{return x;}
    void setX(int _val) { x= _val; }
        
        //friend keywordfd use 
        friend class B;
        friend void print(const A&a) ;
    };

class B{
      public:
      void print(const A &a){
      cout << a.x<<endl;}
    };
    
    void print(const A &a){
      cout<<a.x<<endl;
    }
int main(){
    A a(8);
    B b;
    b.print(a);
    print(a);
    return 0;
}