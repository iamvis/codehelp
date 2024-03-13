#include<iostream>
using namespace std;

//user defined  data type
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


//head pr insertion
void insertAtHead(node* &head, node* &tail,int data){
 //create new node 
 node* newnode=new node(data);
 //new  node ko head se jod do
 newnode->next= head;
 //head ko uski sahi jagah pahucah do

    if(head==NULL){
    tail=newnode;
    
   }
 head= newnode;
}

void insertAtTell(node* &head, node * &tell, int data){
   node* newnode=new node(data);
   
   if(tell==NULL){
     head=newnode;
      tell=newnode;
   }
   else{
          tell->next =newnode;
        
   }


   tell=newnode;
}  

///print function
void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}

///lengh funtion

int  findlength(node* &head){
    int count=0;
    node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        count++;
    }
   
    return count;
}



//insert at position function
void insertAtPosition(node* &head, node* &tail, int position,int data){
 if(head==NULL){
    node* newnode = new node(data);
    head =newnode;
    tail= newnode;
    return;
 }


 if(position==0){
 insertAtHead(head, tail, data);
 return;
 }

 ///length function
 int len= findlength(head);
 if(position  == len){
    insertAtTell(head, tail, data);
    return;
 }

 //step1 find the potition : prev & curr;
 int i=1;
 node* prev=head;
 //position dhund re hai yaha hum and prev ki positon set karte  hai 
 while(i<=position){
    prev = prev->next;
    i++;
 }

//exact element cuur pr hai 
 node* curr= prev->next;

 //step2---> new node create karte hai 
 node* newnode= new node(data);

 //step3--. 
 newnode-> next =curr;

 //step4
 prev->next = newnode;

}



int main(){
    node *head=NULL;
    node* tail=NULL;
//    insertAtHead(head, tail, 20);
//    insertAtHead(head, tail, 30);
//    insertAtHead(head, tail, 40);
//    insertAtHead(head, tail, 50);
//    insertAtHead(head, tail, 60);
      
   
   insertAtPosition(head, tail, 5, 62);print(head);cout<<endl;
    cout<<endl;
  
    print(head);
    return 0; 
}