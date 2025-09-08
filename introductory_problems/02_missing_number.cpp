#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool pred(ll m, vector<ll>& nums){
     if(nums[m] == m + 1){
          return 1;
     }
     return 0;
}

int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     ll n;
     cin >> n;

     vector<ll> nums(n - 1);

     for(ll i = 0; i < n - 1; i++){
          cin >> nums[i];
     }

     sort(nums.begin(), nums.end());

     ll l = -1, r = n + 1, m;
     while(l + 1 < r){
          m = l + (r - l)/2;

          if(pred(m, nums)){
               l = m;
          }
          else{
               r = m;
          }
     }

     cout << r + 1;

     return 0;
}
