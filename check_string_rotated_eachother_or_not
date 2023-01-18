
/*
link:- https://practice.geeksforgeeks.org/problems/check-if-strings-are-rotations-of-each-other-or-not-1587115620/1

Given two strings s1 and s2. The task is to check if s2 is a rotated version of the string s1.
 The characters in the strings are in lowercase.

Input:
    geeksforgeeks
    forgeeksgeeks
Output: 
    1

Explanation: s1 is geeksforgeeks, s2 is
forgeeksgeeks. Clearly, s2 is a rotated
version of s1 as s2 can be obtained by
left-rotating s1 by 5 units.


Example 2:

Input:
    mightandmagic
    andmagicmigth
Output: 
    0
Explanation: Here with any amount of
rotation s2 can't be obtained by s1.


*/


// approch:- do s1+s1 and find window of s2 in s1 and check if s2 is there or not.
class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        if(s1.length()!=s2.length())
        {
            return 0;
        }
        else
        {
         string s=s1+s1;
         if(s.find(s2)!=string::npos)
            return 1;
         else
             return 0;
        }
    }
};