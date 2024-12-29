#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n, score, p;
    cin >> n >> score >> p;

    int board[50];

    for (int i = 0; i < n; i++)
        cin >> board[i];
    
    sort(board, board + n);

    int rank = 1;
    int count = 1;

    for (int i = 0; i < n; i++) {
        if (score < board[i]) {
            rank++;
            count++;
        }
        if (score == board[i])
            count++;
    }

    if (count > p)
        cout << -1;
    else
        cout << rank;

}
