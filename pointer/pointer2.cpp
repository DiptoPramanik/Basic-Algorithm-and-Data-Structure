#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
   ///address swap
   int *tmp = a;
   a = b;
   b = tmp;

}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ///swap
    int a=3,b=4;
    cout<<"Before swap :"<<(&a)<<' '<<(&b)<<endl;
    swap(a,b);
    cout<<"After swap :"<<(&a)<<' '<<(&b)<<endl;
    cout<<"a="<<a<<' '<<"b="<<b<<endl;
    return 0;
}

