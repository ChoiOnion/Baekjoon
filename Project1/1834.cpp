#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	std::cin.tie(nullptr)->sync_with_stdio(false);

	long long int n;
	cin >> n;

	long long int sum = 0;

	for (long long int i = 1; i < n; i++) {
		sum += (n + 1) * i;
	}
	cout << sum;
}

