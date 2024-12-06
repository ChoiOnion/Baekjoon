#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct student {
	string name;
	int kor;
	int eng;
	int math;
};

bool cmp(student a, student b) {
	if (a.kor == b.kor && a.eng == b.eng && a.math == b.math)
		return a.name < b.name;
	else if (a.kor == b.kor && a.eng == b.eng)
		return a.math > b.math;
	else if (a.kor == b.kor)
		return a.eng < b.eng;
	else
		return a.kor > b.kor;
}


student arr[100001];

int main() {
	std::cin.tie(nullptr)->sync_with_stdio(false);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i].name >> arr[i].kor >> arr[i].eng >> arr[i].math;
	}

	sort(arr, arr + n, cmp);

	for (int i = 0; i < n; i++)
		cout << arr[i].name << "\n";
}