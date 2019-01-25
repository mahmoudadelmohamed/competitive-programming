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
int arr[1005];
int main()
{
/*
*/
    Fast;
    int n; cin >> n;
    for(int i = 0; i < n; i ++) {
            int r1,l1,r2,l2; cin >> l1 >> r1 >> l2 >> r2;
            if(l1 == l2) cout << l1 << " " << r2  << "\n";
            else cout << l1 << " " << l2 << "\n";
    }

/**/
    ret 0;
}
