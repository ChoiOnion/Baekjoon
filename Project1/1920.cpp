#include <iostream>
#include <algorithm>

using namespace std;

int arr[100001];

int main() {
	std::cin.tie(nullptr)->sync_with_stdio(false);
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);

	int m;
	cin >> m;

	for (int i = 0; i < m; i++) {
		int a;
		cin >> a;
		bool b = binary_search(arr, arr + n, a);
		cout << b << "\n";
	}
}