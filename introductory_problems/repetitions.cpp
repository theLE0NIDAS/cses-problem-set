#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     string s;
     cin >> s;

     ll len = 1, maxLen = 1;

     for(ll i = 1; i < static_cast<ll>(s.size()); i++){ 
     // static_cast<ll>(s.size()) due to compiler warning, ll is signed while s.size() is unsigned
          if(s[i - 1] != s[i]){
               len = 0;
          }
          len++;
          maxLen = max(maxLen, len);
     }

     cout << maxLen;

     return 0;
}
