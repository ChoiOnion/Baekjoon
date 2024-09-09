#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int n;

    while (1) {
        cin >> n;
        int sum = 0;
        int count = 0;
        if (n == -1)
            break;
        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                sum += i;
                count++;
            }
        }
        if (sum != n)
            cout << n << " is NOT perfect." << endl;
        else {
            int count2 = 0;
            cout << n << " = ";
            for (int i = 1; i < n; i++) {
                if (n % i == 0) {
                    count2++;
                    if (count2 != count)
                        cout << i << " + ";
                    else
                        cout << i << endl;
                }
            }
        }
    }
}
