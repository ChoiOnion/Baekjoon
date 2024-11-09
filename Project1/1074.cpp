#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int n, r, c;
int cnt = 0;

void findZ(int x, int y, int size) {
    if (r == y && c == x) {
        cout << cnt;
    }
    else if (c < x + size && r < y + size && c >= x && r >= y) {
        findZ(x, y, size / 2);
        findZ(x + size / 2, y, size / 2);
        findZ(x, y + size / 2, size / 2);
        findZ(x + size / 2, y + size / 2, size / 2);
    }
    else
        cnt += size * size;
}

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    cin >> n >> r >> c;

    findZ(0, 0, pow(2, n));
    
}