#include<bits/stdc++.h>
using namespace std;
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    double l=0,r=5;
    double eps = 1e-9;
    int operation=0;
    while(r - l>eps)
    {
        double mid = (l+r)/2;
        if(mid*mid<=5)
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
        operation++;
    }
    fraction();
    cout<<operation<<' '<<l<<'\n';
    return 0;
}

