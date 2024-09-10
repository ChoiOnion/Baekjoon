#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    while (n != 1) {
        for (int i = 2; i <= n; i++) {
            if (n % i == 0) {
                cout << i << endl;
                n = n / i;
                i = 1;
            }
        }
    }
}
