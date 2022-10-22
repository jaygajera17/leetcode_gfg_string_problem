Link:-https://practice.geeksforgeeks.org/problems/c-program-to-remove-consonants-from-a-string1945/1
Given a string S, remove all consonants and print the modified string that contains vowels only.

Input
S = "abEkipo"
Output
aEio
Explanation : a, E, i, o are only vowels in the string.
Example 2:

Input
S = "rrty"
Output
No Vowel
Explanation: There are no vowels.


 string removeConsonants(string s){
    //complete the function heredef removeConsonants(s):
    string ans="";
     for(int i=0;i<s.length();i++)
     {
         if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='i' || s[i]=='A' || s[i]=='E' || s[i]=='O' || s[i]=='U' || s[i]=='I')
         {
             ans=ans+s[i];
         }
     }
     if(ans=="")
     {
         return "No Vowel";
     }
     else
     return ans;
    }