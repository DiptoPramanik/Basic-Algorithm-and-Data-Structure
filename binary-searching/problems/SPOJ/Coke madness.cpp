#include<bits/stdc++.h>
using namespace std;
const int mx = 1e6+123;
int a[mx];
int n;
bool calc(long long int value)
{
    for(int i=1;i<=n;i++)
    {
        value+=a[i];
        if(value<=0) return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        long long int l=1,r=1e14;
        long long int ans = r;
        while(l<=r)
        {
            long long int mid = (l+r)/2;
            if(calc(mid)==true)
            {
                ans = min(ans,mid);
                r = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
        cout<<"Scenario #"<<tc<<": "<<ans<<'\n';

    }
    return 0;
}

