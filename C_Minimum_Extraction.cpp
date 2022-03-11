#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define pb push_back
#define F first
#define S second
#define MP Make_pair
#define mod 1e9 + 7
#define input        \
    for (auto c : v) \
        cin >> c;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi v;
        int mn = INT_MAX, mn_index;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
            if (mn > temp)
            {
                mn = temp;
                mn_index = i;
            }
        }
        int flag = 0;
        int prev_mn = mn, curr_mn = mn;
        if (n == 1)
        {
            cout << v[0] << endl;
        }
        else
        {

            int flag=0;
            int val= ceil(log2(n));
            for (int i = 0; 3*val; i++)
            {

                prev_mn = curr_mn;
                int loop_mn = INT_MAX;
                for (int j = 0; j < v.size(); j++)
                {
                    v[j] = v[j] - curr_mn;
                    if (loop_mn > v[j])
                    {
                        loop_mn = v[j];
                        mn_index = j;
                    }
                }
                curr_mn = loop_mn;
                v.erase(v.begin() + mn_index);
                if (prev_mn > curr_mn)
                {
                    cout << prev_mn << endl;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << curr_mn << endl;
            }
        }
    }

    return 0;
}