#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     ll t;
     cin >> t;

     while(t--){
          ll y, x;
          cin >> y >> x;

          if(y > x){
               if(y % 2){
                    cout << (y*y - y + 1) - (y - x) << endl;
               }
               else{
                    cout << (y*y - y + 1) + (y - x) << endl;
               }
          }
          else{
               if(x % 2){
                    cout << (x*x - x + 1) + (x - y) << endl;
               }
               else{
                    cout << (x*x - x + 1) - (x - y) << endl;
               }
          }
     }

     return 0;
}
