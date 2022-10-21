/*
Link:- https://practice.geeksforgeeks.org/problems/remove-character3815/1
Problem:- Given two strings string1 and string2, remove those characters from first string(string1) which are present in second string(string2). Both the strings are different and contain only lowercase characters.

Input:
string1 = "computer"
string2 = "cat"
Output: "ompuer"
Explanation: After removing characters(c, a, t)
from string1 we get "ompuer".

Input:
string1 = "occurrence"
string2 = "car"
Output: "ouene"
Explanation: After removing characters
(c, a, r) from string1 we get "ouene".

*/
  string removeChars(string s1, string s2) {
        // code here
        string ans="";
        
        for(int i=0;i<s1.length();i++)
        {
            // npos -> not found
            if(s2.find(s1[i])==string::npos)
            {
                ans=ans+s1[i];
            }  
        }
        return ans;
    }