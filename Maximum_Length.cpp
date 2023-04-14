/* https://practice.geeksforgeeks.org/problems/84963d7b5b84aa24f7807d86e672d0f97f41a4b5/1 */


class Solution {
public:
    int solve(int a, int b, int c) {
        // code here || (b >(a+c)(a+c+1)/2) || (a>(b+c)(b+c+1)/2))
       if( (c>2*(a+b)) || (b >2*(a+c))  ||  (a>2*(b+c)))
       {
           return -1;
       }
        else
        {
            return a+b+c;
        }
        
    }
};