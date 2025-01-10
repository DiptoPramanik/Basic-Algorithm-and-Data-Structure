#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a[] = {2,4,10,13,23,25,30,31,35,39,42,43,50,52,54,59,70};
    int n = 17;
    int l = 0,r = 16;
    int target = 30;
    int ans =-1;
    while(l<=r)
    {
        int mid = (l+r)/2;
        ///cout<<l<<' '<<r<<' '<<mid<<'\n';
        if(a[mid]==target)
        {
            ans = mid;
            break;
        }
        if(a[mid] < target)
        {
            l = mid + 1;
        }
        else
        {
            r  = mid - 1;
        }
    }
    cout << ans <<'\n';
    return 0;
}

