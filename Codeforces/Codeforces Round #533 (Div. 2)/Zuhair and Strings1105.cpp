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
in this problem want to know what is the substrings in string and then need to classified them without intersections
say in case 
aaacaabb
then i can take subsequance aa, ac, aa, bb
then the level = 2 according the problem 
so, i need to make first loop to walk from [a,z] and then compair if that char what i  need then cont that if
same length of k and then print the max pick 
*/
    Fast;
   int n,k,cnt(0),step(0),maxi(0),x;
   string s; cin >> x >> k >>  s;
   n = s.size();
   for(char c = 'a'; c <= 'z'; c ++) {
     for(int i = 0; i < n; i ++) {
           if(c == s[i]) {
                cnt ++;
            }
            else cnt = 0;
             if(cnt == k) {
                step ++; cnt = 0;
           }
     }
     maxi = max(maxi, step);
     step = 0;
    }
    cout << maxi << "\n";
/**/
    ret 0;
}

