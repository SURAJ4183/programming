#include<iostream>
using namespace std;

class lakshya;
class suraj{
   int money = 100;
    friend void rohit(suraj, lakshya);
};
class lakshya{
   int money = 105;
    friend void rohit(suraj, lakshya);
};

void rohit(suraj r1, lakshya r2){
    cout<<r1.money+r2.money<<endl;
}
int main()
{
    suraj obj1; lakshya obj2;
    rohit(obj1 , obj2);

    return 0;
}