#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	std::cin.tie(nullptr)->sync_with_stdio(false);
	
	int x, y;
	cin >> x >> y;
	
	string days[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int date = 0;

	for (int i = 0; i < x - 1; i++)
		date += month[i];
	date += y;

	date %= 7;
	
	if (date == 0)
		date = 7;

	cout << days[date - 1];
}

