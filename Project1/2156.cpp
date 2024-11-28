#include <iostream>
#include <algorithm>

using namespace std;

int dp[10001];

int main() {
	std::cin.tie(nullptr)->sync_with_stdio(false);

	int n;
	cin >> n;

	int wine[10001];

	for (int i = 1; i <= n; i++)
		cin >> wine[i];

	dp[1] = wine[1];
	dp[2] = wine[1] + wine[2];

	for (int i = 3; i <= n; i++)
		dp[i] = max(max(dp[i - 3] + wine[i - 1] + wine[i], dp[i - 2] + wine[i]), dp[i - 1]);

	cout << dp[n];
}