#include <iostream>

using namespace std;
long long ch(int x)
{
   long long a=1;
   for(int i=2;i<=x;i++)
   {
       a=a[i];
   }
   return(a);
}
int main()
{
    int n;
    int s[100000];
    int t,a;
    a=0;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
            cin >>  t;
            if(a < t)
                a=t;
            s[t]++;
    }
    long long d;
    d=0;
    for(int i=1;i<=a;i++)
    {
            if(s[i]>=2)
                    {
                        long long c;
                        c=ch(s[i])/(2ch(s[i]-2));
                        d=(d+c);
                    }
    }
    cout << d;
}
