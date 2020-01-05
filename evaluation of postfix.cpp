/*
Given a postfix expression, the task is to evaluate the expression and print the final value. Operators will only
include the basic arithmetic operators like *,/,+ and - . 

Input:
The first line of input will contains an integer T denoting the no of test cases . Then T test cases follow.
Each test case contains an postfix expression.

Output:
For each test case, in a new line, evaluate the postfix expression and print the value.

Constraints:
1 <= T <= 100
1 <= length of expression <= 100

Example:
Input:
2
231*+9-
123+*8-
Output:
-4
-3


*/
#include <iostream>
#include<stack>
using namespace std;
int performTheOperation(char c,int op1,int op2){
    switch(c){
        case '+':
            return op1+op2;
        case '-':
            return op1-op2;
        case '*':
            return op1*op2;
        case '/':
            return op1/op2;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        //enter the expression
        string s;
        cin>>s;
        stack<int> s1;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            //pahle check kar lo if it is an operator
            if(s[i]=='+'|| s[i]=='-' || s[i]=='*' || s[i]=='/')
            {
                //pop the 2 operand from the stack
                int op2=(s1.top());
                s1.pop();
                int op1=(s1.top());
                s1.pop();
                int res=performTheOperation(s[i],op1,op2);
                s1.push(res);
            }
            else
            {
                s1.push((s[i]-'0'));
            }
        }
        cout<<(s1.top())<<endl;

    }


	return 0;
}
