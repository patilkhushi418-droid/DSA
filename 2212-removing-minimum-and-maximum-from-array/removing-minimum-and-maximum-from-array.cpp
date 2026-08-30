class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minIndex = 0;
        int maxIndex = 0;

        // Find indices of minimum and maximum
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[minIndex])
                minIndex = i;

            if (nums[i] > nums[maxIndex])
                maxIndex = i;
        }
          int left = min(minIndex, maxIndex);
        int right = max(minIndex, maxIndex);

        int n = nums.size();

            int fromLeft = right + 1;
            int fromRight = n - left;
                    int fromBoth = (left + 1) + (n - right);

        return min({fromLeft, fromRight, fromBoth});
    
    }
};