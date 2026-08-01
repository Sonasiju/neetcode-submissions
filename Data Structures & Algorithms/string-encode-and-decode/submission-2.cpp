class Solution {
public:

    string encode(vector<string>& strs) {
          string a="";
           for(string s:strs)
           {
            int n=s.length();
          
            a+=to_string(n)+"#"+s;
           }
           return a;
    }

    vector<string> decode(string s) {
            vector<string>ans;
            int i=0;
            while(i<s.length())
            {
                int j=i;
                while(s[j]!='#')
                {
                    j++;


                }    
                    int n=stoi(s.substr(i,j-i));
                    string word =s.substr(j+1,n);
                    ans.push_back(word);
                
                i=j+1+n;

            }
           return ans;
    }
};
