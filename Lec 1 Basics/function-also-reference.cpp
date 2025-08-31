
// what if after cin all the name it cout at once?

// #include<iostream>
// using namespace std;

// void say_hello(string name){

//     cout << "Hello " << name << endl;
// }

// int main()
// {
//    function calling using for loops
//    for(int i=0; i<5; i++){
//        string name;
//        cout << "Enter name " << i+1 << ": ";
//        cin >> name;
//        say_hello(name);
//    }

//    for(int i = 0; i < 5; i++){
//     string name;
//     cout << "Enter name: ";
//     cin >> name;
//     say_hello(name);

//    }
// }

// #include <iostream>
// using namespace std;

// int sum(int a, int b)
// {
//     return a + b; // or store it in a variabe like c = a + b  then return c;
// }

// int maxx(int a, int b)
// {
//     if (a > b)
//     {
//         return a;
//     }
//     else
//     {
//         return b;
//     }
// }

// int main()
// {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     cout << "Sum of " << a << " and " << b << " is " << sum(a, b) << endl;
//     cout << "Maximum of " << a << " and " << b << " is " << maxx(a, b) << endl;
// }

// if you pass a number from int main to a fuction it send a copy of the number the orignal number is not affect but if you pass a reference or pointer to the number then the function can modify the original number


// #include<iostream>
// using namespace std;

// void playing(int &num){
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     cout << "Exiting function" << endl;
// }
// void noref(int num){
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
// }

// int main()
// {
//     int num = 10;
//     int number = 10;
//     playing(num);
//     cout << "Final value of reference: " << num << endl;
//     noref(number);
//     cout << "Final value of non-reference: " << number << endl;


    
// }

    // array is always passed by reference

   
#include <iostream>
using namespace std;

// pass by reference
void doSomething(int arr[], int n) {
    arr[0] += 100;
    cout << "Value inside function: " << arr[0] << endl;
}

int main() {
    int n = 5;
    int arr[n];
    for(int i = 0; i < n; i = i + 1) {
        cin >> arr[i];
    }
    
    doSomething(arr, n);
    
    cout << "Value inside int main: " << arr[0] << endl;
    cout << "IT SHOWS THAT WITHOUT PASSING BY REFERENCE, THE ORIGNAL ARRAY CHANGED AS IT IS ALWAYS PASSED BY REFERENCE" << endl;
    return 0;

}