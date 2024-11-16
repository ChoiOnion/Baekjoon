#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    cin >> n;

    int arr[100001];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    int max = 0;
    int temp = n;
    for (int i = 0; i < n; i++) {
        int w = arr[i] * temp;
        if (w > max)
            max = w;
        temp--;
    }

    cout << max;
}