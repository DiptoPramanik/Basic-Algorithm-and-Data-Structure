#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 10000007
#define mem(a,b) memset(a, b, sizeof(a) )
const ll mx  = 1e4+123;
ll dp[mx];
int a,b,c,d,e,f;
ll fn(int n)
{
    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;
    if (n == 3) return d;
    if (n == 4) return e;
    if (n == 5) return f;
    if(dp[n]!=-1) return dp[n];
    ll res = (fn(n-1)%MOD + fn(n-2)%MOD + fn(n-3)%MOD +
              fn(n-4)%MOD + fn(n-5)%MOD + fn(n-6)%MOD)%MOD;
    dp[n] = res;
    return dp[n];
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        mem(dp,-1);
        int n; cin>>a>>b>>c>>d>>e>>f>>n;
        cout<<"Case "<<tc<<": "<<(fn(n))%MOD<<'\n';
    }
    return 0;
}

