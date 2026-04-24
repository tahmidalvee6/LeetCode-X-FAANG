// Input
/*
We are given an array of strings strs
*/

// What DS/Algo
/*
We are going to use a HashMap
- Key   = sorted version of the string
- Value = vector of all strings that share that sorted key
Anagrams always produce the same key when sorted
  e.g "eat","tea","ate" → all sort to "aet"
1. Initialize an unordered_map<string, vector<string>> called groups
*/

// What to do with the data
/*
We loop over each string, sort it to get the key, and group originals under it
2. Loop over each string in strs:
    a. Sort a copy of the string to get the key
    b. Push the original string into groups[key]
3. Extract all values from the map into the result
*/

// Output
/*
We return all the grouped vectors from the HashMap
4. return result
*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Step 1: HashMap to group strings by their sorted key
        unordered_map<string, vector<string>> groups;

        // Step 2: Sort each string to find its key and group it
        for (const string& s : strs) {
            // a. Sorted copy becomes the key
            string key = s;
            sort(key.begin(), key.end());

            // b. Original string goes into its group
            groups[key].push_back(s);
        }

        // Step 3: Collect all groups into result
        vector<vector<string>> result;
        for (auto& pair : groups) {
            result.push_back(pair.second);
        }

        // Step 4: Return all anagram groups
        return result;
    }
};
