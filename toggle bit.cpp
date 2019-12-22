#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 int n,l,r,i,j=0,sum=0;
	    int a[10];
	    cout<<"enter the value : ";
	    cin>>n;
		cout<<"enter the number between which to toggle : ";
		cin>>l>>r;
	    while(n>0)
	    {
	        a[j]=n%2;
	        j++;
	        n/=2;
	    }
		cout<<endl;  
	for(i=l-1;i<r;i++)
	    {
	        if(a[i]==0)
	            a[i]=1;
	       else
	            a[i]=0;
	    } 
	for(i=0;i<j;i++)
	    {
	        sum+=a[i]*pow(2,i);
	    }
	    cout<<"the value after toggleing the bits is : "<<sum<<endl;
	
return 0;
}

