#include<iostream>
using namespace std;

// base class
class employee{
    
       public:
            int id;
            int salary;
            employee(int inpId){

              id = inpId;
              salary = 500;
              }
           employee(){}   
};
 // derived class
   class student : employee {

    public:
         student(int inpId)
         {
          id = inpId;
         }
       int langaugecode = 9; 
         
   };
   

int main()
{
     employee ritik(1),rohit(2);
     cout<<ritik.salary<<endl;
     cout<<rohit.salary<<endl;
     

    return 0;
}