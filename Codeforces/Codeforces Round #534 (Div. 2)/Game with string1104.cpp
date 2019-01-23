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


well in this problem assume that two players play a game
then first player pick two consecutive equal letters in the string and delete them
and secend player do same thing and so on eventually if any player coulden't see any letter to play he will lose
her i can solve problrm by using stack then
assum that s = "abba"
and then assum i have a stack and then add (a) and (b) and if i see s[i] == stack.top
rhen erase top letter and count the operation
if counter is odd number then first player win otherwise second player win
*/
    Fast;
    int n,cnt(0);
    stack <char> st;
    string s; cin >> s;
    n = s.size();
    for(int i = 0; i < n; i ++) {
        if(st.empty() || s[i] != st.top()) {
            st.push(s[i]);
        }
        else {
            st.pop(); cnt ++;
        }
    }
    cout << cnt << "\n";
    cout << (cnt & 1 ? "Yes": "No");

/**/
    ret 0;
}

