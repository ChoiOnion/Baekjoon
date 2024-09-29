#include <iostream>
#include <algorithm>

using namespace std;

int counting[10001] = { 0 };

int main() {
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        counting[a] = counting[a] + 1;
    }

    for (int i = 1; i < 10001; i++) {
        if (counting[i] > 0) {
            for (int j = 0; j < counting[i]; j++)
                cout << i << "\n";
        }
    }

}