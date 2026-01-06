#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll m=1e9+7;
ll expo(ll a,ll b,ll m){
    ll res=1;
    a=a%m;
    while(b)
    {
        if(b&1)
            res=res*a%m;
        a=a*a%m;
        b=b>>1;
    }
    return res;
}
void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    ll r1=expo(b,c,m-1);
    cout<<expo(a,r1,m)<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}
