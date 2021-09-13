#include<bits/stdc++.h>
using namespace std;
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);

int Q;
bool check(int x) {
    if(x == 1) return false;
    for(int i = 2; i*i<=x; i++)
        if(x%i==0) return false;
    return true;
}
void solve() {
    fr("PRIME.INP");
    fw("PRIME.OUT");
    cin >> Q;
    int L[Q], R[Q];
    int dem[Q];
    for(int i = 1; i <= Q; i++) {
        int a, b;
        cin >> a >> b;
        L[i] = a;
        R[i] = b;
        dem[i] = 0;
    }
    for(int i = 1; i <= Q; i++) {
        int tong = 0;
        int a, b;
        a = L[i];
        b = R[i];
        for(int j = a; j <= b; j++)
            if(check(j)) tong++;
        dem[i] = tong;
    }
    for(int i = 1; i <= Q; i++)
        cout << dem[i] << endl;
}
int main() {
    solve();
    return 0;
}

## From MyT with luv
## Sai thì thui :))
