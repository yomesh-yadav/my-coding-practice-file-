#include <bits/stdc++.h>
using namespace std;
// using namespace std;
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define pb push_back
#define F first
#define S second
#define MP Make_pair
#define rep(i, a, b) for(int i = a; i<=b;i++

bool is_prime(int n)
{
    int flag = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            return false;
        }
    }
    if (flag == 1)
    {
        return true;
    }
}

void solve()
{
    int t;
    cin >> t;
    vi v;
    while (t--)
    {
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < 6; i++)
        {
            int temp;
            cin >> temp;
            v.pb(temp);
        }
        sum1 = accumulate(v.begin(), v.begin() + 3, 0);
        sum2 = accumulate(v.begin() + 3, v.end(), 0);
        if (sum1 > sum2)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
        v.clear();
    }
}

void problem_difficulties()
{
    int t;
    cin >> t;
    while (t--)
    {
        set<int> s;
        int arr[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
            s.insert(arr[i]);
        }
        cout << s.size() / 2 << endl;
        s.clear();
    }
}

void practice()
{
    vi s(10);
    for (auto &i : s)
    {
        cin >> i;
    }
    // int m =-s.begin();
    int d = upper_bound(s.begin(), s.end(), 6) - s.begin();
    // cout<<s<<" "<<d;
    cout << " " << d << endl;
}

void do_not_be_distracted()
{
    int t;
    cin >> t;
    while (t--)
    {
        // int n;
        // cin >> n;
        string s="hello";
        // cin >> s;
        // remove duplicates
        string res="";
       s.copy(res,1);
       cout<<res;
        // for (int i = 1; i < n; i++)
        // {
        //     if (s[i] != s[i - 1])
        //     {
        //         res += s[i];
        //     }
        // }
        
        // bool check[256] = {false};
        // int flag = 0;
        // for (int i = 0; i < res.size(); i++)
        // {
        //     if (check[res[i]] == true)
        //     {
        //         cout << "NO\n";
        //         flag = 1;
        //         break;
        //     }
        //     else
        //     {
        //         check[res[i]] = true;
        //     }
        // }
        // if(flag==0)
        // {
        //     cout<<"YES\n";
        // }
        s.clear();
    }
}

int main()
{

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
    //   int n ;
    //     cin>>n;
    //     for(int i =2 ;i<=n;i++)
    //     {
    //         if(is_prime(i))
    //         {
    //             cout<<i<<endl;
    //         }
    //     }
    // solve();
    // problem_difficulties();
    // practice();
    do_not_be_distracted();
    return 0;
}
