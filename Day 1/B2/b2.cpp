#include<bits/stdc++.h>
using namespace std;
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);


void solve() {
    int n;
    cin >> n;
    int a[n];
    int cap = 0;
    for(int i = 1; i <= n; i++) {
        int heh;
        cin >> heh;
        a[i] = heh;
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(a[i] == a[j]) {
                cap++;
                cout << a[i];
            }
        }
    }
    cout << cap;
}
int main() {
    solve();
    return 0;
}
