#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;



int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    vector<int> arr;
    int count[8001] = { 0, };
    int max = 0;
    int maxCnt = 0;
    double sum = 0;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
        count[temp + 4000]++;
        sum += temp;
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < 8001; i++) {
        if (count[i] > maxCnt) {
            maxCnt = count[i];
            max = i - 4000;
        }
    }

    int mode = 0;
    int modecnt = 0;
    for (int i = 0; i < 8001; i++) {
        if (count[i] == maxCnt && modecnt == 0)
            modecnt++;
        else if (count[i] == maxCnt && modecnt == 1) {
            mode = i - 4000;
            break;
        }
        mode = max;
    }

    if (round(sum / n) == -0) {
        cout << 0 << '\n';
    }
    else {
        cout << round(sum / n) << '\n';
    }

    cout << arr[n / 2] << '\n';
    cout << mode << '\n';
    cout << arr[n - 1] - arr[0];

}