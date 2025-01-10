#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<int> v ={1,3,5,5,5,5,7,123,125};
    int n = v.size();
    int l=0,r=n-1,x=0;
    int lb = n;
    while(l<=r)
    {
        int mid =(l+r)/2;
        if(v[mid]>=x)
        {
            lb = min(lb,mid);
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    cout<<"LoweBound Of "<<x<<" = "<<lb<<'\n';
    l = 0,r = n-1;
    int up = n;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(v[mid]>x)
        {
            up = min(up,mid);
            r = mid - 1;
        }
        else
        {
            l= mid +1;
        }
    }
    cout<<"UpperBound Of "<<x<<" = "<<up<<'\n';
    return 0;
}

