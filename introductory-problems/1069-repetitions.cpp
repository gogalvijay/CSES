#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	long long res=0,curr=1;
	for(int i=0;i<s.length()-1;i++){
	            if(s[i]==s[i+1])
	                curr++;
	             else
	               {
	                    res=max(res,curr);
	                    curr=1;
	                }
    }
    res=max(res,curr);
    cout<<res;
	return 0;
}
