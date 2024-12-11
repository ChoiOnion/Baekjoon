#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	std::cin.tie(nullptr)->sync_with_stdio(false);

	int cnt = 0;
	int num;
	cin >> num;

	int temp = num;

	while (1) {
		temp = (temp % 10) * 10 + (temp / 10 + temp % 10) % 10;
		cnt++;
		if (num == temp)
			break;
	}
	cout << cnt;
}

