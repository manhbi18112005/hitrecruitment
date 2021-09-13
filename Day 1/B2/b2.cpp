#include<bits/stdc++.h>
using namespace std;
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);

int n;
long long check(int x) {
   long long a = 1;
   for(int i = 2; i <= x; i++) {
       a = a * i;
   }
   return(a);
}
void solve() {
    int s[100000];
    int t,a;
    a=0;
    cin >> n;
    for(int i=1;i<=n;i++) {
        cin >> t;
        if(a < t)
        a=t;
        s[t]++;
    }
    long long d;
    d=0;
    for(int i=1;i<=a;i++) {
        if(s[i]>=2) {
            long long c;
            c=check(s[i])/(2*check(s[i]-2));
            d=(d+c);
        }
    }
    cout << d;
}
int main() {
    solve();
    return 0;
}
