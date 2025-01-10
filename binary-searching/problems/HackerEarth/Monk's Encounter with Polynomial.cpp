#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a,b,c;
ll calc(ll x)
{
    return (a*x*x)+(b*x)+c;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--)
    {
        ll k; cin>>a>>b>>c>>k;
        ll l = 0,r = 1e6,ans=r;
        while(l<=r)
        {
            ll mid = (l+r)/2;
            if(calc(mid)>=k)
            {
                ans = min(ans,mid);
                r = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}

