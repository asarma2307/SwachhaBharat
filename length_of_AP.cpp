#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,q;
	cin>>n>>q;
	int a[n+1];
	for(int i = 1; i <= n ; i++)
		cin>>a[i];
	for(int i = 0;i<q;i++)
	{
		int l,r,d;
		cin>>l>>r>>d;
		bool flag = 1;
		int cnt = 1, max = -1;
		for(int j = l; j <= r;j++)
		{
			if(flag == 1 && a[j+1]-a[j] == d)
			{
				cnt++;
				//cout<<"IF"<<endl;
			}
			else if(flag == 0 && a[j+1]-a[j] == d)
			{
				cnt = 1;
				flag = 1;
				//cout<<"ELIF"<<endl;
			}
			else if(a[j+1] - a[j] != d)
			{
				flag = 0;
				//cout<<"ELSE"<<endl;
			}
			if(max<cnt)
					max=cnt;
		}
		cout<<max<<endl;
	}


}