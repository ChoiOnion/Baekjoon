#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;
string pokemon[100001];

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    map<string, int> dict;

    int n, m;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        pokemon[i] = name;
        dict.insert({ name, i });
    }

    for (int i = 0; i < m; i++) {
        string str;
        cin >> str;
        if (isdigit(str[0]))
            cout << pokemon[(stoi(str)-1)] << "\n";
        else
            cout << dict.find(str)->second + 1 << "\n";
    }
}