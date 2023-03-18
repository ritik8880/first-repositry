#include<iostream>
using namespace std;

class complex{
      int a,b;
      public:
          complex(int , int); // declaratio of  constructor

          void printnumber()
          {
            cout<<"your number is "<<a<<" + "<<b<<" i "<<endl;
          }
};
complex :: complex(int x, int y) //This is parametrize constructor
{
    a = x;
    b = y;
}
int main()
{
    //implicit call
    complex a(4,6);
    a.printnumber();
    
    //explicit call
    complex b = complex(5,6);
    b.printnumber();

    return 0;
}