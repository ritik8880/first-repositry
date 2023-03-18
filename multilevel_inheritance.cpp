#include<iostream>
using namespace std;

class student {
      int roll_number;
      public:
         void set_roll_number(int);

         void get_roll_number(void);

};
 void student :: set_roll_number(int r){
    roll_number = r;
 }

 void student :: get_roll_number(){
    cout<<"The roll number of student is "<<roll_number<<endl;
 }

 class exam : public student{
       protected:
           float maths;
           float physics;
       
       public:
           void set_marks(float , float);
           void get_marks(void);
            
 };
 void exam :: set_marks(float m1,float m2){

    maths = m1;
    physics = m2;
 }

 void exam :: get_marks(){
    cout<<"Marks obtained in maths are: "<< maths <<endl;
    cout<<"Marks obtained in physics are: "<< physics <<endl;
 }

 class result : public exam{
      float percantage;
       public:
            void display(){
                get_roll_number();
                get_marks();
                cout<<"Your percentage is "<< (maths + physics)/2 <<"%" <<endl;
            }
 };

int main(){
    result ritik;
    ritik.set_roll_number(62);
    ritik.set_marks(85.0 , 87.0);
    ritik.display();
    return 0;
}