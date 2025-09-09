#include<iostream>
#include<algorithm>
using namespace std;

bool comparator(pair<int,int> a, pair<int,int> b){     //sort it according to second element, if second elements are same 
    if(a.second < b.second) return true;               //then sort according to first element
    if(a.second > b.second) return false;
    if(a.first > b.first) return true;
    return false;
}

int main(){
// write your code here
    pair<int,int> a[] = {{1,2}, {2,1}, {4,1}, {3,3}};
    sort(a, a+4, comparator);
    for(int i=0; i<4; i++){
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }
    int num = 6;
    int cnt = __builtin_popcount(num); // counts number of set bits in a number
    cout << cnt << endl;

    string s = "321";
    sort(s.begin(), s.end());       // to get correct permutations, sort the string first
    cout << s << endl;
     do{
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));


    return 0;
}