#include<iostream>
using namespace std;

void pattern7(int n)
{
for(int i = 0; i <n ; i++)
{
    for(int j = 0; j < n - i - 1; j++)
    {
        cout << " ";
    }
    for (int k = 0; k < 2*i+1; k++)
    {
        cout << "*";
    }
    cout << endl;

}
}

void pattern8(int n)
{
for(int i = 0; i <n ; i++)
{
    for(int j = 0; j < i; j++)
    {
        cout << " ";
    }
    for (int k = 0; k < 2*n -2*i -1; k++)
    {
        cout << "*";
    }
    cout << endl;

}
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        pattern7(n);
        pattern8(n);
    }
    }


