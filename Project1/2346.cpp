#include <iostream>
#include <deque>
#include <string>

struct balloon {
    int n;
    int num;
};

using namespace std;


int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);
    
    deque<balloon> balloons;

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        balloon b;
        b.n = i;
        b.num = num;
        balloons.push_back(b);
    }

    int temp1;
    int temp2 = 0;
    for (int i = 0; i < n - 1; i++) {
        if (temp2 != 0)
            temp1 = temp2;
        if (balloons.size() == n) {
            cout << balloons.front().n << " ";
            temp1 = balloons.front().num;
            balloons.pop_front();
        }
        if (temp1 > 0) {
            for (int j = 1; j < temp1; j++) {
                balloons.push_back(balloons.front());
                balloons.pop_front();
            }
            cout << balloons.front().n << " ";
            temp2 = balloons.front().num;
            balloons.pop_front();
        }
        else {
            for (int j = -1; j > temp1; j--) {
                balloons.push_front(balloons.back());
                balloons.pop_back();
            }
            cout << balloons.back().n << " ";
            temp2 = balloons.back().num;
            balloons.pop_back();
        }
        
    }


}  