#include <bits/stdc++.h> 

#define ll long long
#define ull unsigned long long
#define vi  vector<int> 
#define pb push_back
#define F first
#define S second
#define MP Make_pair
#define mod 1e9+7
#define input for(auto c : v) cin>>c;
using namespace std; 
int func(int A, int B,int l)
{
    int count = 0;
 
    // since, the numbers are less than 2^31
    // run the loop from '0' to '31' only
    for (int i = 0; i < l+1; i++) {
 
        // right shift both the numbers by 'i' and
        // check if the bit at the 0th position is different
        if (((A >> i) & 1) != ((B >> i) & 1)) {
            count++;
        }
    }
 
   return count;
}
int main() 
{
 cout<<__gcd(24,5);
     return 0;
}