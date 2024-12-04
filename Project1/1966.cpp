#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
	std::cin.tie(nullptr)->sync_with_stdio(false);

	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		queue<pair<int, int>> q;
		priority_queue<int> pq;
		int cnt = 0;

		int a, b;
		cin >> a >> b;

		for (int j = 0; j < a; j++) {
			int temp;
			cin >> temp;
			q.push({ j, temp });
			pq.push(temp);
		}

		while (!q.empty()) {
			int num = q.front().first;
			int importance = q.front().second;
			q.pop();

			if (pq.top() == importance) {
				pq.pop();
				cnt++;
				if (num == b) {
					cout << cnt << "\n";
					break;
				}
			}
			else
				q.push({ num,importance });
		}
	}
}