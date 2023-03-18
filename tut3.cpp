#include<iostream>
using namespace std;

int main()
{
   float d=37.5F;
   long double e= 37.5L;
   
   cout<<"The size of 37.5 is:"<<sizeof(37.5)<<endl;
   cout<<"The size of 37.5f is:"<<sizeof(37.5f)<<endl;
   cout<<"The size of 37.5F is:"<<sizeof(37.5F)<<endl;
   cout<<"The size of 37.5l is: "<<sizeof(37.5l)<<endl;
   cout<<"The size of 37.5L is: "<<sizeof(37.5L)<<endl;

   float x = 455;
   float & y = x;

   cout<<x<<endl;
   cout<<y<<endl;
    return 0;
}