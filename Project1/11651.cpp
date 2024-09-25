#include <iostream>
#include <algorithm>
using namespace std;

struct xy {
    int x;
    int y;
};

struct xy arr[100000];

bool compare(xy a, xy b) {
    if (a.y == b.y)
        return a.x < b.x;
    else
        return a.y < b.y;
}

int main() {

    ios_base::sync_with_stdio(false);
    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
        cin >> arr[i].x >> arr[i].y;

    sort(arr, arr + num, compare);

    for (int i = 0; i < num; i++) {
        cout << arr[i].x << " " << arr[i].y << "\n";
    }
}



