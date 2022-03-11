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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
         int mx=INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mx= max(mx,arr[i]);
        }
        int q ;
        cin>>q;
        int row = ceil(log2(n));
        vector<vector<int>> v(row+2, vector<int>(n, 0));
        for (int j = 0; j < n; j++)
        {
            v[0][j] = arr[j];
        }
        for (int i = 1; i < row+2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                v[i][j] = count(v[i - 1].begin(), v[i - 1].end(), v[i - 1][j]);
            }
        }

        // for (int i = 0; i < mx+1; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         cout<<v[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        while(q--)
        {
            int x,k;
            cin>>x>>k;
            if(k>row)
            {
                cout<<v[row+1][x-1]<<endl;
            }else{
                cout<<v[k][x-1]<<endl;
            }
        }
    }

    return 0;
}