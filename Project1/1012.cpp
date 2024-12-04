#include <iostream>
#include <algorithm>

using namespace std;

int arr[51][51] = { 0, };
int cnt = 0;

void count(int x, int y, int m, int n, int a) {
	if (x == m || y == n || x < 0 || y < 0)
		return;

	arr[x][y] = 0;

	if (a == 0)
		cnt++;
	if (arr[x + 1][y] == 1) {
		count(x + 1, y, m, n, 1);
	}
	if (arr[x][y + 1] == 1) {
		count(x, y + 1, m, n, 1);
	}
	if (arr[x - 1][y] == 1) {
		count(x - 1, y, m, n, 1);
	}
	if (arr[x][y - 1] == 1) {
		count(x, y - 1, m, n, 1);
	}
}

int main() {
	std::cin.tie(nullptr)->sync_with_stdio(false);
	
	int t, m, n, k;
	cin >> t;
	
	for (int q = 0; q < t; q++) {
		cin >> m >> n >> k;

		for (int i = 0; i < k; i++) {
			int a, b;
			cin >> a >> b;
			arr[a][b] = 1;
		}

		cnt = 0;

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (arr[i][j] == 1) {
					count(i, j, m, n, 0);
				}
			}
		}

		cout << cnt << "\n";
	}
}