#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;

    int dp[41] = { 0,1,1 };
    for (int i = 3; i < 41; i++)
        dp[i] = dp[i - 1] + dp[i - 2];

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp == 0)
            cout << 1 << " " << 0 << "\n";
        else if (temp == 1)
                cout << 0 << " " << 1 << "\n";
        else
            cout << dp[temp-1] << " " << dp[temp] << "\n";
    }
}