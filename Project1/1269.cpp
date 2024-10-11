#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <string>

using namespace std;

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    set<int>a;
    set<int>b;
    int count = 0;

    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        a.insert(num);
        count++;
    }

    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;
        if (a.find(num) == a.end())
            count++;
        else
            count--;
    }

    cout << count;
}