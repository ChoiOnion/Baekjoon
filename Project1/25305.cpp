#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    int arr[1000];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    k--;
    cout << arr[k] << endl;
}
