#include<iostream>
using namespace std;
class stack{
 int*data;
 int nextindex;
 int capacity;
 public: 

    stack(){
        data=new int[4];
        nextindex=0;
        capacity=4;
    }
    int size(){
        return nextindex;
    }
    bool isempty(){
        return nextindex==0;
    }
    
    void push(int element){
        if(capacity==nextindex){
            int*newdata=new int[2*capacity];
            for(int i=0;i<capacity;i++){
                newdata[i]==data[i];
            }
            capacity=capacity*2;
            delete[] data;
            data=newdata;
           // cout << "stack is full";
        }
        data[nextindex]=element;
        nextindex++;
    }
int pop(){
if(isempty()){
    cout << "stack is empty" << endl;
    return INT_MIN;
}
nextindex--;
return data[nextindex];
}
int top(){
    if(isempty()){
        cout << "stack is empty" << endl;
        return INT_MIN;
    }
return data[nextindex-1];
}
};
int main(){
   stack s;
   s.push(20);
   s.push(10);
   s.push(30);
    s.push(40);
    s.push(50);
  s.push(80);
  s.push(90);

   cout << s.pop() << endl;
   cout << s.pop() << endl;
   cout << s.size() << endl;
   cout << s.top() << endl;
   cout << s.pop() << endl;
   cout << s.isempty() << endl;


}