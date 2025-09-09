#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     ll n;
     cin >> n;

     ll ans = 0, prev, curr;
     cin >> prev;

     for(ll i = 1; i < n; i++){
          cin >> curr;
          if(curr < prev){
               ans += prev - curr;
          }
          else{
               prev = curr;
          }
     }

     cout << ans;

     return 0;
}
