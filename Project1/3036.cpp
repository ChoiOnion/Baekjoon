#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b)
{
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main() {
	std::cin.tie(nullptr)->sync_with_stdio(false);

	int n;
	cin >> n;

	int arr[101];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 1; i < n; i++) {
		int g = gcd(arr[0], arr[i]);

		cout << arr[0] / g << "/" << arr[i] / g << "\n";
	}

}

