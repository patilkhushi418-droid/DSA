class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans;

        for (int i = 0; i < nums1.size(); i++) {

            int j;

            // Find nums1[i] in nums2
            for (j = 0; j < nums2.size(); j++) {
                if (nums2[j] == nums1[i])
                    break;
            }

            // Search on the right
            int next = -1;
            for (j = j + 1; j < nums2.size(); j++) {
                if (nums2[j] > nums1[i]) {
                    next = nums2[j];
                    break;
                }
            }

            ans.push_back(next);
        }

        return ans;
    }
};