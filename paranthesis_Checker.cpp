
https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1

Given an expression string x. Examine whether the pairs and the orders of “{“,”}”,”(“,”)”,”[“,”]” are correct in exp.
For example, the function should return 'true' for exp = “[()]{}{[()()]()}” and 'false' for exp = “[(])”.

Input:
{([])}
Output: 
true
Explanation: 
{ ( [ ] ) }. Same colored brackets can form 
balaced pairs, with 0 number of 
unbalanced bracket.

Input: 
([]
Output: 
false
Explanation: 
([]. Here square bracket is balanced but 
the small bracket is not balanced and 
Hence , the output will be unbalanced.


  bool ispar(string x)
    {
        // Your code here
      stack<char> s;
       for(int i=0;i<x.length();i++)
       {
           if(s.empty())
           {
               s.push(x[i]);
           }
           else if((s.top()=='('&& x[i]==')')  ||  (s.top()=='{' && x[i]=='}')  ||  (s.top()=='[' && x[i]==']'))
            {
                s.pop();
            }
           else
           {
               s.push(x[i]);
           }
       }
       if(s.empty())
       {
           return true;
       }
       return false;
    }