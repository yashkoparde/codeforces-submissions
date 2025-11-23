#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    int kth = a[k-1];
    int cnt = 0;

    for (int x : a)
        if (x >= kth && x > 0)
            cnt++;

    cout << cnt;
    return 0;
}  
