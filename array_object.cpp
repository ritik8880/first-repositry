#include<iostream>
using namespace std;
class employee{
      public:
         int id;
         int salary;
      void setid(void){
        salary=5000;
        cout<<"Enter the id of employee"<<endl;
        cin>>id;
      }
      
      void getid(void){
        cout<<"The id of employee is "<<id<<endl;
      }  
        
};
int main()
{ 
    int i;
    employee facebook[5];
    for ( i = 0; i < 5; i++)
    {
        facebook[i].setid();
        facebook[i].getid();
    }
    
    return 0;
}