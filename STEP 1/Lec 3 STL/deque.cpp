#include<iostream>
#include<deque>
using namespace std;

int main()
{
deque<int> dq;
dq.push_back(1);
dq.push_front(2);
dq.emplace_back(3);
dq.emplace_front(4);

for(auto it: dq)
{
    cout<<it<<" ";
}
cout<<endl;
dq.pop_back();
dq.pop_front();

for(auto it : dq)
{
    cout<<it<<" ";
}
cout<<endl;

dq.front();
dq.back();
cout << dq.front() << " " << dq.back() << endl;


}
