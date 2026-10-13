#include<iostream>
#include<math.h>
using namespace std;
class bank
{
private:
    int roi;
    int bal;
    int t;
public:
    bank()
    {
        cout<<"enter intial balance==";
        cin>>bal;
        cout<<"enter rate of interest=";
        cin>>roi;
    }
    //~bank();
    void deposit();
    void withdraw();
    void display();
    void interest();
    void menu();
};
void bank::deposit()
{
    int amt;
    cout<<"enter amount to be deposited==";
    cin>>amt;
    bal=bal+amt;
    cout<<"\n balance amount after deposit is=="<<bal;
}
void bank::withdraw()
{
    int amt;
    cout<<"enter amount to be withdraw==";
    cin>>amt;
    if (bal<=amt)
    {
        cout<<"insufficient amount --- try again";
    }
    else
    {
    bal=bal-amt;
    cout<<"\n balance amount after deposit is=="<<bal;
    }
}
void bank::display()
{
    cout<<"\n balance amount is=="<<bal;
}
void  bank::interest()
{
    int ci;
    cout<<"\nenter time of interest==";
    cin>>t;
    float x=(1+roi/100);
    cout<<"x="<<x;
    ci=bal*pow(x,t);
    bal=bal+ci;
    cout<<"\ninterest=="<<ci;
    cout<<"\nbalance after interest is=="<<bal;
}
void bank::menu()
{
    int choice;
    char option;
    up:
    cout<<"\nselect options==\n";
    cout<<"\npress 1 for deposit \npress 2 for withdraw \npress 3 for display  balance \npress 4 for calculate interest ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        deposit();
        break;
    case 2:
        withdraw();
        break;
    case 3:
        display();
        break;
    case 4:
        interest();
        break;
    default:
        cout<<"\nno such choice";
        break;
    }
    cout<<"\ndo you want another option(y or n)\n";
    cin>>option;
    if (option=='y')
    {
        goto up;
    }
}
int main()
{
    bank b1;
    b1.menu();
    return 0;
}

