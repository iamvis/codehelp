#include<iostream>
using namespace std;

class abc{
    public:
   static int x, y;
   static void print(){
        // hiddenly this pointer pass hota  hai 
        cout<<x<<" "<<y<<endl;
    }
};
//initalisation of static data member
int abc::x;
int abc::y;

int main(){
    abc obj1;


    // obj1.x=10;
    // obj1.y=20;
    // obj1.print();
    // abc obj2;
    // obj2.x=30;  ///both give same out because it will set all instence
    // obj2.y=40;
    // cout<<"obj1 ki ramayan:  ";obj1.print();
    // cout<<endl;
    // cout<<"obj2 ki ramayan:  ";obj2.print();
    // cout<<endl;
    // obj2.print();


    ///we can also write this as 
    abc::x=10;
    abc::y=20;
    abc::print();
    abc obj2;
    abc::x=30;  ///both give same out because it will set all instence
    abc::y=40;
    cout<<"obj1 ki ramayan:  ";
    abc::print();
    cout<<endl;
    cout<<"obj2 ki ramayan:  ";
    abc::print();
    cout<<endl;
    obj2.print();

    
    
    return 0;
}




// Sure, let's break it down:

// Static Data Members:
// Shared Data: Static data is shared among all objects of a class.
// Class-wide Information: It's associated with the class, not individual objects.
// Memory Efficient: Memory is allocated only once for all objects.
// Global Access: Can be accessed using the class name without creating an object.

// Static Functions:
// Class-level Operations: Associated with the class, not with specific objects.
// Access Static Data: Can directly access static data members.
// Namespace Organization: Group related operations within the class.
// Callback Functions: Useful for operations that don't require an object instance.



// In short, static members help share information among objects and perform class-level operations efficiently.
//  They're like tools that operate at the class level rather than the individual object level.