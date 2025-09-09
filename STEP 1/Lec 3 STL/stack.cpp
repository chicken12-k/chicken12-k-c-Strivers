#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(4);
    st.pop();

    cout << st.top() << endl;
    cout << st.size() << endl;
    cout << st.empty() << endl;

// time complexity of all functions is O(1)
}

//LIFO - Last In First Out