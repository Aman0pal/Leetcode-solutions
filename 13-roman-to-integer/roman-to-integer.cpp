class Solution {
public:
    int romanToInt(string s) {
        vector<int> vec;
        int i,ans = 0;
        for (char ch : s) {
            if (ch == 'I')
                vec.push_back(1);
            if (ch == 'V')
                vec.push_back(5);
            if (ch == 'X')
                vec.push_back(10);
            if (ch == 'L')
                vec.push_back(50);
            if (ch == 'C')
                vec.push_back(100);
            if (ch == 'D')
                vec.push_back(500);
            if (ch == 'M')
                vec.push_back(1000);
        }
        for (i = 0; i < vec.size() - 1; i++) {
            if (vec[i] < vec[i + 1]) {
                ans -= vec[i];
            } else
                ans += vec[i];
        }
        return ans += vec[i];
    }
};