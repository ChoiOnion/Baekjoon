#include <iostream>
#include <algorithm>
using namespace std;
bool isPrime(int num)
{
    if (num <= 1)
        return false;

    if (num == 2 || num == 3)
        return true;

    if (num % 2 == 0 || num % 3 == 0)
        return false;

    for (int i = 5; i * i <= num; ++i)
    {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }

    return true;
}


int main() {
    ios_base::sync_with_stdio(false);
    int a = 1;
    while (a != 0) {
        int b;
        cin >> a;
        b = 2 * a;
        int sum = 0;
        a++;
        while (a <= b) {
            if (isPrime(a))
                sum++;
            a++;
        }
        if (a != 1)
            cout << sum << "\n";
        a--;
    }
}

