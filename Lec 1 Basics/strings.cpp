#include <iostream>
using namespace std;

int main()
{

    string s = "Chicken";
    cout << s.length() << endl;
    cout << s[0] << endl;
    cout << s << endl;
    cout << s.size() << endl;
    s[s.size() - 1] = 'k';
    cout << s << endl;
}