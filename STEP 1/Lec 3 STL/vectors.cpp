#include<iostream>
#include <vector>
using namespace std;

// Systematic demonstration of vector usage in C++ STL

int main() {
// 1. Vector Initialization
vector<int> v = {10, 20, 30}; // Direct initialization with values
vector<pair<int, int>> vec;   // Vector of pairs
vector<int> v2(4, 100);       // 4 elements, each initialized to 100
vector<int> v3 = {1, 2, 3, 4, 5}; // List initialization
vector<int> v4 = {6, 7, 8, 9, 10}; // Another vector

// 2. Adding elements
v.push_back(1);        // Adds 1 at the end
v.emplace_back(2);     // Adds 2 at the end (more efficient)
vec.push_back({1, 2}); // Adds pair (1,2)
vec.emplace_back(3, 4);// Adds pair (3,4)
v2.push_back(1);       // Adds 1 at the end

// 3. Removing elements
v2.pop_back();         // Removes last element

// 4. Printing vectors
cout << "v: ";
for (auto it : v) cout << it << " ";
cout << endl;

cout << "v2: ";
for (auto it : v2) cout << it << " ";
cout << endl;

cout << "v3: ";
for (auto it : v3) cout << it << " ";
cout << endl;

cout << "v4: ";
for (auto it : v4) cout << it << " ";
cout << endl;

cout << "vec (pairs):" << endl;
for (auto it : vec) cout << it.first << " " << it.second << endl;
cout << endl;

for(vector<int>::iterator it = v4.begin(); it != v4.end(); it++)
    {
        cout << *(it) << " " ;
    }
    cout << endl;
    
for(auto it = v4.begin(); it != v4.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

// 5. Erasing elements
v.erase(v.begin() + 1); // Erase second element
cout << "v after erase: ";
for (auto it : v) cout << it << " ";
cout << endl;

v4.erase(v4.begin() + 1, v4.begin() + 3); // Erase 2nd and 3rd elements
cout << "v4 after erase: ";
for (auto it : v4) cout << it << " ";
cout << endl;


// 6. Inserting elements
v.insert(v.begin() + 1, 15); // Insert 15 at second position
cout << "v after insert: ";
for (auto it : v) cout << it << " ";
cout << endl;

v3.insert(v3.begin() + 1, 2, 10); // Insert multiple elements
cout << "v3 after insert: ";
for (auto it : v3) cout << it << " ";
cout << endl;

v2.insert(v2.begin() + 2, {200, 300}); // Insert multiple elements
cout << "v2 after insert: ";
for (auto it : v2) cout << it << " ";
cout << endl;

v.insert(v.begin() + 1, v2.begin(), v2.end() ); // Insert range of elements
cout << "v after inserting v2 elements: ";
for (auto it : v) cout << it << " ";
cout << endl;

v4.swap(v3);
cout << "v4 after swap: ";
for (auto it : v4) cout << it << " ";
cout << endl;
vec.clear();
cout << v4.size() << endl;
cout << v4.empty() << endl;
}

// int main() {
//    vector<int> v = {10, 20, 30};
//    v.push_back(1);
//    v.emplace_back(2);
//    cout << v[0] << endl;
//    cout << v[1] << endl;

//    //you can also use pair
//    vector<pair<int, int>> vec;
//    vec.push_back({1, 2}); // while using push back in pair type vector use curly brackets
//    vec.emplace_back(3, 4); // while using emplace back in pair type vector use normal brackets
   
//    vector<int> v2(5,100);
//    v2.push_back(1);
//    v2.pop_back();

//    vector<int>v3 = {1,2,3,4,5};
 
//     // vector<int>::iterator it = v3.begin();
//     vector<int>::iterator ite = v3.end();
//     // cout << *(it) << endl;
//     // it++;
//     // cout << *(it) << endl;
//     // ite -= 2;
//     // cout << *(ite) << endl;

//     vector<int>v4 = {6,7,8,9,10};
//     // for(vector<int>::iterator it = v4.begin(); it != v4.end(); it++)
//     // {
//     //     cout << *(it) << " " ;
    
//     // }
//     // cout << endl;
//     // for(auto it = v4.begin(); it != v4.end(); it++)
//     // {
        
//     //     cout << *(it) << " ";
//     // }
//     // cout << endl;
//     // cout << endl;
//      // v.erase(v.begin() + 1); 
//     for(auto it : v)
//     {
//         cout << it << " ";
//     }
//     cout << endl;
//     for(auto it : v2)
//     {
//         cout << it << " ";
//     }
//     cout << endl;   
//     for(auto it : v3)
//     {
//         cout << it << " ";
//     }
//     cout << endl;
//     for(auto it : v4)
//     {
//         cout << it << " ";
//     }
//     cout << endl;
//     for(auto it : vec)
//     {
//         cout << it.first << " " << it.second << endl;
//     }
//     // erase 
//     v.erase(v.begin() + 1); 
//     for(auto it : v)
//     {
//         cout << it << " ";
//     }

//     cout << endl;

//     v4.erase(v4.begin() + 1, v4.begin() + 3);
//     for(auto it : v4)
//     {
//         cout << it << " ";
//     }
// }

