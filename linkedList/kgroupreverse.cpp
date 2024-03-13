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
//get length
int getLength(Node* head){
    int count=0;
     Node* temp=head;
    while(temp!=NULL ){
        temp=temp->next;
        count++;
    }
    return count;
}

//printing fuction
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

//reverse function
Node * nodekreverse(Node* & head, int k){
  if(head==NULL){
    return NULL;
  }

  int l= getLength(head);
  if(k>l){
    return head;
  }

  //step A
  //reverse k node
  Node* pre=NULL;
  Node* curr=head;
  Node* forword=curr->next;
  int count=0;
  
  while(count<k){
    forword=curr->next;
    curr->next = pre;
    pre= curr;
    curr= forword;
    count++;

      }

      //step b -> node remain  to  be reversed
      if(forword != NULL){
        head->next =nodekreverse(forword, k);
      }

      //modefied head  of ll
      return pre;

}


int main(){
    
    Node* head=new Node(70);
    Node* second=new Node(80);
    Node* third=new Node(90);
    Node* four =new Node(100);
    Node* five=new Node(110);

    head->next=second;
    second->next=third;
    third->next=four;
    four->next=five;
    five->next=NULL;
     int k;
    cin>>k;
   head=nodekreverse(head, k);

    print(head);
    return 0;
}