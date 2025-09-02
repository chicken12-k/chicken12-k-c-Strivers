#include <iostream>
using namespace std;

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl; //check
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
        pattern(n);
    }
}

// in coding competetions when there are input such as 2 3 5 it means they will run code two times one with input 3 and other with 5 so it will print 3 rows rectangele then 5 rows