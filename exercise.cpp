#include<iostream>
#include<math.h>
using namespace std;

   class calculator {
         public:
          float a,b;
            
            void result(){
                cout<<"Enter a number "<< a << endl;
                cin>> a ;
                cout<<"Enter the second number "<< b << endl;
                cin>> b ;
            }
            float add(){
                return a + b;
            }

            float subtract (){
                return a-b;
            
            }

            float multiply (){
                return a * b;

            }
            float division (){

                if (b == 0){
                    cout<<" division by zero "<<endl;
                    return 0;
                }
                else{
                    return a/b;
                }
            }
         };

   


int main(){

    int  ch;
    calculator c;
    cout << "Enter 1 to add two number "<<endl << "Enter 2 to subtract two number " << endl << "Enter 3 to multiply two number "<<endl << "Enter 4 to divide two number "<<endl <<"enter 0 to exit "<<endl;
    
    do 
    {
        cout<<"Enter choice "<<endl;
        cin>> ch;

        switch (ch){
            case 1:
             c.result();
             cout<<"Result: "<< c.add() <<endl;
             break;

             case 2:
             c.result();
             cout<<"Result: "<< c.subtract() <<endl;
             break;

             case3:
             c.result();
             cout<<"Result: "<< c.multiply() <<endl;
             break;

             case 4:
             c.result();
             cout<<"Result"<< c.division() <<endl;
             break;
        }
       
    } while(ch>=1 && ch<=4);


    return 0;
}
