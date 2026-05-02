// Input
/*
We are given an integer array nums and an integer k
  e.g nums = [1,1,1,2,2,3], k = 2 → [1, 2]
*/

// What DS/Algo
/*
We are going to use a HashMap + Bucket Sort
- HashMap  : Key = number, Value = frequency
- Bucket   : Index = frequency, Value = list of numbers

  example nums = [1,1,1,2,2,3]
      freq map  → {1:3, 2:2, 3:1}
      buckets   → [[], [3], [2], [1], [], [], []]
                     idx=0 1    2    3   4   5   6
*/

// What to do with the data
/*
1. Initialize freq map
2. Count frequency of each number
3. Initialize bucket array of size n+1
4. Place each number into its frequency bucket
5. Scan buckets high to low, collect until we have k elements
*/

// Output
/*
6. Return the k most frequent elements
*/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();

        // Step 1: freq map
        unordered_map<int, int> freq;

        // Step 2: count each number
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        // Step 3: bucket array, index = frequency
        vector<vector<int>> buckets(n + 1);

        // Step 4: fill buckets
        for (auto it = freq.begin(); it != freq.end(); it++) {
            buckets[it->second].push_back(it->first);
        }

        // Step 5: collect top k from highest frequency
        vector<int> result;
        for (int i = n; i >= 1; i--) {
            for (int j = 0; j < buckets[i].size(); j++) {
                result.push_back(buckets[i][j]);
                if (result.size() == k) return result;
            }
        }

        // Step 6: return result
        return result;
    }
};
