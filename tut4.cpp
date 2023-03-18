#include<iostream>
using namespace std;

int main(){
   int age;
   cout<<"Enter your age"<<endl;
   cin>>age;
   if(age<18){
    cout<<"you are not able to open adult site"<<endl;
   }
   else if(age==18){
    cout<<"you are kid and you have permission to open the adult site"<<endl;
   }
   else {
    cout<<"you are alowed";
   }
    return 0;
}