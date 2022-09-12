/*
link:- https://practice.geeksforgeeks.org/problems/print-first-letter-of-every-word-in-the-string3632/1

problem: Given a string, print the first letter of every word in the string.

Input: 
S = "geeks for geeks"
Output: gfg

Input: 
S = "bad is good"
Output: big

*/



class Solution{
public:	
	
	string firstAlphabet(string s)
	{
	    // Your code goes here
	    string ans;
	    ans=ans+s[0]; // 1st add very 1st char
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]==' ')  // if there is space add next char 
	        {
	            ans=ans+s[i+1];
	        }
	    }
	    return ans;
	}
};