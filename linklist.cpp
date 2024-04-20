#include<iostream>
#include<stdio.h>

class node{
    public:
    int data;
    node*next;
 node(int value){
    data=value;
    next=NULL;

 }
 
};
node*createnode(int arr[],int index,int size){
  if(index==size){
    return NULL;
  }
  node*temp;
  temp=new node(arr[index]);
  temp->next=createnode(arr,index+1,size);
  return temp;
  }
int main(){
  node*head;
  int arr[]={2,3,4,5,6};
  // insert at beginning

/*
  for(int i=0;i<5;i++){
    if(head==NULL){
        head=new node(arr[i]);
    }
    else{
       node*temp=new node(arr[i]);
     temp->next=head;
     head=temp;
    }
  }
  temp=head;
  while(temp!=NULL){
  std::cout<< temp->data;
    temp=temp->next;
  }
  //insertatend(head);
  */
  head=createnode(arr,0,5);
  node*temp=head;
  while(temp!=NULL){
   std:: cout << temp->data;
      temp=temp->next;
  }
}

  /*
node*insertatend(node*head){
    node*tail;
  tail=head;
  while(tail->next!=NULL){
    tail=tail->next;
  }
  node*temp1=new node(45);
  tail->next=temp1;
  node*temp;
  temp=head;
  while(temp->next!=NULL){
    std:: cout<< temp->data;
    temp=temp->next;
  }

}
*/
