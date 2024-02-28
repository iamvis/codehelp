#include<iostream>
using namespace std;

class node{
public:
int data;//data
node *next;//pomiter for next node address storing

//constructor
node(){
    this->data=0;
    this->next=NULL;
}

node(node*head, int data){
    this->data=data;
    this->next=NULL;
}

};

int main(){
    node*head=new node();
    cout<<head<<endl;
    return 0; 
}