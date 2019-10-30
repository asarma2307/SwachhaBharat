#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int k = 0; k<t; k++)
	{
		int n;
		cin>>n;
		int arr[n][n];
		for(int i = 0 ; i < n; i++)
			for(int j = 0; j < n;j++)
				cin>>arr[i][j];
	    int tr=0,r,c;
		for(int i = 0 ; i < n; i++)
		{
			for(int j = 0; j < n;j++)
			{
				r = i;
				c = j;
				int sum = 0;
				while(r<n && c<n)
				{
					sum = sum + arr[r][c];
					r++;
					c++;
				}
				tr = max(tr,sum);
			}
		}
		cout<<tr<<endl;
	}
}