#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int arr[4] = {1,2,3,4};
//    ///address
//    cout<<(arr+0)<<endl;
//    cout<<(arr+1)<<endl;
//    cout<<(arr+2)<<endl;
//    cout<<(arr+3)<<endl;
//    ///values
//    cout<<*(arr+0)<<endl;
//    cout<<*(arr+1)<<endl;
//    cout<<*(arr+2)<<endl;
//    cout<<*(arr+3)<<endl;
    for(int *i=arr;i<(arr+4);i++)
    {
        cout<<i<<": "<<*(i)<<endl;
    }
    return 0;
}

