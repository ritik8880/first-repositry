#include<iostream>
using namespace std;

class test{
      int a;
      int b;

      public:
         test(int i , int j): a(i), b(i+j)
         {

            cout<<"constructor executed "<<endl;
            cout<<"value of a is "<< a <<endl;
            cout<<"value of b is "<< b <<endl;
         }
      
};
int main(){

    test t(5,10);

    return 0;
}