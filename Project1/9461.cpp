#include <iostream>
#include <cmath>

using namespace std;

long long dp[1000001];

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    cin >> n;

    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;

    for (int j = 0; j < n; j++) {
        int temp;
        cin >> temp;
        for (int i = 4; i <= temp; i++)
            dp[i] = (dp[i - 3] + dp[i - 2]);
        cout << dp[temp] << "\n";
    }
}