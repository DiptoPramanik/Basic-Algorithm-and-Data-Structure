#include<bits/stdc++.h>
using namespace std;
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define dl double
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        dl L,n,c; cin>>L>>n>>c;
        dl eps = 1e-7;
        dl l1 = ((1+(n*c))*L);
        dl l=0,r=1e18;
        while(r-l>eps)
        {
            dl mid =(l+r)/2;
            dl R = mid;
            dl s= 2*R*asin(L/(2*R));
            if(s<l1) r=mid;
            else l = mid;
        }
        dl R = l;
        dl d = sqrt((R*R)-(L/2)*(L/2));
        dl h = R - d;
        fraction();
        cout<<"Case "<<tc<<": "<<h<<'\n';
    }
    return 0;
}

