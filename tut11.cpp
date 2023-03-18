#include<iostream>
using namespace std;
//this will not swap
void swap(int a,int b){
    int temp=a;
    a = b;
    b=temp;
}
//call by refrence using pointer
void swapPointer(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
//call by refrence using c++ refrence varabile
void swapRefrenceVar(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
      int x= 4,y= 5;
      cout<<"The value of x"<<x <<"The value of y"<<y<<endl;
     // swap(x,y); //this will not swap
     // swapPointer(&x,&y);//this will swap using pointer refrence 
      swapRefrenceVar(x,y);
      cout<<"The value of x"<<x <<"The value of y"<<y<<endl;
    return 0;
}