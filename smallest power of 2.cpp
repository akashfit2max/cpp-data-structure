#include <iostream>
#include<math.h>
using namespace std;

int main()
 {
    int t;
    cout<<"enter the number of testcases : ";
    cin>>t;
   while(t--)
   {
   	int n,i=0,s;
   	cin>>n;
   	while(s<n)
   	{
   		s=pow(2,i);
   		i++;
	}
	cout<<s;
   }
   cout<<"\n";
	return 0;
}
