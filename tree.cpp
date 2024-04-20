#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<queue>
#include<vector>
using namespace std;
template<typename T> 
class treenode{
    public:
   T data;
   vector<treenode<T>*>children;
   treenode(T data){
    this->data=data;
   }
};
   treenode<int>*takeinputlevelwise(){
     int rootdata;
       cout << "enter root data" << endl;
     cin >> rootdata;
     treenode<int>*root= new treenode<int>(rootdata);
       queue<treenode<int>*>pendingnodes;
         pendingnodes.push(root);
       while(!pendingnodes.empty()){
               treenode<int>*front=pendingnodes.front();
               pendingnodes.pop();
               int n;
               cout << "Enter total no of child" << front->data << endl;
               cin >>n;
               for(int i=0;i<n;i++){
               int childdata;
               cout << "Enter data of" << i <<"th child" << endl;
              cin >> childdata;
           treenode<int>*child=new treenode<int>(childdata);
           front->children.push_back(child);
             pendingnodes.push(child);
               }
           }
          return root;
}
  void printatlevelk(treenode<int>*root,int k){
    if(root==NULL){
      return;
    }
      if(k==0){
        cout << root->data << endl;
      }
      for(int i=0;i<root->children.size();i++){
        printatlevelk(root->children[i],k-1);
      }

  }
  void deletetree(treenode<int>*root){
    for(int i=0;i<root->children.size();i++){
      deletetree(root->children[i]);
    }
    delete root;
  }
  treenode<int>*takeinput(){
        int rootdata;
     std:: cout << "enter data" << endl;
       cin >> rootdata;
      treenode<int>*root=new treenode<int>(rootdata);
      int n;
       std::cout << "Enter no of children " << rootdata << endl;
       cin >> n;
       for(int i=0;i<n;i++){
          treenode<int>*child=takeinput();
          root->children.push_back(child);
       }
       return root;
}
   void printtree(treenode<int>*root){
      std::cout << root->data <<":";
    for(int i=0;i<root->children.size();i++){
      std::  cout << root->children[i]->data <<",";
    }
      std::cout << endl;
    for(int i=0;i<root->children.size();i++){
        printtree(root->children[i]);
    }

}
int main(){
    /*
    treenode<int>*root=new treenode<int>(1);
     treenode<int>*node1=new treenode<int>(2);
     treenode<int>*node2=new treenode<int>(3);
     
    root->children.push_back(node1);
    root->children.push_back(node2);
    */
  // treenode<int>*root=takeinput();
  treenode<int>*root=takeinputlevelwise();
    printtree(root);
    deletetree(root);
}