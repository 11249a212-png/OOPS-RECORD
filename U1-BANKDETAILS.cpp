#include<iostream>
using namespace std;
class account{
    public:
        int accno;
        string name;
        float balance;

    void display()
    {
        cout<<"Account Number : "<<accno<<endl;
        cout<<"name : "<<name<<endl;
        cout<<"balance : "<<balance<<endl;

    }
};
int main()
{
    account a1,a2;
    a1.accno=1001;
    a1.name="ramesh";
    a1.balance=25000.78;
    a2.accno=1002;
    a2.name="sita";
    a2.balance=256890.78;
    a1.display();
    a2.display();
    return 0;
    


}
