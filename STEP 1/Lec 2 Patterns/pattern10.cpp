#include<iostream>
using namespace std;

void pattern10(int n)
{
for(int i = 0; i <n ; i++)
{
    for(int j = 0; j< i+1 ; j++){

        cout << "*";
    }
    
cout << endl;
}
}
void call10(int n)
{
    for(int i = 0; i <n ; i++){
    for(int j = 0; j< n - i - 1 ; j++){

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
        pattern10(n);
        call10(n);
    }
}

