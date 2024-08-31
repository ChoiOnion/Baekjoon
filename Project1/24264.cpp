#include <iostream>
using namespace std;

/*
MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n
        for j <- 1 to n
            sum <- sum + A[i] × A[j]; # 코드1
    return sum;
}

n^2에 비례하여 코드 수행
*/
int main() {
	ios_base::sync_with_stdio(false);

	long long n;

	cin >> n;

	cout << n*n << endl << 2;
}