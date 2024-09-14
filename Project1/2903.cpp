#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int num = 2;

    for (int i = 0; i < n; i++) {
        num = num * 2 - 1;
    }


    cout << num * num;
}
