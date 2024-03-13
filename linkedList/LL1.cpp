#include<iostream>
using namespace std;

class node {
public:
int data ;
node *next;

node(){
    this->data=0;
    this->next=NULL;
}

node(int data){
    this->data=data;
    this->next=NULL;
}
};

void print(node* &first){
    node* temp = first;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}

//head pr insertion
void insertAtHead(node* &head, int data){
 //create new node 
 node* newnode=new node(data);
 //new  node ko head se jod do
 newnode->next= head;
 //head ko uski sahi jagah pahucah do
 head = newnode;
}

//tell pr insertion
void insertAtTell(node* &head, node * &tell, int data){
    //create new node
    node * newnode=new node(data);
    //NEW NODE ke head ko tell se jodna
    if(head==NULL){
      head=newnode;
    }
    else{
         tell->next=newnode;   
    }
  

    //tell ko sahi jagah lahga dena
   
    newnode ->next =NULL;
}  




int main(){
    node *head=NULL;
    node* tail=NULL;
    // node *first=new node(10);
    // node *second=new node(20);
    // node *third=new node(30);
    // node *fourth=new node(40);
    // node *five=new node(50);

    // first->next=second;
    // second->next =third;
    // third->next= fourth;
    // fourth->next =five;
     ///before
     cout<<"before inserstion"<<endl;
     print(head);

     insertAtHead(head, 5);
     ///after
     cout<<"after insertion"<<endl;
     print(head);
    //  cout<<"after insertion At tell position "<<endl; 
    //  insertAtTell(head, tail, 60);
    //   print(head);
     
     
    return 0; 
}