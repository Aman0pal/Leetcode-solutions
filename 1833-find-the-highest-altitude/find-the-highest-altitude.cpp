class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans=0,temp;
        for(int i=0;i<gain.size();i++){
            temp=gain[i]+temp;
            if(ans<temp){
                ans=temp;
            }
        }
        return ans;
    }
};