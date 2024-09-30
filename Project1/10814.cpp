#include <iostream>
#include <algorithm>

using namespace std;

struct member {
    int num, age;
    string name;
};
member arr[100001];

bool cmp(member a,member b) {
    if (a.age == b.age)
        return a.num < b.num;
    else
        return a.age < b.age;
}

int main() {
    ios_base::sync_with_stdio(false);

    int num;
    cin >> num;


    for (int i = 0; i < num; i++) {
        cin >> arr[i].age >> arr[i].name;
        arr[i].num = i;
    }

    sort(arr, arr + num, cmp);

    for (int i = 0; i < num; i++) {
        cout << arr[i].age << " " << arr[i].name << "\n";
    }
}