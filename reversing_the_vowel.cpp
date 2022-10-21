/*
Link:-https://practice.geeksforgeeks.org/problems/reversing-the-vowels5304/1
problem:- Given a string consisting of lowercase english alphabets, reverse only the vowels present in it and print the resulting string.

Input:
S = "geeksforgeeks"
Output: geeksforgeeks
Explanation: The vowels are: e, e, o, e, e
Reverse of these is also e, e, o, e, e.

Input: 
S = "practice"
Output: prectica
Explanation: The vowels are a, i, e
Reverse of these is e, i, a.

*/

 string modify (string s)
        {
            //code here.
            string vowel="";
            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                {
                    vowel+=s[i];
                }
            }
            
            
            int n=vowel.length();
            
        for(int i=0;i<s.length();i++)
            {
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                {
                   s[i]=vowel[n-1];
                   n--;
                }
            }
            
            return s;
        }