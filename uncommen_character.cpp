/*  link:- https://practice.geeksforgeeks.org/problems/uncommon-characters4932/1

problem:-
Given two strings A and B. Find the characters that are not common in the two strings. 

Input:
A = geeksforgeeks
B = geeksquiz
Output: fioqruz
Explanation: 
The characters 'f', 'i', 'o', 'q', 'r', 'u','z' 
are either present in A or B, but not in both.


Input:
A = characters
B = alphabets
Output: bclpr
Explanation: The characters 'b','c','l','p','r' 
are either present in A or B, but not in both.

*/

class Solution
{
    public:
        string UncommonChars(string a, string b)
        {
            // code here
            set <char>s1(a.begin(),a.end());
            set <char>s2(b.begin(),b.end());
            string ans="";
           unordered_map<char,int>m;
           for(auto i:s1)
           {
               m[i]++;
           }
           for(auto i:s2)
           {
               m[i]++;
           }
           for(auto i:m)
           {
               if(i.second==1)
               {
                   ans=ans+i.first;
               }
           }
           sort(ans.begin(),ans.end());
           if(ans=="")
           {
               return "-1";
           }
           else
           {
           return ans;
           }
        }
};
//conclusion:- using single map if  repeated in both string then frequency of that character will be 2, so if it is 1 then make string and sort it   . but to avoid duplicates we use set.


/*

OTHER APPROCH:-


class Solution
{
    public:
        string UncommonChars(string a, string b)
        {
            // code here
            
            int mp1[26]={0} , mp2[26]={0};
          //  int n=a.length(),b.length();
            for(auto &x:a)
            {
                mp1[x-'a']=1;
            }
            for(auto &x:b)
            {
                mp2[x-'a']=1;
            }
            string ans="";
            
            for(int i=0;i<26;i++)
            {
                if(mp1[i]^mp2[i])
                {
                    ans+=char(i+'a');
                }
            }
            if(ans=="")
            {
                return "-1";
            }
            else
            {
                return ans;
            }
        }
};

*/