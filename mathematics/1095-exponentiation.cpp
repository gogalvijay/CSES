#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll m=1e9+7;
ll expo(ll a,ll b){
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
    ll a,b;
    cin>>a>>b;
    cout<<expo(a,b)<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}
