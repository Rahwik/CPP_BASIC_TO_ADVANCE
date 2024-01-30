//Implementation of function template
#include <iostream>
// using namespace std; Cannot use it.

template <typename T>//declare the template
T max(T x, T y)//defining a function template
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    //calling a function template.
    int c = std::max<int>(10, 5);
    float d = std::max<float>(10.5f, 15.6f);

    std::cout << "Max of 10 and 5: " << c << std::endl;
    std::cout << "Max of 10.5 and 15.6: " << d << std::endl;

    return 0;
}
