#include <iostream>

using namespace std;

int arr[51][51][51];

int w(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return 1;
    }
    if (arr[a][b][c] != 0) {
        return arr[a][b][c];
    }
    else if (a > 20 || b > 20 || c > 20) {
        arr[a][b][c] = w(20, 20, 20);
        return arr[a][b][c];
    }
    else if (a < b && b < c) {
        arr[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
        return arr[a][b][c];
    }
    else {
        arr[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
        return arr[a][b][c];
    }
}


int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int a, b, c;

    while (true) {
        cin >> a >> b >> c;
        if (a == -1 && b == -1 && c == -1)
            break;
        else
            cout << "w\(" << a << ", " << b << ", " << c << "\) = " << w(a, b, c) << "\n";
    }

}