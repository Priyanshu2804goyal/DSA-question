#include<iostream>
using namespace std;
class student{
    public:
  int rollno;

  private:
  int age;
  public:
  student(){
    cout << "default constructor Called!" << endl;
  }
  // parameterized constructor! 
  student(int a,int r){
    cout << "parameterized called" << endl;
    age=a;
    rollno=r;
  }
  ~student(){
        cout <<" destructor called" << endl;
  }
  student (int age){
    this->age =age;
  }
     int getage(){
        return age;
     }
     void display(){
        cout << age <<" " << rollno << endl;
     }
     void setage(int a,int r){
         if(a<0){
            return;
         }
         age=a;
         rollno=r;
     }
    
};
int main(){
    // copy constructor
    student s1(10,100);
    student s2(20,200);
    student s3(s1);
    s3.display();

    // copy assignment operator

    student*s4=new student(40,400);
    student*s5=new student(20,100);
    (*s5)=(*s4);
    s5->display();
    student s6(50,500);
    (*s5)=s6;
    s5->display();

    /*
   student s1;
   student s2;
   s1.display();
   s2.display();
    student*s3=new student(30,20);
    s3->display();
    student s4(10);
    s4.display();
    */
   /*
   s1.setage(20,10);
     s2.setage(30,15);
      student*s6=new student;
      s6->setage(30,40);
      s6->display();
      s2.display();
      */
   /*
   s1.age=10;
   s2.age=15;
   s1.rollno=168;
   s2.rollno=170;
   cout << s1.rollno << endl;
    cout << s2.rollno << endl;
    cout << s2.age << endl;

    student*s6=new student;
    (*s6).age=20;
    (*s6).rollno=21;
     // s6->age=20;
     cout << s6->age << endl;

*/

}