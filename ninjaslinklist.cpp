#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class node{
    public:
    int data;
    node*next;
    node(int data){
        this->data=data;
           next=NULL;
    }

 };
    class paiir{
       public:
      node*head;
      node*tail;
};
paiir reverse_LLbetter(node*head){
  if(head==NULL || head->next==NULL){
    paiir ans;
     ans.head=head;
     ans.tail=head;
     return ans;
  }
    paiir smallanswer=reverse_LLbetter(head->next);
    smallanswer.tail->next=head;
    head->next=NULL;
    paiir ans;
    ans.head=smallanswer.head;
    ans.tail=head;
    return ans;
}

   node*reverselinklist(node*head){
     return reverse_LLbetter(head).head;
   }
  
    void print(node*head){
         node*temp=head;
         while(temp!=NULL){
            cout << temp->data << endl;
            temp=temp->next;
         }
    }
node*insertnode(node*head,int i,int data){
       node*newnode=new node(data);
       node*temp=head;
       int count=0;
       if(i==0){
         newnode->next=head;
         head=newnode;
         return head;
       }
       while(temp!=NULL && count<i-1){
         temp=temp->next;
         count++;
       }
       if(temp!=NULL){
       node*a=temp->next;
       temp->next=newnode;
       newnode->next=a;
   }
     return head;
}
    node*takeinput_better() {
         int data;
         cin >> data;
         node*head=NULL;
         node*tail=NULL;
         while(data!=-1){
              node*newnode=new node(data);
              if(head==NULL){
                head=newnode;
                tail=newnode;
              }
             tail->next=newnode;
             tail=tail->next;
         cin >> data;
 }
    return head;
 }

    node*takeinput() {
         int data;
         cin >> data;
         node*head=NULL;
         while(data!=-1){
              node*newnode=new node(data);
              if(head==NULL){
                head=newnode;
              }
              node*temp=head;
              while(temp->next!=NULL){
                temp=temp->next;
              }
              temp->next=newnode;
         cin >> data;
 }
    return head;
    }

int main(){
    /*
    node n1(5);
    node*head=&n1;
    node n2(6);
    node n3(3);
    node n4(4);
    node n5(8);
    //node n6(6);
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;
    */
      node*head=takeinput_better();
       node*head1=reverselinklist(head);
       print(head1);
       /*
      int i,data;
      cin >> i;
       cin >> data;
      node*head1=insertnode(head,i,data);
       print(head1);
       */
  // cout << head->data << endl;
  // cout << head << endl;

}