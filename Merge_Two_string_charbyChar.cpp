/*
Problem:- Given two strings S1 and S2 as input, the task is to merge them alternatively i.e. the first character of S1 then the first character of S2 and so on till the strings end.

Link:- https://practice.geeksforgeeks.org/problems/merge-two-strings2736/1

Input:
S1 = "Hello" S2 = "Bye"
Output: HBeylelo
Explanation: The characters of both the 
given strings are arranged alternatlively.

Input: 
S1 = "abc", S2 = "def"
Output: adbecf
Explanation: The characters of both the
given strings are arranged alternatlively.

*/

string merge (string s1, string s2)
{
    // your code here
    string ans="";
    int i=0,j=0;
    while(i<s1.length() || j<s2.length())
    {
        if(i!=s1.length())
        {
             ans=ans+s1[i]; 
             i++;
        }
        if(j!=s2.length())
        {
             ans=ans+s2[j];
             j++;
        }
    }
    return ans;
}