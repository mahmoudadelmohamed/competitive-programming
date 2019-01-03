#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
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
map<pair<int,int> , int> mp ;
int main()
{
/*
in this problem need to count the value that have same number of pairs 
let's say in second case 
4
2 2
8 2
-7 0
-2 6
1 -14
16 -12
11 -18
7 -14
then can classification like 
(2, 2) + (7, -14) = (9,-12)
(8, 2) + (1, -14) = (9,-12)
(-7, 0) + (16, -12) = (9,-12)
(-2, 6) + (11, -18) = (9,-12) 
then number of (9, -12) equal to 4 
then the solution equal (9, -12)
*/
    Fast;
    int n; cin >> n;
    pair <int,int> a[n];
    pair <int,int> b[n];
    for(int i = 0; i < n; i ++) {
        int x,y; cin >> x >> y;
        a[i] = make_pair(x,y);
    }
    for(int i = 0; i < n; i ++) {
        int x,y; cin >> x >> y;
        b[i] = make_pair(x,y);
    }
    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < n; j ++) {
            int t1 = a[i].fi + b[j].fi;
            int t2 = a[i].se + b[j].se;
            mp[make_pair(t1,t2)] ++;
        }
    }
    map<pair<int, int>, int> :: iterator iterator_name;
    for(iterator_name = mp.begin(); iterator_name != mp.end(); iterator_name++){
    if(iterator_name->second == n) {
        cout << (iterator_name->first).first << " " << (iterator_name->first).second << "\n";
    }
}

/**/
    ret 0;
}

