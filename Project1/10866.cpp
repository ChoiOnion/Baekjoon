#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    cin >> n;

    deque<int> d;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        if (str == "push_front") {
            int temp;
            cin >> temp;
            d.push_front(temp);
        }
        else if (str == "push_back") {
            int temp;
            cin >> temp;
            d.push_back(temp);
        }
        else if (str == "pop_front") {
            if (d.empty())
                cout << -1 << "\n";
            else {
                cout << d.front() << "\n";
                d.pop_front();
            }
        }
        else if (str == "pop_back") {
            if (d.empty())
                cout << -1 << "\n";
            else {
                cout << d.back() << "\n";
                d.pop_back();
            }
        }
        else if (str == "size") {
            cout << d.size() << "\n";
        }
        else if (str == "empty") {
            if (d.empty())
                cout << 1 << "\n";
            else {
                cout << 0 << "\n";
            }
        }
        else if (str == "front") {
            if (d.empty())
                cout << -1 << "\n";
            else {
                cout << d.front() << "\n";
            }
        }
        else if (str == "back") {
            if (d.empty())
                cout << -1 << "\n";
            else {
                cout << d.back() << "\n";
            }
        }
    }
}