#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int i, int j) {
    return j < i;
}

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    cin >> n;

    int arr[1001];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n, compare);

    int sum = 0;
  
    for(int i = n - 1; i >= 0; i--) {
        int temp = i + 1;
        while (temp > 0) {
            sum += arr[i];
            temp--;
        }
    }

    cout << sum;
}