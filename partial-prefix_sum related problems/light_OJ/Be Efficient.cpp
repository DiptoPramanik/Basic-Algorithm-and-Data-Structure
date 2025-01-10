#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mem(a,b) memset(a,b,sizeof(a))
const int mx  = 1e5+123;
ll a[mx];
ll sum[mx];
ll cnt[mx];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        mem(cnt,0);
        int n,m; cin>>n>>m;
        for(int i=1;i<=n;i++) cin>>a[i];
        ll ans =0;
        for(int i=1;i<=n;i++) sum[i] = sum[i-1] + a[i];
        for(int i=1;i<=n;i++) sum[i]%=m;
        for(int i=0;i<=n;i++) cnt[sum[i]]++;
        for(int i=n;i>=1;i--)
        {
               cnt[sum[i]]--;
               ans+=cnt[sum[i]];
        }
        cout<<"Case "<<tc <<": "<<ans<<endl;
    }
    return 0;
}

