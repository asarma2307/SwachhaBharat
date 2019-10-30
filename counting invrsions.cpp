#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int arr[n];
		int a[n]={0},b[n] = {0};
		for(int i =0 ; i< n; i++)
			cin>>arr[i];
		for(int i= 0; i < n ; i++)
		{
			for(int j = 0;j<n;j++)
			{
				if(arr[i] > arr[j] && i>j)
					b[i]++;
				else if(arr[i]>arr[j] && j<i)
					a[i]++;
			}
		}
		long long int sum = 0;
		int k1 = k*(k+1)/2;
		int k2 = k*(k-1)/2;
 		for(int i = 0;i<n;i++)
			sum+=k1*a[i] + k2*b[i];

		cout<<sum<<endl;
	}
}