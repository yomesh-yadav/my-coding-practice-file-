#include <bits/stdc++.h> 
#define mod 1000000007
#define inf 1000000000000LL
#define root2 1.41421
#define root3 1.73205
#define pi 3.14159
#define MAX 100001
#define cntbit __builtin_popcountll
#define ll long long int
#define PII pair<int, int>
#define f first
#define s second 
#define mk make_pair 
#define PLL pair<ll, ll> 
#define gc getchar
#define pb push_back 

using namespace std; 
ll M[101][101]; 
ll kadane(vector<ll> v) { 
    int n=v.size();
    int i, j; ll ret=0, me=-inf, csum=0; 
    for(i=0;i<n;i++) { 
        csum+=v[i]; 
        if(csum<0)
            csum=0; 
        ret = max(ret, csum); 
        me=max(me, v[i]); } 
    if(me<0)
        return me; 
    else 
        return ret; } 
int main() { 
    int t;
cin>>t;
while(t--)
{
    ll mxsum=-inf, sum, i, j, k, n, m; 
    cin>>n>>m;
    for(i=0;i<n;i++) 
        for(j=0;j<m;j++) 
            cin>>M[i][j]; 
    for(int l=0;l<m;l++) { 
        vector<ll> v(n, 0); 
        for(int r=l;r<m;r++) {
            for(i=0;i<n;i++)
                v[i]+=M[i][r]; 
            mxsum=max(kadane(v), mxsum); } } 
    cout<<mxsum<<endl;
}}