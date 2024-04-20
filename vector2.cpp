#include<iostream>
using namespace std;
#include<vector>
int main(){
     vector<int>v;
     v.push_back(10); 
     v.push_back(20); 
     v.push_back(30); 
     v.push_back(40); 
     v.push_back(50); 
     v.push_back(60);
     v.push_back(70);
     v.push_back(80);
     // they are used only for update the value not for insert the value;
       v[6]=101;
       v[7]=202;
       // used to delete the value;
       v.pop_back();
   int ans=v.size();
   cout << ans << endl;

  for(int i=0;i<8;i++){
    cout << v[i] << endl;
  }


}