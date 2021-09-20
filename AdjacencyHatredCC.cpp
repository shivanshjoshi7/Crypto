#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n+1];
		for(int i=1; i<=n;i++)
			cin>>arr[i];
		/*for(int i=1; i<=n;i++)
			cout<<arr[i];*/

		vector<int> v;
		vector<int> v1;


		int count_odd=0;
		for(int i=1; i<=n;i++)
		{
			if(arr[i]%2==1)
			{
				v.push_back(arr[i]);
				count_odd++;
			}
			else
				v1.push_back(arr[i]);

		}
		int count_even=n-count_odd;
		if(count_odd==n || count_even==n)
		{
			cout<<"-1"<<endl;
			//break;
		}
		else{

			for(int i=0; i<v.size(); i++)
			cout<<v[i]<<" ";
		

			for(int i=0; i<v1.size(); i++)
				cout<<v1[i]<<" ";
			cout<<endl;


		}
		

	}
	return 0;
}