class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        int count=0;
        for(string s:words){
            if(s.contains(x)){
                ans.push_back(count);
            }
            count++;
        }
        return ans;
    }
};