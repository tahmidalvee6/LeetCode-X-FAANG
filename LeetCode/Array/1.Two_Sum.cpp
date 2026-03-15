// Input
/*
We are given an array of integers and a target value
*/


// What DS/Algo
/*
We ara going to use a hashtable to store to completement value
Complement value = Target - Array Number
Array Number + Complement Value = Target

1. Initialize an empty hash table to store complement values
*/



// What to do with the data
/*
We are going to itereate through our array, for each element.
Check if the complement value exist in the hash table. For if the element and
the complement add up to the target and exist, we have found, which sums up to the
target. 


2. Loop over each element in the array
    a. calculate the complement value by subtracking the current elemeent from the target 
    to get our comeplemeent
    b, check if the complement value exist in the hash table
        i) If it exists , return the indices of the current element and its complement 
        from the hash table
        ii) if it does not exist, insert the current element into the hash table
*/



// Ouput
/*
We will retunr the indices of the two element that sum up to the target

3. return an empty array (edge case)
*/


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
