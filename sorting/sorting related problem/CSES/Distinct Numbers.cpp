#include<bits/stdc++.h>
using namespace std;
const int mx = 2e5+123;
int a[mx];
void MeRgE(int l,int mid,int r)
{
   int p = l;
   int q = mid+1;
   int tmp[r-l+1];
   int k=0;
   while(p<=mid && q<=r)
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
       tmp[k] = a[p];
       p++;
       k++;
   }
   while(q<=r)
   {
       tmp[k] = a[q];
       q++;
       k++;
   }
   k = 0;
   for(int i=l;i<=r;i++)
   {
      a[i] = tmp[k];
      k++;
   }
}
void mergeSort(int l,int r)
{
    if(l==r) return ;
    int mid = (l+r)/2;
    mergeSort(l,mid);
    mergeSort(mid+1,r);
    MeRgE(l,mid,r);
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    mergeSort(1,n);
    int cnt = 0;
    for(int i=2;i<=n;i++)
    {
        if(a[i]!=a[i-1]) cnt++;
    }
    cout<<(cnt+1)<<endl;
    return 0;
}

