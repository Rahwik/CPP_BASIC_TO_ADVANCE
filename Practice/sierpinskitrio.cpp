// C++ program to print sierpinski triangle.
#include <bits/stdc++.h>
using namespace std;

void printSierpinski(int n)
{
	for (int y = n - 1; y >= 0; y--) {

		// printing space till
		// the value of y
		for (int i = 0; i < y; i++) {
			cout<<" ";
		}

		// printing '*'
		for (int x = 0; x + y < n; x++) {

		// printing '*' at the appropriate position
		// is done by the and value of x and y
		// wherever value is 0 we have printed '*'
		if(x & y)
			cout<<" "<<" ";
		else
			cout<<"* ";
		}

		cout<<endl;
	}
}

// Driver code
int main()
{
	int n = 64;

	// Function calling
	printSierpinski(n);

	return 0;
}
