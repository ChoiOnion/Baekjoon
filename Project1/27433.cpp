#include <iostream>
#include <algorithm>

using namespace std;

long long int factorial(int n) {
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    cin >> n;
    if (n == 0)
        cout << 1;
    else
        cout << factorial(n);
}