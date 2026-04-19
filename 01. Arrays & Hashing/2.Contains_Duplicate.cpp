// Input
/*
We are given an array of integers nums
*/

// What DS/Algo
/*
We are going to use a Hash Set to store seen values
If a value already exists in the set, we have found a duplicate
1. Initialize an empty hash set to store seen values
*/

// What to do with the data
/*
We are going to iterate through our array, for each element.
Check if the current value already exists in the hash set.
If it does, we have found a duplicate and return true.
If it does not, we insert the current value into the hash set.
2. Loop over each element in the array
    a. Check if the current value exists in the hash set
        i)  If it exists, return true (duplicate found)
        ii) If it does not exist, insert the current value into the hash set
*/

// Output
/*
We will return true if a duplicate value is found
We will return false if all values are distinct
3. return false (edge case - all elements are distinct)
*/



class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        // Step 1 : Input - Given an array of integers
        unordered_set<int> seenValues;
        // What DSA to use : Hash Set

        // Step 2 : Iterate through array and check for duplicates
        for (int index = 0; index < nums.size(); index++) {
            if (seenValues.count(nums[index])) {

                // Step 3 : Output - duplicate found, return true
                return true;

            } else {
                seenValues.insert(nums[index]);
            }
        }

        // Step 3 : Output - no duplicate found, return false
        return false;

    }
};
