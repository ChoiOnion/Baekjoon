#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(string a, string b) {
    if (a.length() == b.length())
        return a < b;
    else
        return a.length() < b.length();
}

int main() {
    ios_base::sync_with_stdio(false);

    int num;
    cin >> num;

    string arr[20001];

    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + num, cmp);

    for (int i = 0; i < num; i++) {
        if (arr[i] == arr[i - 1])
            continue;
        cout << arr[i] << "\n";
    }
}