#include<iostream>
using namespace std;
//function and function prototype

int sum(int a,int b);

int main(){
    int num1,num2;
    cout<<"Enter the frist number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    cout<<"The sum is"<<sum(num1,num2);
    return 0;
}
int sum(int a,int b){
    int c=a+b;
    return c;
}