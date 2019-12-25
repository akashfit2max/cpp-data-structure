/*
Given two sorted arrays arr1[] and arr2[] in non-decreasing order with size n and m. The task is to merge the two sorted arrays into one sorted array (in non-decreasing order).

Note: Expected time complexity is O((n+m) log(n+m)). DO NOT use extra space.  We need to modify existing arrays as following.

Input: arr1[] = {10};
       arr2[] = {2, 3};
Output: arr1[] = {2}
        arr2[] = {3, 10}  

Input: arr1[] = {1, 5, 9, 10, 15, 20};
       arr2[] = {2, 3, 8, 13};
Output: arr1[] = {1, 2, 3, 5, 8, 9}
        arr2[] = {10, 13, 15, 20} 
Input:
First line contains an integer T, denoting the number of test cases. First line of each test case contains two space separated integers X and Y, denoting the size of the two sorted arrays. Second line of each test case contains X space separated integers, denoting the first sorted array P. Third line of each test case contains Y space separated integers, denoting the second array Q.

Output:
For each test case, print (X + Y) space separated integer representing the merged array.

Constraints:
1 <= T <= 100
1 <= X, Y <= 5*104
0 <= arr1i, arr2i <= 109

Example:
Input:
2
4 5
1 3 5 7
0 2 6 8 9
2 3
10 12
5 18 20

Output:
0 1 2 3 5 6 7 8 9
5 10 12 18 20

Explanation:
Testcase 1: After merging two non-decreasing arrays, we have, 0 1 2 3 5 6 7 8 9.
*/
#include<iostream>
using namespace std;
int main()
{
	int arr1[50],arr2[50],merge[100],size1,size2,size,i,j,k;
	cout<<"enter array 1 size";
	cin>>size1;
	cout<<"enter array 1 elements";
	for(i=0;i<size1;i++)
	{
		cin>>arr1[i];
	}
	cout<<"enter array 2 size";
	cin>>size2;
	cout<<"enter array 2 elements";
	for(i=0;i<size2;i++)
	{
		cin>>arr2[i];
	}
	cout<<"\nmerging the above two array";
	for(i=0;i<size1;i++)
	{
		merge[i]=arr1[i];
	}
	size=size1+size2;
	for(i=0,k=size1;k<size && i<size2;i++,k++)
	{
		merge[k]=arr2[i];
	}
	cout<<"merged sorted array\n";
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(merge[j]>merge[j+1])
			{
				int temp=merge[j];
				merge[j]=merge[j+1];
				merge[j+1]=temp;
			}
		}
	}
	for(j=1;j<=size;j++)
	{
			cout<<merge[j]<<" ";
	}
	
	return 0;
}
