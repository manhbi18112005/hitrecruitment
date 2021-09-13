#include<bits/stdc++.h>
using namespace std;
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
int sch;

void solve() {
    cout << "Nhap so cau hoi dung khong a? : ";
    cin >> sch;
    int n[sch];
    int tong[sch];
    for(int i = 1; i <= sch; i++) {
        int a;
        cin >> a;
        n[i] = a;
        tong[i] = 0;
    }
    for(int i = 1; i <= sch; i++) {
        int a;
        a = n[i];
        int first = 0, second = 0;
        first = (a/2) + (a/3) + (a/4);
        second = a;
        if(first > second) tong[i] = first;
        else if(second > first) tong[i] = second;
        else tong[i] = second;
    }
    for(int i = 1; i <= sch; i++) {
        cout << tong[i] << endl;
    }
}
int main() {
    solve();
    return 0;
}
