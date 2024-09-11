#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int arr[5];
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    int temp;
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << sum / 5 << endl << arr[2];
}
