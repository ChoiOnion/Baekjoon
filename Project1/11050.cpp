#include <iostream>

using namespace std;

int factorial(int a) {
    int num = 1;
    for (int i = 1; i <= a; i++) {
        num *= i;
    }
    return num;
}

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    cout << factorial(n) / (factorial(n - k) * factorial(k));
}