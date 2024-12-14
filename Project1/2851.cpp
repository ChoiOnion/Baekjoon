#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	std::cin.tie(nullptr)->sync_with_stdio(false);

	int score = 0;
	int arr[11];

	for (int i = 0; i < 10; i++)
		cin >> arr[i];

	for (int i = 0; i < 10; i++) {
		if (abs(100 - score - arr[i]) <= abs(100 - score))
			score += arr[i];
		else
			break;
	}

	cout << score << "\n";
}

