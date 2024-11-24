#include <iostream>
#include <algorithm>

using namespace std;

int dp[501][501] = { 0, };

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> dp[i][j];
        }
    }

    int sum = dp[1][1];

    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i + 1; j++) {
            if (j == 1) {
                dp[i][j] += dp[i - 1][j];
            }
            else if (i == j) {
                dp[i][j] += dp[i - 1][j - 1];
            }
            else {
                dp[i][j] += max(dp[i - 1][j - 1], dp[i - 1][j]);
            }
            sum = max(sum, dp[i][j]);
        }
    }
    cout << sum;
}