// Set stores only unique elements in sorted order
/* **sorted order
   ** unique elements
*/ 

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    auto it = s.find(3);

    // more functions for set
    for (auto i : s)
        cout << i << " ";
    cout << endl;
    cout << *it << endl;
    cout << s.count(3) << endl;
    cout << s.size() << endl;
    cout << s.empty() << endl;
    s.erase(2);
    for (auto i : s)
        cout << i << " ";
    cout << endl;
    s.erase(s.begin());
    for (auto i : s)
        cout << i << " ";
    cout << endl;
    s.erase(s.begin(), s.end());
    for (auto i : s)
        cout << i << " ";
    cout << endl;
    s.clear();
    cout << s.size() << endl;
    cout << s.empty() << endl;
    return 0;
}   

