#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

     //Parameterrised constructor
     Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
     }
};

//printing fuction
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


bool detect(Node* & head){
    if(head==NULL){
        return false;
    }

    // pointer creation
    Node* slow=head;
    Node* fast =head;

    //aage bada yenge 
    while(fast!=NULL){
        fast=fast->next;
        if(fast !=NULL){
            fast= fast->next;
            slow=slow->next;
        }
         if(slow==fast){
        return true;
    }

    }

    //check loop

   
    return false;
}



int main(){
    
    Node* head=new Node(70);
    Node* second=new Node(80);
    Node* third=new Node(90);
    Node* four =new Node(100);
    Node* five=new Node(110);
    Node* six=new Node(120);
    Node* seven=new Node(130);
    Node* eigth=new Node(140);
    Node* nine=new Node(150);

    head->next=second;
    second->next=third;
    third->next=four;
    four->next=five;
    five->next=six;
    six->next=seven;
    seven->next=eigth;
    eigth->next=nine;
    nine->next=NULL;
   cout<<detect(head)<<endl;

  
    return 0;
}