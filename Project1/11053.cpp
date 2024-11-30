#include <iostream>
#include <algorithm>

using namespace std;

int dp[1001];

int main() {
	std::cin.tie(nullptr)->sync_with_stdio(false);

	int arr[1001];

	int n;
	cin >> n;

	int result = 0;

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	for (int i = 1; i <= n; i++) {
		dp[i] = 1;
		for (int j = 1; j <= n; j++) {
			if (arr[i] > arr[j])
				dp[i] = max(dp[i], dp[j] + 1);
		}
		result = max(dp[i], result);
	}

	cout << result;
}