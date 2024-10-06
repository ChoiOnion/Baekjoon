#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    map<int, int> card;

    int n, m;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        card[num]++;
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;
        auto it = card.find(num);
        if (it != card.end())
            cout << it->second << " ";
        else
            cout << "0 ";
    }
}