#include <iostream>
#include <stack>

using namespace std;

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);


    int t;

    cin >> t;

    for (int i = 0; i < t; i++) {
        string str;
        cin >> str;

        stack<char>st;

        string result = "YES";
        for (int j = 0; j < str.length(); j++) {
            if (str[j] == '(')
                st.push(str[j]);
            else if (str[j] == ')' && !st.empty())
                st.pop();
            else {
                result = "NO";
                break;
            }
        }
        if (!st.empty())
            result = "NO";
        cout << result << "\n";
    }

}