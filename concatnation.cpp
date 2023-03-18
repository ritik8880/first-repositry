#include<iostream>
using namespace std;
int main(){
 
 int first,second;
   
  cout<<"enter the value of first:\n";
  cin>>first;
  cout<<"enter the value of second:\n";
  cin>>second;

 int m= sizeof(first)/sizeof(first);
 int n= sizeof(second)/sizeof(second);

 int result[m+n];

 std::copy(first,first+m,result);
 std::copy(second,second+n,result+m);

 for(int &i: result){
    std::cout<<i;
 }
 
 
    return 0;
}