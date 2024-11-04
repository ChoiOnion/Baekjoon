#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>

using namespace std;

void cantor(int n){
    int line = pow(3, n - 1);
    if (n == 0) {
        cout << "-";
        return;
    }

    cantor(n - 1);

    for (int i = 0; i < line; i++)
        cout << " ";
    cantor(n - 1);
}


int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    while (cin >> n) {
        cantor(n);
        cout << "\n";
    }

}