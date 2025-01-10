#include<bits/stdc++.h>
using namespace std;
const int mx =  1e5+123;
int a[mx];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    vector<pair<int,int>>v;
    v.push_back({1,a[0]});
    for(int i=1;i<n;i++)
    {
        v.push_back({v[i-1].second+1,v[i-1].second+a[i]});
    }
    int q; cin>>q;
    while(q--)
    {
        int x; cin>>x;
        int l=0,r=v.size()-1;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if((v[mid].first<=x) and (v[mid].second>=x))
            {
                cout<<mid+1<<'\n';
                break;
            }
            if(v[mid].first>x)
            {
                r = mid-1;
            }
            else
            {
               l = mid+1;
            }
        }
    }
    return 0;
}

