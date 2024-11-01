#include <iostream>
#include <algorithm>

using namespace std;

long long int f(int n) {
    if (n < 1)
        return 0;
    if (n == 1)
        return 1;
    else
        return f(n - 1) + f(n - 2);
}

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    cin >> n;

    cout << f(n);
}