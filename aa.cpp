/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{ long long int  num;
int count1=0,count2=0;
    cin >> num;
   while(num!=1)
  {  if(num%2!=0)
    {
        num=(num*3) + 1;
        cout<<num<<"  ";
        count1++;
    }
    else{
        num=num/2;
        cout<<num<<" ";
        count2++;
    }
   
    
  }
  cout<<" count total "<< count1+count2<< endl;
  

    return 0;
}
