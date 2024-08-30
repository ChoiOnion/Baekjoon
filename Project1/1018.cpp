#include <iostream>
using namespace std;

char board[51][51];

char wBoard[8][8] = {
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W'
};

char bBoard[8][8] = {
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B'
};

int wCheck(int a, int b) {
	int sum = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[a + i][b + j] != wBoard[i][j])
				sum++;
		}
	}
	return sum;
}

int bCheck(int a, int b) {
	int sum = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[a + i][b + j] != bBoard[i][j])
				sum++;
		}
	}
	return sum;
}

int main() {
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> board[i][j];
    }

	int min = 65;
	int w, b;

	for (int i = 0; i <= n - 8; i++) {
		for (int j = 0; j <= m - 8; j++) {
			int w = wCheck(i, j);
			int b = bCheck(i, j);
			if (b > w) {
				if (min > w)
					min = w;
			}else {
				if (min > b)
					min = b;
			}
		}
	}

	cout << min;
}