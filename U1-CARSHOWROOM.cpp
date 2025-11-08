#include<iostream>
using namespace std;
class car 
{
     public:
        string model;
        string company;
        float price;
    void display()
    {
        cout<<"Company: "<<company<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
int main()
{
    car c1,c2,c3;
    c1.company="Toyota";
    c1.model="innova";
    c1.price=2000000;
    c2.company="Honda";
    c2.model="city";
    c2.price=9000000;
    c3.company="Hyunda";
    c3.model="i20";
    c3.price=400000;
    return 0;
}

   
