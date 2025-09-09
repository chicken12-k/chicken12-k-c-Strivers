#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

        unordered_set<int> us;          // unordered sets are unique but not in sorted order
    us.insert(1);
    us.insert(3);
    us.insert(6);
    us.insert(4);

    for(auto i: us){
        cout<<i<<" ";
    }
    cout<<endl;



}