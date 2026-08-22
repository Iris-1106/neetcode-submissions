class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int l=0;int r = numbers.size()-1;
        while(l<r){
            if(numbers[l]+numbers[r]>target){
                r--;
            }
            else if(numbers[l]+numbers[r]==target){
                if(l<r){
                   ans.push_back(l + 1);   // convert 0-based index to 1-based
                   ans.push_back(r + 1);
                }
                break;
            }
            else{
                l++;
            }
        }
        return ans;
    }
};
