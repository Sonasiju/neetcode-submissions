class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_area=0;
        for(int i=0;i<heights.size()-1;i++)
        {
            for(int j=i+1;j<heights.size();j++)
            {
                int area=min(heights[i],heights[j]) * (j-i);
               max_area=max(area,max_area);
            }
        }
        return max_area;
    }
};
