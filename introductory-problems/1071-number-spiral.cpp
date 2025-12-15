#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(int x,int y)
{
    if(x<y)
    {
        if(y&1)
        {
            cout<<y*y-x+1;
        }
        else
        {
            cout<<(y-1)*(y-1)+x;
        }
   }
   else
   {
   if(!(x&1))
        {
            cout<<x*x-y+1;
        }
        else
        {
            cout<<(x-1)*(x-1)+y;
        }
   
   }
   cout<<endl;
}
            
            
 main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    solve(a,b);
     }
	return 0;
}
