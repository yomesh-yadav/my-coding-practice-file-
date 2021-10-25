#include <bits/stdc++.h> 

#define ll long long
#define ull unsigned long long
#define vi  vector<int> 
#define pb push_back
#define F first
#define S second
#define MP Make_pair
#define rep(i,a,b) for(int i = a; i<=b;i++
using namespace std; 

int main() 
{
    int a[5][5];
    for(int i =0;i<5;i++)
    {
        for(int j =0;j<5;j++)
        {
            cin>>a[i][j];
        }
    }
    int row,col;
     for(int i =0;i<5;i++)
    {
        for(int j =0;j<5;j++)
        {
            if(a[i][j]==1)
            {
                row=i;
                col=j;
            }
        }
    }

    cout<<abs(row-2)+abs(col-2);

     return 0;
}