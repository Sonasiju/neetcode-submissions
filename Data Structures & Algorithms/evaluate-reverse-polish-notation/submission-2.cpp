class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> st;
        int result=0;
        for(int i=0;i<tokens.size();i++)
        {

        if(tokens[i]=="+" ||tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/")
        {
           
                int t2=st.top();
                st.pop();
                int t1=st.top();
                st.pop();
            if(tokens[i]=="+")
            {
                result=t1+t2;
            }
            else if(tokens[i]=="-" )
            {
                result=t1-t2;
            }
            else if (tokens[i]=="*" )
            {
                result=t1*t2;
            }
            else
            {
               result=t1/t2;
            }
             st.push(result);

        }
        else
        {
            st.push(stoi(tokens[i]));
        }
        }
        return st.top();
    }
};
