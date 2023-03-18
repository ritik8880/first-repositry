#include<iostream>
using namespace std;
int main(){
    int a=3;
    int*b=&a;
    // & is address of operator
    cout<<"The addres of a is "<<b <<endl;
    cout<<"The addres of a is "<<&a << endl;
    // * is value of operator
    cout<<"The value of a is "<<*b<<endl;
    return 0;
}