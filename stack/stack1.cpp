// #include<iostream>
// using namespace std;

// class stack{
// private:

// //propertis
// int * arr;
// int top;
// int size;

// public:

// //constructor
// stack(int size){
//     arr= new int[size];
//     this->size=size;
//     top= -1;
// }


// //Behaviour  or Function
// //push
// void push(int data){
// //stack has space
// if((size-top)>1){
//     top++;
//     arr[top]=data;
    
// }
// else{
//     //stack overflow
//     cout<<"stack overflow condition hited"<<endl;
// }
// }


// //pop
// void pop(){
//     if(top==-1){
//         cout<<"stack is empty cannt have the  element to pop"<<endl;
//     }
//     else{
//         top--;
//     }
// }

// //top element
// int gettop(){
//     if(top==-1){
//         cout<<"stack is empty"<<endl;
//     }
//     return arr[top];
    
// }

// //empty
// bool empty(){
//     if(top==-1){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// //getsize

// int getsize(){
  
//     return top+1;
// }

// };

// int main(){
//     stack s(10);

//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);

//     cout<<s.empty()<<endl;
//    cout<< s.getsize()<<endl;
    
//     //printtng function
//     while(!s.empty()){
//         cout<<  s.gettop() << " ";
//         s.pop();
//     }
//     return 0;
// }



//two stack in one array
#include<iostream>
using namespace std;
class Stack{
    public:
    //varibale
    int * arr;
    int size;
    int top1;
    int top2;

    //constructor
    Stack(int size){
        arr= new int [size];
        this->size= size;
        top1=-1;
        top2=size;
    }

    //behaviour or function
    
     //stack 1  ki rasmaua
     void push1(int data){
          if(top2-top1==1){
            //no space 
            cout<<"stack1 overflowed "<<endl;
          }
          else{
            //space avalible
                top1++;
            arr[top1]=data;
        
          }
     }

     void pop1(){
        if(top1==-1){
            //stack is empty
            cout<<"stack underflow"<<endl;
        }
        else{
            top1--;
        }
     }

   

     //stack 2 ki rasmaua
     void push2(int data){
        if(top2-top1==1){
            
            //NO SPACE
            cout<<"stack overflow"<<endl;

        }
        else{
            top2--;
           arr[top2]=data;
           
        }
     }

     void pop2(){
        if(top2==size){
            //stack empty
            cout<<"stack is underflow"<<endl;
        }
        else{
            ///elemennt hai 
            top2++;
            
        }
     }

     void print(){
        cout<<"top1:    "<<top1<<"     " <<"top2:   "<<top2<<endl; 
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
     }

    

};
int main(){
    Stack s(10);
    s.push1(10);
    s.print();
    s.push1(20); s.print();
    s.push1(30); s.print();
    s.push1(40); s.print();
    s.push1(50); s.print();

    s.push2(100); s.print();
    s.push2(200); s.print();
    s.push2(300); s.print();
    s.push2(400); s.print();
    s.push2(500); s.print();
    s.pop1(); s.print();



    return 0;
}