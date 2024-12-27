#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int a, b, c;
    cin >> a >> b >> c;
    long long int result = a * b * c;

    int arr[10] = { 0, };

    for (int i = result; i > 0; i /= 10) {
        arr[i % 10]++;
    }

    for (int i = 0; i < 10; i++)
        cout << arr[i] << "\n";
}
