class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        for(int i = 0; i < nums.size(); i++) {

            int rightLimit = min((int)nums.size() - 1, i + k);

            for(int j = i + 1; j <= rightLimit; j++) {

                if(nums[i] == nums[j]) {
                    return true;
                }
            }
        }

        return false;
    }
};