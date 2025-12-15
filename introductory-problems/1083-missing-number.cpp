#include <bits/stdc++.h>

using namespace std;
 int main()
{
	long long n;
	cin>>n;
	long long x,sum=0;
	for(int i=1;i<=n-1;i++){
	    cin>>x;
	    sum+=x;
	}
	long long s;
	s=(n*(n+1))/2;
	cout<<s-sum;
	       
	return 0;
}
