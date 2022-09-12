/*
link :- https://practice.geeksforgeeks.org/problems/remove-common-characters-and-concatenate-1587115621/1

problem:- Given two strings, remove common characters and concatenate the remaining characters of the two strings.
           If all characters are removed print -1.

Input:
s1 = aacdb
s2 = gafd
Output: cbgf
Explanation: The common characters of s1
and s2 are: a, d. The uncommon characters
of s1 and s2 are c, b, g and f. Thus the
modified string with uncommon characters
concatenated is cbgf.


Input:
s1 = abcs
s2 = cxzca
Output: bsxz
Explanation: The common characters of s1
and s2 are: a,c. The uncommon characters
of s1 and s2 are b,s,x and z. Thus the
modified string with uncommon characters
concatenated is bsxz.

*/

// find :- https://www.geeksforgeeks.org/string-find-in-cpp/
class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        // Your code here
        string ans="";
      for(int i=0;i<s1.length();i++)
      {
          if(s2.find(s1[i])==string::npos) //if s1[i] element not present in s2 string  then concatenate 
          {
              ans=ans+s1[i];
          }
      }
       for(int i=0;i<s2.length();i++)  //if s2[i] element not present in s1 string 
      {
          if(s1.find(s2[i])==string::npos)
          {
              ans=ans+s2[i];
          }
      }
      if(ans=="")
      {
          return "-1";
      }else
       return ans;
    }

};