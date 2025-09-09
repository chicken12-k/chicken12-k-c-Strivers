#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int> pq; // max heap by default i.e largest element at top
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

// min heap
    priority_queue<int, vector<int>, greater<int>> minheap; // smallest element at top
    minheap.push(5);
    minheap.push(2);
    minheap.push(8);
    minheap.emplace(10);
    cout<<minheap.top()<<endl;
    minheap.pop();
    cout<<minheap.top()<<endl;

    return 0;
    
}