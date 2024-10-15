#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    
    while (1) {
        string str;
        getline(cin, str);

        if (str == ".")
            break;

        stack<char>st;

        string result = "yes";
        int j = 0;

        for (int j = 0; j < str.length(); j++) {
            if (str[j] == '(' || str[j] == '[')
                st.push(str[j]);
            else if (str[j] == ')') {
                if (!st.empty() && st.top() == '(')
                    st.pop();
                else
                    result = "no";
            }
            else if (str[j] == ']') {
                if (!st.empty() && st.top() == '[')
                    st.pop();
                else
                    result = "no";
            }
        }
        if (!st.empty())
            result = "no";

        cout << result << "\n";
    }

}