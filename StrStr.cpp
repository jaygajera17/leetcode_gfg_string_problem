/*

Link:- https://practice.geeksforgeeks.org/problems/implement-strstr/1

Problem:- Your task is to implement the function strstr. The function takes two strings as arguments (s,x) and  locates the occurrence of the string x in the string s. The function returns and integer denoting the first occurrence of the string x in s (0 based indexing).

Note: You are not allowed to use inbuilt function.

Input:
s = GeeksForGeeks, x = Fr
Output: -1
Explanation: Fr is not present in the
string GeeksForGeeks as substring.

Input:
s = GeeksForGeeks, x = For
Output: 5
Explanation: For is present as substring
in GeeksForGeeks from index 5 (0 based
indexing).

*/

/******  Using  String Matching Naive Algo  */
 if(x.length()>s.length())
    {
        return -1;
    }
    
    for(int i=0;i<=s.length()-x.length();i++)
    {
        for(int j=0;j<x.length();j++)
        {
          if(s[i+j]!=x[j]) 
          {
              break;
          }
          else if(j==x.length()-1)
            {
                return i;
            }
           
        }
    }
    return -1;



// ******** Using inbuild Function find() ********
   
// The function returns the index of the first occurrence of sub-string, if the sub-string is not found it returns string::npos
 if(s.find(x)!=string::npos)
     {
         return s.find(x);
     }
     else
     {
         return -1;
     }

