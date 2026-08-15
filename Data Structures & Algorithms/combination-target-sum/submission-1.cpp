class Solution {
public:
vector<vector<int>>result;
void search(int i,int target, vector<int>current,vector<int>&nums)
{
   if(target==0) {
    result.push_back(current);
    return;
    }
    if(target<0 || i==nums.size()) return;
   if(nums[i]>target) return;
    current.push_back(nums[i]);
    search(i,target-nums[i],current,nums);
    current.pop_back();
     search(i+1,target,current,nums);
    
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());

        vector<int>current;
        search(0,target,current,nums);
        return result;
    }
};
