#include<bits/stdc++.h>
using namespace std;
///time complexity : O(nlog2n)
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
    vector<info>v;
    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
        double score1;
        int age1;
        string name1;
        info a;
        a.score = score1;
        a.age = age1;
        a.name = name1;
        v.push_back(a);
    }
    /*for(auto u:v)
    {
        cout<<u.score<<' '<<u.age<<' '<<u.name<<'\n';
    }*/
    sort(v.begin(),v.end(),cmp);
    for(auto u:v)
    {
        cout<<u.score<<' '<<u.age<<' '<<u.name<<'\n';
    }
    return 0;
}

