class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0; int r=heights.size()-1;
        int max=0;int area;int width; int height;
        while(l<r){
            width=r-l;
            height=min(heights[l],heights[r]);
            area=width*height;
            if(area>max){
                max=area;
            }
            if(heights[l]<heights[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return max;
        
    }
};