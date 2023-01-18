/*

link: https://practice.geeksforgeeks.org/problems/repeated-character2058/1

problem:- Given a string consisting of lowercase english alphabets. 
          Find the repeated character present first in the string.

Input:
S = "geeksforgeeks"
Output: g
Explanation: g, e, k and s are the repeating
characters. Out of these, g occurs first. 

Input: 
S = "abcde"
Output: -1
Explanation: No repeating character present.

*/

class Solution
{
  public:
    char firstRep (string s)
    {
        
       map<char ,int> m;
       for(int i = 0;i<s.size();i++){
           m[s[i]]++;
       }
       for(int i = 0;i<s.size();i++){
         if(m[s[i]] > 1){
         return s[i];
             break;
         }
     }
     return '#'; // '#' = -1 in ascii
    }
};