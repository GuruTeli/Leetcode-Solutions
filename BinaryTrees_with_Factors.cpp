/*
   823. Binary Trees With Factors
Medium
Given an array of unique integers, arr, where each integer arr[i] is strictly greater than 1.

We make a binary tree using these integers, and each number may be used for any number of times. Each non-leaf node's value should be equal to the product of the values of its children.

Return the number of binary trees we can make. The answer may be too large so return the answer modulo 109 + 7.

 Example 1:

Input: arr = [2,4]
Output: 3
Explanation: We can make these trees: [2], [4], [4, 2, 2]
Example 2:

Input: arr = [2,4,5,10]
Output: 7
Explanation: We can make these trees: [2], [4], [5], [10], [4, 2, 2], [10, 2, 5], [10, 5, 2].
 
Constraints:

1 <= arr.length <= 1000
2 <= arr[i] <= 109
*/
class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        
        
                 unordered_map<int,long> map;
                sort(arr.begin(),arr.end());
                 long int ans=0;
                  int f1=0,f2=0;
                  for(int num:arr)
                  {
                      long int check=1;
                      f1=arr[0];
                      f2=0;
                      for(int j=0;f1<=sqrt(num);f1=arr[++j])
                      {
                                if(num%f1!=0)continue;
                          
                                f2=num/f1;
                               if(map.find(f2)!=map.end())
                               {
                                      check+=map[f1]*map[f2]*(f1==f2?1:2);
                               }
                            
                      }
                      map[num]=check;
                      ans=(ans+check)%1000000007;
                  }
                return (int)ans;
                 // int ans=arr.size();
                 // for(int i=ln-1;i>=0;i--)
                 // {
                 //        check=arr[i];
                 //         for(int j=i-1;j>=0;j--)
                 //         {
                 //                   if(check==(arr[j]*arr[j]))
                 //                          ans++;
                 //                  
                 //                 for(int k=j-1;k>=0;k--)
                 //                 {
                 //                     if(check==(arr[j]*arr[k]))
                 //                     {
                 //                         ans++;
                 //                         if(arr[j]!=arr[k])
                 //                             ans++;
                 //                         break;
                 //                     }
                 //                 }
                 //         }
                 // }
        //return ans%1000000007;
        
    }
};