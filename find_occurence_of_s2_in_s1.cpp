/*
link:- https://practice.geeksforgeeks.org/problems/implement-strstr/1
https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/

Input:
    s = GeeksForGeeks, x = Fr
Output: -1

Explanation: Fr is not present in the
string GeeksForGeeks as substring.

*/

//NAIVE
 int strStr(string a, string b) {
        if(b.length()>a.length()) return -1;
        for(int i=0;i<=a.length()-b.length();i++)
        {
            
            for(int j=0;j<b.length();j++)
            {
                if(a[i+j]!=b[j])
                {
                  break;
                }
                if(j==b.length()-1) return i;
            }
        }
        return -1;
    }


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
    // char p=strstr(s,x);
     if(s.find(x)!=string::npos)
     {
         return s.find(x);  //returns the index of the first occurence of x in s
     }
     else
     {
         return -1;
     }
     
}