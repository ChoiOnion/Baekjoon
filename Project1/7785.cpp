#include <iostream>
#include <algorithm>
#include <set>

using namespace std;


int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);


    set<string> set;

    int n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        string name, state;
        cin >> name >> state;
        if (state == "enter")
            set.insert(name);
        else if (state == "leave")
            set.erase(name);
    }

    for (auto it = set.rbegin(); it != set.rend(); it++)
        cout << *it << "\n";
}