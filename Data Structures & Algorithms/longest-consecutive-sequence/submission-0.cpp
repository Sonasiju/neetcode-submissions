class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return 1;
        sort(nums.begin(),nums.end());
        
        int count=1;
        int max_count=1;
       
       for(int i=0;i<nums.size()-1;i++)
       {
        if(nums[i]==nums[i+1]) continue;
        else if(nums[i+1]-nums[i]==1)
        {
             
             count++;
        }
        else
        {
            count=1;
        }
         max_count=max(max_count,count);
       }  return  max_count;
       

    }
};
