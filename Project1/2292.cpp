#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    /*
    1
    2~7   ->6
    8~19  ->12
    20~37 ->18
    38~61 ->24
    Ä­ÀÇ ¼ö°¡ 6*x °³¾¿ ´Ã¾î³²
    */

    int num = 1;
    int i = 1;
    while (num < n) {
        num += i * 6;
        i++;
    }

    cout << i;
}
