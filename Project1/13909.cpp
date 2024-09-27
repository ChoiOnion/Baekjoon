#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    //창문이 열려있으려면 약수의 수가 홀수여야 함
    //->완전제곱수

    int num;
    cin >> num;

    int count = 0;
    for (int i = 1; i * i <= num; i++)
        count++;

    cout << count;
}