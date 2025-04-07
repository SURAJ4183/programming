#include<iostream>
using namespace std;

    class A{
        int a;
        
        public:

        void setdata(int a){
            this->a = a;
        }

        void getdata(){
            cout<<"the value of a is : "<<a<<endl;
        }

    };
    int main()
    {
        A obj;
        obj.setdata(500);
        obj.getdata();
    return 0;
}