#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	std::cin.tie(nullptr)->sync_with_stdio(false);

	int t, n;

	cin >> t;

	long long int max = 0;
	string univ = "";

	for (int i = 0; i < t; i++) {
		max = 0;
		univ = "";
		cin >> n;
		for (int j = 0; j < n; j++) {
			string a;
			long long int b;
			cin >> a >> b;
			if (b > max) {
				max = b;
				univ = a;
			}
		}
		cout << univ << "\n";
	}
}

