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
int main()
{
/*
*/
    Fast;
    int t; cin >> t;
    while(t --) {
    string now="";
    int n,k; cin >> n >> k;
    for(int i = 0; i < 105; i ++) {
         for(int j = 0; j < k; j ++) {
               now += char(j % 26 + 97);
         }
    }
    for(int i = 0; i < n; i ++) {
        cout << now[i] ;
    }
    cout << "\n";
}



/**/
    ret 0;
}
