#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>

using namespace std;

void hanoi(int n, int start, int mid, int end) {
    if (n == 1)
        cout << start << " " << end << "\n";
    else {
        hanoi(n - 1, start, end, mid);
        cout << start << " " << end << "\n";
        hanoi(n - 1, mid, start, end);
    }
}

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    cin >> n;

    cout << (int)(pow(2, n)) - 1 << "\n";
    hanoi(n, 1, 2, 3);

}