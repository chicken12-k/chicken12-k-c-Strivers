#include<iostream>
#include<set>

using namespace std;

int main(){ 

    multiset<int> ms;  // Multi set are sorted and can have duplicate values
    ms.insert(1); 
    ms.insert(1); 
    ms.insert(1); 
    ms.insert(2); 
    ms.insert(3); 

    ms.erase(1); // Erases all occurrences of 1
    // ms.find(1) gets an iterator to the first '1'
    // ms.erase(ms.find(1)); // Erases only one occurrence of 1

    // Printing the remaining elements
    cout << "Elements in the multiset: ";
    for (int element : ms) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}