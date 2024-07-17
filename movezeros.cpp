class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start = 0;

        for (int end = 0; end < nums.size(); end++) {
            if (nums[end]) {
                swap(nums[start], nums[end]);
                start++;
            }
        }
    }
};