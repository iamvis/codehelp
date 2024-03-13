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


Node* detect(Node* & head){
    if(head==NULL){
        return NULL;
    }

    // pointer creation
    Node* slow=head;
    Node* fast =head;

    //aage bada yenge 
    while(fast!=NULL){
        //fast ko ek bar aage badaya
        fast=fast->next;
        if(fast !=NULL){
            //secound time yaha badaya
            fast= fast->next;
            //yaha slow ko badaya
            slow=slow->next;
        }
        //meet karaya
         if(slow==fast){
            //slow ko head pr patak dia 
          slow= head;
           break; }

    }
    while(slow != fast){
        slow=slow->next;
        fast= fast->next;
    }
    return slow; 
}



int main(){
    
    Node* head=new Node(1);
    Node* second=new Node(2);
    Node* third=new Node(3);
    Node* four =new Node(4);
    Node* five=new Node(5);
    Node* six=new Node(6);
    Node* seven=new Node(7);
    Node* eigth=new Node(8);
    Node* nine=new Node(9);

    head->next=second;
    second->next=third;
    third->next=four;
    four->next=five;
    five->next=six;
    six->next=seven;
    seven->next=eigth;
    eigth->next=nine;
    nine->next=eigth;
    cout<<detect(head)->data<<endl;
    return 0;
}