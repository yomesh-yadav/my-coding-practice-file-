#include <bits/stdc++.h> 

#define int long long
#define ull unsigned long long
#define vi  vector<int> 
#define pb push_back
#define F first
#define S second
#define MP Make_pair
#define mod 1e9+7
#define endl '\n'
using namespace std; 

void solve()
{
    int n,d;cin>>n>>d;
    set<int> s;
    int gc = __gcd(n,d);
    n=abs(n);
    n=n/gc;d=d/gc;
    int r=n;
    if(n==0)
    {
        cout<<0<<endl;
        return;
    }
    if(n%d==0)
    {
        cout<<float(n)/d<<endl;
        return;
    }
    if(n>d)
    {
        r=n%d;
    }
    s.insert(r);
    int calc_array[11];
    calc_array[0]=0;
    for(int i=1;i<11;i++)
    {
        calc_array[i]= i*d;
    }
    string res="";
    while (r!=0 || s.find(r)!=s.end())
    {

            
       r=r*10;
        
        if(r<d)
        {
            res+='0';
            continue;
        }
        
        int it = lower_bound(calc_array,calc_array+11,r)-calc_array;
        
        if(calc_array[it]==r)
        {
            r=0;res+=it;
        }else{
            it--;
            r=r-calc_array[it];
            res+= it;
        }
        s.insert(r);
    }
    


}
signed main() 
{
 ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int _t;cin>>_t;
while(_t--)
{
solve();
}
     return 0;
}