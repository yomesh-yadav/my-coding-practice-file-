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

int main ()
{
	vector<int> v(2,-1);
        int  n= nums.size();
        for(int i =0;i<n-1;i++)
        {
            auto it1 = find(nums.begin(),nums.begin()+i,target-nums[i])-nums.begin();
            auto it2 = find(nums.begin()+i+1,nums.end(),target-nums[i])-nums.begin();
            if(it1<i)
            {
                v[0]=it1,v[1]=i;
                return v;
            }else if( it2 !=n)
            {
                v[0]=i,v[1]=it2;
                return v;
            }
        }
        return v;
}
