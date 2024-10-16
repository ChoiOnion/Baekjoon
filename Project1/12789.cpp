#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    stack<int>wait;

    int n;
    cin >> n;

    int count = 1;
    int temp;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp == count)
            count++;
        else
            wait.push(temp);

        while (!wait.empty() && wait.top() == count) {
            wait.pop();
            count++;
        }
    }

    if (wait.empty())
        cout << "Nice";
    else
        cout << "Sad";
}