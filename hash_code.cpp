#include <bits/stdc++.h>

#define int long long
#define ull unsigned long long
#define vi vector<int>
#define pb push_back
#define F first
#define S second
#define MP Make_pair
#define mod 1e9 + 7
#define endl '\n'
using namespace std;

struct in_person
{
public:
    
    vector<pair<string, int>> person(int n)
    {
        vector<pair<string, int>> details;
        for (int i = 0; i < n; i++)
        {
            string s;
            int val;
            cin >> s >> val;

            details.push_back({s, val});
        }
        return details;
    }
    vector<pair<string, int>> project_info(int n)
    {
        vector<pair<string, int>> pro_details;
        for (int i = 0; i < n; i++)
        {
            string s;
            int val;
            cin >> s >> val;

            pro_details.push_back({s, val});
        }
        return pro_details;
    }


};

void solve()
{
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int _t;
    // cin >> _t;
    // while (_t--)
    // {
    //     solve();
    // }
    int contributors, projects;
    cin >> contributors >> projects;
    vector<pair<string,vector<pair<string, int>>>> people_details;
    while (contributors--)
    {
        string name ;
        int skills;
        cin>>name>>skills;
        in_person sk;
        vector<pair<string, int> > in_det;
        in_det=sk.person(skills);
        people_details.push_back({name,in_det});
    }
    
    vector<pair<string,pair<pair<int,pair<int,int>>,vector<pair<string, int>>>>> project_details;
    while (projects--)
    {
        string s;int duration,score,best_before,num_roles;
        cin>>s>>duration>>score>>best_before>>num_roles;
        in_person new_sk;
        vector<pair<string, int> > in_pro_det;
        in_pro_det = new_sk.project_info(num_roles);
        project_details.push_back({s,duration,score,best_before,in_pro_det});

    }
    
    
    return 0;
}