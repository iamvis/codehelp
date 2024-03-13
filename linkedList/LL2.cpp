


////dubly LinkList
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(){
        this->data=0;
        this->prev=NULL;
        this->next=NULL;
    }
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

//INSERTATHEAD
void insertAtHead(Node *&head, Node* & tail, int data){


if(head==NULL ){
   Node* newNode=new Node(data);
   head=newNode;
   tail=newNode;
   return;
  
}
else{
      Node* newNode=new Node(data);
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
}

    
}
//INSERTATTAIL

void insertAtTail(Node* &head, Node* &tail, int data){

   if(head==NULL){
   Node* newNode=new Node(data);
   head=newNode;
   tail=newNode;
   return;
}
else{
     Node*newNode= new Node(data);
   tail->next=newNode;
   newNode->prev=tail;
   tail=newNode;
   
}
}


//insertAtPosition

void inserAtPosition(Node* &head, Node* &tail, int position, int data){
    
     if(head==NULL){
        Node* newNode= new Node(data);
        head= newNode;
        tail= newNode;

     }
    
   

      else{

          if(position==1){
       insertAtHead(head,tail, data);
       return;
     }

     int length = getLength(head);
     if(position > length){
        insertAtTail(head, tail,data);
        return;
     }
        ///middle me kahi dalana ho to
            
     int i=1;
     Node* prevNode= head;
     while(i<position-1){
      prevNode =prevNode->next;
       i++;
     }

     Node* newnode= new Node(data);  
     Node* curr= prevNode->next;
   
     newnode->prev=prevNode;
     prevNode->next=newnode;
     newnode->next=curr;
     curr->prev=newnode;
      }
     
      
}


///delete node at anin position
void deleteAtposition(Node* &head, Node* &tail, int position){

    if(head==NULL){
         cout<<"Linked list is empty";
         return;    
    }
    //single node wali case
    if(head->next ==NULL){
        Node *temp =head;
        head=NULL;
        tail=NULL;
        delete temp;
        return;
    }
   
   if(position==1){
    Node* temp = head;
    head=head->next;
    head->prev=NULL;
    temp->next = NULL;
    delete temp;
    return ;
   }
   int length= getLength(head);
   if(position==length){
    tail->prev=NULL;
    tail->next=NULL;
    

   }

    int i=1;
    Node* prevNode=head;
    while(i<position){
      prevNode = prevNode->next;
      i++;
    }
    Node* curr=head->next;
    Node* temp=curr->next;
   prevNode->next =temp;
   curr->next=NULL;
   curr->prev= NULL;
   temp->prev=prevNode;
   delete curr;


}

int main(){
    
    Node* first=new Node(70);
    Node* second=new Node(80);
    Node* third=new Node(90);
    Node* four =new Node(100);
    Node* five=new Node(110);
     
    Node* head=first;
    Node* tail=five;

    first->next=second;
    second->prev=first;
    second->next=third;
    third->prev=second;
    third->next=four;
    four->prev=third;
    four->next=five;
    five->prev=four;
    // insertAtHead(head, tail, 12);
    // insertAtTail(head, tail, 201);
    inserAtPosition(head, tail, 6, 304);
    deleteAtPosition(head, tail, 1)


    print(head);
    return 0;
}