
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int num;
    cin >> num;

    int x, y;
    int minX = 10000;
    int minY = 10000;
    int maxX = -10000;
    int maxY = -10000;

    for (int i = 0; i < num; i++) {
        cin >> x;
        cin >> y;
        if (x < minX)
            minX = x;
        if (x > maxX)
            maxX = x;
        if (y < minY)
            minY = y;
        if (y > maxY)
            maxY = y;
    }

    cout << (maxX - minX) * (maxY - minY);

}
