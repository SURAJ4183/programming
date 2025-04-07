#include<iostream>
using namespace std;

inline int fun(int a, int b){
    return a+b;
}
 
int main()
{
    int value = fun(786, 5847);
    cout<<value<<endl;
return 0;
}