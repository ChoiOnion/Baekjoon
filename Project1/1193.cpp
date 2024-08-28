#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int num;
    cin >> num;

    int linenum = 0;
    int sum = 0;

    while (num > sum) {
        linenum += 1;
        sum += linenum;
    }
 
    int n = sum - num;
    if (linenum % 2)
        cout << 1 + n << "/" << linenum - n;
    else
        cout << linenum - n << "/" << 1 + n;
}