
Link:- https://practice.geeksforgeeks.org/problems/change-the-string3541/1

Given a string S, the task is to change the complete string to Uppercase or Lowercase depending upon the case for the first character.

Input:
S = "abCD"
Output: abcd
Explanation: The first letter (a) is 
lowercase. Hence, the complete string
is made lowercase.

Input: 
S = "Abcd"
Output: ABCD
Explanation: The first letter (A) is
uppercase. Hence, the complete string
is made uppercase.


  string modify (string s)
    {
        // your code here
        string ans="";
        if(s[0]>='a'&&s[0]<='z')
        {
            for(int i=0;i<s.length();i++)
             ans=ans+(char)tolower(s[i]);
        }
        else
        {
            for(int i=0;i<s.length();i++)
            ans=ans+(char)toupper(s[i]);
        }
        return ans;
    }
 
  /************* 2nd Approach ******************/


string modify (string s)
    {
        // your code here
        string ans="";
        if(s[0]>='a'&&s[0]<='z')
        {
           
                    transform(s.begin(), s.end(), s.begin(), ::tolower);

            
        }
        else
        {
           
                transform(s.begin(), s.end(), s.begin(), ::toupper);

        
       }
        return s;
    }