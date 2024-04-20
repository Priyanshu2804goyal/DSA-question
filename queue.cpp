#include<iostream>
using namespace std;
template<typename T>
class queue{
  T*data;
  int nextindex;
  int size;
  int capacity;
  int frontindex;
  public:
  queue(int totalsize){
     data= new T(totalsize);
     nextindex=0;
     size=0;
      frontindex=-1;
    capacity=totalsize;
  }
    
    
    int getsize(){
        return size;
    }
    bool isempty(){
        if(size==0){
            return true;
        }
        else{
            return false;
        }
    }
    void enqueue(T element){
        if(capacity==size){
        T* newdata =new T[2*capacity];
        int j=0;
        for(int i=frontindex;i<capacity;i++){
            newdata[j]=data[i];
            j++;
        }
        for(int i=0;i<frontindex;i++){
            newdata[j]=data[i];
            j++;
        }
        frontindex=0;
        delete [] data;
        data=newdata;
        nextindex=capacity;
        capacity=capacity*2;
            // cout << "queue is full" << endl;
          //  return;
        }
        data[nextindex]=element;
        nextindex=(nextindex+1)%capacity;
        if(frontindex==-1){
            frontindex++;
        }
        size++;
    }
    T  dequeue(){
        if(size==0){
            cout << "queue is empty" << endl;
            return INT_MIN;
        }
       T ans= data[frontindex];
       frontindex=(frontindex+1)%capacity;
       size--;
       return ans;
    }
    T front(){
        if(isempty()){
            cout << "queue is empty" << endl;
            return INT_MIN; 
        }
         T ans=data[frontindex];   
         return ans;
    }

};
int main(){
    queue<int>q(5);
    q.enqueue(10);
    q.enqueue(20);
     q.enqueue(30);
      q.enqueue(40);
       q.enqueue(50);
       q.enqueue(60);
       cout << q.dequeue() << endl;
       cout << q.dequeue() << endl;
       cout << q.getsize() << endl;
       cout << q.front () << endl;
    
}