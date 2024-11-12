#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    set<int> s;

    int n;
    string str;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> str;

        if (str == "add") {
            int temp;
            cin >> temp;
            s.insert(temp);
        }
        else if (str == "remove")
        {
            int temp;
            cin >> temp;
            s.erase(temp);
        }
        else if (str == "check") {
            int temp;
            cin >> temp;
            if (s.find(temp) == s.end())
                cout << 0 << "\n";
            else
                cout << 1 << "\n";
        }
        else if (str == "toggle") {
            int temp;
            cin >> temp;
            if (s.find(temp) == s.end())
                s.insert(temp);
            else
                s.erase(temp);
        }
        else if (str == "empty") {
            s.clear();
        }
        else if (str == "all") {
            for (int i = 1; i <= 20; i++)
                s.insert(i);
        }
    }
}