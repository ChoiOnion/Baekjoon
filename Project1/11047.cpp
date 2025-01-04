#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    long long int coin[11];

    for (int i = 0; i < n; i++) {
        cin >> coin[i];
    }

    int count = 0;

    for (int i = n - 1; i >= 0; i--) {
        if (k == 0)
            break;
        count += (k / coin[i]);
        k -= (k / coin[i] * coin[i]);
    }

    cout << count;
}
