#include<bits/stdc++.h>
using namespace std;
const int mx = 2e5+123;
int a[mx],pre_sum[mx];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,q; cin>>n>>q;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) pre_sum[i] = (a[i] ^ pre_sum[i-1]);
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        cout<<(pre_sum[b] ^ pre_sum[a-1])<<'\n';
    }

    return 0;
}

