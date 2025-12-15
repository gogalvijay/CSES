#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll n;
	cin>>n;
	vector<ll>ar(n);
	for(ll i=0;i<n;i++)
	    cin>>ar[i];
	ll turn=0;
	for(ll i=1;i<n;i++)
	{
	    if(ar[i]<ar[i-1])
	    {
	        
	        turn+=ar[i-1]-ar[i];
	        ar[i]=ar[i-1];
	    }
	}
	cout<<turn;
	return 0;
}
