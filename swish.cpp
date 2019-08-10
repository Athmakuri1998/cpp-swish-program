#include<bits/stdc++.h>
using namespace std;
typedef long long 11;
int main()
{
	11 a,b,temp;
	cin>>a>>b;
	11 ans = a;
	while(1)
	{	
		temp = (a*b)/100;
		if(temp==0)
		   break;
		a-=temp;
		ans+=a;
	}
	cout<<ans<<'\n';
}
