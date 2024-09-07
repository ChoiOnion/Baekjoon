#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int a, b;
    a = min(x, y);
    b = min(w - x, h - y);
    cout << min(a, b);
}
