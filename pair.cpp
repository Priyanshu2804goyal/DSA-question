#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
   pair<int,int>p;
   // initialize method
  // pair<int,int>p(5,6);
  // pair<int,int>p={5,6};
  // p.first=5;
   //p.second=6;
   int n;
   cin>>n;
  // cout << p.first << p.second << endl;
   vector<pair<int,string>>student_list;
   for(int i=0;i<n;i++){
    int score;
    string name;
    cin>> score >> name;
    student_list.push_back({score,name});
   }
     sort(student_list.begin(),student_list.end());
     for(int i=0;i<n;i++){
    cout << student_list[i].first << student_list[i].second << endl;
   }
    // comparison the value
    pair<int,int>l(5,6);
    pair<int,int>q(10,5);
    if(p>q){
        cout << "l>q";
    }
    else{
        cout << "l<q";
    }

}