#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define pb push_back
#define F first
#define S second
#define MP Make_pair
#define mod 1e9 + 7
#define input         \
     for (auto c : v) \
          cin >> c;
using namespace std;

int main()
{
     int t;
     cin >> t;
     while (t--)
     {
          int l, r, k, i, j, prod;
          cin >> l >> r >> k;
          i = l + 1;
          prod = l;
          j = 0;
          while (j < k && i <= r)
          {
               prod = prod * i;
               i++;
               j++;
          }
          if (j >= k)
          {
               int result = prod;
               for (int p = i; p <= r; p++)
               {
                    result = __gcd(result, p);
               }
               if (result > 1)
               {
                    cout << "YES\n";
               }
               else
               {
                    cout << "NO\n";
               }
               
          }else if (i > r)
               {
                    int result = prod;
                    if (result > 1)
                    {
                         cout << "YES\n";
                    }
                    else
                    {
                         cout << "NO\n";
                    }
               }
     }
          return 0;
     }