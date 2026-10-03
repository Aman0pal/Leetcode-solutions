class Solution {
public:
    bool isSameAfterReversals(int num) {
        if (num == 0) {
            return true;
        }

        int rem = num % 10;
        if (rem == 0) {
            return false;
        }
        return true;
    }
};