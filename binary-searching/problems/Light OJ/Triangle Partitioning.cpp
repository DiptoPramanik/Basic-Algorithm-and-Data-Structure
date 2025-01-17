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
        dl AB,AC,BC,R; cin>>AB>>AC>>BC>>R;
        dl l=0,r=AB;
        dl eps = 1e-7;
        while(r-l>eps)
        {
            dl mid = (l+r)/2;
            dl AD = mid;
            dl x = AD/AB;
            dl AE = AC*x;
            dl DE = BC*x;
            dl sADE = (AD+AE+DE)/2;
            dl sABC = (AB+AC+BC)/2;
            dl aADE = sqrt(sADE*(sADE-AD)*(sADE-AE)*(sADE-DE));
            dl aABC = sqrt(sABC*(sABC-AB)*(sABC-AC)*(sABC-BC));
            dl Trapezium = aABC - aADE;
            dl R1 = aADE/Trapezium;
            if(R1>R) r = mid;
            else l = mid;
        }
        fraction();
        cout<<"Case "<<tc<<": "<<l<<'\n';
    }
    return 0;
}

