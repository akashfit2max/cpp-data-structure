#include <iostream>
using namespace std;

int main() 
{
	int test;
	cin>>test;
	
	while(test--)
	{
	    int num, sum = 0;
	    cin>>num;
	    
	    int n = num;
	    while(num>0)
	    {
	        int r = num%10;
	        sum += (r*r*r);
	        num = num/10;
	    }
	    
	    
	    if(sum==n)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	}
	
	return 0;
}
