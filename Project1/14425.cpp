#include <iostream>
#include <algorithm>
#include <set>

using namespace std;


int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);


    set<string> S;

    int n, m;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        S.insert(str);
    }

    int count = 0;

    for (int i = 0; i < m; i++) {
        string str;
        cin >> str;
        if (S.find(str) != S.end())
            count++;
    }

    cout << count;
}