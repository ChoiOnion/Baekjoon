#include <iostream>
using namespace std;

/*
MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n
        for j <- 1 to n
            for k <- 1 to n
                sum <- sum + A[i] ¡¿ A[j] ¡¿ A[k]; # ÄÚµå1
    return sum;
}
*/
int main() {
    ios_base::sync_with_stdio(false);

    long long n;

    cin >> n;

    cout << n * n * n << endl << 3;
}