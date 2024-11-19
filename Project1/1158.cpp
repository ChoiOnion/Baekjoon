#include <iostream>
#include <queue>
#include <string>

using namespace std;


int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    queue<int> circle;

    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
        circle.push(i);

    cout << "<";
    while (circle.size() != 0) {
        for (int i = 1; i < k; i++) {
            circle.push(circle.front());
            circle.pop();
        }
        cout << circle.front();
        if (circle.size() != 1)
            cout << ", ";
        circle.pop();
    }
    cout << ">";
}