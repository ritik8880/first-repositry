#include<iostream>
using namespace std;
int main(){

  int marks[]={40,25,30,68,90};
//   cout<<marks[0]<<endl;
//   cout<<marks[1]<<endl;
//   cout<<marks[2]<<endl;
//   cout<<marks[3]<<endl;
//   cout<<marks[4]<<endl; 
int i;
for ( i = 0; i < 4; i++)
{
    cout<<"The value of marks"<<i<<" is "<<marks[i]<<endl;
}

    return 0;
}