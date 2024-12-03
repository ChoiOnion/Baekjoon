#include <iostream>
#include <algorithm>

using namespace std;

int arr[1001];
int dp1[1001];
int dp2[1001];

int main() {
	std::cin.tie(nullptr)->sync_with_stdio(false);

	int n;
	cin >> n;

	int result = 0;

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	for (int i = 1; i <= n; i++) {
		int temp = 0;
		for (int j = 1; j <= i; j++) {
			if (arr[i] > arr[j])
				temp = max(temp, dp1[j]);
		}
		dp1[i] = temp + 1;
	}

	for (int i = n; i >= 0; i--) {
		int temp = 0;
		for (int j = n; j >= 0; j--) {
			if (arr[i] > arr[j])
				temp = max(temp, dp2[j]);
		}
		dp2[i] = temp + 1;
	}

	for (int i = 1; i <= n; i++) {
		result = max(result, dp1[i] + dp2[i]);
	}

	cout << result - 1;
}