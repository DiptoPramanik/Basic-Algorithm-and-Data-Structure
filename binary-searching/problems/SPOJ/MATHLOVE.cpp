#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll calc ( ll n )
{
    return ( n * (n + 1) ) / 2;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t;
    cin >> t;

    while ( t-- ) {
        ll x;
        cin >> x;
        ll ans = -1;

        ll l = 1, r = 1e6;
        while ( l <= r ) {
            ll mid = ( l + r ) / 2;
            if( calc(mid) == x ) {
                ans = mid;
                break;
            }

            if ( calc(mid) < x ) {
                l = mid+1;
            }
            else {
                r = mid-1;
            }
        }

        if ( ans == -1 ) cout << "NAI" << endl;
        else cout << ans << endl;
    }

    return 0;
}


