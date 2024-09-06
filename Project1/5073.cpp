#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int triangle[1000];
    
    while (1) {
        cin >> triangle[0] >> triangle[1] >> triangle[2];
        sort(triangle, triangle + 3);
        if (triangle[0] == triangle[1] && triangle[1] == triangle[2]) {
            if (triangle[0] == 0)
                break;
            else
                cout << "Equilateral" << endl;
        }
        else if (triangle[2] >= (triangle[0] + triangle[1]))
            cout << "Invalid" << endl;
        else if (triangle[0] != triangle[1] && triangle[0] != triangle[2]
            && triangle[1] != triangle[2])
            cout << "Scalene" << endl;
        else
            cout << "Isosceles" << endl;
    }
}
