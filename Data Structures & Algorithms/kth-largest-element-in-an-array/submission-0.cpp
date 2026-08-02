class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=n;
       while(k<=n && k>0)
       {
           i--;
           k--;
       }
       return nums[i];
    }
};
