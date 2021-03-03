#include<bits/stdc++.h>
using namespace std;
 int missingNumber(vector<int>& nums) {
                 int ans=(nums.size()*(nums.size()+1))/2;
                 for(int i=0;i<nums.size();i++)
                 {
                        ans-=nums[i];
                 }
                 return ans;
                 /*Alternate method
                    int sum=0;
               for(auto i:nums)
               {
                   sum+=i;
               }
             int n=nums.size();
             int total=n*(n+1)/2;
            return total-sum;
             */
        
    }
int main()
{
       int n;
       cin>> n;
       int val;
       vector<int> v;
       for(int i=0;i<n;i++)
       {
           cin>>val;
           v.push_back(val);
       }
       int ans=missingNumber(v);
       cout<<ans<<endl;
       return 0;
     
}