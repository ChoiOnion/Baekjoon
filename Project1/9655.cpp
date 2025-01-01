#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    cin >> n;

    if (n % 2 == 0)
        cout << "CY";
    else
        cout << "SK";

}
