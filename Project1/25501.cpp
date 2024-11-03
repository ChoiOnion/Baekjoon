#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;


int cnt = 0;

int recursion(const char* s, int l, int r) {
    cnt++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
    return recursion(s, 0, strlen(s) - 1);
}

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string str;
        cin >> str;
        cnt = 0;
        cout << isPalindrome(str.c_str()) << " " << cnt << "\n";
    }
}