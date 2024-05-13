
#include<iostream>
using namespace std;
class A1
{
	public:
		A1()
		{
			int a = 20, b = 35, c;
			c = a + b;
			cout << "Sum is:" <<
					c << endl;
		}
};

class A2
{
	public:
		A2()
		{
			int x = 50, y = 42, z;
			z = x - y;
			cout << "Difference is:" <<
					z << endl;
		}
};
3
class S: public A1,virtual A2
{
	public:
		S(): A1(), A2()
		{
			int r = 40, s = 8, t;
			t = r * s;
			cout << "Product is:" <<
					t << endl;
		}
};

// Driver code
int main()
{
	S obj;
	return 0;
}
