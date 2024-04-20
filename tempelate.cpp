#include<iostream>
using namespace std;
template<typename T,typename V>
class Pair{
  T x;
  V y;
  public:
   void setx(T x){
    this->x=x;
   }
   T getx(){
      return x;
   }
   void sety(V y){
      this->y=y;
   }
   V gety(){
    return y;
   }

};
  int main(){
    Pair<Pair<int,double>,char> p;
     p.sety('c');
     Pair<int,double>p1;
     p1.setx(10);
     p1.sety(100.34);
     p.setx(p1);
     cout << p.gety() << " " << p.getx().getx() << " " << p.getx().gety() << endl;
    /*
    Pair<int,int>p1;
    p1.setx(10);
    p1.sety(20); 
    cout << p1.getx() << " " <<  p1.gety() << endl;
*/

  }