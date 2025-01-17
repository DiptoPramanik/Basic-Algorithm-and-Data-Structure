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
        dl x,y,c; cin>>x>>y>>c;
        dl l =0,r=min(x,y);
        dl eps = 1e-7;
        while(r-l>eps)
        {
            dl mid = (l+r)/2;
            dl d = mid;
            dl h1 = sqrt((x*x)-(d*d));
            dl h2 = sqrt((y*y)-(d*d));
            dl h = ((h1*h2)/(h1+h2));
            if(h<c) r = mid;
            else l = mid;
        }
        cout<<"Case "<<tc<<": "<<l<<'\n';
    }
    return 0;
}

