#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <string>

using namespace std;

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    map<string, bool> name;

    int n, m;
    
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        name[str] = true;
    }

    set<string> result;

    for (int i = 0; i < m; i++) {
        string str;
        cin >> str;
        if (name[str])
            result.insert(str);
    }

    cout << result.size() << "\n";

    for (auto i : result)
        cout << i << "\n";
}