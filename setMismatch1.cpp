#include<bits/stdc++.h>
using namespace std;
vector<int> findErrorNums(vector<int>& nums) 
{
        
                       vector<int> ans(2,0);
                      vector<int> map(nums.size(),0);
                       int hold_z=0;
                       for(int i=0;i<nums.size();i++)
                       {
                           map[nums[i]-1]++;
                       }
                     for(int i=0;i<map.size();i++)
                     {
                            if(map[i]==2)
                            {
                                   ans[0]=i+1;
                             }else if(map[i]==0)
                            {
                                hold_z=i+1;
                            }
                     }
               ans[1]=hold_z;
                
            return ans;
        
 }
int main()
{
        int n,val;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {   
             cin>>val;
            v.push_back(val);
        }
        vector<int> ans=findErrorNums(v);
        for(int i=0;i<2;i++)
        {
            cout<<ans[i]<<" "<<endl;
        }
        return 0;
}