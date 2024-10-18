#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    queue<int> card;

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        card.push(i);

    while (card.size() != 1) {
        card.pop();
        int temp = card.front();
        card.pop();
        card.push(temp);
    }

    cout << card.front();
}