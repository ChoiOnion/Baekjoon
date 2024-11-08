#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

set<int> cnt[1001];
int arr[1001][5];
int maxNum, maxCnt;

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++)
            cin >> arr[i][j];
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (j != k && arr[j][i] == arr[k][i]) 
                    cnt[j].insert(k);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (maxCnt < cnt[i].size()) {
            maxCnt = cnt[i].size();
            maxNum = i;
        }
    }

    cout << maxNum + 1;
}