#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    string num;
    cin >> num;
    sort(num.begin(), num.end(), greater<char>());
    cout << num;

}