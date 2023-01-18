
/* https://leetcode.com/problems/decode-the-message/ */

class Solution {
public:
    string decodeMessage(string key, string msg) {

  char c='a';
   unordered_map<char,char>m;
    for(int i=0;i<key.length();i++)
    {
        if(key[i]==' ' || m.find(key[i])!=m.end())
       { continue;
       }
       else{
           m[key[i]]=c;
           c++;
       }
    }
    string ans;
    
    for(auto i:msg)
    {
        if(m.find(i)!=m.end()  &&  i!=' ')
        {
           ans+= m[i];
        }
        else
        {
            ans+=" ";
        }
    }
    for(auto i:m)
    {
        cout<<i.first<<" " << i.second<<endl;
    }
    return ans;
     
    }
};