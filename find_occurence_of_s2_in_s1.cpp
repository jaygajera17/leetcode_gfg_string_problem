/*
link:- https://practice.geeksforgeeks.org/problems/implement-strstr/1

Input:
    s = GeeksForGeeks, x = Fr
Output: -1

Explanation: Fr is not present in the
string GeeksForGeeks as substring.

*/


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