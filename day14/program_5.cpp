#include<iostream>
#include<map>

using namespace std;

int main()
{
    multimap<int, string> m;
    m.insert(pair<int, string>(1, "Rahul"));
    m.insert(pair<int, string>(2, "Yashoda"));
    m.insert(pair<int, string>(2, "Yotsuba"));
    m.insert(pair<int, string>(3, "Yotsuba"));

    multimap<int, string>::iterator itr;

    for(itr = m.begin(); itr != m.end(); ++itr)
    {
        cout << itr->first << " " << itr->second << endl;
    }

    multimap<int, string>::iterator itr1;
    itr1 = m.find(2);

    cout << "Values found with key 2 are" << endl;

    while (itr1 != m.end() && itr1->first == 2) {
        cout << itr1->first << " " << itr1->second << endl;
        ++itr1;
    }

    return 0;
}
