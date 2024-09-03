#include <iostream>
using namespace std;

/*
O(g(n)) = {f(n) | 모든 n ≥ n0에 대하여 f(n) ≤ c × g(n)인 양의 상수 c와 n0가 존재한다}

이 정의는 실제 O-표기법(https://en.wikipedia.org/wiki/Big_O_notation)과 다를 수 있다.

함수 f(n) = a1n + a0, 양의 정수 c, n0가 주어질 경우 O(n) 정의를 만족하는지 알아보자.
*/
int main() {
    ios_base::sync_with_stdio(false);

    int a1, a0, c, n;

    cin >> a1 >> a0 >> c >> n;

    if (((a1 * n + a0) <= c * n) && (a1 <= c))
        cout << 1;
    else
        cout << 0;
}