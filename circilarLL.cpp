#include<iostream>
using namespace std;
class node{
 public:
  int data;
  node*next;
  node(int val){
    data=val;
    next=NULL;
  }
};
class circularlist{
node*head;
node*tail;
public:
circularlist(){
    head=tail=NULL;
}
void insertathead(int val){
    node*newnode=new node( val);
      if(head==NULL){
        head=tail=newnode;
        tail->next=head;
      }else{
        newnode->next=head;
        head=newnode;
        tail->next=head;

      }
}
void insertatback(int val){
     node*newnode=new node(val);
     if(head==NULL){
     head=tail=newnode;
     tail->next=head;   
     }else{
        tail->next=newnode;
        newnode->next=head;
        tail=newnode;
     }

}
void popatfront(){
    node*temp=head;
    if(head==NULL){
        return;
    }else{
        head->next=head;
        tail->next=head;
        delete temp;
    }

}
void printCll(){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    node*temp=head->next;
    while(temp!=head){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<" ";
}

};
int main(){
circularlist cll;
cll.insertathead(3);
cll.insertathead(3);
cll.insertathead(3);
cll.insertathead(3);
cll.insertatback(4);
cll.insertatback(4);
cll.insertatback(4);
cll.popatfront();
cll.printCll();
}