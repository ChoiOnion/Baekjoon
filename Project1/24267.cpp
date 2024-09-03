#include <iostream>
using namespace std;

/*
MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n - 2
        for j <- i + 1 to n - 1
            for k <- j + 1 to n
                sum <- sum + A[i] ¡¿ A[j] ¡¿ A[k]; # ÄÚµå1
    return sum;
}
*/
int main() {
    ios_base::sync_with_stdio(false);

    long long n;

    cin >> n;

    cout << (n - 2) * (n - 1) * n / 6 << endl << 3;
}