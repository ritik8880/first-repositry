#include<iostream>
using namespace std;

int product(int a,int b){
    static int c=0; //this will executes once
    c = c+1; // the time this function is run , the value of c will retained
    return a*b+c;
}

int main()
{
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is"<<product(a,b)<<endl;
    cout<<"The product of a and b is"<<product(a,b)<<endl;
    cout<<"The product of a and b is"<<product(a,b)<<endl;
    cout<<"The product of a and b is"<<product(a,b)<<endl;
    cout<<"The product of a and b is"<<product(a,b)<<endl;
    cout<<"The product of a and b is"<<product(a,b)<<endl;
    return 0;
}
