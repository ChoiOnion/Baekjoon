#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int count = 0;

    int num = 665;

    while (count != n) {
        num++;
        int temp = num;
        while (temp >= 666) {
            if (temp % 1000 == 666) {
                count++;
                break;
            }
            temp /= 10;
        }
    }
    cout << num;
}
