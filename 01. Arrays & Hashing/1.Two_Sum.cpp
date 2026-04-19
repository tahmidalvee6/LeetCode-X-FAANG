// Input
/*
We are given an array of integers nums
*/

// What DS/Algo
/*
We are going to use Prefix & Suffix products stored in the output array
Prefix Product = product of all elements to the LEFT of index i
Suffix Product = product of all elements to the RIGHT of index i
answer[i] = Prefix Product * Suffix Product
1. Initialize an output array of size n filled with 1s
*/

// What to do with the data
/*
We are going to do two passes over the array.
First pass (left to right): for each element, store the product of all
elements to its left into answer[i].
Second pass (right to left): for each element, multiply answer[i] by the
product of all elements to its right.
2. First loop - left to right (prefix pass)
    a. Set answer[i] = prefix (running left product)
    b. Multiply prefix by nums[i] to grow the prefix product
3. Second loop - right to left (suffix pass)
    a. Multiply answer[i] by suffix (running right product)
    b. Multiply suffix by nums[i] to grow the suffix product
*/

// Output
/*
We will return the answer array where each answer[i] holds the
product of all elements except nums[i]
4. return answer array
*/



class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        // Step 1 : Input - Given an array of integers
        int n = nums.size();
        vector<int> answer(n, 1);
        // What DSA to use : Prefix & Suffix Product

        // Step 2 : Left to right - fill answer[i] with product of all left elements
        int prefix = 1;
        for (int i = 0; i < n; i++) {
            answer[i] = prefix;
            prefix *= nums[i];
        }

        // Step 3 : Right to left - multiply answer[i] with product of all right elements
        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            answer[i] *= suffix;
            suffix *= nums[i];
        }

        // Step 4 : Output - return answer array
        return answer;

    }
};
