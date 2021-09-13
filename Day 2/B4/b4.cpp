#include<bits/stdc++.h>
using namespace std;
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    int tong = n;
    for(int i = 1; i < m; i++) {
        tong = tong * n;
    }
    tong = tong % k;
    cout << tong;
}
int main() {
    solve();
    return 0;
}

## From MyT with luv
## Sai thì thui :))
