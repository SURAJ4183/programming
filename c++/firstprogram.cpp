#include<iostream>
using namespace std;

void swapn(int x, int y){
    
    x=y;
    y=x;

}

int main()
{
  int x = 7;
  int y = 9;
  int temp;
  cout<<x<<" "<<y<<endl;
  swap(x, y);
  cout<<x<<" "<<y<<endl;
  }  
