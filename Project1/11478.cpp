#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <string>

using namespace std;

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    string temp;
    cin >> temp;

    set<string> str;

    string s = "";
    for (int i = 0; i < temp.size(); i++) {
        for (int j = i; j < temp.size(); j++) {
            s += temp[j];
            str.insert(s);
        }
        s = "";
    }

    cout << str.size();
}