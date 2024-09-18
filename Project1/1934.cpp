#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    int r = a % b;
    if (r == 0)
        return b;
    else
        return gcd(b, r);
}

int main() {
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int a, b;
    int lcd = 0;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        lcd = a * b / gcd(a, b);
        cout << lcd << endl;
    }
}
