#include<iostream>
using namespace std;

 class teacher{
      private:
            double salary;
      public:
            teacher(string n, string a, string s, double sal){
                  name = n;
                  age = a;
                  subject = s;
                  salary = sal;
            }              

            string name;
            string age;
            string subject; 
            
            

            void getInfo(){
                  cout<< "name : " << name << endl;
                  cout<< "age : " << age << endl;
            }


 };
 int main(){
       
       teacher t1("Suraj", "twenty", "bca", 25000);

       t1.getInfo();
       

return 0;

 }

