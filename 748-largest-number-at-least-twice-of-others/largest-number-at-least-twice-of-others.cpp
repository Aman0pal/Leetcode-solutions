class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max=INT_MIN;
        int max_idx=0;
        int sec_max=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                sec_max=max;
                max=nums[i];
                max_idx=i;
            }
            else if(nums[i]>sec_max&&nums[i]!=max){
                sec_max=nums[i];
            }
        }
        if(max>=sec_max*2){
            return max_idx;
        }
        else return -1;
    }
};