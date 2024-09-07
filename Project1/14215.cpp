#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int tri[3];
    cin >> tri[0] >> tri[1] >> tri[2];
    sort(tri, tri + 3);
    int sum = 0;
    for (int i = 1; i <= tri[2]; i++) {
        if (tri[0] + tri[1] > i)
            sum = tri[0] + tri[1] + i;
    }

    cout << sum;
}
