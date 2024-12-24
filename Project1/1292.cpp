#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int a, b;

    cin >> a >> b;

    int nums[1000];
    int cnt = 0;
    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < i; j++) {
            if (cnt == 1000)
                break;
            
            nums[cnt] = i;
            cnt++;
        }
    }

    int result = 0;
    for (int i = a - 1; i < b; i++)
        result += nums[i];

    cout << result;
}
