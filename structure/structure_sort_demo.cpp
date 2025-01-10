#include<bits/stdc++.h>
using namespace std;
struct info ///declared in globally
{
    double score;
    int age;
    string name;
};
bool cmp(const info &a,const info &b)
{

    if(a.score>b.score) return true;
    else if(a.score==b.score && a.age<b.age) return true;
    else if(a.score==b.score && a.age==b.age && a.name<b.name) return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    info a,b;
    a.score = 3.35;
    a.age = 25;
    a.name = "dipto";
    b.score = 3.52;
    b.age = 25;
    b.name = "pramanik";
    cout<<cmp(a,b)<<'\n';
    return 0;
}

