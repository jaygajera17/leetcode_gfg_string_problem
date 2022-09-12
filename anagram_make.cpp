

/*
 problem link:- https://practice.geeksforgeeks.org/problems/anagram-of-string/1

 problem statement:- Given two strings S1 and S2 in lowercase, the task is to make them anagram.
                     The only allowed operation is to remove a character from any string. 
                     Find the minimum number of characters to be deleted to make both the strings anagram.
                     Two strings are called anagram of each other if one of them can be converted into another by rearranging its letters.

Example 1:

Input:
S1 = bcadeh
S2 = hea
Output: 3
Explanation: We need to remove b, c
and d from S1.

Example 2:

Input:
S1 = cddgk
S2 = gcd
Output: 2
Explanation: We need to remove d and
k from S1.

*/

int remAnagram(string str1, string str2)
{

  int m1[26]={0},m2[26]={0},res=0;
  for(int i=0;i<str1.length();i++)
  {
      m1[str1[i]-'a']++;
  }
    for(int i=0;i<str2.length();i++)
  {
      m2[str2[i]-'a']++;
  }
  for(int i=0;i<26;i++)
  {
      res=res+abs(m1[i]-m2[i]);
  }
    return res;
}

//Dry run
/*

s1=cddgk
s2=gcd

s1 map | s2 map  | diff | res
c-1    | c-1     | 0    | 0
d-2    | d-1     | 1    | 1
g-1    | g-1     | 0    | 0
k-1    |         | 1    | 1+1=2

res=output=2

*/