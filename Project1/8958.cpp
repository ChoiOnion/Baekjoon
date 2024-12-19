#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	std::cin.tie(nullptr)->sync_with_stdio(false);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string temp;
		cin >> temp;
		int score = 0;
		int count = 0;
		for (int j = 0; j < temp.length(); j++) {
			if (temp[j] == 'O') {
				score++;
				score += count;
				count++;
			}
			else
				count = 0;
		}
		cout << score << "\n";
	}
}

