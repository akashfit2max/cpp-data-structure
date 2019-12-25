#include<iostream>
using namespace std;
int main()
{
	int arr[50],size,i,j;
	cout<<"enter the size of array : ";
	cin>>size;
	cout<<"enter the array elements : ";
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"sorted array : ";
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(j=1;j<=size;j++)
	{
			cout<<arr[j]<<" ";
	}
	cout<<"printing alternate array";
	
	return 0;
}
