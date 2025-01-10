#include<bits/stdc++.h>
using namespace std;
const int mx = 1e5+123;
int a[mx];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,q; cin>>n>>q;
    for(int i=0;i<n;i++) cin>>a[i];

    while(q--)
    {
       int target;
       cin>>target;
       int l=0,r=n-1;
       int ans = n;
       while(l<=r)
       {
           int mid = (l+r)/2;
           if(a[mid]==target)
           {
               ans = min(ans,mid);
           }
           if(a[mid]>=target)
           {
               r = mid-1;
           }
           else
           {
               l = mid+1;
           }
       }
       if(ans==n)
       {
           ans=-1;
       }
       cout<<ans<<'\n';
    }
    return 0;
}



