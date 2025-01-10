#include<bits/stdc++.h>
using namespace std;
const int mx  = 2e5+123;
int a[mx];
///time complexity(best and worst case) : O(nlog2n)
///Memory complexity : O(n)
void merge(int l,int mid,int r)
{
    int p = l;
    int q = mid+1;
    int tmp[r-l+1];
    int k=0;
    while(p<=mid and q<=r)
    {
        if(a[p]<=a[q])
        {
           tmp[k] = a[p];
           p++;
           k++;
        }
        else
        {
            tmp[k] = a[q];
            q++;
            k++;
        }
    }
    while(p<=mid)
    {
        tmp[k] =a[p];
        p++;
        k++;
    }
    while(q<=r)
    {
        tmp[k] = a[q];
        q++;
        k++;
    }
    k=0;
    for(int i=l;i<=r;i++)
    {
        a[i] = tmp[k];
        k++;
    }
}
void mergesort(int l,int r)
{
    if(l==r) return;
    int mid = (l+r)/2;
    mergesort(l,mid);
    mergesort(mid+1,r);
    merge(l,mid,r);
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    mergesort(1,n);
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<' ';
    }
    cout<<endl;
    return 0;
}

