/*
link:- https://practice.geeksforgeeks.org/problems/consecutive-elements2306/1

problem:- Given a string S. For each index i(1<=i<=N-1), erase it if s[i] is equal to s[i-1] in the string.

Input:
S = aabb
Output:  ab 
Explanation: 'a' at 2nd position is
appearing 2nd time consecutively.
Similiar explanation for b at
4th position.

Input:
S = aabaa
Output:  aba
Explanation: 'a' at 2nd position is
appearing 2nd time consecutively.
'a' at fifth position is appearing
2nd time consecutively.

*/

class Solution{
    public:
    string removeConsecutiveCharacter(string s)
    {
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=s[i+1])
            {
                ans=ans+s[i];
            }
        }
        return ans;
    }
};