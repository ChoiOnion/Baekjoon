#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int count = 0;

    while (n > 0) {
        if (n % 5 == 0) {
            n -= 5;
            count++;
            continue;
        }
        else {
            n -= 3;
            count++;
        }
        if (n < 0)
            count = -1;
    }
    cout << count;
}
