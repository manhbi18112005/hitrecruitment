#include<bits/stdc++.h>
using namespace std;
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);

int Q;
void solve() {
    cin >> Q;
    int dem[Q];
    //  fr("PRIME.INP");
    int L[Q], R[Q];
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
        a = L[i]; //20
        b = R[i]; //30
        int f = b-a+1; //10
        for(int j = a; j <= b; j++) {
            for(int k = 2; k < b; k++) {
                if(j % k == 0) return;
                tong++;
            }
        }
        cout << tong;
        dem[i] = tong;
    }
    for(int i = 1; i <= Q; i++) {
        cout << dem[i] << endl;
    }
}

int main() {
    solve();

}
