#include <iostream>
#include <algorithm>

using namespace std;
int switchArr[101];

int main() {
	std::cin.tie(nullptr)->sync_with_stdio(false);

	int n;
	cin >> n;
	
	for (int i = 1; i <= n; i++)
		cin >> switchArr[i];

	int m;
	cin >> m;

	for (int i = 0; i < m; i++) {
		int s, num;
		cin >> s >> num;
		if (s == 1) {
			for (int j = num; j <= n; j += num) {
				if (switchArr[j] == 0)
					switchArr[j] = 1;
				else if (switchArr[j] == 1)
					switchArr[j] = 0;
			}
		}
		else if (s == 2) {
			int a = num, b = num;
			while (a >= 1 && b <= n) {
				a--;
				b++;
				if (switchArr[a] != switchArr[b])
					break;
			}
			for (int j = a + 1; j <= b - 1; j++) {
				if (switchArr[j] == 0)
					switchArr[j] = 1;
				else if (switchArr[j] == 1)
					switchArr[j] = 0;
			}
		}
	}

	for (int i = 1; i <= n; i++)
	{
		cout << (switchArr[i]) << ' ';
		if (i % 20 == 0)
			cout << '\n';
	}
}