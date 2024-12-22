#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	std::cin.tie(nullptr)->sync_with_stdio(false);

	int m, n;
	cin >> m >> n;

	int min = 0, sum = 0;

    for (int i = 1; i * i <= n; i++)
    {
        if (i * i >= m)
        {
            sum += i * i;
            if (min == 0) 
                min = i * i;
        }
    }
    if (sum == 0)
        cout << "-1\n";
    else
        cout << sum << "\n" << min << "\n";
}
