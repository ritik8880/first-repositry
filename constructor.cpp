#include<iostream>
using namespace std;

class complex 
{
    int a,b;

    public:
        complex(void); //declration of constructor 

        void printnumber()
        {
            cout<<"your number is "<< a << " + " <<b<< " i " <<endl;
        }
};

complex :: complex(void) // This is default constructor it take no argument
{
    a=10;
    b=5;
}
int main()
{
    complex c;
    c.printnumber();
    return 0;
}