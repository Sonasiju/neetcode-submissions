class Solution {
public:
 unordered_set<int>mp;
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
                if(mp.count(sum))
                {
                  return false;
                }
                else{
                    mp.insert(sum);
                      n=sum;
                    return isHappy(n);
                    }  }
         return 0;
    }
};
