class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // Step 1 : Input Given an array of integers and a target value
        unordered_map<int, int> valueIndexMap;

        // What DSA to use : Hash Table
        for(int index = 0; index < numbers.size(); index++) {
            int requiredValue = target - numbers[index];

            if(valueIndexMap.count(requiredValue)) {
                return{valueIndexMap[requiredValue], index};
            }
            else {
                valueIndexMap[numbers[index]] = index;
            }
        }


        // What to do with the data : return the indices of the two element
        return{};

    }
};
