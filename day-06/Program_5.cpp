//function template using the public and private template functions
#include <iostream>
using namespace std;
template <class T>
class Test
{
private:
   T answer;

public:
   Test(T n) : answer(n)
   {
      cout << "Inside constructor" << endl;
   }

   T getNumber()
   {
      return answer;
   }
};
int main()
{
   Test<int> numberInt(60);
   Test<double> numberDouble(17.27);
   cout << "Integer Number is: " << numberInt.getNumber() << endl;
   cout << "Double Number = " << numberDouble.getNumber() << endl;
   return 0;
}
