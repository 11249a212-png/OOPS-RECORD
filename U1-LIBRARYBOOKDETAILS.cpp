#include<iostream>
using namespace std;
class book 
{
     public:
        string title;
        string author;
        float price;
    void display()
    {
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
int main()
{
   book b1,b2,b3;
    b1.title="c++ Programming";
    b1.author="Bjarne stroustrup";
    b1.price=200;
    b2.title="Data Structures";
    b2.author="Mark allen weises";
    b2.price=90;
    
    b1.display();
    b2.display();
   
    return 0;
}

   
