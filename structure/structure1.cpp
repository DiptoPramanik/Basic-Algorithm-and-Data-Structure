#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    struct info//locally declared but naturally it's declared in globally
    {
        double score;
        int age;
        string name;
    };
    info a,b;
    a.score = 3.35;
    a.age = 25;
    a.name = "dipto";
    cout<<a.score<<' '<<a.age<<' '<<a.name<<endl;
    b.score = 3.52;
    b.age = 25;
    b.name = "pramanik";
    cout<<b.score<<' '<<b.age<<' '<<b.name<<endl;
    return 0;
}

