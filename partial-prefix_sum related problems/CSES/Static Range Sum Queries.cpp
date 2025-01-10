#include<bits/stdc++.h>
using namespace std;
const int mx = 2e5+123;
int a[mx];
long long int prefix_sum[mx];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        prefix_sum[i] = a[i] + prefix_sum[i-1];
    }
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        cout<<prefix_sum[b] - prefix_sum[a-1]<<'\n';
    }
    return 0;
}
