#include<bits/stdc++.h>
using namespace std;
///time complexity
///best case : O(n)
///worst case : O(n^2)

///memory complexity : O(1)

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<int>v = {3,2,1,4,2,1};
    int n = v.size();
    for(int step=0;step<n;step++)
    {
        bool is_sorted = true;
        for(int i=0;i<n-step-1;i++)
        {
            if(v[i]>v[i+1])
            {
                swap(v[i],v[i+1]);
                is_sorted = false;
            }
        }
        if(is_sorted) break;
    }
    for(auto u:v) cout<<u<<' ';
    cout<<'\n';
    return 0;
}

