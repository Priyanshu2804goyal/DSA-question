#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string.h>
using namespace std;
int main(){
       vector<string>v={"hello","world"};
      // vector<string>:: iterator i=v.begin();
    auto i=v.begin();
    cout << *i;
    int a=3;
    int b=5;
    auto j=a+b;
    cout << j;
}