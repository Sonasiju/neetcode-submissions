class Solution {
public:
 unordered_map<int,int>mp;
    bool isHappy(int n) {
        int sum=0;
            while(n>0)
            {
           int digit=(n%10);
            digit*=digit;
           sum+=digit;
           n=n/10;
            }
            
            if(sum ==1)
            {
                return true;
            }
            else {
                mp[sum]++;
                if(mp[sum]>1)
                {
                  return false;
                }
                else{
                      n=sum;
                    return isHappy(n);
                    }  }
         return 0;
    }
};
