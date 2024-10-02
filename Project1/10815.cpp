#include <iostream>
#include <algorithm>
#include <map>

using namespace std;


int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);


    map<int, bool> Map;

    int n, m;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        Map[num] = true;
    }

    cin >> m;

    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;
        if (Map.find(num) == Map.end())
            cout << 0 << " ";
        else
            cout << 1 << " ";
    }
}