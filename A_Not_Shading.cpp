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
    int n,m,r,c;
    cin>>n>>m>>r>>c;
    char mat[n][m];
    int col[m],row[n];
    int main_black_flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]=='B')
            {
                main_black_flag=1;
            }
            
        }
    }
    if(main_black_flag==0)
    {
        cout<<-1<<endl;
    }else{
        if(mat[r-1][c-1] == 'B')
        {
            cout<<0<<endl;
        }else{
            int col_black=0,row_black=0;
            for(int i =0;i<n;i++)
            {
                if(mat[i][c-1]=='B')
                {
                    col_black=1;
                    break;
                }

            }
            for(int j=0;j<m;j++)
            {
                if(mat[r-1][j]=='B')
                {
                    row_black=1;
                    break;
                }
            }
            if(row_black || col_black)
            {
                cout<<1<<endl;
            }else{
                cout<<2<<endl;
            }
        }

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