

/* https://practice.geeksforgeeks.org/problems/55d */


 int addMinChar(string str){    
        //code here
        int n=str.length();
        int i=0;
        int j=n-1;
        int ans=0;
        while(i<=j)
        {
            if(str[i]==str[j])
            {
                i++;
                j--;
            }
            else
            {
                ans++;
                i=0;
                j=n-1-ans;
            }
        }
        
      
    return ans;
    }