#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	std::cin.tie(nullptr)->sync_with_stdio(false);
	
	int n;
	cin >> n;

	int result = 0;
	int change = 1000 - n;

	result += change / 500;
	change = change %= 500;

	result += change / 100;
	change = change %= 100;

	result += change / 50;
	change = change %= 50;

	result += change / 10;
	change = change %= 10;

	result += change / 5;
	change = change %= 5;

	result += change / 1;
	change = change %= 1;

	cout << result;
}
