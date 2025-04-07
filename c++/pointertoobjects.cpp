#include <iostream>
using namespace std;

class complex
{
    int wizard;
    int wand;

public:
    void getData()
    {
        cout << "the wizard side value is : " << wizard << endl;
        cout << "the wand side value is : " << wand << endl;
    }

    void setData(int v1, int v2)
    {
        wizard = v1;
        wand = v2;
    }
};

int main()
{
    complex c1;

    c1.setData(58, 85);
    c1.getData();

    return 0;
}
