/*
Link:- https://practice.geeksforgeeks.org/problems/red-or-green5711/1
Problem:- Find out the minimum number of characters you need to change to make the whole string of the same colour.

Input:
N=5
S="RGRGR"
Output:
2
Explanation:
We need to change only the 2nd and 
4th(1-index based) characters to 'R', 
so that the whole string becomes 
the same colour.

Input:
N=7
S="GGGGGGR"
Output:
1
Explanation:
We need to change only the last 
character to 'G' to make the string 
same-coloured.
*/

 int RedOrGreen(int n,string s) {
           //code here
           int count1=0,count2=0;
           for(int i=0;i<n;i++)
           {
               if(s[i]=='R')
               {
                   count1++;
               }
               else
               {
                   count2++;
               }
           }
           return min(count1,count2);
    }