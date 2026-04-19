class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // Step 1 : Input Given an array of integers
        unordered_set<int> seenValues;
        // What DSA to use : Hash Set
        for(int index = 0; index < nums.size(); index++) {
            if(seenValues.count(nums[index])) {
                return true;
            }
            else {
                seenValues.insert(nums[index]);
            }
        }
        // What to do with the data : return true if duplicate found, false if all distinct
        return false;
    }
};
