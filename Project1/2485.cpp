#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    int r = a % b;
    if (r == 0)
        return b;
    else
        return gcd(b, r);
}


int main() {
    ios_base::sync_with_stdio(false);
    int num;
    cin >> num;

    int arr[100000];
    int distance[100000];

    for (int i = 0; i < num; i++)
        cin >> arr[i];

    int gcd_, count = 0;

    sort(arr, arr + num);

    for (int i = 0; i < num - 1; i++)
        distance[i] = arr[i + 1] - arr[i];

    gcd_ = distance[0];
    for (int i = 1; i < num - 1; i++) {
        gcd_ = gcd(gcd_, distance[i]);
    }

    for (int i = 0; i < num - 1; i++) {
        count += (distance[i] / gcd_) - 1;
    }

    cout << count;
}



