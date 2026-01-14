#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll m=1e9+7;
int main()
{
	ll n,amount;
	cin>>n>>amount;
	vector<ll>vec(n);
	for(ll i=0;i<n;i++)
	    cin>>vec[i];
	sort(vec.begin(),vec.end());
	ll dp[amount+1];
        dp[0]=0;
        
          
        for(ll i=1;i<=amount;i++)
            dp[i]=amount+1;
        
        for(ll i=0;i<vec.size();i++)
        {
            for(ll j=1;j<=amount;j++)
            {
                if(vec[i]<=j)
                {
                    
                    dp[j]=min(dp[j],1+dp[j-vec[i]]);        
                }
                
            }
        }
        if(dp[amount]>amount)
            cout<<-1;
        else
            cout<<dp[amount];
	return 0;
}
