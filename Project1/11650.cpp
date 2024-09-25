#include <iostream>
#include <algorithm>
using namespace std;

struct xy {
    int x;
    int y;
};

struct xy arr[100000];

bool compare(xy a, xy b) {
    if (a.x == b.x)
        return a.y < b.y;
    else
        return a.x < b.x;
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



