#include<bits/stdc++.h>
using namespace std;
struct info ///declared in globally
{
        double score;
        int age;
        string name;
        vector<int>v;
};
void changestruct(info &myinfo)
{
    myinfo.score++;
    myinfo.age+=5;
    myinfo.name+=" I am change";
}
void printstruct(info myinfo)
{
    cout<<myinfo.score<<' '<<myinfo.age<<' '<<myinfo.name<<' '<<myinfo.v.size()<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    info a,b;
    a.score = 3.35;
    a.age = 25;
    a.name = "dipto";
    a.v = {1,2,3};
    changestruct(a);
    b.score = 3.52;
    b.age = 25;
    b.name = "pramanik";
    b.v = {4,5,6};
    printstruct(a);
    printstruct(b);
    return 0;
}


