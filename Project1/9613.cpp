#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int x, int y) {
	if (x % y == 0)
		return y;
	else
		return gcd(y, x % y);
}

int main() {
	int t, n;
	long long arr[101] = { 0, };
	long long sum = 0;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;
		sum = 0;
		for (int j = 0;  j < n; j++) {
			cin >> arr[j];
		}
		for (int k = 0; k < n; k++) {
			for (int h = k + 1; h < n; h++) {
				sum += gcd(arr[k], arr[h]);
			}
		}
		cout << sum << "\n";
	}
}