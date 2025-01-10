#include<bits/stdc++.h>
using namespace std;
long long getvalue(long long id)
{
    return (id*(id+1))/2;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long l =0,r=1e9,x=1312486995;
    long long ans = -1;
    while(l<=r)
    {
        long long mid = (l+r)/2;
        if(getvalue(mid)==x)
        {
           ans = mid;
           break;
        }
        if(getvalue(mid)<x)
        {
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }

    }
    cout<<ans<<'\n';
    return 0;
}

