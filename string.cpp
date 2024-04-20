#include<iostream>
using namespace std;

int main(){
    string*sp=new string;
    *sp="def";
    cout << sp << endl;
    cout << *sp << endl;
    string s="sde";
    s="defghi";
    cout << s << endl;
    int a=s.find("def");
    cout << a << endl;
    string s1=s.substr(3);
    cout << s1 << endl;
    string s2=s.substr(3,2);
    cout << s2 << endl;


}