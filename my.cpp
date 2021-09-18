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

// codecehf KCON use of kadanes algorithm
int kadanes(int *arr, int n)
{
    int curr_sum = 0;
    int max_so_far = 0;
    for (int i = 0; i < n; i++)
    {
        curr_sum += arr[i];
        max_so_far = max(curr_sum, max_so_far);
        if (curr_sum < 0)
        {
            curr_sum = 0;
        }
    }
    return max_so_far;
}
void solve1()
{
    int t, n, k;
    cin >> t;
    vector<int> v;
    while (t--)
    {
        cin >> n >> k;
        int sum = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            arr[i] = temp;
            sum += arr[i];
        }
        if (k == 1)
        {

            cout << kadanes(arr, n)<<endl;
        }
        else
        {
            int prr[2 * n];
            for (int i = 0, j = 0; i < 2 * n; i++, j++)
            {
                j %= n;
                prr[i] = arr[j];
            }
            if (sum < 0)
            {
                cout<<kadanes(prr,2*n)<<endl;
            }
            if(sum>=0)
            {
                cout<<kadanes(prr,2*n) + (k-2)*sum<<endl;
            }
        }
    }
}

int main()
{
    solve1();
    return 0;
}