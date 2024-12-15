#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int arr[30001] = { 0, };
int mt[30001];

int main() {
	std::cin.tie(nullptr)->sync_with_stdio(false);


	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> mt[i];

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (mt[i] > mt[j])
				arr[i]++;
			else
				break;
		}
	}

	sort(arr, arr + n);
	cout << arr[n - 1];
}

