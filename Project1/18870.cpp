#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <string>

using namespace std;

int x[1000001];
int xArr[1000001];

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n;

    map<int, int>num;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        xArr[i] = x[i];
        //map에 입력받은 수를 저장
        num[x[i]] = 0;
    }

    sort(xArr, xArr + n);

    for (int i = 1; i < n; i++) {
        if (xArr[i - 1] < xArr[i])
            //정렬된 배열에서 다음 수가 들어왔을 때, 
            //map에 저장된 x가 아닌 다른 수에 +1해서 저장
            num[xArr[i]] = num[xArr[i - 1]] + 1;
    }

    for (int i = 0; i < n; i++)
        cout << num[x[i]] << " ";
}