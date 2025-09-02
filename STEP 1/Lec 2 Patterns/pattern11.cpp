#include<iostream>
using namespace std;


void pattern2(int n)
{
 int start = 1;
 for(int i = 0; i < n; i++)
 {
    if(i % 2 == 0) start = 1;
    else start = 0;
    for(int j = 0; j<= i; j++)
    {
        cout << start;
        start = 1 - start;
    }
    cout << endl;
 }  
}



int main()
{
    int t; // number of test cases they want to run at single go
    cin >> t;
    for (int i = 0; i < t; i++) // making a loop run for each testcase suppose user enters to have 3 test cases now it will have to enter the number of i and j it has to print
    {
        int n;
        cin >> n;
        pattern2(n);
    }
}