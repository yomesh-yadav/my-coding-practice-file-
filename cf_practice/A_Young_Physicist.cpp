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

int main() 
{
    int n;
    cin>>n;
    int arr[n][3];
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    int res[3]={0};
    for(int j=0;j<3;j++)
    {
        for(int i =0;i<n;i++)
        {
            res[j]+=arr[i][j];
        }
    }
    if(res[0]!=0||res[1]!=0||res[2]!=0)
    {
        cout<<"NO";
    }else{
        cout<<"YES";
    }
     return 0;
}