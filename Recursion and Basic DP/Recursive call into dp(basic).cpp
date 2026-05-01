/*#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if(n==1) return 1;
    int res = n*factorial(n-1);
    return res;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin>>n;
    cout<<factorial(n)<<'\n';
    return 0;
}
*/
/*#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n)
{
    if(n==1) return 0;
    if(n==2) return 1;
    int res = fibonacci(n-1)+fibonacci(n-2);
    return res;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin>>n;
    cout<<fibonacci(n)<<'\n';
    return 0;
}
//Time Complexity = O(2^n)
*/
/*
#include<bits/stdc++.h>
using namespace std;
long long int dp[61];
long long int cnt=0;
int fibonacci(int n)
{
    cnt++;//for observing How many times operations occurs
    if(n==1) return 0;
    if(n==2) return 1;
    if(dp[n]!=-1) return dp[n];
    dp[n] = fibonacci(n-1)+fibonacci(n-2);
    return dp[n];
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<fibonacci(n)<<'\n';
    return 0;
}
//Time Complexity = O(n)
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
const int mx = 1e5+123;
int dp[mx];
ll fibonacci(int n)
{
    if(n==1) return 0;
    if(n==2) return 1;
    if(dp[n]!=-1) return dp[n];
    ll res = ((fibonacci(n-1)%MOD) + (fibonacci(n-2)%MOD))%MOD;
    dp[n]=res;
    return res;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //int n; cin>>n;
    memset(dp,-1,sizeof(dp));
    //cout<<fibonacci(n)<<'\n';
    cout<<fibonacci(1000)<<'\n';
    return 0;
}
//Time Complexity = O(n)