#include<iostream>
#include<map>
using namespace std;

int main(){
map<int , int> mpp; // Map stores unque keys in sorted order
map<int, pair<int,int>> mpp2;
map<pair<int,int>, int> mpp3;

mpp[1] = 2;
mpp.emplace(3,4);
mpp.insert({5,6});

mpp2[1] = {2,3};

for(auto i: mpp){
    cout<<i.first<<" "<<i.second<<endl;
}
cout << mpp[5];


}