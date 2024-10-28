#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    set<string> s;

    int n;
    cin >> n;

    int count = 0;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        if (str == "ENTER") {
            s.clear();
        }
        else {
            if (s.find(str) == s.end()) {
                s.insert(str);
                count++;
            }
        }
    }
    cout << count;
}