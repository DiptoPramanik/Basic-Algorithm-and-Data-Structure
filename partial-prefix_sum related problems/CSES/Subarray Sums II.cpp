#include<bits/stdc++.h>
using namespace std;
const int mx = 2e5+123;
long long int a[mx],pre_sum[mx];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x; cin>>n>>x;
    map<long long int,int>mp;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        pre_sum[i] = a[i] + pre_sum[i-1];
    }
    for(int i=0;i<=n;i++)
    {
       mp[pre_sum[i]]++;
    }
    long long int ans = 0;
    for(int i=n;i>0;i--)
    {
       mp[pre_sum[i]]--;
       long long int sub = pre_sum[i] - x;
       ans+=mp[sub];
    }
    cout<<ans<<'\n';
    return 0;
}

