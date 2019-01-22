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
then how can i think ..
first need to choose what is the most efficent t to fit with rule |ai - t| <= 1
so need cost |a-b| = (0 or 1)

then i need to Experiment according t = 3 -> x = t - 1 , y = t, z = t + 1
to suer change array will had a cose fit with that rule |ai - t| <= 1
so if i choose t = 3 and elements = 10 1 4
10 -> |10 - 2|, |10 - 3|, |10 - 4| --> min = 6
1 -> |1 - 2|, |1 - 3| , |1 - 4| --> min = 1
4 - > |4 - 2| , |4 - 3|, |4 - 4| --> min = 0
and so on 100 time 
note why can stop when i arrive to 100 
becouse the greatest element can't over 100 
*/
    Fast;
    int n,t(1),maxi(1e6),pos(0); cin >> n;
    for(int i = 0; i < n; i ++) {
        cin >> arr[i];
    }
    for(int t = 1; t <= 5; t ++) {
       int x(0),y(0),z(0),cost(0);
        for(int i = 0; i < n; i ++) {
              x =  abs(arr[i] - (t-1)), y =  abs(arr[i] - t), z = abs(arr[i] - (t+1));
              cout << arr[i] << " -> " << x << " " << y << " " << z << "\n";
              cost += min(x,min(y,z));
        }
        cout << "\n";
        if(cost < maxi) {
            maxi = cost;
            pos = t;
        }
    }
    cout << pos << " " << maxi << "\n";
/**/
    ret 0;
}

