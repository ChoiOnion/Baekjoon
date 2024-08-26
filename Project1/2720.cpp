#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int num, c, q, d, n, p;
    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> c;
        q = c / 25;
        d = (c % 25) / 10;
        n = ((c % 25) % 10) / 5;
        p = c % 5;
        cout << q << " " << d << " " << n << " " << p << endl;
    }
}