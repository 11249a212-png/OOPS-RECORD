#include<iostream>
using namespace std;
class student{
    private :
        string name;
        int roll number;
        float marks;
    public:
        student(string n,int r,float m)
        {
            name=n;
            roll number=r;
            marks=m;
        }    
        void display()
        {
            cout<<"NAME : "<< name <<endl;
            cout<<"ROLL NUMBER : "<< roll number <<endl;
             cout<<"MARKS : "<< marks <<endl;
        }
    

};
int main()
{
    student 1("PREETHI",01,98);
    student 2("SAI",02,96);
    student 3("kumar",03,96);
    cout<<"STUDENT DETAILS "<< endl;
    1.display();
    2.display();
    3.display();
    return 0;
}
