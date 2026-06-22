class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int left=0;
        int right=0;
        int count=0;
        int max_count=0;
        unordered_set<char>mp;
        while(right<s.length())
        {
            if(!mp.count(s[right]))
            {
                  
                mp.insert(s[right]);
                count++;
                right++;
            }
            else
            {
                mp.erase(s[left]);
                 left++;
                count--;
            }
            max_count=max(count,max_count);
        }
        return max_count;
    }
};
