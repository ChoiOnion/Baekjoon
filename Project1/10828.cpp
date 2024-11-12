#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    stack<int> st;

    int n;
    string str;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> str;

        if (str == "push") {
            int temp;
            cin >> temp;
            st.push(temp);
        }
        else if (str == "pop")
        {
            if (st.empty())
                cout << -1 << "\n";
            else {
                cout << st.top() << "\n";
                st.pop();
            }
        }
        else if (str == "size")
            cout << st.size() << "\n";
        else if (str == "empty") {
            if (st.empty())
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        else if (str == "top") {
            if (st.empty())
                cout << -1 << "\n";
            else {
                cout << st.top() << "\n";
            }
        }
    }
}