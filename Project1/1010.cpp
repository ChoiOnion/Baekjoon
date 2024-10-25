#include <iostream>

using namespace std;

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, m;
        int cnt = 1, tmp = 1;
        cin >> n >> m;
        for (int i = m; i > m - n; --i) {
            cnt = cnt * i;
            cnt = cnt / tmp++;
        }
        cout << cnt << "\n";
    }
}