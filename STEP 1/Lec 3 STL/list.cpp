#include<iostream>
#include <list>
using namespace std;

int main()
{

    list<int> ls;
    ls.push_back(1);
    ls.emplace_back(2);
    ls.push_front(3);
    ls.emplace_front(4);

    for(auto it: ls)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    ls.pop_back();
    ls.pop_front();

    for(auto it: ls)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<ls.size()<<endl;
    cout<<ls.empty()<<endl;

    // rest of the functions are same as vectors
    // begin, end, rbegin, rend, clear, insert, erase, etc.
}