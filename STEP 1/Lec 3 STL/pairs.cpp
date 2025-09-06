#include <iostream>
#include <utility>
#include <string>
using namespace std;

int main()
{

    pair<string, int> person("Alice", 30);
    pair<int, int> numbers(60, 30);
    pair<int, pair<int, int>> num = {10, {10, 30}};
    pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}, {4, 5}};

    cout << "Name: " << person.first << endl;
    cout << "Age: " << person.second << endl;
    cout << numbers.first + numbers.second << endl;
    cout << num.first + num.second.first + num.second.second << endl;
    cout << arr[0].first << " " << arr[0].second << " " << arr[1].first << " " << arr[1].second << " " << arr[2].first << " " << arr[2].second << " " << arr[3].first << " " << arr[3].second << endl;

    return 0;
}

// changes made for C++14 standard