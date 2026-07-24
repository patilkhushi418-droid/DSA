class Solution {

public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();

        if (n == 1) return 1;
        if (n == 2) return 2;

        int highest = 1;
        while ((highest << 1) <= n) {
            highest <<= 1;
        }

        return highest << 1;
    
    }
};