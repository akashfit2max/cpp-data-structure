/*
Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. The first line of each test case is N and S, where N is the size of array and S is the sum. The second line of each test case contains N space separated integers denoting the array elements.

Output:
For each testcase, in a new line, print the starting and ending positions(1 indexing) of first such occuring subarray from the left if sum equals to subarray, else print -1.

Constraints:
1 <= T <= 100
1 <= N <= 107
1 <= Ai <= 1010

Example:
Input:
2
5 12
1 2 3 7 5
10 15
1 2 3 4 5 6 7 8 9 10
Output:
2 4
1 5

Explanation :
Testcase1: sum of elements from 2nd position to 4th position is 12
Testcase2: sum of elements from 1st position to 5th position is 15
*/

#include<iostream>
using namespace std;
void subsum(int arr[],int n,int sum) {
	int cursum=arr[0];
	int start=0;
	int end=1;
	while (end<=n) {
		if (cursum==sum) {
			cout << "Range [" <<start+1<<","<<end<<"]" << '\n';
			return;
		}
		if (cursum>sum && start<end)
			cursum-=arr[start++];
		else if (cursum<sum && end<n)
			cursum+=arr[end++];
   }
}
int main()
{
	int arr[20],n,x;
	cout<<"enter the size of the array : ";
	cin >>n;
	cout<<"enter the sum : ";
	cin>>x;
	for(int i=0;i<n;i++)
	{
		cout<<"enter the elements : ";
		cin>>arr[i];
	}
	subsum(arr,n,x);
	return 0;
}

