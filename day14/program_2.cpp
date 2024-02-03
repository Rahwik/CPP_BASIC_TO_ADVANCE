//Maps
#include<iostream>
#include<map>

int main()
{
    std::map<int, std::string> m;
    m.insert(std::pair<int, std::string>(1, "Rahul"));
    m.insert(std::pair<int, std::string>(2, "Yashoda"));
    m.insert(std::pair<int, std::string>(3, "Yotsuba"));

    std::map<int, std::string>::iterator itr;

    for(itr = m.begin(); itr != m.end(); ++itr)
    {
        std::cout << itr->first << " " << itr->second << std::endl;
    }

    std::map<int, std::string>::iterator itr1;
    itr1 = m.find(2);

    std::cout << "value found is" << std::endl;
    std::cout << itr1->first << " " << itr1->second << std::endl;

    return 0;
}
