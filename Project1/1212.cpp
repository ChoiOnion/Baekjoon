#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    string two[8]={ "000", "001", "010", "011", "100", "101", "110", "111" };

    string num;
    cin >> num;

    int temp;

    for (int i = 0; i < num.length(); i++) {
        temp = num[i] - '0';
        if (i == 0)
            cout << stoi(two[temp]);
        else
            cout << two[temp];
    }
}
