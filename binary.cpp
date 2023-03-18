#include<iostream>
#include<string>
using namespace std;
int i;
class binary{
   string s;

   public:
        void read(void);
        void chk_binary(void);
        void ones_complement(void);
        void display(void);

};

void binary ::read(void)
{
   cout<<"Enter a binary number:"<<endl;
   cin>>s;
}

void binary ::chk_binary(void)
{
 for ( i = 0; i < s.length(); i++)
 {
    if(s.at (i)!='0' && s.at(i)!='1')
    {
      cout<<"Incorrect binary formet"<<endl;
      exit(0);
    } 
 }
}
void binary ::ones_complement(void)
{
     for ( i = 0; i < s.length(); i++)
     {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
     }

     
 {
    cout<<"Displying your binary number"<<endl;
    for( i = 0; i < s.length(); i++)
    {
        cout<< s.at(i);
    }
    cout<<endl;
 } 
}
int main(){
    binary b;
    b.read();
    b.chk_binary();
    b.display();
    b.ones_complement();
    return 0;
}
