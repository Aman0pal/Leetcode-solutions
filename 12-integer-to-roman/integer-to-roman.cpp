class Solution {
public:
    string intToRoman(int num) {
        vector<int> vec={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> vec1={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string ans="";
        for(int i=0;i<vec.size();i++){
            while(num>=vec[i]){
                num-=vec[i];
                ans+=vec1[i];
            }
        }
        return ans;
    }
};