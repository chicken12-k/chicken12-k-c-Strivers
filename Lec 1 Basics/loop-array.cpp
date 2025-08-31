#include<iostream>
using namespace std;

void say_hello(string name){
    cout << "Hello " << name << endl;
}

int main()
{
    string name[5];
cout << "--Enter 5 names--" << endl;

for(int i = 0; i < 5; i++){
    cout << "Enter name: ";
    cin >> name[i];
}
for(int i = 0; i < 5; i++){
    say_hello(name[i]);
}
}


