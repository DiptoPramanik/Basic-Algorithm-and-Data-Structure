#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
void reverse(vector<int>&a)
{
    int n = a.size();
    for(int i=0,j=n-1;i<j;i++,j--)
    {
       swap(a[i],a[j]);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<int>v={1,2,3,4};
    reverse(v);
    for(auto u:v) cout<<u<<' ';
    cout<<endl;
    return 0;
}

