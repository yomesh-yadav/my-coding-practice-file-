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
     int n;
     cin >> n;
     if (n >= 0)
     {
          cout << n << endl;
     }
     else
     {
          int arr[2];
          arr[0]= n%10;
          n=n/10;
          arr[1]=n%10;
          n=n/10;
          int mn = max(n*10+arr[0],n*10+arr[1]);
          cout<<mn<<endl;

     }

     return 0;
}