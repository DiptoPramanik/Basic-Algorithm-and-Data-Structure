#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<int> v ={1,3,5,5,5,5,67,123,125};
    int n = v.size();
    int l=0,r=n-1,first_OC = n,x=5;
    while(l<=r)
    {

        int mid = (l+r)/2;
        if(v[mid]==x)
        {
            first_OC = min(mid,first_OC);
        }
        if(v[mid]>=x)
        {
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    cout<<"First Occurence Of "<<x<<" = "<<first_OC<<'\n';
    l = 0,r=n-1;
    int Last_OC = -1;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(v[mid]==x)
        {
            Last_OC = max(mid,Last_OC);
        }
        if(v[mid]<=x)
        {
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }

    }
    cout<<"Last Occurence Of "<<x<<" = "<<Last_OC<<'\n';
    return 0;
}

