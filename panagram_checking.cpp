/*
link:- https://practice.geeksforgeeks.org/problems/pangram-checking-1587115620/1

problem:- Given a string check if it is Pangram or not. A pangram is a sentence containing every letter in the English Alphabet (either lowercase or uppercase or both). 
For example, we say the letter A is present in the string if either 'a' is present or 'A' is present.

Input:
S = Bawds jog, flick quartz, vex nymph
Output: 1
Explanation: In the given input, there
are all the letters of the English
alphabet. Hence, the output is 1.

Input:
S = sdfs
Output: 0
Explanation: In the given input, there
aren't all the letters present in the
English alphabet. Hence, the output
is 0.

*/

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string &s) {
        // your code here
       // str=toupper(str);
       
      unordered_map<char,int>m;
      for(int i=0;i<s.length();i++)
      {
          m[s[i]]++;
      }
     
       if(m.size()<26) // if string has other symbol then it may be > 26
       {
           return false;
       }
        
    return true;
    }

};
