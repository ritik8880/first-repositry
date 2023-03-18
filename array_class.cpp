#include <iostream>
using namespace std;
class shop
{
    
    int i;
    int IteamId[50];
    int Iteamprice[50];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};
void shop ::setprice(void)
{
    cout << "Enter Id of your Iteam number" << counter + 1 << endl;
    cin >> IteamId[counter];
    cout << "Enter the price of item" << endl;
    cin >> Iteamprice[counter];
    counter++;
}
void shop ::displayprice(void)
{
    cout << "The price of iteam with id" << IteamId[i] << "is" << Iteamprice[i] << endl;
}
int main()
{
    shop patanjali;
    patanjali.initcounter();
    patanjali.setprice();
    patanjali.setprice();
    patanjali.displayprice();
    return 0;
}