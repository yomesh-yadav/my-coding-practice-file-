#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define pb push_back
#define F first
#define S second
#define MP Make_pair
#define rep(i, a, b) for(int i = a; i<=b;i++
using namespace std;

ll power(int x, int n )
{
    if(n==0)
    {
        return 1;
    }
    if(n & 1)
    {
        return x*power( x*x, (n-1)/2);
    }
    else
    {
        return power(x*x , n/2);
    }
}

int main()
{
    int x,n;
    cin>>x>>n;
    cout<<power(x,n)<<endl;



    return 0;
}