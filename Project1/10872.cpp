#include <iostream>

using namespace std;
int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    cin >> n;

    int cnt = 1;

    for (int i = 1; i <= n; i++)
        cnt *= i;
    cout << cnt;
}