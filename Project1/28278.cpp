#include <iostream>
#include <stack>

using namespace std;

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n;

    cin >> n;

    stack<int> st;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        switch (num) {
        case 1:
            int temp;
            cin >> temp;
            st.push(temp);
            break;
        case 2:
            if (st.empty())
                cout << "-1\n";
            else {
                cout << st.top() << "\n";
                st.pop();
            }
            break;
        case 3:
            cout << st.size() << "\n";
            break;
        case 4:
            if (st.empty())
                cout << "1\n";
            else {
                cout << "0\n";
            }
            break;
        case 5:
            if (st.empty())
                cout << "-1\n";
            else 
                cout << st.top() << "\n";
            break;
        }
    }
}