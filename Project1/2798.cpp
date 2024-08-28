#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;

    int card[100];

    for (int i = 0; i < n; i++) {
        cin >> card[i];
    }

    int total = 0, sum = 0, min = 1000000;

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                sum = card[i] + card[j] + card[k];

                if (m - sum < min && sum <= m) {
                    min = (m - sum);
                    total = sum;
                }
            }
        }
    }

    cout << total;
}