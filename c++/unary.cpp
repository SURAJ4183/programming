#include <iostream>
using namespace std;
class suraj
{
    int a;
    int b;

public:
    suraj(int x, int y)
    {
        a = x;
        b = y;
    }

    void show()
    {
        cout << "A = " << a << " " << "B = " << b << endl;
    }
    void operator-()
    {
        a = -a;
        b = -b;
    }
    ~suraj()
    {
        cout<<"all arguments deleted"<<endl;
    }
};

int main()
{
    suraj obj(-12, 78);
    obj.show();
    -obj;
    obj.show();
    return 0;
}