#include <bits/stdc++.h> 
#include<iostream>
using namespace std; 
  
// function to set the kth bit 
int setKthBit(int n, int k) 
{ 
    // kth bit of n is being set by this operation 
    return ((1 << k) | n); 
} 
  
// Driver program to test above 
int main() 
{ 
    int n,k;
    cout<<"enter the number : ";
    cin>>n;
    cout<<"enter the bits : ";
    cin>>k;
    cout << "Kth bit set number = "
         << setKthBit(n, k); 
    return 0; 
}  
