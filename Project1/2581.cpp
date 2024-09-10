#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int m, n;
    cin >> m >> n;

    int sum = 0;
    int min = n;

    for (int i = m; i <= n; i++) {
        int temp = 0;

        for (int j = 1; j <= i; j++) {
            if (i % j == 0)
                temp++;
        }
        if (temp == 2) {
            sum += i;
            if (i < min)
                min = i;
        }
    }

    if (sum == 0)
        cout << -1 << endl;
    else
        cout << sum << endl << min << endl;
}
