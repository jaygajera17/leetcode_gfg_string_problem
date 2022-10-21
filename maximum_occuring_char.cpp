/*

Link:- https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1

problem:- Given a string str. The task is to find the maximum occurring character in the string str. If more than one character occurs the maximum number of time then print the lexicographically smaller character.

Input:
str = testsample
Output: e
Explanation: e is the character which
is having the highest frequency.

Input:
str = output
Output: t
Explanation:  t and u are the characters
with the same frequency, but t is
lexicographically smaller.

*/

 char getMaxOccuringChar(string str)
    {
        // Your code here
        map<char,int>m;
        for(int i=0;i<str.length();i++)
        {
            m[str[i]]++;
        }
        int max=0;
        char c;
        for(auto i=m.begin();i!=m.end();i++)
        {
            if(max<i->second)
            {
                max=i->second;
                c=i->first;
            }
        }
        return c;
    }