#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream inputfile;
    inputfile.open(inline.cpp);

    ofstream outputfile(function.cpp);

    if (inputfile.is_open())

    {
        cout<< "File opened successfully for reading."<<endl;
    }
    if(outputfile.is_open()){
        cout<< " File opened successfully for writing."<<endl;
    }
    
    return 0;
}