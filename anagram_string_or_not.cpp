
/* 
link:-  https://practice.geeksforgeeks.org/problems/anagram-1587115620/1

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
