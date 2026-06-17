class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> output;
        while(n>=0)
        {
            if(n==0) {
                output.push_back(n);
                reverse(output.begin(),output.end());
                return output;
            }
            int num=n;
            int count=0;
           while(num>0)
           {
            num=num & (num-1);
            count++;
           }

           output.push_back(count);
           n--;
        }
        return output;
    }
};
