/*
326. Power of Three

Given an integer n, return true if it is a power of three. Otherwise, return false.

An integer n is a power of three, if there exists an integer x such that n == 3x.

 Example 1:

Input: n = 27
Output: true
Example 2:

Input: n = 0
Output: false
Example 3:

Input: n = 9
Output: true
Example 4:

Input: n = 45
Output: false
 

Constraints:

-231 <= n <= 231 - 1
 
*/

class Solution {
public:
    //  if(n==0)
                     //      return false;
                     //  int x=log10(n)/log10(3);
                     // //cout<<x<<endl;
                     //  if(n==pow(3,x))
                     //  {
                     //      return true;
                     //  }
                     //  else return false;
              //    if(n==0)return false;
              //    if(n==1 || n==3)return true;
              //   while(n%3==0 && n!=3)
              //   {
              //       n/=3;
              //       if(n==3)
              //       {
              //           return true;
              //       }
              //   }
              // return false;
        //    long long int mulp=1;
        //     while(mulp<=10000000000)
        //     {
        //         if(mulp==n)return true;
        //         if(mulp>n)return false;
        //         mulp=mulp*3;
        //     }
        // return false;
    bool isPowerOfThree(int n) {
        
                   if(n==0)return false; 
                     while(n%3==0)
                     {
                         n/=3;
                     }
        return n==1;
        
    }
};