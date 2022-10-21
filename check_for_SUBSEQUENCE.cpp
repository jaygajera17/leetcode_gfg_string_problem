/*

problem:- Given two strings A and B, find if A is a subsequence of B.

Link:- https://practice.geeksforgeeks.org/problems/check-for-subsequence4930/1


Input:
A = AXY 
B = YADXCP
Output: 0 
Explanation: A is not a subsequence of B
as 'Y' appears before 'A'.

Input:
A = gksrek
B = geeksforgeeks
Output: 1
Explanation: A is a subsequence of B.

*/

  bool isSubSequence(string s1, string s2) 
    {
        // code here
        int i,j=0;
        while(i<s1.length() && j<s2.length())
        {
            if(s1[i]==s2[j])
            {
                i++;
            }
                j++;
        }
        if(i==s1.length())
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }