
/*
  https://leetcode.com/problems/delete-columns-to-make-sorted/description/
*/

class Solution {
public:
    int minDeletionSize(vector<string>& str) {
        int row=str.size();
        int column=str[0].size();
    int count=0;
    
     for (int j = 0; j < column; j++) {
        for (int i = 0; i < row-1; i++) {
          if(str[i][j]>str[i+1][j])
          {
              count++;
              break;
          }
        }
    }

       
      return count;
    }
};