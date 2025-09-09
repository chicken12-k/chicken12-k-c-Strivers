#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int a[] = {1,5,2,3,4};
    sort(a, a+5);
    // how to print an array
    for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    // sorting in descending order
    sort(a, a+5, greater<int>());
    for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}