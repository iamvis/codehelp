//can constructor made private
#include<iostream>
using namespace std;
class box{
    int width;
       box(int _w):width(_w){
     

    };
    public:
 

    int getwidth() const
    {
        return width;
    }

    void setwidth(int _val){
        width= _val;
    }
    friend class boxfatctory;
};
class boxfatctory{
    int count;
    public:
    box getbox(int _w){
        ++count;
        return box(_w);
    }
    
     
};

int main(){
 boxfatctory bfact;
 box b=bfact.getbox(50);
 cout<<b.getwidth()<<endl;
 return 0;
}
