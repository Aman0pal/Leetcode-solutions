class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int j=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            j=nums.size()-1;
            while(j>i){
                int sum=nums[i]+nums[j];
                if(sum==target){
                    return {i,j};
                }else j--;
            }
        }
        return {};
    }
};