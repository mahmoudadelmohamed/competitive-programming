#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <map>
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
int arr[N];
int main()
{
  int t; cin >> t;
  while(t --) {
    int n; cin >> n;
    for(int i = 0; i < n; i ++) {
      cin >> arr[i];
    }
    bool ok = true;
    sort(arr, arr + n);
    for(int i = 1; i < n; i ++){
      ok &= arr[i] - arr[i - 1] <= 1;
    }
    puts(ok ? "YES" : "NO");
  }
 
 /**/
    ret 0;
}
