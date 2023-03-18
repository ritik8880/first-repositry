#include <iostream>
using namespace std; 
class employee
{
private:
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter the id of employee :" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of employee is :" << id << " and this is  employee number:" << count << endl;
    }
   static void getcount(void){
    cout<<"The value of count is"<<count<<endl;
   } 
};
int employee::count = 500;
int main()
{
    employee Rohit;
    Rohit.setdata();
    Rohit.getdata();
    Rohit.getcount();
    return 0;
}