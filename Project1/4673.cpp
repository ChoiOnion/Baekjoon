#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int selfNumber(int num) {
    int n = num;

    while (num != 0) {
        n = n + (num % 10);
        num = num / 10;
    }
    return n;
}

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n = 0;
    bool arr[10001] = {false, };

    for (int i = 1; i < 10001; i++) {
        n = selfNumber(i);

        if (n < 10001)
            arr[n] = true;
    }

    for (int i = 1; i < 10001; i++) {
        if (arr[i] == false)
            cout << i << "\n";
    }
}