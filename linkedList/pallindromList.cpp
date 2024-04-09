#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data =data;
        this->next= NULL;
    }
};

// int getLength(Node* head){
//     Node* temp = head;
//     int count=0;
//     while(temp !=NULL){
//         temp = temp->next;
//         count++;
//     }
//     return count;
// }

///print function

// void print (Node * head){
//     Node* temp =head;
//     while(temp!=NULL){
//         cout<<temp->data<<"->";
//       temp= temp->next;
//     }
// }

//reverse fn
Node* reverse(Node* head){
    //asumed ll has greater then 1 node
    Node* pre=NULL;
    Node* curr=head;
    Node* forward=curr->next;
    while(curr !=NULL){
        forward = curr->next;
        curr->next=pre;
        pre=curr;
        curr=forward;
    }
    return pre;
}

bool checkpalindrom(Node* &head){
    //khali ho
    if(head==NULL){
        return true;
    }

    //ek he node Ho
    if(head->next == NULL){
        return true;
    }

    Node* slow= head;
    Node* fast= head-> next;
    while(fast != NULL){
        fast= fast ->next;
        if(fast !=NULL){
            fast=fast->next;
            slow=slow->next;
        }

    }
   ///apna jo slow pointer hoga wo middle per hoga

   //ab middle ke bad wale ko reverse kardeng
   Node* revershead= reverse(slow->next);
   slow->next =revershead;
   // comparing values

   Node* temp1 =head;
   Node* temp2 = revershead;

   while (temp2 !=NULL){
    if(temp1->data==temp2->data){
        temp1=temp1->next;
        temp2=temp2->next;
    }
    else{
        return false;
    }
   }
   return true;

}

int main(){
    
    Node* head=new Node(70);
    Node* second=new Node(80);
    Node* third=new Node(90);
    Node* four =new Node(100);
    Node* five=new Node(110);
    Node* six=new Node(100);
    Node* seven=new Node(90);
    Node* eigth=new Node(80);
    Node* nine=new Node(60);

    head->next=second;
    second->next=third;
    third->next=four;
    four->next=five;
    five->next=six;
    six->next=seven;
    seven->next=eigth;
    eigth->next=nine;
    nine->next=NULL;

   cout<< checkpalindrom(head)<<endl;
   
 

  
    return 0;
}
