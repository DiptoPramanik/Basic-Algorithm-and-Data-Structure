#include<bits/stdc++.h>
using namespace std;
/// time complexity
///best case : O(n)
///worst case : O(n^2)

///memory complexity : O(1)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<int>v={2,1,4,3,1,2};
    int n = v.size();
    for(int step=1;step<n;step++)
    {
        int i = step -1;
        int key = v[step];
        while(i>=0 and v[i]>key)
        {
            v[i+1] = v[i];
            i--;
        }
        v[i+1] = key;
    }
    for(auto u:v) cout<<u<<' ';
    cout<<'\n';
    return 0;
}

