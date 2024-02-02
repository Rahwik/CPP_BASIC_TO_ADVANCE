#include <fstream>
using namespace std;

int main()
{
    ofstream outfile("my.txt");
    outfile << "hello" << endl;
    outfile << 25 << endl;
    outfile.close();
    return 0;
}


#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream ifs("test.txt");
    string name;
    int roll;
    string branch;

    ifs >> name >> roll >> branch;
    cout << name << endl << branch << endl;
    ifs.close();
    return 0;
}
