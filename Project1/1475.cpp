#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int num[10] = { 0, };

    long long n;
    cin >> n;

    for (int i = n; i > 0; i /= 10) {
        if (n == 0)
            break;
        num[(i % 10)] += 1;
    }

    long long temp = num[6] + num[9];
    if (temp % 2 == 0 && temp != 0)
        temp /= 2;
    else {
        temp -= 1;
        temp /= 2;
        temp += 1;
    }


    num[6] = 0;
    num[9] = 0;
    sort(num, num + 10);

    if (num[9] > temp)
        cout << num[9];
    else {
        cout << temp;
    }

}
