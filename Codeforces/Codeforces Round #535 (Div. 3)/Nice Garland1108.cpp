#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include<map>
#define se second
#define fi first
#define pb push_back
#define ll long long
#define vii vector< pair<int,int> >
#define ret return
#define sz(v) v.size()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int const N = 1e5 + 5 ;
int dx[] = {0,0,1,-1,1,1,-1,-1};
int dy[] = {1,-1,0,0,1,-1,-1,1};
int arr[1005];
int main()
{
/*

in this problem garland consisting n lamps with three colors (red=R, green=G or blue=B) and then need to become garland nice
so how that by if any two lamps same color have distance divisible by three between them.
then should be satisfied |i−j| mod 3=0
then how can i solve this problem
simply it's easy to see pattern of nice garland with
BGR -> BGRBGR..
BRG -> BRGBRG..
GBR -> GBRGBR..
GRB -> GRBGRB..
RBG -> RBGRBG..
RGB -> RGBRGB..
then can compair the nice string with givin string and then count the cost and minimiz the value of givin compire and print
the sting with min cost ..


*/
    Fast;
    int cur(0),n(0),x;
    string s="GRB",t,now=""; cin >> x >> t;
    vector <string> v;
    vector < pair <int,string> > p;
    n = t.size();
    sort(s.begin(),s.end());
   do {
        for(int i = 0; i < n; i ++) {
        if(t[i] != s[i%3]) {
                cur ++;
            }
                now += s[i%3];
        }
       // cout << t << " -> " << now << " " << cur << "\n";
         p.push_back({cur,now});
            now = ""; cur = 0;
   }
   while(next_permutation(s.begin(),s.end()));
    sort(p.begin(),p.end());
   cout << p[0].fi << "\n" << p[0].se << "\n";



/**/
    ret 0;
}

