#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, pos_i, pos_j;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> x;
            if (x == 1) {
                pos_i = i;
                pos_j = j;
            }
        }
    }
    cout << abs(pos_i - 3) + abs(pos_j - 3);
    return 0;
}
 
