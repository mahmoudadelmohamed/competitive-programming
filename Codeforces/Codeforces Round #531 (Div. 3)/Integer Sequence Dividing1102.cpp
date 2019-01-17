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
int main()
{
/*
*/
    Fast;
    ll n,S(0); cin >> n;
    S = (n * (n + 1)) / 2;
    if(S & 1) {
        cout << "1\n";
    }
    else cout << "0\n";


/**/
    ret 0;
}
