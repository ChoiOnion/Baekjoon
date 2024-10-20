#include <iostream>
#include <deque>
#include <string>

using namespace std;


int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    deque<int> d;

    int n, a, temp;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;

        switch (a) {
        case 1:
            cin >> temp;
            d.push_front(temp);
            break;
        case 2:
            cin >> temp;
            d.push_back(temp);
            break;
        case 3:
            if (d.empty())
                cout << -1 << "\n";
            else {
                cout << d.front() << "\n";
                d.pop_front();
            }
            break;
        case 4:
            if (d.empty())
                cout << -1 << "\n";
            else {
                cout << d.back() << "\n";
                d.pop_back();
            }
            break;
        case 5:
            cout << d.size() << "\n";
            break;
        case 6:
            if (d.empty())
                cout << "1\n";
            else
                cout << "0\n";
            break;
        case 7:
            if (d.empty())
                cout << -1 << "\n";
            else {
                cout << d.front() << "\n";
            }
            break;
        case 8:
            if (d.empty())
                cout << -1 << "\n";
            else {
                cout << d.back() << "\n";
            }
            break;
        }
    }
}