#include<iostream>
#include<string>
using namespace std;

class Teacher{
    public:
        string name;
        string dept;
        string subject;
        double salary;

        void changedept(string newdept){
            dept == newdept;
        }
};
int main()
{
    Teacher t1;
    t1.name = "SURAJ";
    t1.dept = "IT";
    t1.subject = "OOPS";
    t1.salary = 50000;

    cout<<"staff name : ";
    cout<<t1.name<<endl;
    cout<<t1.dept<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.salary<<endl;

    return 0;
    }
