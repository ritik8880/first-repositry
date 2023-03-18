#include<iostream>
using namespace std;
       
       class base1{
        protected :
          int data1;
           public:
           void set_data1(int a){
             data1 = a;
           }
       };

       class base2{
        protected :
          int data2;
         public:
          void set_data2(int b){
            data2 =b;
          }
       };

       class derived : public base1 , public base2{
          
          public:
             void show(){
                cout<<"The value of data1 is "<< data1 <<endl;
                cout<<"The value of data2 is "<< data2 <<endl;
                cout<<"The sum of data1 and data2 is "<< data1 + data2 <<endl;
             }
       };
int main(){
    derived ritik;
    ritik.set_data1(20);
    ritik.set_data2(15);
    ritik.show();
    return 0;
}