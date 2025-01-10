#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
   ///value swap
   int tmp = *a;
   *a = *b;
   *b = tmp;

}
int main()
{
     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     int a=3,b=4;
     swap(a,b);
     cout<<"a="<<a<<' '<<"b="<<b<<endl;
    return 0;
}

