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
		vector <int> arr(n);
		for(int i = 0 ; i < n ; i++)
			cin>>arr[i];

		sort(arr.begin(), arr.end());
		int sum = accumulate(arr.begin(), arr.begin()+k,0);
		int i = 1, sum1 = sum;
		int cnt = 0;
		while(sum1 == sum && k+i < n+1)
		{
			cnt++;
			sum1 = accumulate(arr.begin()+i, arr.begin()+k+i,0);
			i++;
		}
		cout<<cnt<<endl;

	}
}