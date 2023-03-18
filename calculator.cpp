#include<iostream>
using namespace std;
int main(){

   float num1,num2;
   cout<<"Enter two operands:";
   cin>>num1>>num2;

   char op;
   cout<<"Enter operator:+,-,*,/";
   cin>>op;
   
  switch(op){
    case '+':
          cout<<num1<<"+"<<num2<<"="<<num1+num2;
          break;

       case '-':
          cout<<num1<<"-"<<num2<<"="<<num1-num2;
          break;   

        case '*':
          cout<<num1<<"*"<<num2<<"="<<num1*num2;
          break;  

         case '/':
          cout<<num1<<"/"<<num2<<"="<<num1/num2;
          break;    

  }

    return 0;
}