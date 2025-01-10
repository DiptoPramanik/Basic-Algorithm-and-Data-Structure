/*
#Problem :k (IIUC)-Match the Strings

You will be given a string S of length N and another string P of length M. Let's define a function, F(X, Y).
It takes two string X and Y having same length and returns an integer, their match_score.

The match_score is total number of positions where the characters of both strings match.
Example: F("aia", "iai") = 0, F("aia", "aaa") = 2, F("abbadadda", "bbbaaaccc") = 4.
Print the summation of F(X, P) where X is a substring having length M of string S. So, there will be total N-M+1 different X.

Input
Input starts with an integer, T, denoting the number of test cases. For each test case,
the first line contains and string S and the second line contains another string P.

Output
For each test case, print a single line in this format Case T: D.
Here T denotes the case number and D denotes the answer.

Constraints
1<T<= 100
1<M<= N <= 30000
The strings will contain only the first 10 lowercase English letters.

Sample Input
2
abagig
bgi
haffidafidfid
hafd
Output for Sample Input
Case 1: 3
Case 2: 10

*/

#include<bits/stdc++.h>
using namespace std;
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx = 3e4+123;
int sum[mx];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    ///O(T*30*n) = 100 * 30 * 30000 = 90000000
    for ( int tc = 1; tc <= t; tc++ ) {
        mem( sum, 0 );

        string s, p;
        cin >> s >> p;

        int n = s.size();
        int m = p.size();

        long long int  ans = 0;

        ///O(10*3*n)
        for ( int c = 0; c < 10; c++ ) {
            char ch = c + 'a';

            ///O(n)
            for ( int i = 0; i < n; i++ ) {
                sum[i+1] = ( s[i] == ch );
            }
            ///O(n)
            for ( int i = 1; i <= n; i++ ) sum[i] += sum[i-1];

            ///O(m)
            for ( int i = 0; i < m; i++ ) {
                if ( p[i] == ch ) {
                    int l = i+1;
                    int cnt = m - i - 1;
                    int r = n - cnt;

                    ans += ( sum[r] - sum[l-1] );
                }
            }
        }

        cout << "Case " << tc << ": " << ans << endl;
    }

    return 0;
}
