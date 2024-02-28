#if !defined(BIRD_H)
#define BIRD_H
#include <iostream>

class Bird{
    public: 
    virtual void eat()=0;
    virtual void fly()=0;
    //class that inherits this class
    //has to implement pure virtual function
};

class sparrow:public Bird{
    public:
    void eat(){
      std::  cout<<"sparrow is eating\n ";
        
    }
    void fly(){
        std:: cout<<"sparrow is flying\n ";
    }
};

class pigeon:public Bird{
    public:
    void eat(){
       std::  cout<<"pigeon is eating\n ";
        
    }
    void fly(){
       std::  cout<<"pigeon is flying\n ";
    }
};

class macaw:public Bird{
    public:
    void eat(){
       std::  cout<<"macaw is eating\n ";
        
    }
    void fly(){
       std::  cout<<"macaw is flying\n ";
    }
};


class peacock:public Bird{
    public:
    void eat(){
       std::  cout<<"peacock is eating\n ";
        
    }
    void fly(){
       std::  cout<<"peacock is flying\n";
    }
};

#endif