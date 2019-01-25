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
in this problem will give me a list of non-order elements that and then ask to give 
x , y where x, y is divided by all elements of list 
for example if x = 16, y = 15 
then permutation of the list [1, 2, 4, 8, 16, 1, 3, 5, 15], [1, 1, 2, 3, 4, 5, 8, 15, 16] ..ete 
then how can i solve this problem simply we need to classification element like that 
16 -> 1 2 4 8 (16)
15 -> 1 3 5 (15)
so i can take max element and then see if element is mod by max then take it in first vector other thke it in secend vector 
eventually show return the max element in first, secind vectors 


*/
    Fast;
   int n,maxi(0),temp(0); cin >> n;
  /* for(int i = 1; i * i <= n; i ++) {
        if(n % i == 0) {
            if(i != n / i) cout << i << " " << n / i << "\n";
            else cout << i << "\n";
        }
   }*/
   map <int, int> mp;
    vector <int> first, second;
    for(int i = 0; i < n; i ++) {
        cin >> arr[i];
        mp[arr[i]] ++;
        maxi = max(maxi, arr[i]);
    }
    map <int,int> ::iterator it;
    for(it = mp.begin(); it != mp.end(); it ++) {
        if(it->se  == 2) {
            first.push_back(it->fi);
            second.push_back(it->fi);
        }
        else {
           temp = it->fi;
           if(maxi % temp == 0) {
                second.push_back(temp);
           }
           else
           first.push_back(temp);
        }
    }
    cout << first[first.size() - 1] << " " << second[second.size() - 1] << "\n";

/**/
    ret 0;
}
