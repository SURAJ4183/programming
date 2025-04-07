#include<iostream>
using namespace std;

class library{
    public:

    string s;

    void printname(){
        cout<<"students : "<<s;

    }
};
int main()
{
    library stu;

    stu.s =" table_nine";

    stu.printname();
    
    return 0;
}