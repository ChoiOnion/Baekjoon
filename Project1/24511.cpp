#include <iostream>
#include <deque>
#include <string>

using namespace std;
int arr[100001];

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);
    
    deque<int> sq;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (arr[i] == 0)
            sq.push_back(x);
    }
    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        sq.push_front(x);
        cout << sq.back() << " ";
        sq.pop_back();
    }
}