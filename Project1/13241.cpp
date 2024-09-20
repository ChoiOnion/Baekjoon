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

    long long int a, b;
    long long int lcd = 0;
    cin >> a >> b;
    lcd = a * b / gcd(a, b);
    cout << lcd << endl;
}
