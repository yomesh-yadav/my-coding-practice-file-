#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vii vector<ll>
#define pb push_back
using namespace std;

int main()
{
    int n ;
    cin>>n;
   int val =n;
    for (int i = 1; i <= n-1; i++)
    {
        int k = n;
        for (int j = 1; j <= i; j++)
        {
            cout << k << " ";
            k--;
        }

        for (int j = 1; j <= 2 * n - 2 * i - 1; j++)
        {
            cout << val << " ";
        }
        int it = n - i + 1;
        for (int j = 1; j <= i; j++)
        {
            cout << it << " ";
            it++;
        }
        val--;
        cout << endl;
    }
   
    val = 1;
    for (int i = n; i >= 1; i--)
    {
        int k = n;
        for (int j = 1; j <= i; j++)
        {
            cout << k << " ";
            k--;
        }

        for (int j = 1; j <= 2 * n - 2 * i - 1; j++)
        {
            cout << val << " ";
        }
        int it = n - i + 1;
        for (int j = 1; j <= i; j++)
        {
            if (it != 1)
            {
                cout << it << " ";
                it++;
            }
            else{
                it++;
            }
        }
        val++;
        cout << endl;
    }

    return 0;
}