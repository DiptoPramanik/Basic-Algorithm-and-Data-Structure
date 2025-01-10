#include<bits/stdc++.h>
using namespace std;
const int mx = 1e4+123;
long long int a[mx];
int n,m,k;
bool check(long long int distance)
{
    long long int MakeMegaCity = a[1]+distance;
    int megaCityChance=1;
    for(int i=2;i<=m;i++)
    {
        if(abs(MakeMegaCity-a[i])>distance)
        {
            megaCityChance++;
            if(megaCityChance>k) return false;
            MakeMegaCity = a[i]+distance;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        cin>>n>>m>>k;
        for(int i=1;i<=m;i++) cin>>a[i];
        long long int l=0,r=n;
        long long int ans =r;
        while(l<=r)
        {
            long long int mid =  (l+r)/2;
            if(check(mid))
            {
                ans = min(ans,mid);
                r = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
        cout<<"Case "<<tc<<": "<<ans<<'\n';
    }
    return 0;
}

