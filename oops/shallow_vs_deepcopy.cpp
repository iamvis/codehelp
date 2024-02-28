#include<iostream>
#include<climits>
using namespace std;
class abc{
    public:
    int x;
    int *y;

    //constructor
    abc(int _x, int _y) : x(_x), y(new int(_y)){
    cout<<"abc constructor is called"<<endl;
    cout<<endl;
    }

    // //default dumb copy constructor
    // abc(const abc& obj){
    //     x= obj.x;
    //     y= obj.y;
    // }

    // Smart copy default 
    abc(const abc& obj){
        x= obj.x;
        y= new int(*obj.y);
    } 

    void print() const{
        printf ("X:%d\nPTR Y:%p\nContent of Y (*y):%d\n\n",x,y,*y);
    }
 
    

};

int main(){
    abc a(5, 6);
    a.print();

    //abc b(a);
    abc b = a;   //call hota hai, copy CONSTRUCTION
    b.print();
    *b.y=20;
    b.print();
    a.print();
    return 0;
}