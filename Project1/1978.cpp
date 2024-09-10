#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int num, count = 0;
    for (int i = 0; i < n; i++) {
        cin >> num;

        int temp = 0;

        for (int j = 1; j <= num; j++) {
            if (num % j == 0)
                temp++;
        }
        if (temp == 2)
            count++;
    }

    cout << count;

    
}
