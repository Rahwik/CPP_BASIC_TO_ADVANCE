// Data hiding example in CPP
#include <iostream>
using namespace std;
class Base
{
private:
    int num; // by default private
public:
    void getData();
    void showData();
};
void Base ::getData()
{
    cout << "Enter any Integer value" << endl;
    cin >> num;
}
void Base ::showData()
{
    cout << "The value is " << num << endl;
}

int main()
{
    Base obj;
    obj.getData();
    obj.showData();
    return 0;
}