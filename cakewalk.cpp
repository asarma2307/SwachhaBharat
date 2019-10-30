#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		int cnt =0;
		while(n%10 == 0)
		{
			cnt++;
			n=n/10;
		}
		while(n%2 == 0)
		{
			cnt--;
			n=n/2;
		}
		if(n == 1 && cnt >= 0)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
}