#include<iostream>
#include<fstream>  // Include necessary header for ifstream
using namespace std;

class Test
{
private:
    ifstream fis;
    int *p;

public:
    Test()
    {
        p = new int[10];
        fis.open("my_text.txt");  // Corrected the file name and added the file extension
    }

    ~Test()
    {
        delete[] p;
        fis.close();
    }
};

int main()
{
    // Create an object of the Test class
    Test testObj;

    // Your code logic goes here...

    return 0;
}
