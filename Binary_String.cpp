/*
link:- https://practice.geeksforgeeks.org/problems/binary-string-1587115620/1
problem:
Given a binary string S. The task is to count the number of substrings that start and end with 1.
For example, if the input string is “00100101”, then there are three substrings “1001”, “100101” and “101”.

Input:
N = 4
S = 1111
Output: 6
Explanation: There are 6 substrings from
the given string. They are 11, 11, 11,
111, 111, 1111.

Input:
N = 5
S = 01101
Output: 3
Explanation: There 3 substrings from the
given string. They are 11, 101, 1101.

*/

class Solution
{
    public:
    //Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string a){
        
        // n = length of string , a = binary string
        int ans=0;
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++)
        {
            if(a[i]!='0')
            {
                ans++;
            }
           //ans= count(a.begin(), a.end(), '1');
        }
       // return count;
       return (ans*(ans-1))/2;
    }

};


/*

approch:-

1.count the total number of 1's in the string ( using sort string and for loop)
2. observe pattern if 
number of 1 is 1 then ans 1
number of 1 is 2 then ans 2
number of 1 is 3 then ans 3
number of 1 is 4 then ans 6
number of 1 is 5 then ans 10
.
.
number of 1 is n then ans n*(n-1)/2

*/

