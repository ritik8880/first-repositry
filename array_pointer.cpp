#include<iostream>
using namespace std;
   class shoap_iteam{
        int id;
        float price;

        public:
         void setdata(int a , float b){
            id = a;
            price = b;
         }
         void getdata(void){

            cout<<"The code of iteam is "<< id <<endl;
            cout<<"The price of iteam is "<< price <<endl;
         }
   };

int main(){

    int size = 3;

    shoap_iteam *ptr = new shoap_iteam[size];

    shoap_iteam *ptrTemp = ptr;
     int p , q , i;

     for (  i = 0; i < size; i++)
     {
        cout<<"Enter id and price of iteam "<< i+1 <<endl;
        cin>>p>>q;

        ptr->setdata(p,q);
        ptr++;
     }

     for ( i = 0; i < size; i++)
     {
       cout<<"Iteam number "<< i+1 <<endl;
       ptrTemp->getdata();
       ptrTemp++;
     }
     
     

    return 0;
}