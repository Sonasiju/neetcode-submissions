class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector <int> f1(26,0), f2(26,0);
        int n=s1.size();
        if(n > s2.size()) return false;
        for(int i=0;i<n;i++)
        {
            f1[s1[i]-'a']++;
            f2[s2[i]-'a']++;
        }
           if(f1==f2) return true;

           for(int j=n;j<s2.size();j++)
           {
            f2[s2[j]-'a']++;
            f2[s2[j-n]-'a']--;

            if(f1==f2) return true;
           }
      
           return false;
    }
};
