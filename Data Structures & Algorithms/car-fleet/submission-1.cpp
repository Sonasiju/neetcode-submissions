class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
    vector<pair<int,double>> array;
        for(int i=0;i<position.size();i++)
        {
            double time=(double)(target-position[i])/speed[i];
            array.push_back({position[i],time});
        }
        sort(array.begin(),array.end());
        stack<double> st;
        for(int i=array.size()-1;i>=0;i--)
        {
            double currTime=array[i].second;
            if(st.empty() || currTime > st.top())
            {
                st.push(currTime);
            }
        }
        return st.size();
    }
};
