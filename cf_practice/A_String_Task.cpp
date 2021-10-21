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
    string s;
    cin>>s;
    for(auto it = s.begin();it!=s.end();it++)
    {
        if(*it=='A'|| *it=='a'||*it=='E'|| *it=='e'||*it=='I'|| *it=='i'||*it=='O'|| *it=='o'||*it=='U'|| *it=='u'||*it=='Y'|| *it=='y')
        {
            s.erase(it);
            it--;
        }else{
            if(*it>=65 && *it<=90)
            {
                *it= char(*it+32);
            }
        }
    }
    string s_new="";
    for(auto it =s.begin();it!=s.end();it++)
    {
        s_new.push_back('.');
        s_new.push_back(*it);
    }
    for(int i =0;i<s_new.size();i++)
    {
        cout<<s_new[i];
    }
     return 0;
}