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

    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;

    int a3, b3;
    a3 = a1 * b2 + a2 * b1;
    b3 = b1 * b2;

    int n = gcd(a3, b3);
    cout << a3 / n << " " << b3 / n << endl;

}

