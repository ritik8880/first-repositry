#include<iostream>
using namespace std;
    
    void printoddnumber(int n)
    {
        cout<<"Total odd number present is:"<<endl;
           for(int i = 1; i <= 2*n; i++){
          
            if (i & 1  != 0){
            cout<< i <<endl;
           }
    }
    }

    void printevennumber(int n)
    {
        cout<<"Total even number present is:"<<endl;
           for(int i = 1; i <= 2*n; i++){
          
            if ( !(i & 1) ){
            cout<< i <<endl;
           }
    }
    }



int main(){
     int n = 5;
     printoddnumber(n);
     printevennumber(n);
     
    return 0;
}