
/* 
link:-  https://practice.geeksforgeeks.org/problems/anagram-1587115620/1
        https://leetcode.com/problems/valid-anagram/
problem: Given two strings a and b consisting of lowercase characters. 
         The task is to check whether two given strings are an anagram of each other or not.
         An anagram of a string is another string that contains the same characters, 
         only the order of characters can be different.
         For example, act and tac are an anagram of each other.


Input: a = geeksforgeeks, b = forgeeksgeeks
Output: YES
Explanation: Both the string have same characters with
        same frequency. So, both are anagrams.
*/

class Solution
{
    public:
    bool isAnagram(string a, string b){
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        return a==b;
    }
};

/* using map*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>m1;
        map<char,int>m2;
        for(int i=0;i<s.length();i++)
        {
            m1[s[i]]++;
        }
         for(int i=0;i<t.length();i++)
        {
            m2[t[i]]++;
        }
        
        return(m1==m2);
    }
};
