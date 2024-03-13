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

~node(){
    cout<<"element deleted"<<endl;
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


//DELETE AT TAIL
void  deleteAtHead(node* &head, node* &tail, int position){
           if(head == NULL) {
                cout << "Cannot delete, LL is empty";
                return;
        }

        //deleting first node
        if(position == 1) {
                node* temp = head;
                head = head -> next;
                temp -> next = NULL;
                delete temp;
                return;
        }
        int len  = findlength(head);


        //deleting last node
        if(position == len) {
                //find prev
                int i = 1;
                node* prev = head;
                while(i < position - 1) {
                        prev = prev->next;
                        i++;
                }
                //step2:
                prev->next = NULL;
                //step3:
               node* temp = tail;
                //step4:
                tail = prev;
                //step5:
                delete temp;
                return;
        }

        //deleting middlenode

        //step  : find prev and curr
        int i =1;
        node* prev = head;
        while( i < position-1) {
                prev= prev -> next;
                i++;
        }
        node* curr = prev -> next;

        //step2:
        prev -> next = curr -> next;
        //step3:
        curr -> next = NULL;
        //step4:
        delete curr;
        

 
}


int main(){
    node *head=NULL;
    node* tail=NULL;
   insertAtHead(head, tail, 20);
   insertAtHead(head, tail, 30);
   insertAtHead(head, tail, 40);
   insertAtHead(head, tail, 50);
   insertAtHead(head, tail, 60);
      
   
//    insertAtPosition(head, tail, 5, 62);
  
    print(head);
    cout<<endl;

    deleteAtHead(head, tail, 1);
    print(head);
    return 0; 
}