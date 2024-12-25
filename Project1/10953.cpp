#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b;
        char c;
        cin >> a >> c >> b;
        cout << a + b << "\n";
    }
}
