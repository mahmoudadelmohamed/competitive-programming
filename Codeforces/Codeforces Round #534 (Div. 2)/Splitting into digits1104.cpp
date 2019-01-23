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
her easy problem need to find divid number what i give to digits on condition that sum of digits equal n 
and 1 <= d <= 9  
for example if i have n = 10 and 
then can i choose 
2
5 5 where 2 is lenght and (5, 5) -> sum of digits equal 10 

NOTE -> simply can exploits condition  1 <= d <= 9 and print all outputs equal 1
then if n = 10 
output =
10 
1 1 1 1 1 1 1 1 1 1 

*/
    Fast;
    int n,digit(-1),x(0); cin >> n;
    x = n;
    vector <int> v;
    for(int i = 9; i >= 1; i --) {
         if(n % i == 0) {
               digit = i; break;
         }
    }
    while(x) {
        v.push_back(digit);
        x -= digit;
    }
    cout << v.size() << "\n";
    for(int i = 0; i < v.size(); i ++) {
        cout << v[i] << " ";
    }

/**/
    ret 0;
}
