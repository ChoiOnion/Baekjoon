#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    cin >> n;

    set<string> dance;

    dance.insert("ChongChong");

    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;

        if (dance.find(a) != dance.end()) {
            dance.insert(b);
        }
        else if (dance.find(b) != dance.end()) {
            dance.insert(a);
        }
    }

    cout << dance.size();

}