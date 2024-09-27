#include <iostream>
#include <algorithm>

//에라토스테네스의 체 알고리즘을 사용해야 시간초과 안 걸림!

using namespace std;
/* 시간초과
bool isPrime(int num)
{
    if (num <= 1)
        return false;

    if (num == 2 || num == 3)
        return true;

    if (num % 2 == 0 || num % 3 == 0)
        return false;

    for (int i = 5; i * i <= num; ++i)
    {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }

    return true;
}
*/

bool arr[1000001] = { true }; //소수를 저장할 배열

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int num;
    cin >> num;
    
    for (int i = 2; i <= 1000000; i++)
        arr[i] = true;

    //i의 배수인 경우를 false로 변경
    for (int i = 2; i <= 1000000; i++){
        if (arr[i] == false)
            continue;
        else {
            for (int j = i * 2; j < 1000000; j += i) {
                arr[j] = false;
            }
        }
    }

    int n;
    for (int i = 0; i < num; i++) {
        cin >> n;
        int count = 0;
        for (int j = 2; j <= n / 2; j++) {
            if (arr[j]) {
                if (arr[n - j])
                    count++;
            }
        }
        cout << count << "\n";
    }

    /* 시간초과 나는 코드
    for (int i = 0; i < num; i++) {
        cin >> n;
        int count = 0;
        for (int j = 2; j <= n / 2; j++) {
            if (isPrime(j)) {
                if (isPrime(n - j))
                    count++;
            }
        }
        cout << count << "\n";
    }
    */
}