#include <iostream>]

using namespace std;

int arr[41] = { 0, };
int cnt1 = 0, cnt2 = 0;

int fib(int n) {
    if (n == 1 || n == 2) {
        cnt1++;
        return 1;
    }
    else
        return fib(n - 1) + fib(n - 2);
}

void fibonacci(int n) {
    arr[1] = 1;
    arr[2] = 1;
    for (int i = 3; i <= n; i++) {
        arr[n] = arr[n - 1] + arr[n - 2];
        cnt2++;
    }
}

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    cin >> n;

    fib(n);
    fibonacci(n);

    cout << cnt1 << " " << cnt2;
}