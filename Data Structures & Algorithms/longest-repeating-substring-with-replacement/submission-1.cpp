class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int left=0;
        int max_count=0;
        int max_freq=0;
        int count=0;
       for(int right=0;right<s.length();right++)
       {
             mp[s[right]]++;
             max_freq=max(max_freq,mp[s[right]]);
          while((right-left)+1 - max_freq > k)
          {
            mp[s[left]]--;
            left++;
          }
    max_count=max(max_count,(right-left )+1);
       }
       return max_count;
        }
    };
