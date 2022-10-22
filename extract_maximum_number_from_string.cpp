Link:- https://practice.geeksforgeeks.org/problems/extract-maximum2943/1

Given a alphanumeric string S, extract maximum numeric value from S.

Input:
S = 100klh564abc365bg
Output: 564
Explanation: Maximum numeric value 
among 100, 564 and 365 is 564.
Example 2:

Input:
S = abcdefg
Output: -1
Explanation: Return -1 if no numeric 
value is present. 


 int extractMaximum(string s) 
    { 

        int num=0,max=-1;
        for(int i=0;i<s.length();i++)
        {
           if(s[i]>=48 && s[i]<=57)
           {
                num = num*10 + (s[i]-'0');
                if(num>max)
                {
                    max=num;
                }
           }
          else
          {
              num=0;
          }
           
        }
        return max;
    } 