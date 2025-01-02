#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    cin >> n;

    for (int k = 0; k < n; k++) {
        int arr[10];

        for (int i = 0; i < 10; i++) {
            cin >> arr[i];
        }

        sort(arr, arr + 10);
        cout << arr[7] << "\n";
    }
}
