#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
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
int frq[100];
int main()
{
/*
*/
    Fast;
    int n(1),m(2),z(3),y,b,r; cin >> y >> b >> r;
    for(int i = 0; ; i ++) {
       if(y == n || b == m || r == z) {
            ret cout << n + m + z << "\n" , 0;
       }
        n ++, m ++, z ++;
    }

/**/
    ret 0;
}
