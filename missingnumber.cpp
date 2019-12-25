#include<iostream>
using namespace std;
int main()
{
	int arr[200],n,sum=0,sum2=0,missnum;
	cout<<"enter the number of elements : ";
	cin>>n;
	for(int i=0;i<n-1;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	for(int j=1;j<=n;j++)
	{
		sum2+=j;
	}
	missnum=sum2-sum;
	cout<<"missing number : "<<missnum;
	return 0;
}
