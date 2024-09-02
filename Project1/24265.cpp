#include <iostream>
using namespace std;

/*
MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n - 1
        for j <- i + 1 to n
            sum <- sum + A[i] × A[j]; # 코드1
    return sum;
}

인덱스 확인!
*/
int main() {
    ios_base::sync_with_stdio(false);

    long long n;

    cin >> n;

    cout << (n * (n - 1)) / 2 << endl << 2;
}