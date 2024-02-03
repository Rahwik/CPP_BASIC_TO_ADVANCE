//Vector
#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {10, 20, 30, 90};
    v.push_back(25);
    v.push_back(75);
    v.pop_back();

    for (int x : v) {
        std::cout << x << " ";
    }

    std::vector<int>::iterator itr = v.begin();
    while (itr != v.end()) {
        std::cout << *itr << " ";
        ++itr;
    }

    return 0;
}
