/*

https://practice.geeksforgeeks.org/problems/palindrome-string0817/1


Input: S = "abba"
Output: 1
Explanation: S is a palindrome
Example 2:

Input: S = "abc" 
Output: 0
Explanation: S is not a palindrome

*/

int isPalindrome(string s)
	{
	    // Your code goes here
	    int n=s.length();
	    int f=0;
	    for(int i=0;i<n/2;i++)
	    {
	        if(s[i]!=s[n-i-1])
	        {
	            f=1;
	        }
	    }
	    if(f==1)
	    {
	        return 0;
	    }else
	    return 1;
	}


//**************************************** Using Recursion********************

#include <iostream>

using namespace std;

bool f(int i,int n,string &s)
{
    if(i>=n/2)
    {
        return true;
    }
    if(s[i]!=s[s.size()-i-1])
    {
        return false;
    }
    return f(i+1,n,s);
}

int main()
{
    string s="ababa";
    int n=5;
    int i=0;
    cout<<f(i,n,s);

    return 0;
}
