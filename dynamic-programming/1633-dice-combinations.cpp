#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll m=1e9+7;
int main()
{
	ll n;
	cin>>n;
	vector<ll>dp(n+1);
	dp[0]=0;
	dp[1]=1;
	//1   
	//1  2
	//1  3  
	for(ll i=2;i<=n;i++)
	{
	    if(i<=6)
	        dp[i]=1;
	    for(ll d=1;d<=6;d++)
	    {
	        if(i-d<=0)
	            break;
	        dp[i]+=dp[i-d];
	        dp[i]%=m;
	   }
	}
	cout<<dp[n]<<endl;
	return 0;
}
