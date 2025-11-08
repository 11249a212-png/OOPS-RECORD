#include<iostream>
using namespace std;
class Laptop{
    private :
        string brand;
        string processor;
        int ram;
    public:
        Laptop(string b,string p,int r)
        {
            brand=b;
            processor=p;
            ram=r;
        }    
        void display()
        {
            cout<<"BRAND : "<< brand <<endl;
            cout<<"PROCESSOR : "<< processor <<endl;
             cout<<"RAM : "<< ram <<endl;
        }
    

};
int main()
{
    Laptop l1("DELL","INTEL i5",8);
    Laptop l2("HP","INTEL i3",16);
    cout<<"LAPTOP DETAILS "<< endl;
    l1.display();
    l2.display();
    return 0;
}
