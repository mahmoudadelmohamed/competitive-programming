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
6
5 10 2 3 14 5
*/
    Fast;
    int n,up(0); cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i ++) {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for(int i = 0; i < n; i += 2) {
        up += (v[i+1]-v[i]);
    }
    cout << up << "\n";


/**/
    ret 0;
}
