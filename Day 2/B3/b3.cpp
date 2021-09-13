#include<bits/stdc++.h>
using namespace std;
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);

int n;
void solve() {
    while(cin >> n) {
        int tong = 0;
        int first = 0, second = 0;
        first = (n/2) + (n/3) + (n/4);
        second = n;
        if(first > second) tong = first;
        else if(second > first) tong = second;
        else tong = second;
        cout << tong << endl;
    }
}
int main() {
    solve();
    return 0;
}
