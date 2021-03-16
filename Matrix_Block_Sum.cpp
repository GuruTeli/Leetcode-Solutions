/*
1314. Matrix Block Sum

Given a m * n matrix mat and an integer K, return a matrix answer where each answer[i][j] is the sum of all elements mat[r][c] for i - K <= r <= i + K, j - K <= c <= j + K, and (r, c) is a valid position in the matrix.
 
Example 1:

Input: mat = [[1,2,3],[4,5,6],[7,8,9]], K = 1
Output: [[12,21,16],[27,45,33],[24,39,28]]
Example 2:

Input: mat = [[1,2,3],[4,5,6],[7,8,9]], K = 2
Output: [[45,45,45],[45,45,45],[45,45,45]]
 

Constraints:

m == mat.length
n == mat[i].length
1 <= m, n, K <= 100
1 <= mat[i][j] <= 100

*/
class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        
                       int n=mat.size(); // No. of total rows
                       int m=mat[0].size(); // No. of columns
                       vector<vector<int>> res1;
                       vector<int> temp;
                        int p;
                       for(int i=0;i<n;i++)
                       {
                           for(int j=0;j<m;j++)
                           {
                                p=0;
                               for(int r=i-k;r<=i+k;r++)
                               {
                                   
                                   for(int c=j-k;c<=j+k;c++)
                                   {
                                         if(r>=0 && r<n && c>=0 && c<m)
                                         {
                                             p+=mat[r][c];
                                         }
                                   }
                                   
                               }temp.push_back(p);
                               
                           }
                           res1.push_back(temp);
                               temp.clear();
                       }
              return res1;
           
        
    }
};