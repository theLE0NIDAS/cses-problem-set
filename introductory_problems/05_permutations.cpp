#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     ll n;
     cin >> n;

     if(n == 1){
          cout << "1";
          return 0;
     }

     if(n < 4){
          cout << "NO SOLUTION";
          return 0;
     }

     for(ll i = n; i > 0; i--){
          if(i % 2){
               cout << i << " ";
          }
     }
     for(ll i = n; i > 0; i--){
          if(i % 2 == 0){
               cout << i << " ";
          }
     }

     return 0;
}
